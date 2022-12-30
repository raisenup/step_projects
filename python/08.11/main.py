import os
import random
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
                arr = []
                arr_range = int(input('Input range of arr: '))
                for i in range(arr_range):
                    arr.append(random.randint(-100, 100))
                print(ex_1(arr))
            elif ex_num == 2:
                arr = []
                arr_range = int(input('Input range of arr: '))
                for i in range(arr_range):
                    arr.append(random.randint(-100, 100))
                print(ex_2(arr))
            elif ex_num == 0:
                return 0
            else:
                print(f'Error: there is no task {ex_num}')
    except Exception as e:
        print(f'Error: {e}')


if __name__ == '__main__':
    main()
