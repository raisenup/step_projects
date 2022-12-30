
import os


def ex_1():
    try:
        res = 0
        amount = 0
        i = int(input('Input beginning number:'))
        end = int(input('Input ending number:'))
        while i <= end:
            res += i
            i += 1
            amount += 1
        average = res/amount
        print(f'sum = {res}, average = {average}')
    except ValueError:
        print('Error: wrong value')


def ex_2():
    try:
        res = 1
        num = int(input('Input number:'))
        for i in range(num):
            i += 1
            res *= i
        print(f'res = {res}')
    except ValueError:
        print('Error: wrong value')


def ex_3():
    try:
        res = ''
        length = int(input('Input length of line: '))
        for i in range(length):
            res += '*'
        print(res)
    except ValueError:
        print('Error: wrong value')


def ex_4():
    try:
        res = ''
        length = int(input('Input length of line: '))
        symbol = str(input('Input symbol: '))
        for i in range(length):
            res += f'{symbol}'
        print(res)
    except ValueError:
        print('Error: wrong value')


def main():
    try:
        while True:
            print('''
            Choose the number of the task
            Choice: 1 2 3 4
            ''')
            ex_num = int(input())
            os.system('cls')
            if ex_num == 1:
                ex_1()
            elif ex_num == 2:
                ex_2()
            elif ex_num == 3:
                ex_3()
            elif ex_num == 4:
                ex_4()
            elif ex_num == 0:
                return 0
            else:
                print(f'Error: there is no task {ex_num}')
    except ValueError:
        print('Error: wrong value.')


if __name__ == '__main__':
    main()
