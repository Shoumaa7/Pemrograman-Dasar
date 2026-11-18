print()
row, column = map(int, input().split())

numberList = list(map(int, input().split()))

matrix = []
for i in range(row) :
    matrix.append(numberList[i * column : (i + 1) * column])

print()
for j in matrix :
    print(*j)

print()