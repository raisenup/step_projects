
import os
from exercises import *


def main():
    try:
        while True:
            print('''
            Choose the number of the task
            Choice: 1 2 3
            ''')
            ex_num = int(input())
            os.system('cls')
            if ex_num == 1:
                stroke = str(input('Input stroke: \n'))
                print(ex_1(stroke))
            elif ex_num == 2:
                arr = []
                print('Input arr elements (input 0 to end): \n')
                while True:
                    elem = str(input())
                    if elem == '0':
                        break
                    arr.append(elem)
                digit = str(input('Input digit: \n'))
                print(ex_2(arr, digit))
            elif ex_num == 3:
                arr = []
                print('Input arr elements:')
                while True:
                    elem = str(input())
                    if elem == '0':
                        break
                    arr.append(elem)
                print(ex_3(arr))
            elif ex_num == 0:
                return 0
            else:
                print(f'Error: there is no task {ex_num}')
    except Exception as e:
        print(f'Error: {e}')


if __name__ == '__main__':
    main()
