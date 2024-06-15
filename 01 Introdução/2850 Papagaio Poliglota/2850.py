while True:
    try:
        levantou = input()
        if levantou == 'esquerda':
            print('ingles')
        elif levantou == 'direita':
            print('frances')
        elif levantou == 'nenhuma':
            print('portugues')
        else:
            print('caiu')

    except EOFError:
        break

# https://www.beecrowd.com.br/judge/pt/problems/view/2850
# Ranking 00603º, Time 0.034, Submiss Date 03/04/2023 01:11:33 (Python 3.9)
