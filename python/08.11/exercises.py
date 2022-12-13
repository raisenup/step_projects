def ex_1(arr):
    sum_negative, sum_even, sum_odd = 0, 0, 0
    mult_3, mult_min_max, sum_positive_beg_end = 1, 1, 0
    positive_arr = list()
    for i in arr:
        if i < 0:
            sum_negative += i
        if i % 2 == 0:
            sum_even += i
        if i % 2 != 0:
            sum_odd += i
        if min(arr) < i < max(arr):
            mult_min_max *= i
        if i > 0:
            positive_arr.append(i)

    for j in range(3, len(arr), 3):
        mult_3 *= arr[j]

    for i in positive_arr:
        if min(positive_arr) < i < max(positive_arr):
            sum_positive_beg_end += i

    return f'''
        Arr: {arr}  
        
        Negative nums sum: {sum_negative}
        Even nums sum: {sum_even}
        Odd nums sum: {sum_odd}
        Product of nums divisible by 3: {mult_3}
        Product of nums 
        not equal min and max num of arr: {mult_min_max}
        Product of nums 
        not equal positive min and max num of arr: {sum_positive_beg_end}
    '''


def ex_2(arr):
    even_arr, odd_arr, negative_arr, positive_arr = list(), list(), list(), list()
    for i in arr:
        if i % 2 == 0:
            even_arr.append(i)
        if i % 2 != 0:
            odd_arr.append(i)
        if i < 0:
            negative_arr.append(i)
        if i > 0:
            positive_arr.append(i)
    even_arr.sort()
    odd_arr.sort()
    negative_arr.sort()
    positive_arr.sort()

    return f'''
        Array: {arr}
        
        Even nums array: {even_arr}
        Odd nums array: {odd_arr}
        Negative nums array: {negative_arr}
        Positive nums array: {positive_arr}
    '''
