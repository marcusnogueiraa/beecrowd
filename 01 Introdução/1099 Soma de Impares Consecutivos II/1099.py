cases = int(input())

for i in range(0, cases):
    soma = 0
    x, y = [int(x) for x in input().split(' ')]
    for num in range(min(x, y)+1, max(x, y)):
        if num % 2 == 1:
            soma += num
    print(soma)

# https://www.beecrowd.com.br/judge/pt/problems/view/1099
# Ranking 01791º, Time 0.197, Submiss Date 07/03/2023 22:31:34 (Python 3.9)
