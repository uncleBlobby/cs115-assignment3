#include <cstdio>
#include <iostream>

#include "OrderedPair.h"


int main (){
  printf("Hello, assignment 2!\n");

  OrderedPair pOne = OrderedPair();

  OrderedPair pTwo = OrderedPair(101, 201);

  pOne.set(1009, 1011);

  printf("pOne: ");
  pOne.print();
  printf("pTwo: ");
  pTwo.print();

  OrderedPair pOneNext = pOne.getNext();
  OrderedPair pTwoNext = pTwo.getNext();

  pOneNext.print();
  pTwoNext.print();

  OrderedPair pOnePrevious = pOne.getPrevious();
  OrderedPair pTwoPrevious = pTwo.getPrevious();

  pOnePrevious.print();
  pTwoPrevious.print();

  OrderedPair pOneResult = pOne + pOneNext - pOnePrevious;
  OrderedPair pTwoResult = pTwoNext - pTwoPrevious + pTwo;

  
  if (pOneResult == pOneNext.getNext()){
    printf("They are equal.\n");
  } else {
    printf("They are not equal.\n");
  }

  if (pTwoPrevious+OrderedPair(6, 6) == pTwoResult){
    printf("They are equal.\n");
  } else {
    printf("They are not equal.\n");
  }

  return 0;
}


