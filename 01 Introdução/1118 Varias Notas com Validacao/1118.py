continuar = True
while continuar:
    notas = []
    while len(notas) != 2:
        nota = float(input())
        if 10 >= nota >= 0:
            notas.append(nota)
        else:
            print('nota invalida')

    print(f'media = {sum(notas) / 2:.2f}')
    option = 0
    while option != 1 and option != 2:
        print('novo calculo (1-sim 2-nao)')
        option = int(input())
        if option == 2:
            continuar = False

# https://www.beecrowd.com.br/judge/pt/problems/view/1118
# Ranking 04526º, Time 0.069, Submiss Date 08/03/2023 14:04:22 (Python 3.9)
