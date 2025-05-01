import sys

"""

if len(argv) == 2:
    print(f'hello, {argv[1]}')
else:
    print(f'hello, world')

"""

if len(sys.argv) != 2:
    print('missing comand line arguments')
    sys.exit(1)

print(f'hello, {sys.argv[1]}')
sys.exit(0)
