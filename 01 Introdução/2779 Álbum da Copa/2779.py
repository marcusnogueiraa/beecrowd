total = int(input())
figurinhas = set()
num_figurinhas = int(input())
for i in range(num_figurinhas):
    fig = int(input())
    figurinhas.add(fig)
print(total - len(figurinhas))

# https://www.beecrowd.com.br/judge/pt/problems/view/2779
# Ranking 00093º, Time 0.000, Submiss Date 03/04/2023 15:26:12 (Python 3.9)
