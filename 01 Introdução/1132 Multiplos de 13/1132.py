X = int(input())
Y = int(input())

soma = 0

for num in range(min(X, Y), max(X, Y) + 1):
    if num % 13 != 0:
        soma += num

print(soma)

# https://www.beecrowd.com.br/judge/pt/problems/view/1132
# Ranking 04851º, Time 0.028, Submiss Date 08/03/2023 14:21:15 (Python 3.9)
