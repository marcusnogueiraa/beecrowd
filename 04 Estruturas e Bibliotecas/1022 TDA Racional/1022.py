def getExpressionElements(expression):
    return (int(expression[0]), int(expression[2]), expression[3],
            int(expression[4]), int(expression[6]))


def simplifyFraction(num, den):
    higherNum = max(num, den)
    mdc = 1
    for number in range(1, higherNum + 1):
        if (num % number == 0) and (den % number == 0):
            mdc = number

    return f'{num // mdc}/{den // mdc}'


def calculate(expression):
    num1, den1, op, num2, den2 = getExpressionElements(expression)
    if op == '+':
        num_result = num1*den2 + num2*den1
        den_result = den1*den2
        return f'{num_result}/{den_result} = {simplifyFraction(num_result, den_result)}'
    elif op == '-':
        num_result = num1*den2 - num2*den1
        den_result = den1*den2
        return f'{num_result}/{den_result} = {simplifyFraction(num_result, den_result)}'
    elif op == '*':
        num_result = num1*num2
        den_result = den1*den2
        return f'{num_result}/{den_result} = {simplifyFraction(num_result, den_result)}'
    elif op == '/':
        num_result = num1*den2
        den_result = num2*den1
        return f'{num_result}/{den_result} = {simplifyFraction(num_result, den_result)}'


testCases = int(input())
for i in range(testCases):
    expression = input().split(' ')
    print(calculate(expression))

# https://www.beecrowd.com.br/judge/pt/problems/view/1022
# Ranking 01249º, Time 0.721, Submiss Date 05/02/2023 22:36:37 (Python 3.9)
