cases = int(input())
fibs = [0, 1]

for i in range(0, cases):
    x = int(input())

    try:
        fib = fibs[x]
    except:
        quantidade = len(fibs)
        while quantidade != x+1:
            fibs.append(fibs[-1] + fibs[-2])
            quantidade += 1
        fib = fibs[-1]

    print(f"Fib({x}) = {fibs[x]}")

# https://www.beecrowd.com.br/judge/pt/problems/view/1176
# Ranking 05944º, Time 0.127, Submiss Date 09/03/2023 02:55:41 (Python 3.9)
