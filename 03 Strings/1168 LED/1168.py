numOfLeds = [6, 2, 5, 5, 4, 5, 6, 3, 7, 6]

cases = int(input())

for i in range(0, cases):
    num = input()
    totalLeds = 0
    for digit in list(num):
        totalLeds += numOfLeds[int(digit)]
    print(totalLeds, 'leds')

# https://www.beecrowd.com.br/judge/pt/problems/view/1168
# Ranking 05640º, Time 0.349, Submiss Date 25/02/2023 16:46:02 (Python 3.9)
