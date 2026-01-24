#include <iostream>
#include <ctime>

int main (){

    //типу рандом   

srand(time(NULL));

int num1 = (rand() % 6) + 1;
if (num1 == 6) {
    std::cout << "You died";
  

}
  else {
    
    std::cout << "You safe ";
}

    return 0;
}