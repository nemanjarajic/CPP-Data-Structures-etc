#ifndef CUSTOMVECTOR_HPP
#define CUSTOMVECTOR_HPP

#include <iostream>

template <typename T>
class CustomVector {
private:
    T* data;
    size_t _size, _capacity;

    void resize(size_t new_capacity);

public:
    // Constructor
    CustomVector(): data(nullptr), _size(0), _capacity(0) {}

    //Copy Constructor
    CustomVector(const CustomVector& other);

    // Destructor
    ~CustomVector();

    size_t size();
    size_t capacity();

    bool empty();

    void push_back(const T& value);
    T pop_back();
    void resize();

    void print();


    // Operatior overloading
    CustomVector& operator=(const CustomVector& other);

    T& operator[](size_t index);
    // const T& operator[](size_t index);

};

#endif