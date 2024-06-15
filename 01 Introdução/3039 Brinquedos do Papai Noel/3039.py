cases = int(input())
meninos = meninas = 0
for i in range(cases):
    _, genero = input().split(' ')
    if genero == 'F': meninas += 1
    elif genero == 'M': meninos += 1
print(f'{meninos} carrinhos\n{meninas} bonecas')

# https://www.beecrowd.com.br/judge/pt/problems/view/3039
# Ranking 00726º, Time 0.103, Submiss Date 16/04/2023 11:12:51 (Python 3.9)
