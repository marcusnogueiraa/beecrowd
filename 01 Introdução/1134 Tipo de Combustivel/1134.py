options = {"1": 0, "2": 0, "3": 0}
option = input()
while option != "4":
    if 3 >= int(option) >= 1:
        options[option] += 1
    option = input()

print("MUITO OBRIGADO")
print("Alcool:", options["1"])
print("Gasolina:", options["2"])
print("Diesel:", options["3"])

# https://www.beecrowd.com.br/judge/pt/problems/view/1134
# Ranking 07189º, Time 0.095, Submiss Date 08/03/2023 20:18:39 (Python 3.9)
