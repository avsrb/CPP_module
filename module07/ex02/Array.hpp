#pragma once

template <typename T>
class Array
{
private:
	T				*_TArray;
	unsigned int	_size;
public:
	Array() : _TArray(), _size()
	{};
	~Array()
	{
		delete []_TArray;
	};
	Array(unsigned int	n) : _TArray(new T[n]()), _size(n)
	{};
	Array(const Array<T> &A) : _TArray(new T[A._size]()), _size(A._size)
	{
		for (int i = 0; i < A._size; ++i)
		{
			_TArray[i] = A._TArray[i];
		}
	};
	Array& operator=(const Array<T> &A)
	{
		if (this == &A)
			return (*this);
		_size = A._size;
		_TArray = new T[_size];
		for (int i = 0; i < A._size; ++i)
			_TArray[i] = A._TArray[i];
		return (*this);
	}
};

//std::out_of_range
//Определяет исключение, которое должно быть брошено в том случае, когда происходит выход за пределы допустимого диапазона значений объекта.