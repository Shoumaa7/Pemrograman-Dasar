def totalDigit(n):
    if n == 0:
        return 0
    else:
        return (n % 10) + totalDigit(n // 10)

number = int(input("\nMasukkan Bilangan Bulat Positif: "))

print(f"\nJumlah digit dari {number} adalah {totalDigit(number)}\n")