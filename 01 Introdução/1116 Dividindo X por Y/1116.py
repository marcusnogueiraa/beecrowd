cases = int(input())

for i in range(0, cases):
    num1, num2 = [int(x) for x in input().split(' ')]
    if num2 != 0:
        print(num1 / num2)
        continue
    print('divisao impossivel')

# https://www.beecrowd.com.br/judge/pt/problems/view/1116
# Ranking 05835º, Time 0.184, Submiss Date 08/03/2023 04:54:03 (Python 3.9)
