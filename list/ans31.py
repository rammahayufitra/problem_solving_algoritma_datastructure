nums = [10, 20, 30, 40, 40, 40, 70, 80, 99]

buffer = []
for i in range(0,len(nums)):
    if nums[i] >= 40 and nums[i] <= 100:
        buffer.append(nums[i])

print("element: ", buffer, "number_of_list :",len(buffer))