radius = float(input("\nJari-Jari : "))
height = float(input("Tinggi : "))

phi = 22 / 7

volume = phi * radius * radius * height
surfaceArea = 2 * phi * radius * (radius + height)
baseCircumference = 2 * phi * radius

print(f"\nVolume = {volume:.2f}")
print(f"Luas = {surfaceArea:.2f}")
print(f"Keliling = {baseCircumference:.2f}\n")