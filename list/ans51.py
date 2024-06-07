data = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n']
step = 3
buffer = []

for i in range(0, step):
    split = data[i::step]
    buffer.append(split)

print(buffer)

# data = data[2::3]
# print(data)