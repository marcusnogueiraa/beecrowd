def MDC(num1, num2):
    if (num2 == 0):
        return num1
    else:
        return MDC(num2, num1 % num2)


cases = int(input())

for i in range(0, cases):
    num_ricardo, num_vicente = [int(x) for x in input().split(' ')]
    print(MDC(num_ricardo, num_vicente))

# https://www.beecrowd.com.br/judge/pt/problems/view/1028
# Ranking 01696º, Time 0.389, Submiss Date 06/03/2023 14:27:46 (Python 3.9)
