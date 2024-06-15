class Camisa:
    def __init__(self, cor, tam, nome):
        self.cor = cor
        self.tam = tam
        self.nome = nome

tamanho_map = {'P': 1, 'M': 2, 'G': 3}

def compare(camisa):
    return (camisa.cor, tamanho_map[camisa.tam], camisa.nome)

n = int(input())

while n != 0:
    lista = []
    for i in range(n):
        nome = input()
        cor, tamanho = input().split(' ')
        c = Camisa(cor, tamanho, nome)
        lista.append(c)

    lista.sort(key=compare)

    for c in lista:
        print(f"{c.cor} {c.tam} {c.nome}")

    n = int(input())
    if n != 0:
        print()

# https://www.beecrowd.com.br/judge/pt/problems/view/1258
# Ranking 00233º, Time 0.211, Submiss Date 26/06/2023 21:53:36 (Python 3.9)