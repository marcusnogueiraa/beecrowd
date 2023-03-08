x, y = [int(x) for x in input().split(' ')]

while x != 0 and y != 0:

    if x > 0 and y > 0:
        print('primeiro')
    elif x < 0 and y > 0:
        print('segundo')
    elif x < 0 and y < 0:
        print('terceiro')
    elif x > 0 and y < 0:
        print('quarto')

    x, y = [int(x) for x in input().split(' ')]

# https://www.beecrowd.com.br/judge/pt/problems/view/1115
# Ranking 06076º, Time 0.061, Submiss Date 08/03/2023 04:46:13 (Python 3.9)
