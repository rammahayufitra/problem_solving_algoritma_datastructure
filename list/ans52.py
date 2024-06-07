# Define two lists 'color1' and 'color2' containing color names
color1 = ["red", "orange", "green", "blue", "white"]
color2 = ["black", "yellow", "green", "blue"]

res1  = []
res2  = []

for i in range(0, len(color1)): 
    if color1[i] not in color2:
        res1.append(color1[i])

for i in range(0, len(color2)): 
    if color2[i] not in color1:
        res2.append(color2[i])

print(res1)
print(res2)