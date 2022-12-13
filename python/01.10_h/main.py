
import os


def ex_1():
    num1 = int(input('Input beginning number:'))
    num2 = int(input('Input ending number:'))
    while num1 <= num2:
        if num1 % 7 == 0:
            print(num1)
        num1 += 1


def ex_2():
    nums = []
    num1 = int(input('Input beginning number:'))
    num2 = int(input('Input ending number:'))
    n1, n2 = num1, num2

    while n1 <= n2:  # 1
        nums.append(n1)
        n1 += 1
    snums1 = [str(i) for i in nums]
    print(f'1) {", ".join(snums1)}')

    nums.reverse()  # 2
    snums2 = [str(i) for i in nums]
    print(f'2) {", ".join(snums2)}')

    n1, n2 = num1, num2
    nums = []

    while n1 <= n2:  # 3
        if n1 % 7 == 0:
            nums.append(n1)
        n1 += 1
    snums3 = [str(i) for i in nums]
    print(f'3) {", ".join(snums3)}')

    n1, n2 = num1, num2
    amount = 0

    while n1 <= n2:  # 4
        if n1 % 5 == 0:
            amount += 1
        n1 += 1
    print(f'4) {amount}')


def ex_3():
    num1 = int(input('Input beginning number:'))
    num2 = int(input('Input ending number:'))
    while num1 <= num2:
        if num1 % 3 == 0 and num1 % 5 == 0:
            print('Fizz Buzz')
        elif num1 % 5 == 0:
            print('Buzz')
        elif num1 % 3 == 0:
            print('Fizz')
        else:
            print(num1)
        num1 += 1


def main():
    while True:
        print('''
        Яке завдання ви хочете запустити?
        Виберіть: 1 2 3 
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
            print('Ви ввели неправильний номер завдання')


if __name__ == '__main__':
    main()
