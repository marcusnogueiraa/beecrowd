values = input().split(' ')
A, B, C, D = [int(n) for n in values]

was_accepted1 = B > C and D > A and C+D > A+B
was_accepted2 = C > 0 and D > 0 and A % 2 == 0

if was_accepted1 and was_accepted2:
    print('Valores aceitos')
else:
    print('Valores nao aceitos')

# https://www.beecrowd.com.br/judge/pt/problems/view/1035
# Ranking 21454º, Time 0.343, Submiss Date 08/02/2023 00:56:29 (Python 3.9)
