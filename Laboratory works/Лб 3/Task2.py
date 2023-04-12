diametr = int(input('Enter circle diameter:'))
ask = int(input('What do you want find?\n 1 - Perimeter \n 2 - Square \n'))
if ask == 1:
    print('The perimeter of the circle is ', end="")
    print(diametr * 3.14)
elif ask == 2:
    print('The square of the circle is ', end="")
    print(diametr * diametr / 4 * 3.14)

