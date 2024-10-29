#include <string> 
#include <iostream>
#include <vector>

/*
class Cat
{
private:
	std::string name;
	
public:
	Cat(const std::string &n): name(n) {}
	const std::string &GetName() const 
	{
		return name;
	}
	std::string Voice() const
	{
		return "Meow";
	}
};

class Dog
{
private:
	std::string name;
	
public:
	Dog(const std::string &n): name(n) {}
	const std::string &GetName() const
	{
		return name;
	}
	std::string Voice() const
	{
		return "Woof";
	}
};
*/

/*enum class AnimalType
{
	Cat,
	Dog
};

class Animal
{
private:
	AnimalType type;
	std::string name;
	
public:
	Animal(AnimalType t, const std::string &n): type(t), name(n){}
	const std::string &GetName() const
	{
		return name;
	}
	
	std::string Voice() const 
	{
		switch(type)
		{
			case AnimalType::Cat:
				return "Meow";
				
			case AnimalType::Dog:
				return "Woof";
				
			default:
				return "Unknown creature";
		}
	}
};	

template <typename T>
void Process(const T &creature)
{
	std::cout << creature.GetName() << "\n";
}	*/



class Animal
{
protected:
	std::string name;
	
public:
	Animal(const std::string &n): name(n) {}
	const std::string & GetName() const
	{
		return name;
	}
	virtual std::string Voice() const = 0;
/*	{
		return "Generic voice";
	}	*/
	virtual ~Animal() {}
};

class Cat: public Animal
{
public:
	Cat(const std::string &n): Animal(n) {}
	std::string Voice() const override
	{
		return "Meow";
	}
};

class Dog: public Animal
{
public:
	Dog(const std::string &n): Animal(n) {}
	std::string Voice() const override
	{
		return "Woof";
	}
};

void Process(const Animal &creature)
{
	std::cout << creature.Voice() << "\n";
}

int main()
{
	/* // 2
	  Animal c(AnimalType::Cat, "Tom");
	Animal d(AnimalType::Dog, "Sharik");
	
	std::string s;
	s = c.Voice();
	std::cout << s;*/
	
	/*Cat c("Tom");
	Dog d("Sharik");
	
	Process(c);
	Process(d);*/
	
	/*std::vector<Animal> zoo;
	
	
	zoo.push_back(Cat("Tom"));
	zoo.push_back(Dog("Sharik"));*/
	
	/*std::vector<Animal*> zoo;
	
	Cat c("Tom");
	Dog d("Sharik");
	
	zoo.push_back(&c);
	zoo.push_back(&d);
	
	Process(c);
	Process(d);
	Process(*zoo[0]);*/
	
	std::vector<Animal*> zoo;
	
	zoo.push_back(new Cat("Tom"));
	zoo.push_back(new Dog("Sharik"));
	
	Process(*zoo[0]);
	Process(*zoo[1]);
	
	for(Animal* animal: zoo)
	{
		delete animal;
	} 
	
	
	
	return 0;
}
