
import re


def ex_1(stroke):
    return stroke[::-1]


def ex_2(stroke):
    letters = [i for i in stroke if i.isalpha()]
    digits = [i for i in stroke if i.isdigit()]
    print(f'''
    Letters = {len(letters)}
    Digits = {len(digits)}
    ''')


def ex_3(stroke, digit):
    res = re.findall(f'{digit}', stroke)
    print(len(res))


def ex_4(stroke, word):
    res = re.findall(word, stroke)
    print(len(res))


def ex_5(stroke, word, new_word):
    res = stroke.replace(word, new_word)
    print(res)
