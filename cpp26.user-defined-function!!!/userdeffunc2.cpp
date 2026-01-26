#include <iostream>

void happyBirthday(std::string name, int age);  //If you want to use func after main, you need to declare them first.

int main (){


    std::string name = "Markian";
    int age = 18;
    happyBirthday(name , age); //виводить функцію знизу


}

void happyBirthday(std::string name, int age){

    std::cout << "Happy birthday " << name <<std::endl;
    std::cout << "Happy birthday " << name <<std::endl;
    std::cout << "Happy birthday " << name <<std::endl;
    std::cout << "Happy birthday dear " << name << std::endl;
    std::cout << "Happy birthday " << name <<std::endl;
    std::cout << "You are " << age << " years old" <<std::endl << std::endl;
}