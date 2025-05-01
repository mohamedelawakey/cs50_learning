# list of dicts
"""

people = [
    {'name':'mohamed','number':'01234567'},
    {'name':'ahmed','number':'01234568'},
    {'name':'ali','number':'01234569'}
]

name = input('name: ')

for i in people:
    if i['name'] == name:
        print(f'found {i['number']}')
        break
else:
    print('not found')

"""

#with dicts
people = {
    'mohamed':'01234567',
    'ahmed' : '01234568',
    'ali' : '01234569'
}

name = input('name: ')
if name in people:
    number = people[name]
    print(f'found {number}')
else:
    print('not found')
