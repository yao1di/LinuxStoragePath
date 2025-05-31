`CMakeLists.txt`的文件内容：
```CMake
cmake_minimum_required(VERSION 3.18)
project(MyProject VERSION 0.0.1)
 
add_executable(hello hello_world.cpp)
```

Cmake 的主要步骤
```bash
mkdir build
cd build
cmake ..

cmake --build .
./hello
```