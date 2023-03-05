cases = int(input())
for i in range(0, cases):
    A, B, C = [float(x) for x in input().split(' ')]
    print(f"{(2*A + 3*B + 5*C) / 10:.1f}")

# https://www.beecrowd.com.br/judge/pt/problems/view/1079
# Ranking 01262º, Time 0.004, Submiss Date 05/03/2023 01:29:36 (Python 3.9)
