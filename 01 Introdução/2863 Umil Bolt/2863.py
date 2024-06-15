min_values = []
while True:
    try:
        cases = int(input())
        testes = []
        for i in range(cases):
            testes.append(float(input()))
        min_values.append(min(testes))
    except EOFError:
        print(*min_values, sep='\n')
        break
    
# https://www.beecrowd.com.br/judge/pt/problems/view/2863
# Ranking 00070º, Time 0.000, Submiss Date 06/04/2023 22:47:03 (Python 3.9)