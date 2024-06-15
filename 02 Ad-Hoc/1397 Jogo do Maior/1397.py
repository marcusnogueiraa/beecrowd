N = int(input())
while N != 0:
    points_A = 0
    points_B = 0
    for i in range(N):
        A, B = [int(x) for x in input().split(' ')]
        if A > B:
            points_A += 1
        if B > A:
            points_B += 1
    print(points_A, points_B)
    N = int(input())

# https://www.beecrowd.com.br/judge/pt/problems/view/1397
# Ranking 01031º, Time 0.263, Submiss Date 10/04/2023 22:45:01 (Python 3.9)
