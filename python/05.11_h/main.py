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
                expression = input('Input expression([number][operation(+-*/)][number]): ')
                print(ex_1(expression))
            elif ex_num == 2:
                arr = []
                for i in range(10):
                    arr.append(random.randint(-50, 50))
                print(ex_2(arr))
            elif ex_num == 0:
                return 0
            else:
                print(f'Error: there is no task {ex_num}')
    except Exception as e:
        print(f'Error: {e}')


if __name__ == '__main__':
    main()
