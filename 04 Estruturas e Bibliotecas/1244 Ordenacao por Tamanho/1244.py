cases = int(input())

for i in range(0, cases):
    palavras = input().split(' ')
    palavras.sort(key=len, reverse=True)
    print(*palavras)

# https://www.beecrowd.com.br/judge/pt/problems/view/1244
# Ranking 01168º, Time 0.221, Submiss Date 06/03/2023 03:01:49 (Python 3.9)
