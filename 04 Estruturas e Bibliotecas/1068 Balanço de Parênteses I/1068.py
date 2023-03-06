while True:
    try:
        expressao = input()

        aberturas = encerramentos = 0
        expressao_valida = True

        for digito in list(expressao):
            if digito == '(':
                aberturas += 1
            elif digito == ')':
                encerramentos += 1
            else:
                continue

            if encerramentos > aberturas:
                expressao_valida = False

        if expressao_valida and aberturas == encerramentos:
            print('correct')
        else:
            print('incorrect')
    except EOFError:
        break

# https://www.beecrowd.com.br/judge/pt/problems/view/1068
# Ranking 01430º, Time 0.338, Submiss Date 06/03/2023 02:44:00 (Python 3.9)
