nums = [2, 4, 3, 5]

# buffer = [] 

test = [3, 7]
# test = [4, 3]
# test = [2, 4, 3, 5]
if test == nums:
    print(True)
elif test == []:
    print(True)
elif len(test) > len(nums):
    print(False)
else:
    for i in range(0, len(nums)):
        if nums[i]  == test[0]:
            n = 1
            while(n < len(test) and nums[i+n] == test[n]):
                n += 1
        
            if n == len(test):
                print(True)
            else:
                print(False)


# if test in buffer:
#     print(True)
# else:
#     print(False)