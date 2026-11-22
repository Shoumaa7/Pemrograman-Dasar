print()
word = input()

loweredWord = word.lower()
isPalindrome = loweredWord == loweredWord[::-1]

print()
if isPalindrome:
    print("Kata '" + word + "' adalah palindrom")
else:
    print("Kata '" + word + "' bukan palindrom")
    
print()

#
# 
# 
# 