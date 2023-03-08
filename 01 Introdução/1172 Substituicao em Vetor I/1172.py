vector = []

for i in range(0, 10):
    num = int(input())
    if num <= 0:
        vector.append(1)
    else:
        vector.append(num)

for i in range(0, 10):
    print(f"X[{i}] = {vector[i]}")

# https://www.beecrowd.com.br/judge/pt/problems/view/1172
# Ranking 07586º, Time 0.045, Submiss Date 08/03/2023 21:32:39 (Python 3.9)
