nums = [2,7,11,15]
target = 9

seen = {}
for i in range(0,len(nums)):
    complement = target - nums[i]
    if complement in seen:
        print( [seen[complement],i])
    seen[nums[i]] = i
print(seen)