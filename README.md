
# Build
```
$ conan install . -of cmake-build-release -b missing
$ cmake . -DCMAKE_TOOLCHAIN_FILE=cmake-build-release/conan_toolchain.cmake \
          -DCMAKE_BUILD_TYPE=Release -B cmake-build-release/
$ cmake --build cmake-build-release
```

# Notes
For clangd support, create a `.clangd` file in project's root with following
```
CompileFlags:
  CompilationDatabase: <your build dir>
```
