#include <iostream>


struct A1
{
	A1() { std::cout << "A1"; };
	~A1() { std::cout << "~A1"; };
};


struct A2
{
	A2() { std::cout << "A2"; };
	~A2() { std::cout << "~A2"; };
};


class B
{
public:
	B() { std::cout << "B"; };
	~B() { std::cout << "~B"; };
	A1 a;
};


class C : public B
{
public:
	C() { std::cout << "C"; };
	A2 a;
	~C() { std::cout << "~C"; };
};


int main()
{
	C c;  // What will be printed?
}