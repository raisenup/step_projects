
def convert_meters():
    meters = float(input('Input number of meters: '))
    operation = int(input('''
        Choose convertation:
        miles - inches - yards
          1       2        3
    '''))
    if operation == 1:
        result = meters / 1609
        print(result)
    elif operation == 2:
        result = meters * 39.37
        print(result)
    elif operation == 3:
        result = meters * 1.094
        print(result)
    else:
        print('Error: wrong operation number')
        return 0


convert_meters()


