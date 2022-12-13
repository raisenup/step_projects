

def ex_1(N, K):
    try:
        for i in range(N):
            for j in range(K):
                print('*', end=' ')
            print()
    except Exception as e:
        print(f'Error: {e}')


def ex_2(num):
    try:
        res = 1
        for i in range(2, num+1):
            res = res*i
        print(f'{res}')
    except Exception as e:
        print(f'Error: {e}')


def ex_3(num):
    try:
        for i in range(2, int(num // 2 + 1)):
            if num % i == 0:
                print(f'Number {num} is not prime')
                break
        else:
            print(f'Number {num} is prime')
        num += 1
    except Exception as e:
        print(f'Error: {e}')


def ex_4(num):
    try:
        print(num * num * num)
    except Exception as e:
        print(f'Error: {e}')


def ex_5(num1, num2):
    try:
        if num1 > num2:
            res = num1
        else:
            res = num2
        print(res)
    except Exception as e:
        print(f'Error: {e}')


def ex_6(num):
    try:
        if num > 0:
            res = True
        elif num < 0:
            res = False
        else:
            res = 0
        print(res)
    except Exception as e:
        print(f'Error: {e}')
