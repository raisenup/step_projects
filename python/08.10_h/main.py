
import os


def ex_1():
    try:
        results = [0, 0, 0, 0, 0, 0]
        amounts = [0, 0, 0]
        i = int(input('Input beginning number:'))
        end = int(input('Input ending number:'))
        while i <= end:
            if i % 2 == 0:
                results[0] += i
                amounts[0] += 1
            if i % 2 == 1:
                results[1] += i
                amounts[1] += 1
            if i % 9 == 0:
                results[2] += i
                amounts[2] += 1
            i += 1
        results[3] = results[0] / amounts[0]
        print(f'\tEven: sum = {results[0]}; average = {results[3]}')
        results[4] = results[1] / amounts[1]
        print(f'\tOdd: sum = {results[1]}; average = {results[4]}')
        results[5] = results[2] / amounts[2]
        print(f'\tMultiple of 9: sum = {results[2]}; average = {results[5]}')
    except ZeroDivisionError:
        print('\tError: division by zero is not allowed. Please make range of numbers bigger.')


def ex_2():
    try:
        length = int(input('Input length of line: '))
        symbol = str(input('Input symbol: '))

        for i in range(length):
            print(symbol)
    except ValueError:
        print('Error: wrong value.')


def ex_3():
    try:
        print('Input numbers: ')
        while True:
            num = int(input())
            if num == 7:
                print('Good bye!')
                return 0
            elif num > 0:
                print('Number is positive')
            elif num < 0:
                print('Number is negative')
            else:
                print('Number is equal to zero')
    except ValueError:
        print('Error: wrong value.')


def ex_4():
    try:
        print('Input numbers: ')
        nums = []
        while True:
            num = int(input())
            nums.append(num)
            if num == 7:
                print(f'''
                Results:
                    Min: {min(nums)}
                    Max: {max(nums)}
                ''')
                print('Good bye!')
                return 0
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
