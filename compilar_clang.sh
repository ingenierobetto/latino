rm -f CMakeCache.txt
export CC=clang
export CXX=clang++
export CMAKE_C_COMPILER=clang
export CMAKE_CXX_COMPILER=clang++
cmake -G "Unix Makefiles" .
make clean
make
