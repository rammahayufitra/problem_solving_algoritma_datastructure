# program to convert a pair of values into a sorted unique array
nums = [(1, 2), (3, 4), (1, 2), (5, 6), (7, 8), (1, 2), (3, 4), (3, 4), (7, 8), (9, 10)]

buffer = []
for pair in nums:
    if pair[0] not in buffer:
        buffer.append(pair[0])
    if pair[1] not in buffer:
        buffer.append(pair[1])
        
print(buffer)
    