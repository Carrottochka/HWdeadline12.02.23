#include <iostream>
using namespace std;

/*Написать функцию по удалению(копированию) из массива группы элементов. 
Значения индексов диапазона удаляемых(копируемых) элементов задаются пользователем.
Удаляемые(копируемые) элементы должны распологаться рядом, без разрывов*/


void randomFillArray(int* arr, int size, int start, int finish)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % finish -start ;
	}
}

void printArray(int* arr, int size)
{
	for(int i = 0; i < size; i++)
	{
		cout<<arr[i]<<" ";
	}
	cout << endl;
}



int main()
{
	int size = 10;
	int arrayBeforeDelete[10];
	randomFillArray(arrayBeforeDelete, size, 1, 30);
	printArray(arrayBeforeDelete, size);
	int from, to;
	cout << " Enter the range of indexes to delete separated by a space: from  to  " << endl;

	cin >> from >> to;

	int count = 0;
	for (int i = 0; i < size; i++)
	{
		if (i < from || i> to)
		{
			count++;
		}
	}

	int* arrayAfterDelete = new int[count];
	for (int i = 0, j = 0; i < size; i++)
	{
		if (i < from || i> to)
		{
			arrayAfterDelete[j] = arrayBeforeDelete[i];
			j++;
		}
	}
	printArray(arrayAfterDelete, count);



	return 0;
}
