salary = float(input())
if 2000 > salary:
    print("Isento")
elif 3000 >= salary:
    print(f"R$ {0.08 * (salary - 2000):.2f}")
elif 4500 >= salary:
    print(f"R$ {(salary - 3000) * 0.18 + 0.08 * 1000:.2f}")
else:
    print(f"R$ {(salary - 4500) * 0.28 + 1500 * 0.18 + 0.08 * 1000:.2f}")

# https://www.beecrowd.com.br/judge/pt/problems/view/1051
# Ranking 08152º, Time 0.033, Submiss Date 04/03/2023 01:44:47 (Python 3.9)
