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
const T &Matrix<T>::operator () (size_t i, size_t j) const
{
	return data[i][j];
}

template <typename T>
T &Matrix<T>::operator () (size_t i, size_t j)
{
	return data[i][j];
}

//template <typename T>
//using const_iterator=typename std::vector<std::vector<T>>::const_iterator;

/*template <typename T>
std::vector<std::vector<T>>::const_iterator Matrix<T>::begin() const
{
	return data.cbegin();
}

template <typename T>
std::vector<std::vector<T>>::const_iterator Matrix<T>::end() const
{
	return data.cend();
}*/

template <typename T>
std::ostream &operator << (std::ostream &out , const Matrix<T> &matrix)
{
	const size_t rows = matrix.getrows();
	const size_t colomus = matrix.getcolumus();
	
	for(size_t i = 0; i != rows; i++)
	{
		for(size_t j = 0; j != colomus; j++)
		{
			if(j > 0)
			{
				out << "\t";
			}
			out << matrix(i, j);
		}
		out << "\n";
	}
	
	return out ;
}

template <typename T>
std::istream &operator >> (std::istream &in, Matrix<T> &matrix)
{
	const size_t rows = matrix.getrows();
	const size_t colomus = matrix.getcolumus();
	
	for(size_t i = 0; i != rows; i++)
	{
		for(size_t j = 0; j != colomus; j++)
		{
			in >> matrix(i, j);
		}
	}
			
	return in;
}

template <typename T>
Matrix<T> &Matrix<T>::operator += (const Matrix<T> &other)
{
	const size_t rows = getrows();
	const size_t colomus = getcolumus();
	
	if(rows != other.getrows() || colomus != other.getcolumus())
	{
		throw std::invalid_argument("Different sizes");
	}
	
	for(size_t i = 0; i != rows; i++)
	{
		for(size_t j = 0; j != colomus; j++)
		{
			data[i][j] += other.data[i][j];
		}
	}
	
	return *this;
}

#endif //matrix_hpp
