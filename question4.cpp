#include <iostream>


int main()
{
	int a[10] = { 0,1,2,3,4,5,6,7,0,0 };
	std::cout << a[&a[4] - &a[2] + &a[5] - &a[1]];  // What will be printed?
}
