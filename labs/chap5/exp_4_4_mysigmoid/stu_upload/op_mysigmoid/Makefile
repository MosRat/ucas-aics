# Makefile for PyTorch C++ extension

PYTHON ?= python
NINJA ?= ninja

BUILD_DIR := $(shell find build -name build.ninja -exec dirname {} \; 2>/dev/null | head -n 1)
SO_FILES := $(wildcard *.so)

.PHONY: all build inplace test compdb clangd clean distclean help

all: build

build inplace:
	$(PYTHON) setup.py build_ext --inplace

test: build
	$(PYTHON) -c "import my_sigmoid; print('import my_sigmoid PASS:', my_sigmoid)"

clangd compdb:
	@echo "Running build to generate ninja files..."
	@set +e; \
	$(PYTHON) setup.py build_ext --inplace; \
	BUILD_STATUS=$$?; \
	BUILD_NINJA="$$(find build -name build.ninja 2>/dev/null | head -n 1)"; \
	if [ -z "$$BUILD_NINJA" ]; then \
		echo "ERROR: build.ninja not found."; \
		echo "The build probably failed before PyTorch generated Ninja files."; \
		exit $$BUILD_STATUS; \
	fi; \
	BUILD_DIR="$$(dirname "$$BUILD_NINJA")"; \
	echo "Using ninja build dir: $$BUILD_DIR"; \
	$(NINJA) -C "$$BUILD_DIR" -t compdb > compile_commands.json; \
	COMPDB_STATUS=$$?; \
	if [ $$COMPDB_STATUS -eq 0 ]; then \
		echo "Generated compile_commands.json"; \
	else \
		echo "ERROR: failed to generate compile_commands.json"; \
		exit $$COMPDB_STATUS; \
	fi; \
	if [ $$BUILD_STATUS -ne 0 ]; then \
		echo "NOTE: build failed, but compile_commands.json was generated."; \
	fi

clean:
	rm -rf build
	rm -rf *.egg-info
	rm -rf __pycache__
	rm -rf .pytest_cache

distclean: clean
	rm -f *.so
	rm -f compile_commands.json

help:
	@echo "Available targets:"
	@echo "  make build      - build extension in-place"
	@echo "  make test       - build and test import"
	@echo "  make clangd     - generate compile_commands.json for clangd"
	@echo "  make clean      - remove build cache"
	@echo "  make distclean  - remove build cache, .so, compile_commands.json"