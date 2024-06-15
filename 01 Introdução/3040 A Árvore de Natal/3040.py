N = int(input())
for i in range(N):
    H, D, G = map(int, input().split(' '))
    if 200 <= H <= 300 and D >= 50 and G >= 150: print('Sim')
    else: print('Nao')

# https://www.beecrowd.com.br/judge/pt/problems/view/3040
# Ranking 00484º, Time 0.157, Submiss Date 16/04/2023 11:23:43 (Python 3.9)
