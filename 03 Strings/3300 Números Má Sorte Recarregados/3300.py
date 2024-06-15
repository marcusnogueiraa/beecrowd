def mala_suerte(lista, tam):
    for i in range(1, tam):
      if lista[i-1] == '1' and lista[i] == '3':
        return True
    return False

num = input()
lista = list(num)
if mala_suerte(lista, len(lista)):
   print(num, "es de Mala Suerte")
else:
   print(num, "NO es de Mala Suerte")

# https://www.beecrowd.com.br/judge/pt/problems/view/3300
# Ranking 00020º, Time 0.014, Submiss Date 11/04/2023 00:25:00 (Python 3.9)