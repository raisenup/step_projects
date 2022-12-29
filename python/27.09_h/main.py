
def ex_1():
    res = ''
    day = int(input('Input the number of the day:\n'))
    if day == 1:
        res = 'Понеділок'
    elif day == 2:
        res = 'Вівторок'
    elif day == 3:
        res = 'Середа'
    elif day == 4:
        res = 'Четвер'
    elif day == 5:
        res = 'П\'ятниця'
    elif day == 6:
        res = 'Субота'
    elif day == 7:
        res = 'Неділя'
    print(res)


def ex_2():
    res = ''
    month = int(input('Input the number of the month:\n'))
    if month == 1:
        res = 'Січень'
    elif month == 2:
        res = 'Лютий'
    elif month == 3:
        res = 'Березень'
    elif month == 4:
        res = 'Квітень'
    elif month == 5:
        res = 'Травень'
    elif month == 6:
        res = 'Червень'
    elif month == 7:
        res = 'Липень'
    elif month == 8:
        res = 'Серпень'
    elif month == 9:
        res = 'Вересень'
    elif month == 10:
        res = 'Жовтень'
    elif month == 11:
        res = 'Листопад'
    elif month == 12:
        res = 'Грудень'
    print(res)


def ex_3():
    num = int(input('Input integer:\n'))
    if num > 0:
        print('Number is positive')
    elif num < 0:
        print('Number is negative')
    else:
        print('Number is equal to zero')


def ex_4():
    num1 = int(input('Input number 1:'))
    num2 = int(input('Input number 2:'))
    if num1 != num2:
        nums = sorted([num1, num2])
        snums = [str(i) for i in nums]
        print(', '.join(snums))
    else:
        print('Numbers are equal')


def main():
    print('''
    Яке завдання ви хочете запустити?
    Виберіть: 1 2 3 4
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
    else:
        print('Ви ввели неправильний номер завдання')
        return 0


if __name__ == '__main__':
    main()
