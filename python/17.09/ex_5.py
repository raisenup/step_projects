
def choose_operation():
    num1 = float(input('Input number 1: '))
    num2 = float(input('Input number 2: '))
    operation = int(input('''
        Choose operation:
        sum - subtract - arithmetic mean - multiply
         1       2             3              4
    '''))
    if operation == 1:
        result = num1+num2
        print(result)
    elif operation == 2:
        result = num1 - num2
        print(result)
    elif operation == 3:
        result = (num1 + num2) / 2
        print(result)
    elif operation == 4:
        result = num1 * num2
        print(result)
    else:
        print('Error: wrong operation number')
        return 0


choose_operation()
