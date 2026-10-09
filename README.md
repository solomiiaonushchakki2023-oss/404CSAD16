# 404CSAD16

A minimal cross-platform C++17 Hello World project built with CMake.

## Build and run on Windows

From a developer command prompt or PowerShell:

```powershell
cmake -S . -B build
cmake --build build --config Release
.\build\Release\hello_world.exe
```

## Build and run on Linux

Install CMake and a C++17 compiler, then run:

```bash
cmake -S . -B build
cmake --build build
./build/hello_world
```

The `build/` directory contains generated files and is excluded from version control.
