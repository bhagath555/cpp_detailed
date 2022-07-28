#include<iostream>
#include<cstdlib>
#include<time.h>

int main(){
    // Seed fro rand function that vary with the time, which helps returning random number in each executation.
    srand(time(0));
    // Random number generation.
    int num ;
    for (int i = 0; i < 5; i++)
    {
        num = rand();
        // Shrinking the random number range to 0-9 by modulus operator.
        std::cout << num%10 << std::endl;
    }
    
    
}