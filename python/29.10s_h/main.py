
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
                stroke = str(input('Input stroke: '))
                print(ex_1(stroke))
            elif ex_num == 2:
                stroke = str(input('Input stroke : \n'))
                words = []
                print('Input words (input 0 for ending list): ')
                while True:
                    word = str(input())
                    if word == '0':
                        break
                    words.append(word)
                print(ex_2(stroke, words))
            elif ex_num == 3:
                stroke = str(input('Input stroke: '))
                print(ex_3(stroke))
            elif ex_num == 0:
                return 0
            else:
                print(f'Error: there is no task {ex_num}')
    except Exception as e:
        print(f'Error: {e}')


if __name__ == '__main__':
    main()
