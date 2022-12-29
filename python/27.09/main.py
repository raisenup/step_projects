
def ex_1():
    res = 0
    chosen = ''
    time = int(input('Input seconds from the beginning of the day:'))
    choose = int(input("""
    Choose time convertion:
    hours - minutes - seconds - complete time
      1        2         3           4
    """))
    if choose == 1:
        chosen = 'hours'
        res = (86400 - time) / 60 / 60
    elif choose == 2:
        chosen = 'minutes'
        res = (86400 - time) / 60
    elif choose == 3:
        chosen = 'seconds'
        res = 86400 - time
    elif choose == 4:
        res = f'{(86400 - time)//60//60}:{(86400 - time)//60%60}:{(86400 - time)%60}'
    print(f'{res} {chosen} left')


def ex_2():
    res = 0
    chosen = ''
    d = float(input('Input diameter of the circle:'))
    choose = int(input("""
    Choose operation:
    square - perimeter 
       1         2         
    """))
    if choose == 1:
        chosen = 'Square of the circle'
        res = 3.14*((d/2)*(d/2))
    elif choose == 2:
        chosen = 'Perimeter of the circle'
        res = 2*3.14*(d/2)
    print(f'{chosen} = {res}')


def ex_3():
    res = 0
    cost = float(input('Input price of one console:\n'))
    amount = int(input('Input amount of consoles:\n'))
    discount = float(input('Input % discount:\n'))
    choose = int(input("""
    Choose operation:
    sum - discount price
     1         2   
    """))
    if choose == 1:
        res = (cost-((cost/100)*discount))*amount
    elif choose == 2:
        res = (cost/100)*discount
    print(f'res = {res}')


def ex_4():
    size = float(input('Input size of file(GB):\n'))
    speed = int(input('Input speed of internet(bits/sec):\n'))
    res = (size*8000000000)/speed
    choose = int(input("""
    Choose operation:
    hours - minutes - seconds
      1        2         3   
    """))
    if choose == 1:
        res /= 60 / 60
    elif choose == 2:
        res /= 60
    print(f'res = {res}')


def ex_5():
    res = ''
    hours = int(input('Input hours:\n'))
    if 0 <= hours < 6:
        res = 'Good night'
    elif 6 <= hours < 13:
        res = 'Good morning'
    elif 13 <= hours < 17:
        res = 'Good day'
    elif 17 <= hours < 0:
        res = 'Good morning'
    print(res)


# comment


def main():
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
        print('Ви ввели неправильний номер завдання')
        return 0


if __name__ == '__main__':
    main()
