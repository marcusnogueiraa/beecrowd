x = int(input())
while x != 0:
    if x % 2 == 1:
        x += 1
    soma = 0
    print(sum(range(x, x+9, 2)))
    x = int(input())

# https://www.beecrowd.com.br/judge/pt/problems/view/1159
# Ranking 00437º, Time 0.000, Submiss Date 09/03/2023 01:02:21 (Python 3.9)
