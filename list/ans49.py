#Write a Python program to convert a list to a list of dictionaries.
colors = [["Black", "Red", "Maroon", "Yellow"], ["#000000", "#FF0000", "#800000", "#FFFF00"]] 

dictionary = []


for i in range(0, len(colors[0])):
    data = {
        "color_name" : colors[0][i],
        "color_code" : colors[1][i]
    }

    dictionary.append(data)

print(dictionary)