x = 1
y = 0

while x != y:
    x, y = [int(x) for x in input().split(' ')]
    if x > y:
        print('Decrescente')
    elif y > x:
        print('Crescente')

# https://www.beecrowd.com.br/judge/pt/problems/view/1113
# Ranking 07577º, Time 0.109, Submiss Date 07/03/2023 22:23:52 (Python 3.9)
