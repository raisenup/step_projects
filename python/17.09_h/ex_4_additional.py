
import requests

# base = 'EUR'
# data = requests.get(
#         f'https://openexchangerates.org/api/latest.json?app_id=3bced034f460406e82a982d993916819&base={base}').json()
# print(data)  # повідомлення про помилку, і "дайте нам 12 долларів щоб у вас все працювало"

def convert_valute():
    num1 = float(input('Input number:'))
    base = str(input('Choose first valute(USD only): '))  # нажаль для того щоб вибирати інший base, потрібно платити творцям API доллари((

    data = requests.get(  # але якщо уявити, що я заплатив, то це має працювати
        f'https://openexchangerates.org/api/latest.json?app_id=3bced034f460406e82a982d993916819&base={base}').json()

    first_valute = num1 * data['rates'][base]

    convert = str(input('Choose second valute(USD, EUR, UAH etc.): '))

    second_valute = num1 * data['rates'][convert]

    print(f"{first_valute} {base} = {second_valute} {convert}")


convert_valute()
