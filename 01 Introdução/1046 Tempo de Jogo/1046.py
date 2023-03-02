begin, end = [int(x) for x in input().split(' ')]

if end > begin:
    print(f'O JOGO DUROU {end - begin} HORA(S)')
else:
    print(f'O JOGO DUROU {24 - begin + end} HORA(S)')

# https://www.beecrowd.com.br/judge/pt/problems/view/1046
# Ranking 01462º, Time 0.000, Submiss Date 02/03/2023 20:14:05 (Python 3.9)
