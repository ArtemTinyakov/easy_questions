#include <iostream>


int main()
{
	int I = 1; int J = 1; int K = 1;
	std::cout << (++I || ++J && ++K);
	std::cout << I << J << K;
}