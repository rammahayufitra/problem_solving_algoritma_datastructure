# nums = [1, 2, -8, -2, 0, -2]
# nums = [1, 1, 0, 0, 2, -2, -2]
nums = [2, 2]

buffer = []


for i in range(0,len(nums)):
    if nums[i] not in buffer:
        buffer.append(nums[i])

for i in range(len(buffer)):
    for j in range(len(buffer)-i-1):
        if(buffer[j] > buffer[j+1]):
            buffer[j],buffer[j+1] = buffer[j+1],buffer[j]

if len(buffer) <= 1:
    print(None)
else:
    print(buffer,buffer[1])


