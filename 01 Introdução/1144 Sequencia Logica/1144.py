num = int(input())

index = 1
for i in range(0, num):
    print(index, index**2, index**3)
    print(index, index**2 + 1, index**3 + 1)
    index += 1

# https://www.beecrowd.com.br/judge/pt/problems/view/1144
# Ranking 04250º, Time 0.039, Submiss Date 08/03/2023 20:38:27 (Python 3.9)
