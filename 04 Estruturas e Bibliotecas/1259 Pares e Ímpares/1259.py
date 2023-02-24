cases = int(input())
evenNums = []
oddNums = []

for i in range(0, cases):
    num = int(input())

    if num % 2 == 1:
        oddNums.append(num)
    else:
        evenNums.append(num)

evenNums.sort()
oddNums.sort(key=lambda num: num * -1)

for num in evenNums:
    print(num)

for num in oddNums:
    print(num)

# https://www.beecrowd.com.br/judge/pt/problems/view/1259
# Ranking 01731º, Time 0.530, Submiss Date 23/02/2023 09:51:20 (Python 3.9)
