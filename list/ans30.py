nums   = [10, 10, 10, 10, 20, 20, 20, 20, 40, 40, 50, 50, 30]
buffer = {}

for i in range(0,len(nums)):
    if nums[i] not in buffer:
        buffer[nums[i]] = 0
    else:
        buffer[nums[i]] += 1

print("frequency element :", buffer)