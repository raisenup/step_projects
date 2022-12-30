
import re


def ex_1(stroke):
    stroke = stroke.title()
    digit_count = len(re.findall('[0123456789]', stroke))
    punctuation_count = len(re.findall('[,.-]', stroke))
    exclamation_count = len(re.findall('!', stroke))

    return f'''
        Digit count = {digit_count}, 
        punctuation count = {punctuation_count}, 
        exclamation count = {exclamation_count}\n
        {stroke}
        '''


def ex_2(arr, digit):
    count = 0
    for i in arr:
        count += len(re.findall(digit, i))
    return f'Count = {count}'


def ex_3(arr):
    nums = [int(i) for i in arr]
    nums_sum = 0
    for i in nums:
        nums_sum += i
    mean = nums_sum / len(nums)
    return f'Sum = {nums_sum}, Arithmetical mean = {mean}'
