from cs50 import get_int

x = get_int('what is x: ')
y = get_int('what is y: ')
if x > y:
    print(f'{x} is greater than {y}')
elif x < y:
    print(f'{y} is greater than {x}')
else:
    print(f'{x} is equals {y}')

#--------------------------------------

s = input('enter s: ')
z = input('enter z: ')
if s == z:
    print('same')
else:
    print('different')
