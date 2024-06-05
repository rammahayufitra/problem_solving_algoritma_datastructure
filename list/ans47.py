#program to insert an element before each element of a list.

color = ['Red', 'Green', 'Black']

for i in range(0, len(color)+2,2):
    color = color[:i] + ['C'] + color[i:]

print(color)


