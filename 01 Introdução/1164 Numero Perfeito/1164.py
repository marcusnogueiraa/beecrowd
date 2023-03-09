cases = int(input())

for i in range(0, cases):
    x = int(input())

    soma = 0
    for i in range(1, x):
        if soma > x:
            break
        if x % i == 0:
            soma += i

    if soma == x:
        print(x, "eh perfeito")
    else:
        print(x, "nao eh perfeito")

# https://www.beecrowd.com.br/judge/pt/problems/view/1164
# Ranking 03198º, Time 0.030, Submiss Date 09/03/2023 01:19:57 (Python 3.9)
