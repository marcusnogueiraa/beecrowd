num = input()
lista = input().split(' ')
acertos = 0
for cha in lista:
    if cha == num:
        acertos +=1
print(acertos)

# https://www.beecrowd.com.br/judge/pt/problems/view/2006
# Ranking 00295º, Time 0.008, Submiss Date 03/04/2023 21:14:04 (Python 3.9)