cases = int(input())
for i in range(0, cases):
    num = int(input())
    if num % 2 == 0:
        num_stats = 'EVEN'
    else:
        num_stats = 'ODD'
    if num > 0:
        num_stats += ' POSITIVE'
    elif num < 0:
        num_stats += ' NEGATIVE'
    else:
        num_stats = 'NULL'
    print(num_stats)

# https://www.beecrowd.com.br/judge/pt/problems/view/1074
# Ranking 00830º, Time 0.001, Submiss Date 05/03/2023 01:08:16 (Python 3.9)
