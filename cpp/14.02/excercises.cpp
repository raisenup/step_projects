#include <iostream>
using namespace std;

template <typename T>
T **create_arr(int y, int x)
{
	int** buf = new T* [y];
    for (int i = 0; i < y; i++)
    {
        buf[i] = new T[x];
        for (int j = 0; j < x; j ++)
        {
            buf[i][j] = rand() % 10;
        }
    }
	return buf;
}

template <typename T>
void print_arr(T **arr)
{
    int y = _msize(arr) / sizeof * arr;
    int x = _msize(arr[0]) / sizeof * arr[0];
    for (int i = 0; i < y; i++)
    {
        for (int j = 0; j < x; j++)
        {
            cout << arr[i][j] << '\t';
        }
        cout << endl;
    }
}

// pushes randomized rows into 2D array
// you can easily remake it for pushing certain array into 2D array

template <typename T>
T **push_back(T **arr) 
{
    int y = _msize(arr) / sizeof * arr;
    int x = _msize(arr[0]) / sizeof * arr[0];
    int **buf = new T *[y+1];
    
    // copying arr
    for (int i = 0; i < y; i++)
    {
        buf[i] = new T[x];
        for (int j = 0; j < x; j++)
        {
            buf[i][j] = arr[i][j];
        }
    }

    // adding row
    buf[y] = new T[x];
    for (int j = 0; j < x; j++)
    {
        buf[y][j] = rand() % 10;
    }

    return buf;
}

template <typename T>
T **push_forward(T **arr)
{
    int y = _msize(arr) / sizeof * arr;
    int x = _msize(arr[0]) / sizeof * arr[0];
    int **buf = new T *[y+1];
    
    // adding row
    buf[0] = new T[x];
    for (int j = 0; j < x; j++)
    {
        buf[0][j] = rand() % 10;
    }

    // copying arr
    for (int i = 1, j = 0; i < y+1; i++)
    {
        buf[i] = new T[x];
        for (int k = 0; k < x; k++)
        {
            buf[i][k] = arr[j][k];
        }
		j++;
    }

    return buf;
}

template <typename T>
T **insert(T **arr, int z)
{
    int y = _msize(arr) / sizeof * arr;
    int x = _msize(arr[0]) / sizeof * arr[0];

    if (z < 0 || z > y)
    {
        cout << "Error inserting in array: wrong index" << endl;
        return 0;
    }

    int **buf = new T *[y+1];

    for (int i = 0; i < z; i++)
    {
        buf[i] = new T[x];
        for (int j = 0; j < x; j++)
        {
            buf[i][j] = arr[i][j];
        }
    }

    buf[z] = new T[x];
    for (int j = 0; j < x; j++)
    {
        buf[z][j] = rand() % 10;
    }

    for (int i = z+1, j = z; i < y+1; i++)
    {
        buf[i] = new T[x];
        for (int k = 0; k < x; k++)
        {
            buf[i][k] = arr[j][k];
        }
        j++;
    }
    return buf;
}

template <typename T>
T **delete_row(T **arr, int z)
{
    int y = _msize(arr) / sizeof * arr;
    int x = _msize(arr[0]) / sizeof * arr[0];
    
    if (z < 0 || z > y)
    {
        cout << "Error deleting row in array: wrong index" << endl;
        return 0;
    }

    int **buf = new T *[y-1];

    for (int i = 0; i < z; i++)
    {
        buf[i] = new T[x];
        for (int j = 0; j < x; j++)
        {
            buf[i][j] = arr[i][j];
        }
    }

    for (int i = z, j = z+1; i < y-1; i++)
    {
        buf[i] = new T[x];
        for (int k = 0; k < x; k++)
        {
            buf[i][k] = arr[j][k];
        }
        j++;
    }

    return buf;
}

void ex_1()
{
    srand(time(0));
    const int y = 5, x = 7;
    int **a = create_arr<int>(y, x);
    print_arr(a);
    cout << "\n\n\n";
    a = push_back<int>(a);
    print_arr(a);
}

void ex_2()
{
    srand(time(0));
    const int y = 5, x = 7;
    int **a = create_arr<int>(y, x);
    print_arr(a);
    cout << "\n\n\n";
    a = push_forward<int>(a);
    print_arr(a);
}

void ex_3()
{
	srand(time(0));
    const int y = 5, x = 7;
    int **a = create_arr<int>(y, x);
    print_arr(a);
    cout << "\n\n\n";
    a = insert<int>(a, 1);
    print_arr(a);
}

void ex_4()
{
	srand(time(0));
    const int y = 5, x = 7;
    int **a = create_arr<int>(y, x);
    print_arr(a);
    cout << "\n\n\n";
    a = delete_row<int>(a, 1);
    print_arr(a);
}

