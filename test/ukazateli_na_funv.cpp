#include <iostream>
#include <algorithm>
void selectionSort(int *array, int size, bool (*comparisonFcn)(int, int))
{
	for (int startIndex = 0; startIndex < size; ++startIndex)
	{
		int bestIndex = startIndex;
		for (int currentIndex = startIndex + 1; currentIndex < size; ++currentIndex)
		{
			if (comparisonFcn(array[bestIndex], array[currentIndex])) // СРАВНЕНИЕ ВЫПОЛНЯЕТСЯ ЗДЕСЬ
				bestIndex = currentIndex;
		}
		std::swap(array[startIndex], array[bestIndex]);
	}
}

bool ascending(int a, int b)
{
	return a > b;
}

bool descending(int a, int b)
{
	return a < b;
}

void printArray(int *array, int size)
{
	for (int index=0; index < size; ++index)
		std::cout << array[index] << " ";
	std::cout << '\n';
}

int main()
{
	int array[8] = { 4, 8, 5, 6, 2, 3, 1, 7 };

	selectionSort(array, 8, descending);
	printArray(array, 8);

	selectionSort(array, 8, ascending);
	printArray(array, 8);

	return 0;
}