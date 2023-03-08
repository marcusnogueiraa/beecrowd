num = int(input())

fib = fibA = 0
for i in range(0, num):
    if fib == 0:
        print(fib, end='')
        fib += 1
    else:
        print('', fib, end='')
        aux = fib
        fib = fib + fibA
        fibA = aux
print()

# https://www.beecrowd.com.br/judge/pt/problems/view/1151
# Ranking 00916º, Time 0.000, Submiss Date 08/03/2023 21:19:36 (Python 3.9)
