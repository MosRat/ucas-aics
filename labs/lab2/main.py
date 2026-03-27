from pathlib import Path
import zipfile


ROOT_DIR = Path(__file__).resolve().parent
SOURCE_DIR = ROOT_DIR / "exp_6_2_1_infercpu" / "stu_upload"
OUTPUT_ZIP = ROOT_DIR / "exp_6_2_1_infercpu_stu_upload.zip"


def should_include(path: Path) -> bool:
    parts = path.parts
    return "__pycache__" not in parts and not path.name.endswith(".pyc")


def build_submission_zip(source_dir: Path, output_zip: Path) -> Path:
    if not source_dir.is_dir():
        raise FileNotFoundError(f"Source directory not found: {source_dir}")

    with zipfile.ZipFile(output_zip, "w", compression=zipfile.ZIP_DEFLATED) as zf:
        for path in sorted(source_dir.rglob("*")):
            if not path.is_file() or not should_include(path):
                continue
            arcname = path.relative_to(source_dir.parent)
            zf.write(path, arcname)

    return output_zip


def main():
    output_zip = build_submission_zip(SOURCE_DIR, OUTPUT_ZIP)
    print(f"Created submission archive: {output_zip}")


if __name__ == "__main__":
    main()
