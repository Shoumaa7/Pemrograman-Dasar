totalSecond = int(input("\nMasukkan detik : "))

day = totalSecond // 86400
SecondsRemaining = totalSecond % 86400

hour = SecondsRemaining // 3600
SecondsRemaining %= 3600

minute = SecondsRemaining // 60
second = SecondsRemaining % 60

if day > 0:
    print(f"\nHasil : {day} hari {hour:02d}:{minute:02d}:{second:02d}\n")
else:
    print(f"\nHasil : {hour:02d}:{minute:02d}:{second:02d}\n")