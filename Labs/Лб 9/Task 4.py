length = int(input('Enter length :'))
height = int(input('Enter height :'))
count = 0
while count <= height:
    if count == 0:
     print('', '', length * '*')
     count += 1
    while count <= height:
        print('*', (length + 1) * ' ', ' *', sep='')
        count += 1
    if count != height:
        print('','', length * '*')
        count += 1