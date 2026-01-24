#include <iostream>

int main(){
    int i;
    for ( i = 0; i < 20; i++)
    {
    
    if (i == 14)//skip n 14
    {
        continue;
    }
        std::cout << i << "\n"; //важливо поставити це тута
    }
    

    return 0;
}