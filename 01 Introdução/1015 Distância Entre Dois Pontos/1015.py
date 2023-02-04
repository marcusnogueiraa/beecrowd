from math import sqrt

p1 = input().split(" ")
p2 = input().split(" ")
x1, y1 = p1
x2, y2 = p2

x1, y1 = float(x1), float(y1)
x2, y2 = float(x2), float(y2)

distancia = sqrt((x2 - x1)**2 + (y2 - y1)**2)
print(f'{distancia:.4f}')

# https://www.beecrowd.com.br/judge/pt/problems/view/1015
# Ranking 25533º, Time 0.105, Submiss Date 04/02/2023 09:41:36 (Python 3.9)
