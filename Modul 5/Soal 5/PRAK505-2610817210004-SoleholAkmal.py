def biodata(a, b, c):
    currentYear = 2020

    print(f"\nPerkenalkan Nama Saya : {b}")
    print(f"Umur Saya : {currentYear - a}")
    print(f"Saya Adalah Angkatan : {currentYear}")
    print(f"Asal Saya Dari : {c}\n")

birthYear = int(input("\nMasukkan Tahun Lahir : "))
name = input("Masukkan Nama : ")
city = input("Masukkan Kota : ")

biodata(birthYear, name, city)