value = int(input("\nMasukkan Batas : "))
print()

for i in range(1, value + 1):
    if i % 2 == 1:
        print(i, end=" ")

print()

for i in range(value, 1, -1):
    if i % 2 == 0:
        print(i, end=" ")

print("\n")