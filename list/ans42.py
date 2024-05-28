#Find missing and additional values in two lists

list1 = ['a', 'b', 'c', 'd', 'e', 'f']
list2 = ['d', 'e', 'f', 'g', 'h']

missing =  []
additional = []


for i in list1:
    if i not in list2:
        missing.append(i)


for i in list2:
    if i not in list1:
        additional.append(i)


print("missing values: ", missing,  "additional values", additional)