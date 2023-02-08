value = float(input())

if 25 >= value >= 0:
    print("Intervalo [0,25]")
elif 25 < value <= 50:
    print("Intervalo (25,50]")
elif 50 <= value <= 75:
    print("Intervalo (50,75]")
elif 75 <= value <= 100:
    print('Intervalo (75,100]')
else:
    print('Fora de intervalo')

# https://www.beecrowd.com.br/judge/pt/problems/view/1037
# Ranking 13073º, Time 0.028, Submiss Date 08/02/2023 17:08:50 (Python 3.9)
