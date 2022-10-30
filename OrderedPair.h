#include <stdio.h>

class OrderedPair {
  private:
    int x;
    int y;

  public:
    OrderedPair();
    OrderedPair(int, int);

    int getX() const;
    int getY() const;

    void set(int, int);

    bool operator==(OrderedPair other);
    OrderedPair operator+(OrderedPair other);
    OrderedPair operator-(OrderedPair other);

    OrderedPair getNext() const;
    OrderedPair getPrevious() const;

    void print() const;




};