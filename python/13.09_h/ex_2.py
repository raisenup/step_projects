
def number_multiply_4row():
    print('Введіть чотирьохзначне число:')
    number = int(input())
    if number < 1000 or number > 9999:
        print('Ви ввели неправильне число')
        return 0
    print(f'''
    {number//1000}*{number//100%10}*{number//10%10}*{number%10}={(number//1000)*(number//100%10)*(number//10%10)*(number%10)}
    ''')


number_multiply_4row()
