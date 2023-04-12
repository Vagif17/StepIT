price = int(input('Enter the price of the computer:'))
computer = int(input('Enter the number of computers:'))
discount = int(input('Enter discount percentage:'))
act1 = int(input('How many computers to count?\n 1 - All \n 2 - One \n '))
if act1 == 1:
    print(price * computer / 100 * discount )
elif act1 == 2:
    print(price / 100 * discount)