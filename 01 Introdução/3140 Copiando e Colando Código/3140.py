in_body = False
while True:
    try:
        linha = input()
        if linha.strip() == '</body>': in_body = False

        if in_body:
            print(linha)

        if linha.strip() == '<body>': in_body = True
    except:
        break
    
# https://www.beecrowd.com.br/judge/pt/problems/view/3140
# Ranking 00132º, Time 0.365, Submiss Date 16/04/2023 11:45:57 (Python 3.9)