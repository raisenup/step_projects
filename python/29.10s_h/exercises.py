
import re


def ex_1(stroke):
    stroke = stroke.lower().replace(' ', '')
    if stroke == stroke[::-1]:
        res = True
    else:
        res = False
    return res


def ex_2(stroke, words):
    stroke = stroke.lower()
    for i in words:
        if stroke.find(i):
            stroke = stroke.replace(i, i.upper())
    return stroke


def ex_3(stroke):
    res = re.findall('\.', stroke)
    return f'{len(res)} sentences'
