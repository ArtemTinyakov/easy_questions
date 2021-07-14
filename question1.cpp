#include <iostream>


int main()
{
    int a = 10;
    int b = 20;
    int x, y;
    x = (a, b);
    y = a, b;
    printf("%i %i", x, y);  // What will print?
}