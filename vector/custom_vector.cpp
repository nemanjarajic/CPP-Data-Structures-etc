#include "custom_vector.hpp"

template <typename T>
CustomVector<T>::CustomVector(const CustomVector<T>& other) : data(other._capacity ? new T[other._capacity] : nullptr), _size(other._size), _capacity(other._capacity) {
    for(size_t i = 0; i < other._size; i++){
        data[i] = other.data[i];
    }
}

template <typename T>
CustomVector<T>::~CustomVector() {
    delete[] data;
}

template <typename T>
size_t CustomVector<T>::size() {
    return _size;
}

template <typename T>
size_t CustomVector<T>::capacity() {
    return _capacity;
}

template <typename T>
bool CustomVector<T>::empty() {
    return (_size == 0);
}

template<typename T>
void CustomVector<T>::resize(size_t new_capacity){
    T* new_data = new T[new_capacity];

    for(size_t i = 0; i < _size; i++){
        new_data[i] = data[i];
    }

    delete[] data;

    data = new_data;
    _capacity = new_capacity;
}

template<typename T>
void CustomVector<T>::push_back(const T& value){
    if(_size == _capacity){
        size_t new_cap = _capacity == 0 ? 1 : 2 * _capacity;
        resize(new_cap);
    }

    data[_size] = value;
    ++_size;
}

template<typename T>
T CustomVector<T>::pop_back(){
    if(empty()){
        throw std::out_of_range("Vector is empty");
    }

    T index_val = data[_size - 1];
    data[_size - 1].~T();
    --_size;

    return index_val;
}

template <typename T>
void CustomVector<T>::resize(){
    T* new_data = new T[_size];

    for(size_t i = 0; i < _size; i++){
        new_data[i] = data[i];
    }

    delete[] data;

    data = new_data;
    _capacity = _size;

}

template <typename T>
void CustomVector<T>::resize(size_t new_capacity){
    T* new_data = new T[new_capacity];

    for(size_t i = 0; i < _size; i++){
        new_data[i] = data[i];
    }

    delete[] data;

    data = new_data;
    _capacity = new_capacity;
}

template<typename T>
T& CustomVector<T>::operator[](size_t index){
    if(index >= _size){
        throw std::out_of_range("out of bounds");
    }
    return data[index];
}

template<typename T>
CustomVector<T>& CustomVector<T>::operator=(const CustomVector<T>& other) {
    if (this == &other) return *this;
    T* new_data = other._capacity ? new T[other._capacity] : nullptr;

    for(size_t i = 0; i < other._size; i++){
        new_data[i] = other.data[i];
    }

    delete[] data;
    data = new_data;
    _size = other._size;
    _capacity = other._capacity;

    return *this;
}

template <typename T>
void CustomVector<T>::print(){
    for(size_t i = 0; i < _size; i++){
        std::cout << data[i] << " ";
    }
}