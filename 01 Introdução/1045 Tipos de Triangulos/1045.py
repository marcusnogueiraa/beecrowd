numbers = [float(x) for x in input().split(' ')]
numbers.sort()

C, B, A = numbers

if A >= B+C:
    print('NAO FORMA TRIANGULO')
else:
    if A**2 == B**2 + C**2:
        print('TRIANGULO RETANGULO')
    if A**2 > B**2 + C**2:
        print('TRIANGULO OBTUSANGULO')
    if A**2 < B**2 + C**2:
        print('TRIANGULO ACUTANGULO')
    if A == B == C:
        print('TRIANGULO EQUILATERO')
    if A == B != C or A == C != B or B == C != A:
        print('TRIANGULO ISOSCELES')

# https://www.beecrowd.com.br/judge/pt/problems/view/1045
# Ranking 08234º, Time 0.029, Submiss Date 02/03/2023 19:00:26 (Python 3.9)
