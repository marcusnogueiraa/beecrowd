Ca, Ba, Pa = [int(x) for x in input().split(' ')]
Cr, Br, Pr = [int(x) for x in input().split(' ')]
total = 0
if Cr - Ca > 0:
    total += Cr - Ca
if Br - Ba > 0:
    total += Br - Ba
if Pr - Pa > 0:
    total += Pr - Pa

print(total)

# https://www.beecrowd.com.br/judge/pt/problems/view/2702
# Ranking 00252º, Time 0.009, Submiss Date 03/04/2023 15:32:19 (Python 3.9)
