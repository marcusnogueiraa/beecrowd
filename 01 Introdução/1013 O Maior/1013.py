valores = input().split(" ")
A, B, C = valores
A = int(A)
B = int(B)
C = int(C)

maiorAB = (A + B + abs(A - B)) / 2
maiorValor = (maiorAB + C + abs(maiorAB - C)) / 2

print(f"{maiorValor:.0f} eh o maior")

# https://www.beecrowd.com.br/judge/pt/problems/view/1013
# Ranking 25733º, Time 0.282, Submiss Date 04/02/2023 09:19:27 (Python 3.9)
