num = float(input())
numeros = []

for i in range(0, 100):
    numeros.append(num)
    num /= 2

for i in range(0, 100):
    print(f"N[{i}] = {numeros[i]:.4f}")

# https://www.beecrowd.com.br/judge/pt/problems/view/1178
# Ranking 00877º, Time 0.000, Submiss Date 09/03/2023 03:23:27 (Python 3.9)
