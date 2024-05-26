nums = [10, 20, 30, 40, 20, 50, 60, 40]
buffer = []

for i in range(0,len(nums)):
    if nums[i] not in buffer:
        buffer.append(nums[i])

print("unique element in list :", buffer)