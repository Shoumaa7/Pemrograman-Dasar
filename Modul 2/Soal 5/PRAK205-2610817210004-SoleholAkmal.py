import math

sideA = int(input("\nSisi A : "))
sideB = int(input("Sisi B : "))
sideC = int(math.sqrt(sideB * sideB - sideA * sideA))

perimeter = sideA + sideB + sideC
area = int(1/2 * sideC * sideA)

print(f"\nAlas = {sideC} cm")
print(f"Tinggi = {sideA} cm")
print(f"Keliling = {perimeter} cm")
print(f"Luas = {area} cm^2\n")