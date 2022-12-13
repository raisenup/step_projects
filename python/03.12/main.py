import re


def change_word(word, word_replace, file_path='file.txt', file_save='result.txt'):
	with open(file_path, 'r', newline='') as file:
		lines = file.read()
	file.close()

	lines = lines.replace(f' {word} ', f' {word_replace} ')

	with open(file_save, 'w', newline='') as result_file:
		result_file.write(lines)
	result_file.close()


def upper_letter(file_path='file.txt', file_save='result.txt'):  # set to uppercase first letter in sentences
	with open(file_path, 'r', newline='') as file:
		lines = file.readlines()
	file.close()

	result = list()

	for i in lines:
		result.append(i.capitalize())

	with open(file_save, 'w', newline='') as result_file:
		result_file.writelines(result)
	result_file.close()


def main():
	try:
		pass
	except Exception as e:
		print(f'Error: {e}')


if __name__ == '__main__':
	main()
