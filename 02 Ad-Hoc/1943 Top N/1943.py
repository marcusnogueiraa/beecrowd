K = int(input())

if K == 1:
    print('Top 1')
elif K <= 3:
    print('Top 3')
elif K <= 5:
    print('Top 5')
elif K <= 10:
    print('Top 10')
elif K <= 25:
    print('Top 25')
elif K <= 50:
    print('Top 50')
elif K <= 100:
    print('Top 100')

# https://www.beecrowd.com.br/judge/pt/problems/view/1943
# Ranking 00696º, Time 0.033, Submiss Date 06/04/2023 11:15:25 (Python 3.9)