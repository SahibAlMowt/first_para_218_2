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
	
#endif //matrix_hpp
