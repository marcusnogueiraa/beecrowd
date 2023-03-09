t = int(input())
vector = []
for i in range(0, 1000, t):
    for i in range(0, t):
        vector.append(i)


for i in range(0, 1000):
    print(f"N[{i}] = {vector[i]}")

# https://www.beecrowd.com.br/judge/pt/problems/view/1177
# Ranking 05735º, Time 0.075, Submiss Date 09/03/2023 03:18:52 (Python 3.9)
