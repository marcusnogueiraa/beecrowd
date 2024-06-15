N = int(input())

initial = input()
if initial == 'A': copos = [1,0,0]
elif initial == 'B': copos = [0,1,0]
elif initial == 'C': copos = [0,0,1]

for i in range(N):
    mov = input()
    if mov == '1':
        aux = copos[0]
        copos[0] = copos[1]
        copos[1] = aux
    elif mov == '2':
        aux = copos[1]
        copos[1] = copos[2]
        copos[2] = aux
    elif mov == '3':
        aux = copos[0]
        copos[0] = copos[2]
        copos[2] = aux

for i in range(3):
    if copos[i] == 1:
        if i == 0: print('A')
        elif i == 1: print('B')
        elif i == 2: print('C')

# https://www.beecrowd.com.br/judge/pt/problems/view/3053
# Ranking 00484º, Time 0.000, Submiss Date 16/04/2023 11:35:55 (Python 3.9)