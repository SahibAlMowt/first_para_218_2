#ifndef matrix_hpp
#define matrix_hpp

#include "matrix.h"

using namespace linal;

template <typename T>
size_t Matrix<T>::getrows() const
{
	return data.size();
}

template <typename T>
size_t Matrix<T>::getcolumus() const
{
	if(data.empty())
	{
		return 0;
	}
	return data[0].size();
}

template <typename T>
void Matrix<T>::makerectangle()
{
	size_t maxsize = 0;
	for(const auto &row: data)
	{
		if(row.size() > maxsize)
		{
			maxsize = row.size();
		}
	}
	
	for(auto &row: data)
	{
		row.resize(maxsize);
	}
}

template <typename T>
Matrix<T>::Matrix(size_t rows, size_t colomus)
{
	data.resize(rows);
	for(auto &row: data)
	{
		row.resize(colomus);
	}
}

template <typename T>
const std::vector<T> &Matrix<T>::operator [] (size_t i) const
{
	return data[i];
}

template <typename T>
std::vector<T> &Matrix<T>::operator [] (size_t i)
{
	return data[i];
}

template <typename T>
const T &operator () (size_t i, size_t j) const
{
	return data[i][j];
}

template <typename T>
T &operator () (size_t i, size_t j)
{
	return data[i][j];
}
	
#endif //matrix_hpp
