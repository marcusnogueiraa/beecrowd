N, M = [int(x) for x in input().split(' ')]

for x in range(M):
    action = input()
    if action == 'fechou':
        N+=1
    else:
        N-=1

print(N)

# https://www.beecrowd.com.br/judge/pt/problems/view/2061
# Ranking 00132º, Time 0.000, Submiss Date 06/04/2023 11:00:32 (Python 3.9)