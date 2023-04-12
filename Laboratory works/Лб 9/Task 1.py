number = int(input('Enter number:'))
start = 0
symbol = " "
symbol_1 = '*'
height = 1
while start != number:
    start += 1
    symbol += symbol_1
print(symbol)
while height != number:
    print(symbol)
    height += 1