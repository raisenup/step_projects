import random


class Car:

    def __init__(self, name, width, height, engine, max_speed):
        self.name = name
        self.width = width
        self.height = height
        self.engine = engine
        self.max_speed = max_speed

    def get_info(self):
        return f'''
        {self.name}\'s info:
        Width: {self.width} m
        Height: {self.height} m
        Engine: {self.engine} 
        Max speed: {self.max_speed} km/h
        '''

    # how much time will it take to get from A to B on max speed
    def how_long_max(self, distance):
        time = distance / int(self.max_speed)
        return f'It will take you {time} hours to get from A to B (don\'t drive fast!).'


class ParcelLocker:

    def __init__(self, cells):
        self.cells_arr = list(cells)

    def store(self, package_name, cell_x, cell_y):
        package = self.cells_arr[cell_y-1][cell_x-1]
        if package == '':
            self.cells_arr[cell_y-1][cell_x-1] = str(package_name)
            print(f'Package \'{package_name}\' stored successfully')
        else:
            raise Exception('ERROR: there is package in this cell already!')

    def give(self, cell_x, cell_y):
        package = self.cells_arr[cell_y-1][cell_x-1]
        if package == '':
            raise Exception('ERROR: there is no package in this cell!')
        else:
            print(f'Package \'{package}\' is given successfully')
            self.cells_arr[cell_y-1][cell_x-1] = ''


class Phone:
    is_on = False

    def __init__(self, name='youPhone'):
        self.name = name

    def on(self):
        print(f'{self.name} is on now')
        self.is_on = True

    def call(self):
        if self.is_on:
            try:
                self.contacts = [str(i) + ' Contact' + str(i) for i in range(5)]
                for i in self.contacts:
                    print(i)
                chosen_contact = int(input('''
                Choose a contact to call:
                '''))
                print(f'Calling {self.contacts[chosen_contact]}...')
                print('There is no network! FUCKING RUSSIAN PIGS!!!!!!!!\n')
            except Exception as e:
                print(e)

    def time_pass(self):
        if self.is_on:
            try:
                self.timepassings = ['0 TikTok', '1 Instagram', '2 Telegram', '3 Play some game']
                for i in self.timepassings:
                    print(i)
                chosen_timepassing = int(input('''
                Choose a time-passing app:
                '''))
                time = random.randint(2, 6)
                print(f'Congratulations! You\'ve lost {time} hours of your life.')
            except Exception as e:
                print(e)

    def off(self):
        print(f'Congratulations! {self.name} is off now')
        self.is_on = False


class MusicalTool:

    def __init__(self, name):
        self.name = name

    def play(self):
        r = random.randint(1, 10)
        print(f'You\'ve played {r} hours!')
        if r > 5:
            print('Maybe you should have a break?')


class Profession:

    def __init__(self, name, salary, is_liking=True):
        self.name = name
        self.salary = salary
        self.is_liking = is_liking

    def calc_income(self):
        return self.salary - (self.salary / 100 * 20)  # taxes :/

    def get_profession(self):
        return [self.name, self.salary]  # it may be useful for some databasing...
