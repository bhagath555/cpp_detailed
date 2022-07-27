#include<iostream>
#include<vector>

typedef std::vector<int> vect;

void print(const vect& n){
    std::cout << "~~~~~~~~~~~~~~Print~~~~~~~~~~~~~\n";
    for (const auto& i : n)
    {
        std::cout << i << "   ";
    }
    std::cout << "\n"; 
}

int main(){
    vect v;
    std::cout << "Before reserve -> " << v.size() << "\n";
    std::cout << v.capacity() << "\n";
    v.reserve(3);
    print(v);
    std::cout << "After reserve  -> " << v.size() << "\n";
    std::cout << v.capacity() << "\n";
    std::cout << "Access  value  -> " << v[2]<< "\n";
    // std::cout << v.capacity() << "\n";

    v.push_back(5);
    std::cout << "After 1 pushs  -> " << v.size() << "\n";
    std::cout << v.capacity() << "\n";
    print(v);
    v.emplace_back(6);
    std::cout << "After 2 implc  -> " << v.size() << "\n";
    std::cout << v.capacity() << "\n";
    print(v);
    v.push_back(7);
    std::cout << "After 3 pushs  -> " << v.size() << "\n";
    std::cout << v.capacity() << "\n";
    print(v);
    std::cout << "================== For Loop 1 ========================\n";
    for (int i = 0; i < 4; ++i)
    {
        std::cout << i << " ";
    }
    std::cout << "\n================== For Loop 2 ========================\n";
    for (int i = 0; i < 4; i++)
    {
        std::cout << i << " ";
    }
}