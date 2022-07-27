#include<iostream>
#include<vector>
#include<iomanip>

using namespace std;

typedef vector<vector<int>> mat;

void matrix_disp(const mat& m){
    for (const auto& i : m)
    {
        for (const auto& j : i)
        {
            std::cout << j << setw(10);
        }
        std::cout << "\n";
    }
}

mat n_n_matrix(int  n, int scale){
    mat m2;
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

bool check_matrix(const mat& m){
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

mat matrix_scale(mat m, int scale){
    mat m2;
    int rows = m.size();
    int cols = m[0].size();
    m2.reserve(rows*cols);
    for (int i=0; i<rows; i++)
    {
        m2.emplace_back(vector<int>());
        for (int j=0; j<cols; j++)
        {
            m2[i].emplace_back(m[i][j]*scale);
        }   
    }
    return m2;
}

int main(void)
{
    mat m1;
    m1 = {{1,2,3,4},{5,6,7,8}};
    std::cout << "Dimesions of m1 matrix\nRows : " << m1.size() << "\n";
    std::cout << "Coloms : " << m1[0].size() << "\n";
    std::cout << "================ m1 matrix\n";
    matrix_disp(m1);
    
    mat m2;
    m2 = n_n_matrix(3, 5);
    std::cout << "Creating 3*3 matrix, with all values set to 5\n";
    matrix_disp(m2);

    std::cout << "-----------------Matrix Scale-------------------\n";
    std::cout << "Before scaling\n";
    matrix_disp(m1);
    mat m3 = matrix_scale(m1, 5);
    
    std::cout << "After scaling\n";
    matrix_disp(m3);
}