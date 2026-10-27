def maxValue(a, b, c, d):
    max = a

    if b > max : max = b
    if c > max : max = c
    if d > max : max = d

    return max

a, b, c, d = map(int, input("\nMasukkan 4 Angka : ").split())

result = maxValue(a, b, c, d)
print(f"\nBilangan Terbesar Adalah : {result}\n")