"""

from cs50 import get_int

while(True):
    n = get_int('height ')

    if n > 0:
        break

for i in range(n):
    print('#')

"""

"""

for i in range(3):
    print('?',end='')
print()

"""


for i in range(3):
    for i in range(3):
        print('#',end='')
    print()
