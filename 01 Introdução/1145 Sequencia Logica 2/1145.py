x, y = [int(i) for i in input().split(' ')]

for i in range(1, y+1):
    if i % x == 0:
        print(i)
    else:
        print(i, end=' ')

# https://www.beecrowd.com.br/judge/pt/problems/view/1145
# Ranking 01425º, Time 0.106, Submiss Date 08/03/2023 22:52:36 (Python 3.9)
