total_turistas = 0
total_gipes = 0
while True:
    try:
        registro = input().split(' ')
        mov = registro[0]
        turistas = int(registro[1])
        if mov == "SALIDA":
            total_turistas += turistas
            total_gipes += 1
        elif mov == "VUELTA":
            total_turistas -= turistas
            total_gipes -= 1
    except IndexError:
        break

print(total_turistas)
print(total_gipes)

# https://www.beecrowd.com.br/judge/pt/problems/view/2708
# Ranking 00068º, Time 0.003, Submiss Date 03/04/2023 12:12:36 (Python 3.9)
