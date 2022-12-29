
def ex_1():
    num1 = int(input('Input beginning number:'))
    num2 = int(input('Input ending number:'))
    while num1 <= num2:
        print(num1)
        num1 += 1


def ex_2():
    num1 = int(input('Input beginning number:'))
    num2 = int(input('Input ending number:'))
    while num1 <= num2:
        if num1 % 2 == 1:
            print(num1)
        num1 += 1


def ex_3():
    num1 = int(input('Input beginning number:'))
    num2 = int(input('Input ending number:'))
    while num1 <= num2:
        if num1 % 2 == 0:
            print(num1)
        num1 += 1


def ex_4():
    nums = []
    num1 = int(input('Input beginning number:'))
    num2 = int(input('Input ending number:'))
    while num1 <= num2:
        nums.append(num1)
        num1 += 1
    for i in nums[::-1]:
        print(i)


def ex_5():
    num1 = int(input('Input beginning number:'))
    num2 = int(input('Input ending number:'))
    if num1 > num2:
        num1, num2 = num2, num1
    while num1 <= num2:
        if num1 % 2 == 1:
            print(num1)
        num1 += 1


def main():
    while True:
        print('''
        Яке завдання ви хочете запустити?
        Виберіть: 1 2 3 4 5
        ''')
        ex_num = int(input())
        if ex_num == 1:
            ex_1()
        elif ex_num == 2:
            ex_2()
        elif ex_num == 3:
            ex_3()
        elif ex_num == 4:
            ex_4()
        elif ex_num == 5:
            ex_5()
        else:
            if ex_num == 0:
                return 0
            else:
                print('Ви ввели неправильний номер завдання')
                main()



if __name__ == '__main__':
    main()
