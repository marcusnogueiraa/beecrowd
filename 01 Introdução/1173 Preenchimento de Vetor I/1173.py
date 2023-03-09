vetor = []
num = int(input())
vetor.append(num)
for i in range(1, 10):
    vetor.append(num*2)
    num *= 2

for i in range(0, 10):
    print(f'N[{i}] = {vetor[i]}')

# https://www.beecrowd.com.br/judge/pt/problems/view/1173
# Ranking 08157º, Time 0.119, Submiss Date 09/03/2023 01:55:04 (Python 3.9)
