totalSecond = int(input("\nMasukkan detik : "))

day = totalSecond // 86400
secondsRemaining = totalSecond % 86400

hour = secondsRemaining // 3600
secondsRemaining %= 3600

minute = secondsRemaining // 60
second = secondsRemaining % 60

if day > 0:
    print(f"\nHasil : {day} hari {hour:02d}:{minute:02d}:{second:02d}\n")
else:
    print(f"\nHasil : {hour:02d}:{minute:02d}:{second:02d}\n")