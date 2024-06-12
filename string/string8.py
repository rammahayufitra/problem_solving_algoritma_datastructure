input = "python cpp ruby"

count = 0
for i in range(0, len(input)):
    if input[i] == ' ':
        count += 1

count += 1

print(count)