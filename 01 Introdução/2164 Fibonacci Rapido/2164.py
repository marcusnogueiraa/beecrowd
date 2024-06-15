from math import sqrt
n = int(input())

num_fib = (((1+sqrt(5)) / 2)**n - ((1-sqrt(5)) / 2)**n)
print(f"{num_fib / sqrt(5):.1f}")

# https://www.beecrowd.com.br/judge/pt/problems/view/2164
# Ranking 01259º, Time 0.281, Submiss Date 01/04/2023 21:23:00 (Python 3.9)
