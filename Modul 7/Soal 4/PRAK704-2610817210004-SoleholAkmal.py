print()
description = input()

maxLength = 20

print()
if len(description) > maxLength:
    print(description[:maxLength] + "...")
else:
    print(description)
print()