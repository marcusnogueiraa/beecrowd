maior = indice = 0
for i in range(1, 101):
    num = int(input())
    if num > maior:
        maior = num
        indice = i

print(maior)
print(indice)

# https://www.beecrowd.com.br/judge/pt/problems/view/1080
# Ranking 01603º, Time 0.000, Submiss Date 05/03/2023 01:41:26 (Python 3.9)
