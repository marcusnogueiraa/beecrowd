cases = int(input())
for i in range(cases):
    maria = joao = 0
    for i in range(3):
        X, D = map(int, input().split(' '))
        joao += X*D
    for i in range(3):
        X, D = map(int, input().split(' '))
        maria += X*D

    if maria > joao: print('MARIA')
    if joao > maria: print('JOAO')
    
# https://www.beecrowd.com.br/judge/pt/problems/view/3037
# Ranking 00695º, Time 0.069, Submiss Date 16/04/2023 11:08:24 (Python 3.9)
