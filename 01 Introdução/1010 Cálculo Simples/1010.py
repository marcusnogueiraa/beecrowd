piece1 = input().split(" ")
piece2 = input().split(" ")
codigo1, quantidade1, valor1 = piece1
codigo2, quantidade2, valor2 = piece2

valorTotal = int(quantidade1) * float(valor1) + \
    int(quantidade2) * float(valor2)
print(f"VALOR A PAGAR: R$ {valorTotal:.2f}")

# https://www.beecrowd.com.br/judge/pt/problems/view/1010
# Ranking 25907º, Time 0.061, Submiss Date 03/02/2023 22:57:12 (Python 3.9)
