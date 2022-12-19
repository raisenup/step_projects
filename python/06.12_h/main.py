from classes import *


def main():
    try:
        class_num = int(input(
            '''
            Input the number of class example:
            Car - Parcel Locker - Phone - Musical Tool - Profession
             1          2           3          4             5
            '''
        ))
        if class_num == 1:
            jigul = Car('Jigul', '4', '1.5', 'V8', '150')
            print(jigul.get_info())
            print(jigul.how_long_max(180))
            del jigul
        elif class_num == 2:
            # 5x5 parcel locker arr
            parcel_locker_arr = [['' for i in range(5)] for j in range(5)]
            parcel_locker = ParcelLocker(parcel_locker_arr)
            parcel_locker.store('backpack', 1, 5)
            parcel_locker.give(1, 5)
            del parcel_locker
        elif class_num == 3:
            phone = Phone('myPhone')
            phone.on()
            phone.call()
            phone.time_pass()
            phone.off()
            del phone
        elif class_num == 4:
            instrument = MusicalTool('violin')
            instrument.play()
        elif class_num == 5:
            programmer = Profession('Programmer', 700)
            programmer.calc_income()
            programmer.get_profession()
    except Exception as e:
        print(e)


if __name__ == '__main__':
    main()
