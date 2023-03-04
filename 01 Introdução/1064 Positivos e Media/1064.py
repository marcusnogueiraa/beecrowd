positiveNums = 0
sum = 0
for i in range(0, 6):
    num = float(input())
    if num > 0:
        sum += num
        positiveNums += 1
print(positiveNums, 'valores positivos')
print(f'{sum / positiveNums:.1f}')

# https://www.beecrowd.com.br/judge/pt/problems/view/1064
# Ranking 13840º, Time 0.279, Submiss Date 04/03/2023 01:53:45 (Python 3.9)
