prices = [4.00, 4.50, 5.00, 2.00, 1.50]
pedido = input().split(' ')
print(f'Total: R$ {prices[ int(pedido[0]) -1 ] * int(pedido[1]):.2f}')

# https://www.beecrowd.com.br/judge/pt/problems/view/1038
# Ranking 02182º, Time 0.000, Submiss Date 08/02/2023 17:15:53 (Python 3.9)
