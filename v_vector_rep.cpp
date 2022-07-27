#include<iostream>
#include<vector>

typedef std::vector<std::vector<int>> Matrix;

typedef std::vector<int> vect;

void print_N(vect& N){
    for (const int& i : N)
    {
        std::cout << i << "\n";
    }
    
}

int main(){
    vect N;
    N.reserve(3);
    for (int i = 0; i < 3; i++)
    {
        N.emplace_back(i);
    }
    
    print_N(N);

    std::cout << "++++++++++++++++++++++++++++++++\n";
    if (N.size() == 3){
    for (int j = 0; j < 3; j++)
    {
        N[j] = j+6;
    }
    }
    print_N(N);
}