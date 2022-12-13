
def number_convert():
    print('Введіть кількість метрів:')
    number = int(input())
    print(f'''
    {number} метр(-ів) це:
        {number*100} сантиметрів
        {number*10} дециметрів
        {number*1000} міліметрів
        {number/1609} миль
    ''')


number_convert()
