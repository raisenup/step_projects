import os
import exercises


def main():
	try:
		while True:
			print('''
				Choose the number of the task
				Choice: 1 2 3
				''')
			ex_num = int(input())
			os.system('cls')
			if ex_num == 1:

				exercises.ex_1()
			elif ex_num == 2:

				exercises.ex_2()
			elif ex_num == 3:

				exercises.ex_3()
			elif ex_num == 0:
				return 0
			else:
				print(f'Error: there is no task {ex_num}')
	except Exception as e:
		print(f'Error: {e}')


if __name__ == '__main__':
	main()
