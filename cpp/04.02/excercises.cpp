#include <iostream>
#include <ctime>
#include <utility>
using namespace std;

void rand_arr(int *arr, int length)
{
	srand(time(0));
	for (int i = 0; i < length; i++)
	{
		arr[i] = rand() % 50 - 40;
	}
}

void printArr(int *arr, int length)
{
	for (int i = 0; i < length; i++)
	{
		cout << arr[i] << ' ';
	}
	cout << endl;
}

void ex_1(int *arr, int length)
{
	for (int i = 0; i < length - 1; i++)
	{
		for (int j = 0; j < length - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				swap(arr[j], arr[j + 1]);
			}
		}
	}

	printArr(arr, length);
}

void ex_2(int *arr, int length)
{
	for (int i = 1; i < length; i++)
	{
		for (int j = i; j >= 0; j--)
		{
			if (arr[j] < arr[j - 1])
			{
				swap(arr[j], arr[j - 1]);
			}
		}
	}

	printArr(arr, length);
}

void ex_3()
{
	const int length{ 10 };
	int marks[length];
	cout << "Input 10 marks\n-> ";
	for (int i = 0; i < length; i++)
	{
		cin >> marks[i];
	}

	double sum = 0, avg = 0;
	do
	{
		system("cls");
		int choice;
		cout << "MENU\n1 - Print marks\n2 - Change mark\n3 - Is scholarship possible\n0 - Quit\n\nInput your choice\n-> ";
		cin >> choice;
		if (choice == 0)
		{
			break;
		}
		else if (choice == 1)
		{
			printArr(marks, length);
		}
		else if (choice == 2)
		{
			int index, new_mark;
			cout << "Input index and new mark\n-> ";
			cin >> index >> new_mark;
			marks[index] = new_mark;

			cout << "Changed marks array:" << endl;
			printArr(marks, length);
		}
		else if (choice == 3)
		{
			for (int i = 0; i < length; i++)
			{
				sum += marks[i];
			}
			avg = sum / length;
			if (avg > 10.7)
			{
				cout << "Scholarship is possible! (avg=" << avg << ")";
			}
			else
			{
				cout << "Scholarship is NOT possible! (avg=" << avg << ")";
			}
		}
		system("pause");

	} while (true);
}

int partition(int *arr, int start, int end)
{
	// using first element as a pivot

	int pivot = arr[start];

	int count = 0;
	for (int i = start + 1; i <= end; i++)
	{
		if (arr[i] <= pivot)
		{
			count++;
		}
	}

	int pivotIndex = start + count;
    swap(arr[pivotIndex], arr[start]);
 
    int i = start, j = end;
    while (i < pivotIndex && j > pivotIndex) {
 
        while (arr[i] <= pivot) {
            i++;
        }
 
        while (arr[j] > pivot) {
            j--;
        }
 
        if (i < pivotIndex && j > pivotIndex) {
            swap(arr[i++], arr[j--]);
        }
    }
 
    return pivotIndex;
}

void quicksort(int *arr, int start, int end)
{
	if (start >= end)
	{
		return;
	}

	int pivot_index = partition(arr, start, end);

	quicksort(arr, start, pivot_index - 1);
	quicksort(arr, pivot_index + 1, end);
}

void ex_5(int *arr, int length)
{
	int sum = 0;
	for (int i = 0; i < length; i++)
	{
		sum += arr[i];
	}
	
	double avg = sum / length;
	if (avg > 0)
	{
		quicksort(arr, 0, (length / 3) * 2);
	}
	else
	{
		quicksort(arr, 0, length / 3);

		int i = length / 3;
		int j = length - 1;
		int temp = 0;
		while (i < j)
		{
			temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;

			i++;
			j--;
		}
	}
}

