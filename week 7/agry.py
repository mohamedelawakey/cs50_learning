"""
s = input('do you agree? ')
if s == 'y' or s == 'Y':
    print('you are agreed')
elif s == 'n' or s == 'N':
    print('you are disagreed')
"""

# it's using a built in function in oop of python 
s = input('do you agree? ').lower()

if s in ['Y','yes']:
    print('you are agreed')
elif in ['n','no']:
    print('you are disagreed')
