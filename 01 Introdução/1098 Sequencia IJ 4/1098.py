i = j = 0

while i <= 2:
    if round(i, 2) % 1 == 0:
        print(f"I={i:.0f} J={1+i:.0f}")
        print(f"I={i:.0f} J={2+i:.0f}")
        print(f"I={i:.0f} J={3+i:.0f}")

    else:
        print(f"I={i:.1f} J={1+i:.1f}")
        print(f"I={i:.1f} J={2+i:.1f}")
        print(f"I={i:.1f} J={3+i:.1f}")

    i += 0.2

# https://www.beecrowd.com.br/judge/pt/problems/view/1098
# Ranking 01798º, Time 0.013, Submiss Date 31/03/2023 18:24:14 (Python 3.9)
