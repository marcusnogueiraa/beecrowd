line = input()
num = list(line)
tam = len(num)
mala_suerte = False
for i in range(1, tam):
    if (num[i] == '3' and num[i-1] == '1'): mala_suerte = True


if mala_suerte: print(line, "es de Mala Suerte")
else: print(line, "NO es de Mala Suerte")

# https://www.beecrowd.com.br/judge/pt/problems/view/3299
# Ranking 00056º, Time 0.000, Submiss Date 16/04/2023 12:31:19 (Python 3.9)