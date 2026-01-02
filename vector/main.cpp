#include "custom_vector.cpp"

int main(){

    CustomVector<int> v;

    std::cout << "Test vector initialization:\n";
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    v.print();

    std::cout << "\n\nTest vector copy:\n";

    CustomVector<int> v2 = v;

    v2.push_back(4);

    std::cout << "Vector 1:\n";
    v.print();

    std::cout << "\nVector 2:\n";
    v2.print();

    return 0;
}