cases = int(input())

for i in range(0, cases):
    tempo_em_anos = 0
    dados = input().split(' ')

    PA = int(dados[0])
    PB = int(dados[1])
    G1 = float(dados[2])
    G2 = float(dados[3])

    while PB >= PA:
        PA = int(PA + (PA * G1 / 100))
        PB = int(PB + (PB * G2 / 100))
        tempo_em_anos += 1
        if tempo_em_anos > 100:
            break

    if tempo_em_anos > 100:
        print(f"Mais de 1 seculo.")
    else:
        print(f"{tempo_em_anos} anos.")

# https://www.beecrowd.com.br/judge/pt/problems/view/1160
# Ranking 04006º, Time 0.441, Submiss Date 31/03/2023 19:32:26 (Python 3.9)
