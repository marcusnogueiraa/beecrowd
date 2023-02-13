notas = input().split(' ')
A, B, C, D = [float(nota) for nota in notas]

media = (A*2+B*3+C*4+D)/10
print(f'Media: {media:.1f}')
if media >= 7.0:
    resultado = 'Aluno aprovado.'
elif 7 > media >= 5:
    resultado = 'Aluno em exame.'
else:
    resultado = 'Aluno reprovado.'

print(resultado)
if resultado == 'Aluno em exame.':
    nota_do_exame = float(input())
    print(f"Nota do exame: {nota_do_exame:.1f}")
    media = (media + nota_do_exame) / 2
    if media >= 5:
        print("Aluno aprovado.")
    else:
        print("Aluno reprovado.")
    print(f"Media final: {media}")

# https://www.beecrowd.com.br/judge/pt/problems/view/1040
# Ranking 02143º, Time 0.000, Submiss Date 12/02/2023 23:15:07 (Python 3.9)
