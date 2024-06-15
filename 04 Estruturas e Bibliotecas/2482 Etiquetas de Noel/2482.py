N = int(input())

map = {}
for i in range(0, N):
    lang = input()
    map[lang] = input()

M = int(input())
for i in range(0, M):
    name = input()
    lang = input()
    print(name)
    print(map[lang])
    print()

# https://www.beecrowd.com.br/judge/pt/problems/view/2482
# Ranking 00078º, Time 0.002, Submiss Date 20/06/2023 14:38:25 (Python 3.9)