numero_de_pessoas = int(input())
pessoas = [int(x) for x in input().split(" ")]
menor = 21
index = 0

for i in range(0, numero_de_pessoas):
    if pessoas[i] < menor:
        index = i+1
        menor = pessoas[i]

print(f"{index}")

# https://www.beecrowd.com.br/judge/pt/problems/view/1858
# Ranking 00462º, Time 0.014, Submiss Date 31/03/2023 19:55:48 (Python 3.9)
