A, B, C = [float(x) for x in input().split(' ')]

if A+B > C and A+C > B and B+C > A:
    print(f'Perimetro = {A+B+C}')
else:
    print(f'Area = {(A+B)*C/2}')

# https://www.beecrowd.com.br/judge/pt/problems/view/1043
# Ranking 12832º, Time 0.076, Submiss Date 02/03/2023 15:51:40 (Python 3.9)
