print()
sentence = input("Kalimat : ")
vowelCount = 0
consonantCount = 0

for character in sentence.lower():
    if character.isalpha():
        if character in "aiueo":
            vowelCount += 1
        else:
            consonantCount += 1

print()
print("Jumlah Vokal : " + str(vowelCount))
print("Jumlah Konsonan : " + str(consonantCount))
print()