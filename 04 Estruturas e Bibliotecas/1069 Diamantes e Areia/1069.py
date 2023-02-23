n = int(input())

for i in range(0, n):
    mine = list(input())

    index = 0
    diamonds = 0

    while True:
        if len(mine) == 0:
            break
        if index >= len(mine):
            index -= 1
        if mine[index] == '.':
            del mine[index]
            continue
        elif index != 0 and mine[index] == '>' and mine[index-1] == '<':
            del mine[index]
            del mine[index-1]
            diamonds += 1
            index -= 1
            continue
        index += 1
        if index >= len(mine):
            break
    print(diamonds)

# https://www.beecrowd.com.br/judge/pt/problems/view/1069
# Ranking 01426º, Time 0.140, Submiss Date 22/02/2023 18:04:16 (Python 3.9)
