nums = ['p', 'q']
n = 5

buffer = []

i = 1
while(i <= n):
    for j in range(0,2):
        buffer.append(nums[j] + str(i))
    i += 1

print(buffer)