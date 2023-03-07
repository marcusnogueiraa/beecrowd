notas = []
while len(notas) != 2:
    nota = float(input())
    if 10 >= nota >= 0:
        notas.append(nota)
    else:
        print('nota invalida')

print(f'media = {sum(notas) / 2:.2f}')

# https://www.beecrowd.com.br/judge/pt/problems/view/1117
# Ranking 01113º, Time 0.000, Submiss Date 07/03/2023 22:43:06 (Python 3.9)
