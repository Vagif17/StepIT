giga = int(input('Enter file size:'))
byte = int(input('Enter internet connection speed in bits per second:'))
act1 = int(input('Choose time measurement - \n 1.Hours \n 2.Minutes \n 3.Seconds \n '))
if act1 == 1:
   print(giga / byte // 3600, end="")
   print('- Hours until finish')
elif act1 == 2:
    print(giga / byte // 60, end="")
    print('- Minutes until finish')
elif act1 == 3:
    print(giga / byte, end=" " )
    print('- Second until finish')