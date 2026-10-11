# 404CSAD16

A minimal cross-platform C++17 Hello World project built with CMake.

## Student information

- **Student:** Solomiia Onushchak
- **Group:** KI-404
- **Variant:** 16

## Build and run on Windows

From a developer command prompt or PowerShell:

```powershell
cmake -S . -B build
cmake --build build --config Release
.\build\Release\hello_world.exe
```

Alternatively, run the provided build script from the project directory:

```powershell
.\build.cmd
```

The script configures the project, builds it in Release mode, and runs all
Google Test tests through CTest.

## Build and run on Linux

Install CMake and a C++17 compiler, then run:

```bash
cmake -S . -B build
cmake --build build
./build/hello_world
```

Alternatively, make the script executable and run it from the project directory:

```bash
chmod +x build.sh
./build.sh
```

The script configures the project, builds it in Release mode, and runs all
Google Test tests through CTest.

## Build and run on macOS

Install CMake and a C++17 compiler, then run:

```bash
cmake -S . -B build
cmake --build build --config Release
./build/hello_world
```

Alternatively, run the provided Bash script from the project directory:

```bash
chmod +x build.sh
./build.sh
```

The script configures the project, builds it in Release mode, and runs all
Google Test tests through CTest.

## Unit tests

The project uses Google Test and includes three unit tests for the `add`
function:

1. `BasicAddition.AddsPositiveNumbers` verifies addition of positive values.
2. `BasicAddition.AddsNegativeNumbers` verifies addition of negative values.
3. `BasicAddition.AddsMixedAndZeroValues` verifies mixed-sign values and
   addition with zero.

To configure and build the project, then run all tests with CTest:

```bash
cmake -S . -B build
cmake --build build --config Release
ctest --test-dir build -C Release --output-on-failure
```

On multi-configuration generators such as Visual Studio, `-C Release` selects
the Release test configuration. On single-configuration generators, the same
command remains valid.

## GitHub Actions CI

The GitHub Actions workflow in `.github/workflows/ci.yml` automatically builds
and tests the project on:

- Windows
- Ubuntu
- macOS

The workflow runs for pushes to `master`, `develop`, and `feature/hello-world`,
and for pull requests targeting `master` or `develop`. Each job uses the
platform-specific build script, then runs the Google Test suite through CTest.

The `build/` directory contains generated files and is excluded from version control.
