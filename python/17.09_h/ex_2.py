
def choose_operation_3num():
    num1 = float(input('Input number 1: '))
    num2 = float(input('Input number 2: '))
    num3 = float(input('Input number 3: '))
    operation = int(input('''
        Choose operation:
        max - min - arithmetic mean
         1     2          3
    '''))
    if operation == 1:
        if num2 < num1 > num1:
            result = num1
        elif num1 < num2 > num3:
            result = num2
        else:
            result = num3
        print(result)
    elif operation == 2:
        if num2 > num1 < num1:
            result = num1
        elif num1 > num2 < num3:
            result = num2
        else:
            result = num3
        print(result)
    elif operation == 3:
        result = (num1 + num2 + num3) / 3
        print(result)
    else:
        print('Error: wrong operation number')
        return 0


choose_operation_3num()
