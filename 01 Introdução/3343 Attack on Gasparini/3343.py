num_t, tam_m = [int(x) for x in input().split(' ')]
sequencia = input()
P, M, G = [int(x) for x in input().split(' ')]
muralhas = [tam_m]

num_muralhas = 1

checkpoints = {
    "P": 0,
    "M": 0,
    "G": 0
}

for i in range(0, num_t):
    if sequencia[i] == 'P': 
       titan_atual = P
       cpt = 'P'
    if sequencia[i] == 'M':
       titan_atual = M
       cpt = 'M'
    if sequencia[i] == 'G':
       titan_atual = G
       cpt = 'G'

    while titan_atual > muralhas[checkpoints[cpt]]:
       checkpoints[cpt] += 1
       if checkpoints[cpt] > num_muralhas - 1:
          muralhas.append(tam_m)
          num_muralhas += 1
    else:
       muralhas[checkpoints[cpt]] -= titan_atual
    
print(num_muralhas)

# https://www.beecrowd.com.br/judge/pt/problems/view/3343
# Ranking 00058º, Time 1.123, Submiss Date 15/04/2023 17:35:18 (Python 3.9)