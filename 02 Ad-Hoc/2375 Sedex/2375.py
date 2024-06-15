diametro = int(input())
A, L, P = [int(x) for x in input().split(' ')]
if min(A, L, P) >= diametro:
    print('S')
else:
    print('N')

# https://www.beecrowd.com.br/judge/pt/problems/view/2375
# Ranking 00782º, Time 0.072, Submiss Date 10/04/2023 23:05:08 (Python 3.9)
