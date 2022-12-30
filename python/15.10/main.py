
import os


def ex_1():
    try:
        side = int(input('Input the side of the square: '))
        for i in range(side):
            for j in range(side):
                print('*', end=' ')
            print()
    except ValueError:
        print('Error: wrong value.')


def ex_2():
    try:
        height = int(input('Input the height of the rectangle: '))
        length = int(input('Input the length of the rectangle: '))

        for i in range(height):
            for j in range(length):
                print('*', end=' ')
            print()
    except ValueError:
        print('Error: wrong value.')


def ex_3():
    try:
        side = int(input('Input the side of the square: '))
        for i in range(side):
            for j in range(side):
                if i == 0 or j == 0 or i == side-1 or j == side-1:
                    print('*', end=' ')
                else:
                    print(' ', end=' ')
            print()
    except ValueError:
        print('Error: wrong value.')


def ex_4():
    try:
        height = int(input('Input the height of the rectangle: '))
        length = int(input('Input the length of the rectangle: '))
        for i in range(height):
            for j in range(length):
                if i == 0 or j == 0 or i == height - 1 or j == length - 1:
                    print('*', end=' ')
                else:
                    print(' ', end=' ')
            print()
    except ValueError:
        print('Error: wrong value.')


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
