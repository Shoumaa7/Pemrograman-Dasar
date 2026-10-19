value1, value2 = input("\nMasukkan 2 Angka : ").split()
print()

value1 = int(value1)
value2 = int(value2)
x = value1
y = value2

while True :
    print(f"{value1} {value2}", end="")

    if value1 == y and value2 == x :
        break

    if x <= y :
        value1 += 1
        value2 -= 1
    else :
        value1 -= 1
        value2 += 1
    
    print(" - ", end="")

print("\n")