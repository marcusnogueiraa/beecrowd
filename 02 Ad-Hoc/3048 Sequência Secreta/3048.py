tam = int(input())
total = 0
ultimo_digito = 2
for i in range(tam):
    num = int(input())
    if num != ultimo_digito:
        total += 1
        ultimo_digito = num

print(total)

# https://www.beecrowd.com.br/judge/pt/problems/view/3048
# Ranking 00070º, Time 0.010, Submiss Date 03/04/2023 21:32:58 (Python 3.9)