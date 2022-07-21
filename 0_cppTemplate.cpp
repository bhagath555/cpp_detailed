#include <iostream>
using namespace std;

/**
 * @brief Consider a situation, where we need to create a function to divide one integer by another integer. We create function that looks like this.
 * 
 * @code {.cpp}
 * int division(int a, int b)
{
    return a/b
}
 * @endcode
 * Above code works fine for integer data types. If we want to perform this operation on floats, we have to create another division function with float as their input data type. To repeat this process for all the other data types is a hectic task. In situations like this, templates comes in handy. We can create template for division funtion that accepts any data type as it is and performs the operations accordingly.
 * 
 * Using tempalte approach, we can generate generic/generalised functions and classes.
 * 
 */

/**
 * @brief This is a template/blue-print to add various samae types of numbers. ie, int +int, float+float, ...
 * 
 * @tparam T : Abstract data type. This can be int, float, char,...
 * @param a First input of data type T
 * @param b Second input of data type T
 * @return T Output of data type T.
 */
template <typename T>
T add(T a, T b){
    return a+b;
}

void test_add(void){
    std::cout << "\n--------Testing add function template------------\n";
    // Using float as input of add function.
    std::cout << "10 and 4 as floats: 10+4 = " << add(10.0,4.5) << std::endl;  
    // Using int types as input of add function.
    std::cout << "10 and 4 as ints  : 10+4 = " << add(10,4) << std::endl; 
    // Using chars as input of add function.
    std::cout << "'A' + '1' : " << add('A','1') << std::endl; 
}

// Adding two data types into template.
/**
 * @brief Using below template format, we can input two different/same data type variable as a input parameter. The inputs can be int&float, float&int, and string&int.
 * 
 * @tparam T First data type template
 * @tparam S Second data type template
 * @param arg1 First input (T data type)
 * @param arg2 Second input (S data type)
 */
template <typename T, typename S>
void print(T arg1, S arg2){
    std::cout << arg1 << " : " << arg2 << std::endl;
}

void test_print(void){
    std::cout << "\n--------Testing print function template------------\n";
    print(2.5,5);
    print("Bam", 25);
    print("Bam", "Bam");
}
int main()
{
    test_add();
    test_print();

}