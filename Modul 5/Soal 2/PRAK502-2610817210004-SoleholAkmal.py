def count(value1, value2):
    return value1 - value2

def absolute(value):
    return abs(value)

a, c, b, d = map(int, input("\nMasukkan 4 Angka : ").split())

result = count(a, b) + count(c, d)
print(f"\nHasil : {absolute(result)}\n")