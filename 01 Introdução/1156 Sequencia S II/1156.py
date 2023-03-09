soma = 1
dem = 2
for num in range(3, 40, 2):
    soma += num / dem
    dem *= 2

print(f'{soma:.2f}')

# https://www.beecrowd.com.br/judge/pt/problems/view/1156
# Ranking 03097º, Time 0.030, Submiss Date 08/03/2023 23:59:39 (Python 3.9)
