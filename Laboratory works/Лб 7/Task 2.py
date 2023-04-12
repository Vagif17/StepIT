switch = int(input('Switch: 1 - On. 0 - Off \n:'))
while switch:
    money= int(input('Enter amount of money:'))
    volute_now = int(input('Select you\'r valute \n 1. AZN \n 2. USD \n 3. EUR \n:'))
    volute_then = int(input('Select choose what to convert \n 1. AZN \n 2. USD \n 3. EUR \n:'))
    if volute_now == 1 and volute_then == 1:
        print('\n', end='')
        print(money, end='')
        switch = int(input('Continue? \n 1 - Yes \n 0 - No \n:'))
    elif volute_now == 1 and volute_then == 2:
        print('\n', end='')
        print(money * 0.59, end='')
        switch= int(input('Continue? \n 1 - Yes \n 0 - No \n:'))
    elif volute_now == 1 and volute_then == 3:
        print('\n', end="")
        print(money * 0.56, end="")
        switch = int(input('Continue? \n 1 - Yes \n 0 - No \n:'))
    elif volute_now == 2 and volute_then == 1:
        print('\n', end="")
        print(money * 1.70)
        switch = int(input('Continue? \n 1 - Yes \n 0 - No \n:'))
    elif volute_now == 2 and volute_then == 2:
        print('\n', end="")
        print(money)
        switch = int(input('Continue? \n 1 - Yes \n 0 - No \n:'))
    elif volute_now == 2 and volute_then == 3:
        print('\n', end="")
        print(money * 0.95)
        switch = int(input('Continue? \n 1 - Yes \n 0 - No \n:'))
    elif volute_now == 3 and volute_then == 1:
        print('\n', end="")
        print(money * 1,79)
        switch = int(input('Continue? \n 1 - Yes \n 0 - No \n:'))
    elif volute_now == 3 and volute_then == 2:
        print('\n', end="")
        print(money * 1.06)
        switch = int(input('Continue? \n 1 Yes \n 0 - No \n:'))
    elif volute_now == 3 and volute_then == 3:
        print('\n', end="")
        print(money)
        switch = int(input('Continue? \n 1 Yes \n 0 - No \n:'))


