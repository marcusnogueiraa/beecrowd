num1, num2 = [int(x) for x in input().split(' ')]

if num1 % num2 == 0 or num2 % num1 == 0:
    print('Sao Multiplos')
else:
    print('Nao sao Multiplos')

# https://www.beecrowd.com.br/judge/pt/problems/view/1044
# Ranking 13101º, Time 0.049, Submiss Date 04/03/2023 01:37:47 (Python 3.9)
