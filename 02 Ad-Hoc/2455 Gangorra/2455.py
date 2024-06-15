P1, C1, P2, C2 = [int(x) for x in input().split(' ')]
if P1 * C1 == P2 * C2:
    print(0)
elif P1 * C1 > P2 * C2:
    print(-1)
elif P1 * C1 < P2 * C2:
    print(1)

# https://www.beecrowd.com.br/judge/pt/problems/view/2455
# Ranking 01243º, Time 0.099, Submiss Date 06/04/2023 11:04:38 (Python 3.9)