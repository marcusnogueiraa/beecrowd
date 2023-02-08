values = input().split(' ')
A, B, C = [float(value) for value in values]

delta = B**2 - 4 * A * C

if A == 0 or delta < 0:
    print('Impossivel calcular')
else:
    raiz1 = (-B + delta ** (1/2)) / (2*A)
    raiz2 = (-B - delta ** (1/2)) / (2*A)
    print(f'R1 = {raiz1:.5f}')
    print(f'R2 = {raiz2:.5f}')
