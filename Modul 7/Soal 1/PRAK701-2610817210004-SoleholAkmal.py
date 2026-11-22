print()
firstName = input("Nama Depan : ")
lastName = input("Nama Belakang : ")

fullName = firstName + " " + lastName
nameLength = len(fullName.replace(" ", ""))

print()
print(f"Nama Lengkap : {fullName}")
print(f"Panjang Nama (tanpa spasi) : {nameLength}")
print()