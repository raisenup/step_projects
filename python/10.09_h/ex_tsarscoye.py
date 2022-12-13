
import random


def main():
    def pas_gen():
        pas = ''
        print("Input your password length:")
        length = int(input())
        for i in range(length):
            pas = pas + random.choice(list('1234567890abcdefghigklmnopqrstuvyxwzABCDEFGHIGKLMNOPQRSTUVYXWZ'))
        print('Your password is:\n', pas)
    pas_gen()


if __name__ == '__main__':
    main()
