#include "OrderedPair.h"

OrderedPair::OrderedPair(){
    printf("intializing using default constructor...\n");
    x = 0;
    y = 0;
}

OrderedPair::OrderedPair(int inX, int inY){
    printf("initializing using parameterized constructor...\n");
    x = inX;
    y = inY;
}

int OrderedPair::getX() const {
    return x;
}

int OrderedPair::getY() const {
    return y;
}

void OrderedPair::set(int inX, int inY){
    x = inX;
    y = inY;   
}

bool OrderedPair::operator==(OrderedPair other){
    return x == other.x && y == other.y;
}

OrderedPair OrderedPair::operator+(OrderedPair other){
    return OrderedPair(x+other.x, y+other.y);
}

OrderedPair OrderedPair::operator-(OrderedPair other){
    return OrderedPair(x-other.x, y-other.y);
}

OrderedPair OrderedPair::getNext() const {
    print();
    return OrderedPair(x+1, y+1);
}

OrderedPair OrderedPair::getPrevious() const {
    return OrderedPair(x-1, y-1);
}

void OrderedPair::print() const {
    printf("x:, %i, y: %i\n", x, y);
}
