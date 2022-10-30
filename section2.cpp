#include "OrderedPair.h"
#include <fstream>
#include <iostream>



int main(){
    std::ifstream input("Asg3.Sec2.in.txt");
    std::string line;

    OrderedPair array[15];
    int i = 0;
    printf("Hello, section2!\n");

    while( getline(input, line) ){
        int tempX, tempY;
        input >> tempX, tempY;
        OrderedPair newPair = OrderedPair(tempX, tempY);
        array[i] = newPair;
        i++;
        //std::cout << line << std::endl;
        //printf("Line: %s\n", line);
    }

    input.close();
    return 0;
}