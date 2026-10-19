n = int(input("\nMasukkan Banyanya N : "))
multiple = int(input("Masukkan Kelipatan : "))
print()
total = 0 

for i in range(1, n + 1) :
    subTotal = 0

    for j in range (i, 0, -1) :
        result = j * multiple;
        subTotal += result

        print(f"({j} * {multiple})", end=" ")

        if j > 1 :
            print("+", end=" ")
    print(f"= {subTotal}")
    total += subTotal

print(f"\nHasil = {total}\n")