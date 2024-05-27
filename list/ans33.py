
def generate_combinations(nums):
    def backtrack(start, path):
        result.append(path)
        for i in range(start, len(nums)):
           
            backtrack(i + 1, path + [nums[i]])

    result = []
    backtrack(0, [])
    return result

nums = [10, 20, 30, 40]
result = generate_combinations(nums)
print(result, len(result))