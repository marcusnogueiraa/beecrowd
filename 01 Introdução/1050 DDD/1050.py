DDDs = {
    "61": "Brasilia",
    "71": "Salvador",
    "11": "Sao Paulo",
    "21": "Rio de Janeiro",
    "32": "Juiz de Fora",
    "19": "Campinas",
    "27": "Vitoria",
    "31": "Belo Horizonte"
}

num = input()

if num in DDDs.keys():
    print(DDDs[num])
else:
    print('DDD nao cadastrado')

# https://www.beecrowd.com.br/judge/pt/problems/view/1050
# Ranking 14514º, Time 0.083, Submiss Date 02/03/2023 18:45:03 (Python 3.9)
