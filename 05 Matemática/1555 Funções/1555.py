cases = int(input())

for i in range(0, cases):
    x, y = [int(x) for x in input().split(' ')]

    FR = (3*x)**2 + y**2
    FB = 2*(x**2) + (5*y)**2
    FC = -100*x + y**3

    if FR > FB and FR > FC:
        print('Rafael ganhou')
    elif FB > FR and FB > FC:
        print('Beto ganhou')
    else:
        print('Carlos ganhou')

# https://www.beecrowd.com.br/judge/pt/problems/view/1555
# Ranking 01506º, Time 0.467, Submiss Date 06/03/2023 15:33:53 (Python 3.9)
