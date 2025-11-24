#include "MergeSort.h"
#include <iostream>
#include <vector>
#include <algorithm> 
#include <iterator>  


template <typename T>
void printVector(const std::vector<T>& vec, const std::string& name) {
    std::cout << name << ": [";
    std::copy(vec.begin(), vec.end(), std::ostream_iterator<T>(std::cout, ", "));
    std::cout << "]\n";
}

int main() {

    std::vector<int> int_array = { 12, 11, 13, 5, 6, 7 };
    std::cout << "--- Sortowanie int ---\n";
    printVector(int_array, "Przed sortowaniem");

    MergeSort<int>::sort(int_array);

    printVector(int_array, "Po sortowaniu");
    std::cout << "Oczekiwany wynik: [5, 6, 7, 11, 12, 13, ]\n\n";

    std::vector<double> double_array = { 3.14, -1.0, 2.71, 0.5, -42.0 };
    std::cout << "--- Sortowanie double ---\n";
    printVector(double_array, "Przed sortowaniem");

    MergeSort<double>::sort(double_array);

    printVector(double_array, "Po sortowaniu");
    std::cout << "Oczekiwany wynik: [-42.0, -1.0, 0.5, 2.71, 3.14, ]\n";

    return 0;
}