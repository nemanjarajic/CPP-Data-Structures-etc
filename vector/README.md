# Custom vector/dynamic array implementation

g++ main.cpp -o a
./a

Features: resize, push_back, copy

## Empty vector 64-bit system
T* data - 8 bytes
size_t _size - 8 bytes
size_t capacity - 8 bytes