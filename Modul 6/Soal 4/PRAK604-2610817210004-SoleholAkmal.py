print()

secretCode = input()
message = input()

print()

if len(secretCode) != len(message):
    print("Panjang kalimat berbeda, pesan palsu")
else:
    result = []
    starCount = 0
    hashCount = 0

    for codeChar, messageChar in zip(secretCode, message):
        if codeChar == messageChar:
            if codeChar == " ":
                result.append(" ")
            else:
                result.append("*")
                starCount += 1
        else:
            result.append("#")
            hashCount += 1

    print("".join(result))
    print("* =", starCount)
    print("# =", hashCount)

    if starCount >= hashCount:
        print("Pesan Asli")
    else:
        print("Pesan Palsu")

print()