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
        print(num, "eh primo")
    else:
        print(num, "nao eh primo")

# https://www.beecrowd.com.br/judge/pt/problems/view/1165
# Ranking 00046º, Time 0.000, Submiss Date 09/03/2023 01:19:57 (Python 3.9)
