while True :
    print("\n===== Pilih Program =====")
    print("1. Penjumlahan")
    print("2. Pengurangan")
    print("3. Perkalian")
    print("4. Pembagian")
    print("5. Exit\n")

    try :
        choice = int(input("Masukkan Pilihan : "))

        if choice < 1 or choice > 5 :
            print("\nInput Anda Salah, Silahkan Coba Lagi")
            continue
        
        match choice :
            case 1 :
                value1 = int(input("\nMasukkan Nilai Pertama : "))
                value2 = int(input("Masukkan Nilai Kedua : "))
                print(f"\nHasil Penjumlahan Antara {value1:.2f} dengan {value2:.2f} Adalah {(value1 + value2):.2f}\n")
                continue
            case 2 :
                value1 = int(input("\nMasukkan Nilai Pertama : "))
                value2 = int(input("Masukkan Nilai Kedua : "))
                print(f"\nHasil Pengurangan Antara {value1:.2f} dengan {value2:.2f} Adalah {(value1 - value2):.2f}\n")
                continue
            case 3 :
                value1 = int(input("\nMasukkan Nilai Pertama : "))
                value2 = int(input("Masukkan Nilai Kedua : "))
                print(f"\nHasil Perkalian Antara {value1:.2f} dengan {value2:.2f} Adalah {(value1 * value2):.2f}\n")
                continue
            case 4 :
                value1 = int(input("\nMasukkan Nilai Pertama : "))
                value2 = int(input("Masukkan Nilai Kedua : "))
                print(f"\nHasil Pembagian Antara {value1:.2f} dengan {value2:.2f} Adalah {(value1 / value2):.2f}\n")
                continue
            case 5 :
                print("\nTerimakasih Telah Menggunakan Kalkulator Solehol Akmal\n")
                break
    except ValueError :
        print("\nInput Yang Dimasukkan Bukan Angka, Silahkan Coba Lagi\n")
        continue