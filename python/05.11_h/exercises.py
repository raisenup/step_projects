import re


def ex_1(expr):
    res = 0
    nums = re.findall('[0-9]+', expr)
    nums = [int(i) for i in nums]
    operation = re.findall('[+\-*/]', expr)
    if len(operation) > 1:
        print('Error: several operations')
        return 0
    if operation[0] == '+':
        res = nums[0] + nums[1]
    elif operation[0] == '-':
        res = nums[0] - nums[1]
    elif operation[0] == '*':
        res = nums[0] * nums[1]
    elif operation[0] == '/':
        res = nums[0] / nums[1]

    return res


def ex_2(arr):
    arr_min = min(arr)
    arr_max = max(arr)
    arr_negative, arr_positive, arr_zeros = [], [], []
    for i in arr:
        if i < 0:
            arr_negative.append(i)
        elif i > 0:
            arr_positive.append(i)
        else:
            arr_zeros.append(i)
    res = f'''
        Min = {arr_min}
        Max = {arr_max}
        Positive = {arr_positive}
        Negative = {arr_negative}
        Zeros = {arr_zeros}
        '''
    return res
