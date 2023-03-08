X = int(input())
Y = int(input())

for num in range(min(X, Y) + 1, max(X, Y)):
    if num % 5 == 2 or num % 5 == 3:
        print(num)

# https://www.beecrowd.com.br/judge/pt/problems/view/1133
# Ranking 03367º, Time 0.018, Submiss Date 08/03/2023 14:16:20 (Python 3.9)
