import math


def ex_1(arr):
	f_dict = {
		1: lambda a, b: a if a < b else b,
		2: lambda a, b: a if a > b else b
	}
	min, max = arr[0], arr[0]
	for i in arr:
		min = f_dict[1](min, i)
		max = f_dict[2](max, i)
	print(f'''
    Array: {arr}
    Min: {min}
    Max: {max}
    ''')


def ex_2(arr):
	f_dict = {
		1: lambda x: x[::-1]
	}
	print(f'''
    Given array: {arr} 
    Result: {f_dict[1](arr)}
    ''')


def ex_3(arr):
	count = 0
	primes = range(2, max(arr))
	for i in range(2, int(math.ceil(math.sqrt(max(arr))))):
		primes = list(filter(lambda x: x == i or x % i, primes))
	for i in arr:
		if i in primes:
			count += 1
	print(f'''
    Given array: {arr}
    Prime number count: {count}
    ''')
