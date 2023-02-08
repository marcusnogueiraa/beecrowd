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

values = input().split(' ')
A, B, C, D = [int(n) for n in values]

was_accepted1 = B > C and D > A and C+D > A+B
was_accepted2 = C > 0 and D > 0 and A % 2 == 0

if was_accepted1 and was_accepted2:
    print('Valores aceitos')
else:
    print('Valores nao aceitos')

# https://www.beecrowd.com.br/judge/pt/problems/view/1036
# Ranking 17445º, Time 0.086, Submiss Date 08/02/2023 16:53:57 (Python 3.9)
