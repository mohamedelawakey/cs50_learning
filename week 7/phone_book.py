# from cs50
names = ['mohamed','ahmed','ali']
name = input('enter name: ')
for n in names:
    if name == n:
        print('found')
        break
else:
    print('not found')

# another way
if name in names:
    print('found')
else:
    print('not found')
