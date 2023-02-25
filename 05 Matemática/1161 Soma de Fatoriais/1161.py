def factorial(num):
    result = 1
    for index in range(num, 0, -1):
        result *= index
    return result


while True:
    try:
        num1, num2 = [int(num) for num in input().split(' ')]
        print(factorial(num1) + factorial(num2))
    except EOFError:
        break

# https://www.beecrowd.com.br/judge/pt/problems/view/1161
# Ranking 01792º, Time 0.029, Submiss Date 25/02/2023 17:19:37 (Python 3.9)
