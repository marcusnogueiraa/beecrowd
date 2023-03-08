idade = int(input())
idades = []
while idade >= 0:
    idades.append(idade)
    idade = int(input())

print(f"{sum(idades) / len(idades):.2f}")

# https://www.beecrowd.com.br/judge/pt/problems/view/1154
# Ranking 01080º, Time 0.000, Submiss Date 08/03/2023 21:27:56 (Python 3.9)
