prices = [4.00, 4.50, 5.00, 2.00, 1.50]
pedido = input().split(' ')
print(f'Total: R$ {prices[ int(pedido[0]) -1 ] * int(pedido[1]):.2f}')
