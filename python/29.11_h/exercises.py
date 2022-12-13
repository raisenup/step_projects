

def ex_1(file_path='file.txt', file_res='result.txt'):
	with open(file_path, 'r', newline='') as file:
		data = file.read()
	data = data.replace('.', '').split()
	res_data = list()
	for i in data:
		if len(i) >= 7:
			res_data.append(i)
	with open(file_res, 'w', newline='') as file:
		for i in res_data:
			file.write(i + '\n')


def ex_2(file_path='file.txt', file_res='result.txt'):
	with open(file_path, 'r', newline='') as file:
		data = file.read()
	with open(file_res, 'w', newline='') as file:
		file.write(data)


def ex_3(file_path='file.txt', file_res='result.txt'):
	with open(file_path, 'r', newline='') as file:
		data = file.readlines()
	data = data[::-1]
	with open(file_res, 'w', newline='') as file:
		for i in data:
			file.write(i)


def ex_4(file_path='file.txt', file_res='result.txt'):
	with open(file_path, 'r', newline='') as file:
		data = file.readlines()
	data = data[::-1]
	is_nosuchlines = True
	for i in range(len(data)):
		if " " not in data[i] and data[i] != '\n':
			if '\n' in data[i]:
				data[i] += '------------\n'
			else:
				data[i] += '\n------------\n'
			is_nosuchlines = False
			break
	data = data[::-1]
	if is_nosuchlines:
		data.append('\n')
	with open(file_res, 'w', newline='') as file:
		for i in data:
			file.write(i)
