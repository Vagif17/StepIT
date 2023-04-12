start = int(input('Enter height: '))
end = int(input('Enter length: '))
height = 1
length = 0
symbol = "*"
while length != end:
    length += 1
    symbol_1 = symbol * length
print(symbol_1)
while height != start:
    height += 1
    print(symbol_1)
