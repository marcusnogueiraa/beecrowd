novo_grenal = "1"
grenais = 0
v_gremio = v_inter = empates = 0
while novo_grenal == "1":
    inter, gremio = [int(x) for x in input().split(' ')]

    if gremio > inter:
        v_gremio += 1
    elif inter > gremio:
        v_inter += 1
    else:
        empates += 1
    grenais += 1

    print('Novo grenal (1-sim 2-nao)')
    novo_grenal = input()

print(grenais, "grenais")
print(f"Inter:{v_inter}")
print(f"Gremio:{v_gremio}")
print(f"Empates:{empates}")

if v_inter > v_gremio:
    print("Inter venceu mais")
elif v_gremio > v_inter:
    print("Gremio venceu mais")
else:
    print("Nao houve vencedor")

# https://www.beecrowd.com.br/judge/pt/problems/view/1131
# Ranking 03970º, Time 0.029, Submiss Date 08/03/2023 20:59:53 (Python 3.9)
