def hanoiMoves(n):
    if n == 1:
        return 1
    else:
        return 2 * hanoiMoves(n - 1) + 1

number = int(input("\nMasukkan Jumlah Cakram : "))

print(f"\nJumlah langkah minimum untuk {number} cakram adalah {hanoiMoves(number)}\n")