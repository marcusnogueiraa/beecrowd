H, Z, L = [int(x) for x in input().split(" ")]
if H > Z and H < L or H > L and H < Z: print("huguinho")
if L > Z and L < H or L > H and L < Z: print("luisinho")
if Z > H and Z < L or Z > L and Z < H: print("zezinho")

# https://www.beecrowd.com.br/judge/pt/problems/view/3301
# Ranking 00252º, Time 0.039, Submiss Date 12/04/2023 13:48:51 (Python 3.9)