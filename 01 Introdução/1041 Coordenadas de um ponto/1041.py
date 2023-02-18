values = input().split(" ")
x, y = [float(value) for value in values]

if x != 0 and y == 0:
    print("Eixo X")
elif x == 0 and y != 0:
    print("Eixo Y")
elif y >= x > 0:
    print("Q1")
elif y > 0 > x:
    print("Q2")
elif 0 > x >= y:
    print("Q3")
elif x > 0 > y:
    print("Q4")
else:
    print("Origem")

# https://www.beecrowd.com.br/judge/pt/problems/view/1041
# Ranking 17070º, Time 0.275, Submiss Date 15/02/2023 17:26:17 (Python 3.9)
