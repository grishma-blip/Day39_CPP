//create 2*2 matrix using two dimensional array using  user input
#include <iostream>
int main() {
    int matrix[2][2];
    std::cout << "Enter 4 integer values for a 2x2 matrix:" << std::endl;
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            std::cout << "Enter value for matrix[" << i << "][" << j << "]: ";
            std::cin >> matrix[i][j];
        }
    }
    std::cout << "\nThe 2x2 matrix is:" << std::endl;
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl; 
    }
    return 0;
}