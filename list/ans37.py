color1 = "Red", "Green", "Orange", "White"
color2 = "Black", "Green", "White", "Pink"

color1 = [i for i in color1]
color2 = [i for i in color2]

buffer = []

for i in range(0, len(color1)):
    if color1[i] in color2:
        buffer.append(color1[i])

print(set(buffer))