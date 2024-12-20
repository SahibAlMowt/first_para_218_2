#include <iostream>
#include <memory>

int main()
{
	std::shared_ptr <int> ptr1 = std::make_shared<int> (17);
	
	std::cout << *ptr1 << "\n";
	std::cout << ptr1.use_count() << "\n";
	
	auto ptr2 = ptr1;
	std::cout << *ptr1 << "\n";
	std::cout << *ptr2 << "\n";
	
	std::cout << ptr1.use_count() << "\n";
	std::cout << ptr2.use_count() << "\n";
	
	std::shared_ptr<int> ptr3;

	std::cout << ptr3.use_count() << "\n";
	ptr3 = ptr1;
	std::cout << *ptr3 << "\n";
	std::cout << ptr3.use_count() << "\n";
	
	
	return 0;
}
