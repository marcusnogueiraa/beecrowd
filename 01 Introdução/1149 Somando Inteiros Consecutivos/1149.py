x, *outros_numeros = [int(x) for x in input().split(' ')]

for numero in outros_numeros:
    if numero > 0:
        n = numero
        break

soma = 0
for i in range(0, n):
    soma += x+i

print(soma)

# https://www.beecrowd.com.br/judge/pt/problems/view/1149
# Ranking 03040º, Time 0.164, Submiss Date 08/03/2023 23:00:20 (Python 3.9)
