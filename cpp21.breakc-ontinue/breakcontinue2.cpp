#include <iostream>

int main(){
    int i;
    for ( i = 0; i < 20; i++)
    {
    
    if (i == 14)//stops at 14 instead of 20
    {
        break;
    }
        std::cout << i << "\n"; //важливо поставити це тута
    }
    

    return 0;
}