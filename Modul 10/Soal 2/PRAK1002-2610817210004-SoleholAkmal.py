def fibonacci(n):
    if n == 0:
        return 0
    elif n == 1:
        return 1
    else:
        return fibonacci(n - 1) + fibonacci(n - 2)

number = int(input("\nMasukkan Angka : "))
print()

for i in range(number):
    print(fibonacci(i), end=" ")
    
print("\n")