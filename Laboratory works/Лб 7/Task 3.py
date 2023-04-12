First_number = int(input('Enter first number of the range:'))
Second_number = int(input('Enter second number of the range:'))
Number = int(input('Enter number:'))
num = First_number
print(First_number)
while First_number != Second_number:
    First_number += 1
    print(First_number)
    num += 1
    if num == Number:
        print(f'! {num} !')

