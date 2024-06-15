N = int(input())
for i in range(N):
    A, B = [int(x) for x in input().split(' ')]
    for j in range(A, B+1):
        print(str(j), end='')
    
    for j in range(B, A-1, -1):
        print(str(j)[::-1], end='')

    print()

# https://www.beecrowd.com.br/judge/pt/problems/view/2157
# Ranking 00822º, Time 0.125, Submiss Date 11/04/2023 00:10:26 (Python 3.9)