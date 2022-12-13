
def main():
    def calc():
        print('Input d1 and d2:')
        d1, d2, = map(int, input().split())
        square = (d1*d2)/2
        print(f" = {square} cm²")
    calc()


if __name__ == '__main__':
    main()
