number_1 = int(input('Enter first number:'))
number_2 = int(input('Enter second number:'))
num_1 = number_1
num_2 = 1
while number_1 <= number_2:
    num_2 *= num_1
    num_1 += 1
    number_1 += 1

print(num_2)