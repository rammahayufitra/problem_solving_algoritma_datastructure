strs = ['be','have','do','say','get','make','go','know','take','see','come','think','look','want','give','use','find','tell','ask','work','seem','feel','leave','call']



for i in range(0, len(strs)):
    for j in range(0, len(strs)-i-1):
        if strs[j][0] > strs[j+1][0]:
            strs[j], strs[j+1] = strs[j+1], strs[j]

print(strs)

data = [1,'a']
print(data)