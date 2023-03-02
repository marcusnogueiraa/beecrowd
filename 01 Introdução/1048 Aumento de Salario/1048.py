salario_atual = float(input())

if 400 >= salario_atual:
    percentual = 15
elif 800 >= salario_atual:
    percentual = 12
elif 1200 >= salario_atual:
    percentual = 10
elif 2000 >= salario_atual:
    percentual = 7
else:
    percentual = 4

novo_salario = salario_atual + (salario_atual*percentual)/100

print(f'Novo salario: {novo_salario:.2f}')
print(f'Reajuste ganho: {novo_salario-salario_atual:.2f}')
print(f'Em percentual: {percentual} %')

# https://www.beecrowd.com.br/judge/pt/problems/view/1048
# Ranking 01802º, Time 	0.002, Submiss Date 02/03/2023 19:28:07 (Python 3.9)
