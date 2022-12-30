import os
import random
from exercises import *


def main():
    try:
        while True:
            print('''
            Choose the number of the task
            Choice: 1
            ''')
            ex_num = int(input())
            os.system('cls')
            if ex_num == 1:
                arr1 = list()
                arr2 = list()
                arr_range = int(input('Input range of arrays: '))
                for i in range(arr_range):
                    arr1.append(random.randint(-50, 50))
                for i in range(arr_range):
                    arr2.append(random.randint(-50, 50))
                print(ex_1(arr1, arr2))
            elif ex_num == 0:
                return 0
            else:
                print(f'Error: there is no task {ex_num}')
    except Exception as e:
        print(f'Error: {e}')


if __name__ == '__main__':
    main()
