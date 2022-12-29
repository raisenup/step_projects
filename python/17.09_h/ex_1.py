
def choose_operation_3num():
    num1 = float(input('Input number 1: '))
    num2 = float(input('Input number 2: '))
    num3 = float(input('Input number 3: '))
    operation = int(input('''
        Choose operation:
        sum - multiply
         1       2
    '''))
    if operation == 1:
        result = num1 + num2 + num3
        print(result)
    elif operation == 2:
        result = num1 * num2 * num3
        print(result)
    else:
        print('Error: wrong operation number')
        return 0


choose_operation_3num()
