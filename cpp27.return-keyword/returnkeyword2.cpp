#include <iostream>

std::string concatString(std::string string1, std::string string2);

int main (){
   
    std::string  firstname = "Markian"; 
    std::string  lastname = "Maletskyi";
    std::string  fullname = concatString(firstname, lastname);

    std::cout << "Hello " << fullname;
    return 0;
}

std::string concatString(std::string string1, std::string string2){

    return string1 + " " + string2;
}