#include<iostream>
#include<vector>
#include<iomanip>

using namespace std;

typedef vector<int> vect;

template <typename T>
using mat = std::vector<std::vector<T>>;

// typedef vector<vector<int>> mat;
template <typename T>
void matrix_disp(const mat<T>& m){
    for (const auto& i : m)
    {
        for (const auto& j : i)
        {
            std::cout << j << setw(10);
        }
        std::cout << "\n";
    }
}


mat<int> n_n_matrix(int  n, int scale){
    mat<int> m2;
    for (int i=0; i<n; i++)
    {
        m2.push_back(vector<int>());
        for (int j=0; j<n; j++)
        {
            m2[i].push_back(scale);
        }   
    }
    return m2;
}

template <typename T>
bool check_matrix(const mat<T>& m){
    int rows = m.size();
    int cols = m[0].size();
    bool valid_matrix = true;
    for (int i = 0; i < rows; i++){
        if (m[i].size() != cols){
            valid_matrix = false;
            break;
        } 
    }
    return valid_matrix;
}


mat<float> matrix_scale(mat<int> m, float scale){
    mat<float> m2;
    int rows = m.size();
    int cols = m[0].size();
    m2.reserve(rows*cols);
    for (int i=0; i<rows; i++)
    {
        m2.emplace_back(vector<float>());
        for (int j=0; j<cols; j++)
        {
            m2[i].emplace_back((float)(m[i][j]*scale));
        }   
    }
    return m2;
}

int main(void)
{
    std::cout << "-----------------------Manually appending rows----------------------\n";
    // Creating vector of data.
    vect v1 = {1,2,3,4};
    vect v2 = {10,20,30,40};
    mat<int> m0;
    // Appending vectors as rows.
    m0.push_back(v1);
    m0.push_back(v2);
    m0.push_back({100,200,300,400});
    matrix_disp(m0);  
    std::cout << "---------------------Automating the matrix generation ----------------\n";  
    mat<int> m1;
    m1 = {{1,2,3,4},{5,6,7,8}};
    std::cout << "Dimesions of m1 matrix\nRows : " << m1.size() << "\n";
    std::cout << "Coloms : " << m1[0].size() << "\n";
    std::cout << "================ m1 matrix\n";
    matrix_disp(m1);
    
    mat<int> m2;
    m2 = n_n_matrix(3, 5);
    std::cout << "Creating 3*3 matrix, with all values set to 5\n";
    matrix_disp(m2);

    std::cout << "-----------------Matrix Scale-------------------\n";
    std::cout << "Before scaling\n";
    matrix_disp(m1);
    mat<float> m3 = matrix_scale(m1, 5);
    std::cout << "After scaling\n";
    matrix_disp(m3);
}