
def reverse_num():
    print('Введіть число:')
    number1 = int(input())
    number2 = 0
    while number1 > 0:
        digit = number1 % 10
        number1 = number1 // 10
        number2 = number2 * 10 + digit
    print(number2)


reverse_num()
