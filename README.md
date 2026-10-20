
## Build & Run

### macOS

From the project directory, clean, build, and run:

```sh
cmake --build build --target clean
./build.sh
./build/bin/VehicleDynamicsSimulation
```

`./build` is the build directory, not a command. The build script configures with the `macos-release` (seen in: build.sh) configure preset and builds the `build` directory.

### Windows (MSVC + Ninja)

1. Configure and build:

   `cmake --preset x64-release`
   `cmake --build --preset x64-release`

2. Run the executable:

   `.\out\build\x64-release\bin\VehicleDynamicsSimulation.exe`

## Notes
- External dependencies (`external/`) include GLFW and GLAD and are tracked as source. Build artifacts are ignored by `.gitignore`.
- If CMake reports missing source files, ensure you run `cmake` from the project root and that source files are present and correctly referenced in `CMakeLists.txt`.
