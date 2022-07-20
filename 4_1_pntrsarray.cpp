#include <iostream>
using namespace std;
 
int main () {
   int size_arr = 5;
   // an array with 5 elements.
   double balance[size_arr] = {1000.0, 2.0, 3.4, 17.0, 50.0};
   double *p;

   p = balance;
   *(p+0) = 10; // Assing new value to an array.
   // As per our array defination, 4th index  -> *(p+4) = 50;
   // Extending array size by one, using points arthematics
   *(p+size_arr) = 45; // *(p+5) -> 5th index
   size_arr++; // Updating array size.
   // output each array element's value 
   cout << "Array values using pointer " << endl;
   
   for ( int i = 0; i < size_arr; i++ ) {
      cout << "*(p + " << i << ") : ";
      cout << *(p + i) << endl;
   }
   cout << "Array values using balance as address " << endl;
   
   for ( int i = 0; i < size_arr; i++ ) {
      cout << "*(balance + " << i << ") : ";
      cout << *(balance + i) << endl;
   }
 
   return 0;
}