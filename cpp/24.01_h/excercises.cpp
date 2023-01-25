#include <iostream>
#include <ctime>
using namespace std;

int ex_1(int n, int k)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < k; j++)
		{
			cout << '#';
		}
		cout << endl;
	}
	
	return 0;
}

int ex_2(int num)
{
	int res = num;
	for (int i = 1; i < num; i++)
	{
		res *= i;
	}
	cout << res << endl;

	return 0;
}

bool ex_3(int num){
    bool flag = true;
    for(int i = 2; i <= num / 2; i++) {
       if(num % i == 0) {
          flag = false;
          break;
       }
    }
    return flag;
}

int ex_4(int num)
{
	return num * num * num;
}

int ex_5(int l, int r)
{
	return (l > r) ? l : r;
}

int ex_6(int num)
{
	return (num > 0) ? true : false;
}

int ex_7(int *arr, int arr_size)
{
	int min, max;
	int min_index = 0, max_index = 0;
	min = max = arr[0];
	for (int i = 0; i < arr_size; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
			max_index = i;
		}
		else if (arr[i] < min)
		{
			min = arr[i];
			min_index = i;
		}
	}
	cout << endl;
	cout << "Min = " << min << ", min index = " << min_index << endl;
	cout << "Max = " << max << ", max index = " << max_index << endl;

	return 0;
}

int ex_8(int *arr, int arr_size)
{
	int *_arr = new int[arr_size];
	int j = arr_size - 1;
	for (int i = 0; i < arr_size; i++)
	{
		_arr[i] = arr[j];
		cout << _arr[i] << ' ';
		j--;
	}
	cout << endl;
	
	delete[] _arr;
	return 0;
}

int ex_9(int *arr, int arr_size)
{
	int count = 0;
	for (int i = 0; i < arr_size; i++)
	{
		if (ex_3(arr[i]))
		{
			count++;
		}
	}

	return count;
}

