def factorial(n) :
    if n <= 1 :
        return 1
    else :
        return n * factorial(n - 1)

while True :
    number = int(input("\nMasukkan Angka : "))

    if number < 0 :
        print("\nMasukkan Angka Positif!!")
        print("--------------------------------")
        continue
    else : 
        print(f"\nHasil {number}! = {factorial(number)}\n")
        break