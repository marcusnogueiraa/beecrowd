def esvaziarVetor(vector, name):
    for i in range(0, 5):
        print(f"{name}[{i}] = {vector[i]}")
    return []


pares = []
impares = []

for i in range(0, 15):
    numero = int(input())
    if numero % 2 == 0:
        pares.append(numero)
    else:
        impares.append(numero)

    if len(impares) == 5:
        impares = esvaziarVetor(impares, "impar")
    elif len(pares) == 5:
        pares = esvaziarVetor(pares, "par")

for i in range(0, len(impares)):
    print(f"impar[{i}] = {impares[i]}")

for i in range(0, len(pares)):
    print(f"par[{i}] = {pares[i]}")

# https://www.beecrowd.com.br/judge/pt/problems/view/1179
# Ranking 04879º, Time 0.057, Submiss Date 09/03/2023 03:34:49 (Python 3.9)
