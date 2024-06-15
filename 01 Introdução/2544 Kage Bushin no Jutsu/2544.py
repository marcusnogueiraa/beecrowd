def num_jutsu(n):
    if n == 1:
        return 0
    for i in range(1, n // 2 + 1):
        if 2**i == n:
            return i


while True:
    try:
        num_clones = int(input())
        print(num_jutsu(num_clones))
    except EOFError:
        break

# https://www.beecrowd.com.br/judge/pt/problems/view/2544
# Ranking 00739º, Time 0.149, Submiss Date 03/04/2023 00:30:34 (Python 3.9)
