
import os


def ex_1():
    try:
        nums = []
        num1 = int(input('Input beginning number: '))
        num2 = int(input('Input ending number: '))

        for i in range(num1, num2+1):
            for j in range(2, int(num1//2+1)):
                if num1 % j == 0:
                    break
            else:
                nums.append(num1)
            num1 += 1
        for k in nums:
            if k < 2:
                nums.remove(k)
        print(nums)
    except Exception as e:
        print(f'Error: {e}')


def ex_2():
    try:
        num1 = 1
        num2 = 11
        for i in range(num1, num2):
            for j in range(1, 11):
                print(f'{num1}*{j}={num1*j}', end='  ')
            print()
            num1 += 1
    except Exception as e:
        print(f'Error: {e}')


def ex_3():
    try:
        num1 = int(input('Input beginning number: '))
        num2 = int(input('Input ending number: '))+1
        for i in range(num1, num2):
            for j in range(1, 11):
                print(f'{num1}*{j}={num1 * j}', end='  ')
            print()
            num1 += 1
    except Exception as e:
        print(f'Error: {e}')


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
                ex_1()
            elif ex_num == 2:
                ex_2()
            elif ex_num == 3:
                ex_3()
            elif ex_num == 0:
                return 0
            else:
                print(f'Error: there is no task {ex_num}')
    except Exception as e:
        print(f'Error: {e}')


if __name__ == '__main__':
    main()
