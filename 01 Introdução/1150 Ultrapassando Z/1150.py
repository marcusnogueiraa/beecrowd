X = int(input())

Z = int(input())
while Z <= X:
    Z = int(input())

soma = 0
index = 0
while soma <= Z:
    index += 1
    soma += X + index


print(index)

# https://www.beecrowd.com.br/judge/pt/problems/view/1150
# Ranking 02014º, Time 0.018, Submiss Date 08/03/2023 23:38:36 (Python 3.9)
