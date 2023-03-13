prices = {
    "1001": 1.5,
    "1002": 2.5,
    "1003": 3.5,
    "1004": 4.5,
    "1005": 5.5
}

num = int(input())
value = 0

for i in range(0, num):
    buy_id, quantity = input().split(' ')
    value += prices[buy_id] * int(quantity)


print(f'{value:.2f}')

# https://www.beecrowd.com.br/judge/pt/problems/view/1985
# Ranking 01626º, Time 0.056, Submiss Date 13/03/2023 23:31:30 (Python 3.9)
