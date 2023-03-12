cases = int(input())

for i in range(0, cases):
    j1, op1, j2, op2 = input().split(' ')

    if sum([int(x) for x in input().split(' ')]) % 2 == 0:
        result = 'PAR'
    else:
        result = 'IMPAR'

    if op1 == result:
        print(j1)
    else:
        print(j2)


# https://www.beecrowd.com.br/judge/pt/problems/view/1914
# Ranking 01627º, Time 0.157, Submiss Date 12/03/2023 23:44:02 (Python 3.9)
