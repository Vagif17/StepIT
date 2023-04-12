size = int(input('Enter size:'))
count = 0
while count <= size:
    if count == 0 or count == size :
        print('','', size * '*')
        count += 1
    else:
        print('*', (size + 1) * ' ',  ' *',sep='')
        count += 1
