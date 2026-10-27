def maximum(a, b):
    if b > a:
        return b
    else:
        return a

def minimum(a, b):
    if b < a:
        return b
    else:
        return a

limit = 0
max_val = -100000
min_val = 100000

number = int(input("\nMasukkan Jumlah Angka : "))

print(f"Masukkan {number} Angka : ", end="")
    
tokens = []
while limit < number:
    if not tokens:
        tokens = input().split()
        if not tokens:
            continue

    value = int(tokens.pop(0))

    max_val = maximum(max_val, value)
    min_val = minimum(min_val, value)

    limit += 1

print(f"\nNilai Terbesar : {max_val}, Nilai Terkecil : {min_val}\n")