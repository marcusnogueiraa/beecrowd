list = input().split(" ")
list = [int(item) for item in list]
print(*sorted(list), sep='\n', end='\n\n')
print(*list, sep='\n')

# https://www.beecrowd.com.br/judge/pt/problems/view/1042
# Ranking 12617º, Time 0.042, Submiss Date 15/02/2023 17:37:02 (Python 3.9)
