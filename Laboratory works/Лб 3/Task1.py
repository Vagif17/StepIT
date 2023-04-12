seconds = int(input("Enter Seconds:"))
time_1 = int(input('Choose time measurement - \n 1.Hours \n 2.Minutes \n 3.Seconds \n '))
if time_1 == 1:
     print((86400 - seconds) // 3600, end='')
     print('-Hours left until midnight')
elif time_1 == 2:
     print((86400 - seconds) //60, end='')
     print('-Minutes left until midnight')
elif time_1 == 3:
     print(86400 - seconds, end="")
     print('-Seconds left until midnight')

   