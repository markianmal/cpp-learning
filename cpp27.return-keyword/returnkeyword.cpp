#include <iostream>

double square(double length);
double cube(double length);

int main (){
    double length = 5;
    double area = square(length);
    double volume = cube(length);
    std::cout << "area " << area << "cm^2 \n";
    std::cout << "volume " << volume << "cm^3 \n";

    return 0;
}
double square(double length){
    double result = length * length;

    return result;
}
double cube(double length){
    double result = length * length * length;

    return result;
}