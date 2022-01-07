#include <iostream>

template <typename T>
class Array
{
private:
	std::size_t m_nSize;
	T *m_TArray;
public:
	Array():	m_nSize(),
				m_TArray()
	{};
	~Array()
	{
		delete [] m_TArray;
	};
	Array(std::size_t n):	m_nSize(n),
							 m_TArray(new T[n]())
	{};
	Array(const Array<T> &A):	m_nSize(A.m_nSize),
								 m_TArray(new T[A.m_nSize]())
	{
		for (std::size_t i = 0; i < m_nSize; ++i)
		{
			m_TArray[i] = A.m_TArray[i];
		}
	}
	Array& operator=(const Array<T> &A)
	{
		if (this == &A)
			return (*this);
		m_nSize = A.m_nSize;
		m_TArray = new T[m_nSize]();
		for (std::size_t i = 0; i < m_nSize; ++i)
		{
			m_TArray[i] = A.m_TArray[i];
		}
		return (*this);
	}
	T& operator[](std::size_t idx)
	{
		if (idx > m_nSize)
			throw std::out_of_range("index out of range");
		return (m_TArray[idx]);
	}
	std::size_t size() const
	{
		return (m_nSize);
	}
};


int	main()
{
	Array<int> ar1;
	Array<int> ar2(10);
	for (int i = 0; i < 10; ++i)
	{
		std::cout << ar2[i] << ' ';
		ar2[i] = i;
		std::cout << ar2[i] << '\n';
	}
	std::cout << std::endl;
	Array<int> ar3 = ar2;
	for (int i = 0; i < 10; ++i)
	{
		std::cout << ar3[i] << ' ';
		ar3[i] -= 1;
		std::cout << ar3[i] << ' ';
		std::cout << ar2[i] << '\n';
	}
	std::cout << std::endl;
	try
	{
		ar1[42];
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}
