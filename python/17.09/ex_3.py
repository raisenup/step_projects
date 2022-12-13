
def max_num():
    num1 = int(input('Input number 1: '))
    num2 = int(input('Input number 2: '))
    if num1 == num2:
        print('Numbers are equal')
    elif num1 > num2:
        print(f'{num1} is bigger')
    else:
        print(f'{num2} is bigger')


max_num()
