
def number_div_3row():
    print('Введіть трьохзначне число:')
    number = int(input())
    if number < 100 or number > 999:
        print('Ви ввели неправильне число')
        return 0
    print(f'''
    {number//100}
    {number//10%10}
    {number%10}
    {number//100+number//10%10+number%10}
    ''')


number_div_3row()
