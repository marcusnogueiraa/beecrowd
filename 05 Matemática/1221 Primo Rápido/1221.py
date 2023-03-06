def is_primo(num):
    if 1 >= num:
        return False

    divisor = 2

    while divisor**2 <= num:
        if num % divisor == 0:
            return False
        divisor += 1

    return True


cases = int(input())


for i in range(0, cases):
    num = int(input())
    if is_primo(num):
        print('Prime')
    else:
        print('Not Prime')

# https://www.beecrowd.com.br/judge/pt/problems/view/1221
# Ranking 01242º, Time 0.961, Submiss Date 06/03/2023 16:44:01 (Python 3.9)
