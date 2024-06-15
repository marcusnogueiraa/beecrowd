cases = int(input())

for i in range(cases):
    line = input()
    if line == 'P=NP':
        print('skipped')
    else:
        v1, v2 = map(int, line.split('+'))
        print(v1+v2)

# https://www.beecrowd.com.br/judge/pt/problems/view/3241
# Ranking 00088º, Time 0.022, Submiss Date 29/04/2023 13:24:07 (Python 3.9)