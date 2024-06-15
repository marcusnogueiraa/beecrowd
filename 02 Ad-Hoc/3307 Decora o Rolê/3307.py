from math import sqrt
cases = int(input())

for i in range(cases):
    area = float(input())
    raio = sqrt(area / (4*3.14))
    if raio < 12:
        print(f"vermelho = R$ {area*0.09:.2f}")
    elif raio <= 15:
        print(f"azul = R$ {area*0.07:.2f}")
    else:
        print(f"amarelo = R$ {area*0.05:.2f}")

# https://www.beecrowd.com.br/judge/pt/problems/view/3307
# Ranking 00012º, Time 0.074, Submiss Date 10/04/2023 22:25:23 (Python 3.9)
