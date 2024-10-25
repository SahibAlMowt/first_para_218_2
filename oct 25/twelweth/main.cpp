#include <iostream>

class A
{
private:
	int x;

public:
	void func1(){};
	void func2(){};
};

class B: public A
{
private:
	int y;
	
public:
	void func2(){};
	void func3(){};
};

int main()
{
	B b;
	b.func1();
	b.func2();
	b.A::func2();
	b.func3();
	
	std::cout << sizeof(A) << " " << sizeof(B) << "\n";
	
	return 0;
}
	
