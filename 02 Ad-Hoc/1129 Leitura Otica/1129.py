cases = int(input())

letras = ['A', 'B', 'C', 'D', 'E']

while cases != 0:
    for i in range(0, cases):
        alternativas = [int(x) for x in input().split(' ')]
        alternativas_marcadas = []

        index = 0
        for alternativa in alternativas:
            if 127 >= alternativa:
                alternativas_marcadas.append(index)
            index += 1

        if len(alternativas_marcadas) != 1:
            print('*')
        else:
            print(letras[alternativas_marcadas[0]])
    cases = int(input())

# https://www.beecrowd.com.br/judge/pt/problems/view/1129
# Ranking 01139º, Time 0.065, Submiss Date 06/03/2023 20:04:33 (Python 3.9)
