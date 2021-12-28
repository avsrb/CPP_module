#include <iostream>
#include <exception>
#include <unistd.h>


class TooMuchMemory : public std::exception
{
	int _memoryMb;
public:
	void    setMemory(int mB)
	{
		_memoryMb = mB;
	}
	int     getMemory()
	{
		return (_memoryMb);
	}
	void    simulateCleanup()
	{
		std::cout << "* Cleaning up memory *" << std::endl;
	}
	const char* what()
	{
		return ( "Memory overflow. " );
	}
};

class setMemory
{
	int _memoryMb;
public:
	setMemory()
	{
		_memoryMb = 0;
	}
	~setMemory(){}

	// Function that will increment _memoryMb until a throw
	void    increaseMemory() throw(TooMuchMemory) // For some reason, this works without specifying.. try it.
	{
		while (1)
		{
			std::cout << "Memory set to " << _memoryMb << "mB." << std::endl;
			if (_memoryMb > 550)
			{
				TooMuchMemory exc;
				exc.setMemory(_memoryMb); // Using this method we'll let our custom exception class exactly how much "memory" was ficticiously allocated.
				throw(exc);  // and, we throw the error with our class exception.
			}
			_memoryMb += 133;
			sleep(1);
		}
	}
};

int main(void)
{
	setMemory stuff;

	try
	{
		stuff.increaseMemory();
	}
	catch (TooMuchMemory exc)
	{
		std::cout << exc.what() << std::endl;
		std::cout << "Memory is at " << exc.getMemory() << "mB.";
	}
}