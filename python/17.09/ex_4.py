
def min_num():
    num1 = int(input('Input number 1: '))
    num2 = int(input('Input number 2: '))
    if num1 == num2:
        print('Numbers are equal')
    elif num1 < num2:
        print(f'{num1} is smaller')
    else:
        print(f'{num2} is smaller')


min_num()