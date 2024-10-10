#ifndef matrix_h
#define matrix_h

#include <iostream>
#include <vector>

namespace linal
{
	template <typename T>
	
	class Matrix
	{
	private:
		void makerectangle();
		std::vector<std::vector<T>> data;
		
	public:
		size_t getrows() const;
		size_t getcolumus() const;
	};
}

#include "matrix.hpp"
#endif //matrix_h
