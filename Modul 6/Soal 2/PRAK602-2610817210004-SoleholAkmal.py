print()
total = int(input())
amounts = list(map(int, input().split()))

print()
result = []
for index in range(total):
    result.append(amounts[index] * (index + 1))

print(*result)
print()