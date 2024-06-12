input = "aabcdeef"

dictionary = {}

buffer = []
for i in input: 
    if i not in buffer:
        buffer.append(i)
        dictionary[i] = 0
    dictionary[i] += 1

data = {}
for item, count in dictionary.items():
    if dictionary[item] > 1:
      data[item]  = count

if data['a']  == data['e']:
    print("True") 
else:
    print("False")

