value = int(input("\nMasukkan Nilai : "))

if value >= 100 :
    print(f"\nAnda Menginput Melebihi Limit Bilangan\n")
elif value == 0 :
    print(f"\nBilangan Nol\n")
elif value < 10 :
    print(f"\nBilangan Satuan\n")
elif 10 < value < 20 :
    print(f"\nBilangan Belasan\n")
elif 20 < value < 100 :
    print(f"\nBilangan Puluhan\n")
else : 
    print(f"\nBilangan Negatif\n")