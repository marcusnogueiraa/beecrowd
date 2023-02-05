valorReais = float(input())
valorCentavos = valorReais - int(valorReais)
valor = int(valorReais)

notas = ['100', '50', '20', '10', '5', '2']
moedas = ['50', '25', '10', '05']
print('NOTAS:')
for nota in notas:
    print(f'{valor // int(nota)} nota(s) de R$ {nota}.00')
    valor = valor % int(nota)

print('MOEDAS:')
print(f'{valor} moeda(s) de R$ 1.00')

valorCentavos = round((valorCentavos * 100))
for moeda in moedas:
    print(f'{valorCentavos // int(moeda)} moeda(s) de R$ 0.{moeda}')
    valorCentavos = valorCentavos % int(moeda)
print(f"{valorCentavos} moeda(s) de R$ 0.01")

# https://www.beecrowd.com.br/judge/pt/problems/view/1021
# Ranking 11899º, Time 0.042, Submiss Date 05/02/2023 21:06:02 (Python 3.9)
