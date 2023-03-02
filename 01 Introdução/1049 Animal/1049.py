alsx = input()
tipo = input()
alimentacao = input()

animais = {
    'ave': {'carnivoro': 'aguia', 'onivoro': 'pomba'},
    'mamifero': {'onivoro': 'homem', 'herbivoro': 'vaca'},
    'inseto': {'hematofago': 'pulga', 'herbivoro': 'lagarta'},
    'anelideo': {'hematofago': 'sanguessuga', 'onivoro': 'minhoca'}
}

print(animais[tipo][alimentacao])

# https://www.beecrowd.com.br/judge/pt/problems/view/1049
# Ranking 02228º, Time 	0.004, Submiss Date 02/03/2023 19:50:12 (Python 3.9)
