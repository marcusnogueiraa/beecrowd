N, S = [int(x) for x in input().split(' ')]
menor_valor = S
for x in range(N):
    S += int(input())
    if S < menor_valor:
        menor_valor = S

print(menor_valor)

# https://www.beecrowd.com.br/judge/pt/problems/view/2434
# Ranking 00406º, Time 0.054, Submiss Date 06/04/2023 11:36:37 (Python 3.9)