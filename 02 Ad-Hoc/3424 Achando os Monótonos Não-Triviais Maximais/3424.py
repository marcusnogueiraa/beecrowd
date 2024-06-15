tt = 0
N = int(input())
sqc = input().split('b')

for letter in sqc:
    if len(letter) > 1:
        tt += len(letter)

print(tt)

# https://www.beecrowd.com.br/judge/pt/problems/view/3424
# Ranking 00001º, Time 0.025, Submiss Date 29/05/2023 04:09:04 (Python 3.9)