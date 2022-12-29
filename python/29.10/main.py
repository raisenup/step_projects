
import os
from exercises import *


def main():
    try:
        while True:
            print('''
            Choose the number of the task
            Choice: 1 2 3 4 5 6
            ''')
            ex_num = int(input())
            os.system('cls')
            if ex_num == 1:
                N = int(input('Input N: '))
                K = int(input('Input K: '))
                ex_1(N, K)
            elif ex_num == 2:
                num = int(input('Input num: '))
                ex_2(num)
            elif ex_num == 3:
                num = int(input('Input num: '))
                ex_3(num)
            elif ex_num == 4:
                num = int(input('Input num: '))
                ex_4(num)
            elif ex_num == 5:
                num1 = int(input('Input num 1: '))
                num2 = int(input('Input num 2: '))
                ex_5(num1, num2)
            elif ex_num == 6:
                num = int(input('Input num: '))
                ex_6(num)
            elif ex_num == 0:
                return 0
            else:
                print(f'Error: there is no task {ex_num}')
    except Exception as e:
        print(f'Error: {e}')


if __name__ == '__main__':
    main()
