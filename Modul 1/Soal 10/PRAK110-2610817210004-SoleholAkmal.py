import math

base = 5
height = 12
hypotenuse = int(math.sqrt((base * base) + (height * height)))

perimeter = height + hypotenuse + base
area = int(1/2 * base * height)

print(f"\nDiketahui :")
print(f"Alas = {base}")
print(f"Tinggi = {height}")
print(f"\nJawab :")
print(f"Sisi A = {height}")
print(f"Sisi B = {hypotenuse}")
print(f"Sisi C = {base}")
print(f"Keliling = {perimeter}")
print(f"Luas = {area}\n")

