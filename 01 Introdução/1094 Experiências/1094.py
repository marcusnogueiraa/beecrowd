cases = int(input())

cobaias = {"C": 0, "R": 0, "S": 0}

for i in range(0, cases):
    num, cobaia = input().split(' ')
    cobaias[cobaia] += int(num)

total_de_cobaias = cobaias['C'] + cobaias['R'] + cobaias['S']
print(f'Total: {total_de_cobaias} cobaias')
print('Total de coelhos:', cobaias['C'])
print('Total de ratos:', cobaias['R'])
print('Total de sapos:', cobaias['S'])
print(f'Percentual de coelhos: {cobaias["C"] / total_de_cobaias * 100:.2f} %')
print(f'Percentual de ratos: {cobaias["R"] / total_de_cobaias * 100:.2f} %')
print(f'Percentual de sapos: {cobaias["S"] / total_de_cobaias * 100:.2f} %')

# https://www.beecrowd.com.br/judge/pt/problems/view/1094
# Ranking 06557º, Time 0.072, Submiss Date 07/03/2023 21:23:43 (Python 3.9)
