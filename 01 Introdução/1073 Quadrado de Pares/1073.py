numeros_pares = 0
numeros_positivos = 0
numeros_negativos = 0

for i in range(0, 5):
    numero = int(input())
    if numero > 0:
        numeros_positivos += 1
    if numero < 0:
        numeros_negativos += 1
    if numero % 2 == 0:
        numeros_pares += 1

print(numeros_pares, 'valor(es) par(es)')
print(5 - numeros_pares, 'valor(es) impar(es)')
print(numeros_positivos, 'valor(es) positivo(s)')
print(numeros_negativos, 'valor(es) negativo(s)')


# https://www.beecrowd.com.br/judge/pt/problems/view/1066
# Ranking 09617º, Time 0.028, Submiss Date 02/03/2023 02:32:00 (Python 3.9)
