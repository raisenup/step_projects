
def number_div_2row():
    print('Введіть двохзначне число:')
    number = int(input())
    if number < 10 or number > 99:
        print('Ви ввели неправильне число')
        return 0
    print(f'''
    {number//10}
    {number%10}
    ''')


number_div_2row()
