print()

firstSize, secondSize = map(int, input().split())

if firstSize != secondSize:
    print()
    print("Jumlah tidak sama")
    print()
else:
    firstRow = list(map(int, input().split()))
    secondRow = list(map(int, input().split()))

    result = []
    for index in range(firstSize):
        result.append(firstRow[index] * secondRow[index])

    print()
    print(*result)
    print()