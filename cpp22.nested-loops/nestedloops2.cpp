#include <iostream>

int main() {

    int rows;
    int coloms;
    char symbol;
    
    std::cout << "Enter rows ";//ряд
    std::cin >> rows;

    std::cout << "Enter coloms ";//стовбець
    std::cin >> coloms;

    std::cout << "Enter symbol ";
    std::cin >> symbol;

    for (int i = 1; i <= rows; i++){
        for (int j = 1; j <= coloms; j++)
        std::cout << symbol;
    {
        std::cout << "\n";
    }

    }
    



    return 0;
}