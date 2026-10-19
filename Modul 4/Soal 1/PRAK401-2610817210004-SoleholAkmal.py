value = int(input("\nMasukkan Angka : "))
symbol = input("Masukkan Simbol : ")
print()

for i in range(1, 51) :
    if i % value == 0 :
        print(symbol, end=" ")
    else :
        print(i, end=" ")
print("\n")