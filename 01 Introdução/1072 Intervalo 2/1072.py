cases = int(input())
inr = outr = 0
for i in range(0, cases):
    num = int(input())
    if 20 >= num >= 10:
        inr += 1
    else:
        outr += 1
print(inr, 'in')
print(outr, 'out')

# https://www.beecrowd.com.br/judge/pt/problems/view/1072
# Ranking 06655º, Time 0.025, Submiss Date 08/03/2023 04:37:49 (Python 3.9)
