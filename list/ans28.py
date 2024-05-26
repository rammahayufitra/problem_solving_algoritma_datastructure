# nums = [1, 2, 3, 4, 4]
# nums = [1, 1, 1, 0, 0, 0, 2, -2, -2]
nums = [2, 2]

buffer = []

for i in range(0, len(nums)):
    if nums[i] not in buffer:
        buffer.append(nums[i])

if len(buffer) <= 1:
    print(None)
else:
    print(buffer,  buffer[-2])