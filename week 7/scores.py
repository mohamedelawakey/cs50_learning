from cs50 import get_int

scores = []
for i in range(3):
    score = get_int('scores: ')
    scores.append(score)

avg = sum(scores) / len(scores)
print(f'average = {avg}')


# with parimaters
"""
score = [72,73,33]
avg = sum(score) / len(score)
print(f'average = {avg}')
"""
