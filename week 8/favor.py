import csv
from collections import Counter

"""
with open('favorites.csv','r') as file:
    reade = csv.DictReader(file)
    for row in reade:
        fav = row['language']
        print(fav)
"""

"""
with open('favorites.csv','r') as file:
    reade = csv.DictReader(file)
    Scratch, C, Python = 0, 0, 0
    for row in reade:
        fav = row['language']
        if fav == 'Scratch':
            Scratch += 1
        elif fav == 'C':
            C += 1
        elif fav == 'Python':
            Python += 1
print(f'Scratch = {Scratch}\nC = {C}\nPython = {Python}')
"""

"""
with open('favorites.csv','r') as file:
    reade = csv.DictReader(file)
    counts = {}

    for row in reade:
        fav = row['language']
        if fav  in counts:
            counts[fav] += 1
        else:
            counts[fav] = 1

    for fav in sorted(counts, key=counts.get, reverse = True):
        print(f'{fav}:{counts[fav]}')
"""
"""
with open('favorites.csv','r') as file:
    reade = csv.DictReader(file)
    counts = Counter()

    for row in reade:
          fav = row['problem']
          counts[fav] += 1
fav = input('fav: ')
print(f'{fav}:{counts[fav]}')

#for fav in sorted(counts, key=counts.get, reverse = True):
"""

"""
for fav,count in counts.most_common():
        print(f'{fav}:{counts[fav]}')
"""

from cs50 import SQL
db = SQL("sqlite:///favo.db")

favorite = input("fav: ")
rows = db.excute("select count (*) as n from favo where proplem = ?" favorite)
row = rows[0]
print(row)
