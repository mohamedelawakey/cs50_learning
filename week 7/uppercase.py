before = input('enter the word: ')

# more easyer and more clean
print(f'after: {before.upper()}')

# using oop built in functions
print(before.upper())

# using loops
print('after: ',end='')
for i in before:
    print(i.upper(),end='')
print()
