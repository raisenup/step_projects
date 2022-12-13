
def main():
    def calc():
        print('Input 3 integers:')
        x, y, z = map(int, input().split())
        a = x + y + z
        b = x * y * z
        print(f"Sum = {a}, Product = {b}")
    calc()


if __name__ == '__main__':
    main()
