# program to generate groups of five consecutive numbers in a list.


data = []

for i in range(0, 5):
    inner_list = []
    for j in range(1, 6):
        value = 5 * i + j
        inner_list.append(value)
    data.append(inner_list)

print('generate :', data)