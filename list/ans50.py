#program to sort a list of nested dictionaries
my_list = [{'key': {'subkey': 1}}, {'key': {'subkey': 10}}, {'key': {'subkey': 5}}]

for i in range(0, len(my_list)):
    for j in range(0, len(my_list)-i-1):
        if my_list[j]["key"]["subkey"] < my_list[j+1]["key"]["subkey"]:
            my_list[j]["key"]["subkey"], my_list[j+1]["key"]["subkey"] = my_list[j+1]["key"]["subkey"], my_list[j]["key"]["subkey"]
     
print(my_list)