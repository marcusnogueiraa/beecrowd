m, n = [int(x) for x in input().split(' ')]
while m > 0 and n > 0:
    soma = 0
    for num in range(m, n+1):
        print(num, end=' ')
        soma += num
    print(f"Sum={soma}")
    m, n = [int(x) for x in input().split(' ')]

# https://www.beecrowd.com.br/judge/pt/problems/view/1101
# Ranking 00888º, Time 0.000, Submiss Date 06/03/2023 02:14:33 (Python 3.9)
