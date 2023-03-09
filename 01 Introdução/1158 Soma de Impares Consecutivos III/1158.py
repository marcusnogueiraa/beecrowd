n = int(input())

for i in range(0, n):
    x, y = [int(i) for i in input().split(' ')]

    if x % 2 == 0:
        x += 1

    soma = x
    index = soma+2
    for i in range(0, y-1):
        soma += index
        index += 2
    print(soma)

# https://www.beecrowd.com.br/judge/pt/problems/view/1158
# Ranking 00541º, Time 0.064, Submiss Date 09/03/2023 00:47:47 (Python 3.9)
