def reverse(number):
    reversed = 0
    
    while number != 0:
        remainder = number % 10
        reversed = reversed * 10 + remainder
        number //= 10
        
    return reversed

A, B = map(int, input("\nMasukkan 2 Angka : ").split())
    
A = reverse(A)
B = reverse(B)
    
C = A + B
print(f"\nHasil : {reverse(C)}\n")