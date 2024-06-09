# data  = [1,2,3,4,5,6,7,8,9]
data    = [1,2,3,6,2,3,4,7,8]
split = []

for i in range(0, len(data), 3):
    buffer = []
    for j in range(i, i+3):
        buffer.append(data[j])
    split.append(buffer)
print(split)
