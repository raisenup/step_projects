
def main():
    def calc():
        print('Input your salary, credit payment and arrears for utilities:')
        x, y, z = map(int, input().split())
        a = x-y-z
        print(f"Remains = {a} UAH")
    calc()


if __name__ == '__main__':
    main()
