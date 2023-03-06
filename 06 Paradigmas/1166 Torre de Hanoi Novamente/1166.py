def adcionar_bola(haste, bola):
    for vareta in haste:
        try:
            raiz = (vareta[-1] + bola)**(1/2)
            if raiz == int(raiz):
                vareta.append(bola)
                return True
        except:
            vareta.append(bola)
            return True
    return False


cases = int(input())

for i in range(0, cases):

    haste = []
    num = int(input())

    for index in range(0, num):
        haste.append([])

    bola = 1
    numero_bolas = 0
    while True:
        if not adcionar_bola(haste, bola):
            print(numero_bolas)
            break

        numero_bolas += 1
        bola += 1

# https://www.beecrowd.com.br/judge/pt/problems/view/1166
# Ranking 00099º, Time 0.160, Submiss Date 06/03/2023 19:03:55 (Python 3.9)
