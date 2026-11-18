print()

order = int(input())

print("Matriks A")
matrixA = []
for row in range(order):
    matrixA.append(list(map(int, input().split())))

print("Matriks B")
matrixB = []
for row in range(order):
    matrixB.append(list(map(int, input().split())))

print()

print("Matriks AXB")
for row in range(order):
    line = []
    for column in range(order):
        total = 0
        for k in range(order):
            total += matrixA[row][k] * matrixB[k][column]
        line.append(str(total))
    print(" ".join(line))

print()