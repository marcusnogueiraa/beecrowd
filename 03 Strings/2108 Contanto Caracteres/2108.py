mstr_n = 0
mstr = ""

while True:
    line = input().split(' ')
    if line == ["0"]:
        break
    for i in range(len(line)):
        tam = len(line[i])
        if i != 0:
            print("-", end="")
        print(tam, end="")
        if tam >= mstr_n:
            mstr_n = tam
            mstr = line[i]     
    print()

    
print(f"\nThe biggest word: {mstr}")

# https://www.beecrowd.com.br/judge/pt/problems/view/2108
# Ranking 00084º, Time 0.001, Submiss Date 26/06/2023 18:41:07 (Python 3.9)
