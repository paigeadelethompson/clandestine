# Compiling 
```
conan profile detect --force 
conan install . --output-folder=build/ --build=missing -s compiler.cppstd=11
cd build
cmake .. -DCMAKE_TOOLCHAIN_FILE=conan_toolchain.cmake
cmake --build . --parallel 8
```

## XCode
```
conan profile detect --force
conan install . --output-folder=build/ --build=missing -s compiler.cppstd=11
cmake -G xcode .
cmake --build . --parallel 8
```
- Open xcodeproj with XCode 
- Manually manage schemes
- Add ALL_BUILD
- Edit ALL_BUILD
- Click Info tab
- Select `ircd` or `servicesd` executable
- Specify arguments if desired
- Click close
