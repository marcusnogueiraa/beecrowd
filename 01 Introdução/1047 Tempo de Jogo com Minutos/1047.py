hora1, min1, hora2, min2 = [
    int(x) for x in input().split(' ')]

inicio = (hora1, min1)
fim = (hora2, min2)

horas = minutos = 0

if inicio == fim:
    horas = 24

elif inicio[0] == fim[0]:
    if inicio[1] < fim[1]:
        minutos = fim[1] - inicio[1]
    elif inicio[1] > fim[1]:
        horas = 23
        minutos = 60 - (inicio[1] - fim[1])


elif inicio[0] < fim[0]:
    if inicio[1] == fim[1]:
        horas = fim[0] - inicio[0]
    else:
        horas = fim[0] - inicio[0] - 1
        minutos = (60 - inicio[1]) + fim[1]
        if minutos > 59:
            minutos = minutos - 60
            horas += 1

else:
    if inicio[1] == fim[1]:
        horas = 24 - inicio[0] + fim[0]
    else:
        horas = 23 - inicio[0] + fim[0]
        minutos = (60 - inicio[1]) + fim[1]
        if minutos > 59:
            minutos = minutos - 60
            horas += 1

print(f'O JOGO DUROU {horas} HORA(S) E {minutos} MINUTO(S)')

# https://www.beecrowd.com.br/judge/pt/problems/view/1047
# Ranking 01777º, Time 0.011, Submiss Date 04/03/2023 01:15:16 (Python 3.9)
