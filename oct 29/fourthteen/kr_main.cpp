#include <iostream>
#include <string>
//мои эксперименты не были закончены
class Shape
{
public:
	Shape() {}
	virtual std::string SayMyName() const = 0;
};

class Quadrangle: public Shape
{
private:
	double a;
	double b;
	double c;
	double d;

public:
	Quadrangle(const double &num1, const double &num2, const double &num3, const double &num4)
	{
		a = num1;
		b = num2; 
		c = num3;
		d = num4;
	}
	std::string SayMyName() const override
	{
		return "quadrangle";
	}
};

class Rectangle: public Quadrangle
{
private:
	double a;
	double b;

public:
	Rectangle(const double &num1, const double &num2)
	{
		a = num1;
		b = num2;
	}
	std::string SayMyName() const override 
	{
		return "rectangle";
	}
};

class Square: public Rectangle
{
private:
	double a;

public:
	Square(const double &num)
	{
		a = num;
	}
	std::string SayMyName() const override final
	{
		return "square";
	}
};

int main()
{

	

	
	return 0;
}
