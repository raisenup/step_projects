
import os
from exercises import *


def main():
    try:
        while True:
            print('''
            Choose the number of the task
            Choice: 1 2 3 4 5
            ''')
            ex_num = int(input())
            os.system('cls')
            if ex_num == 1:
                stroke = str(input('Input stroke: \n'))
                print(ex_1(stroke))
            elif ex_num == 2:
                stroke = input('Input stroke: \n')
                ex_2(stroke)
            elif ex_num == 3:
                stroke = str(input('Input stroke: \n'))
                digit = int(input('Input digit: \n'))
                ex_3(stroke, digit)
            elif ex_num == 4:
                storke = str(input('Input stroke: \n'))
                word = str(input('Input word: \n'))
                ex_4(storke, word)
            elif ex_num == 5:
                stroke = str(input('Input stroke: \n'))
                word = str(input('Input word: \n'))
                new_word = str(input('Input replacing word: \n'))
                ex_5(stroke, word, new_word)
            elif ex_num == 0:
                return 0
            else:
                print(f'Error: there is no task {ex_num}')
    except Exception as e:
        print(f'Error: {e}')


if __name__ == '__main__':
    main()
