
def number_add():
    print('Введіть десятки числа:')
    dozens = int(input())
    print('Введіть одиниці числа:')
    ones = int(input())
    if 0 > dozens or dozens > 9 or 0 > ones or ones > 9:
        print('Ви ввели неправильне число')
        return 0
    print(f'{dozens}{ones}')


number_add()
