#include<iostream>
#include<vector>

// Vector type defination
typedef std::vector<int> vect;

// Function that consider an array as input and outputs the scale array.
vect scale_vector(vect arr, int scale){
    vect mult;
    // Accomdating the enough memory for output array.
    mult.reserve(arr.size());

    for (const auto &i : arr)
    {
        mult.emplace_back(i*scale);
    }
    return mult;
}

int main(void){
    vect arr1 = {1,2,3,4,5};
    vect arr2;
    arr2 = scale_vector(arr1, 5);
    std::cout << "Printing the arr1. \n";
    for (const auto &i : arr1)
    {
        std::cout << i << "   ";
    }
    std::cout << "\nPrinting the arr2 = 5*arr1. \n";
    for (const auto &i : arr2)
    {
        std::cout << i << "   ";
    }

    std::cout << "\nSize of array 2: " << arr2.size() << "\n";
}