
def main():
    print('''
    Яке завдання ви хочете запустити?
    Виберіть: 1 2 3 4 5
    ''')
    ex_num = int(input())
    if ex_num == 1:
        import ex_1
    elif ex_num == 2:
        import ex_2
    elif ex_num == 3:
        import ex_3
    elif ex_num == 4:
        import ex_4
    elif ex_num == 5:
        import ex_5
    else:
        print('Ви ввели неправильний номер завдання')
        return 0


if __name__ == '__main__':
    main()
