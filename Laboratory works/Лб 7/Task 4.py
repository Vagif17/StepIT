from random import  randint
print('Guess the number')
print('Find a number from 1 to 500')
win_number = randint(1, 500)
switch = int(input('Switch: 1 - On. 0 - Off \n:'))
attempts = 0
while switch:
    number = int(input('Enter number:'))
    attempts += 1
    if number == 0:
        break
    elif number == win_number:
        print('You won👏')
        print(f'you find number after {attempts} attempts ')
        break
    elif number > win_number:
        print('Win number smaller than your')
    elif number < win_number:
        print('Win number bigger than your')