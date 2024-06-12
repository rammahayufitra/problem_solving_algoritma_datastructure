input = "eagerer"
vowel = "aiueoAIUEO"

count = 0
for i in input:
    if i in vowel:
        count += 1

print(count)