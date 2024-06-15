fim = int(input())
p1, p2 = [int(x) for x in input().split(' ')]
if p1 + p2 > fim:
    print("Deixa para amanha!")
else:
    print("Farei hoje!")

# https://www.beecrowd.com.br/judge/pt/problems/view/2717
# Ranking 00854º, Time 0.022, Submiss Date 03/04/2023 12:24:58 (Python 3.9)
