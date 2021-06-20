## Dummy for aach64 cross-compiled optimizations, benchmarks and tests.
### Build
```bash
$ cmake -GNinja -DCMAKE_BUILD_TYPE=Release -S . -B "build-aarch64" -DBENCHMARK_DOWNLOAD_DEPENDENCIES=ON  -DCMAKE_EXPORT_COMPILE_COMMANDS=YES
$ cmake --build build-aarch64/ --config Release
```

Specify `-DANDROID_BUILD=YES` to build for android.
