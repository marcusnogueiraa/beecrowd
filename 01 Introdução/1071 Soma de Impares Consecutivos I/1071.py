x = int(input())
y = int(input())
sum = 0
for num in range(y+1, x):
    if num % 2 == 1:
        sum += num
print(sum)

# https://www.beecrowd.com.br/judge/pt/problems/view/1071
# Ranking 01565º, Time 0.006, Submiss Date 04/03/2023 02:04:31 (Python 3.9)
