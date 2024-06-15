N = int(input())
total = 0
for i in range(N):
    tempo, velocidade = [int(x) for x in input().split(' ')]
    total += (tempo * velocidade)

print(total)

# https://www.beecrowd.com.br/judge/pt/problems/view/2388
# Ranking 00049º, Time 0.000, Submiss Date 06/04/2023 10:45:52 (Python 3.9)