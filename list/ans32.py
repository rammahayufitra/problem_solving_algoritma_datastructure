nums = [2, 4, 3, 5, 7]
test = [4, 3]
# c = [3, 7]

sublist = False  

if test == [] or test == nums:
    sublist = True 
elif len(test) == len(nums):
    sublist = False
else:
    for i in  range(0,len(nums)):
        if nums[i] == test[0]:
            n = 1
            while(n < len(test) and nums[i+n]==test[n]):
                n += 1
            if n == len(test):
                sublist = True
            else:
                sublist = False 

print(f'{test} is {sublist} subset of {nums}')