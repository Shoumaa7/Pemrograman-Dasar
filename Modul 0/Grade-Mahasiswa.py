Nama = input("\nMasukkan nama mahasiswa: ")
Nilai = int(input("Masukkan nilainya: "))

if(Nilai >= 90):
    print(f"Grade {Nama} adalah A\n")
elif(Nilai >= 80):
    print(f"Grade {Nama} adalah B\n")
elif(Nilai >= 70):
    print(f"Grade {Nama} adalah C\n")
elif(Nilai >= 60):
    print(f"Grade {Nama} adalah D-\n")
elif(Nilai < 60):
    print(f"Grade {Nama} adalah E\n")