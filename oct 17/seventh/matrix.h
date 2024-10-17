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
		Matrix(const std::vector<std::vector<T>> &d): data {d} {
			makerectangle();
		}
		Matrix(size_t rows, size_t colomus); 
		size_t getrows() const;
		size_t getcolumus() const;
		const std::vector<T> &operator [] (size_t i) const;
		std::vector<T> &operator [] (size_t i);
		const T &operator () (size_t i, size_t j) const;
		T &operator () (size_t i, size_t j);
//		using const_iterator = decltype(data.cbegin());
//		std::vector<std::vector<T>>::const_iterator begin() const;
//		std::vector<std::vector<T>>::const_iterator end() const; 
		Matrix<T> &operator += (const Matrix<T> &other);
	};
}

template <typename T>
std::ostream &operator << (std::ostream &out, const linal::Matrix<T> &matrix);

template <typename T>
std::istream &operator >> (std::istream &in, linal::Matrix<T> &matrix);

#include "matrix.hpp"
#endif //matrix_h
