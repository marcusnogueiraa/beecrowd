valor = int(input())

notas = ['100', '50', '20', '10', '5', '2']

print(valor)
for nota in notas:
    print(f'{valor // int(nota)} nota(s) de R$ {nota},00')
    valor = valor % int(nota)

print(f'{valor} nota(s) de R$ 1,00')

# https://www.beecrowd.com.br/judge/pt/problems/view/1018
# Ranking 16614º, Time 0.035, Submiss Date 04/02/2023 20:44:12 (Python 3.9)
