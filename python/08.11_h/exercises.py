
def ex_1(arr1, arr2):
    all_arr = arr1 + arr2
    norep_arr, rep_arr, unique_arr, min_max_arr = arr1.copy(), list(), all_arr.copy(), list()
    for i in arr2:
        if i not in arr1:
            norep_arr.append(i)
        if i in arr1:
            if i in rep_arr:
                pass
            else:
                rep_arr.append(i)
    for i in unique_arr:
        if i in rep_arr:
            unique_arr.remove(i)
    min_max_arr = [min(arr1), max(arr1), min(arr2), max(arr2)]

    arr1.sort()
    arr2.sort()
    all_arr.sort()
    norep_arr.sort()
    rep_arr.sort()
    unique_arr.sort()
    min_max_arr.sort()
    return f'''
        arr1: {arr1}
        arr2: {arr2}
        Combined array: {all_arr}
        
        No repeat arr:{norep_arr}
        Repeat arr: {rep_arr}
        Unique arr: {unique_arr}
        Min_Max arr: {min_max_arr}
        
    '''


