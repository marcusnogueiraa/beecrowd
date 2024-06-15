key = [2,2,2,3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,7,8,8,8,9,9,9,9]

while True:
    try:
        telphone = input().upper()
        for char in telphone:
          if "A" <= char <= "Z":
              print(key[ord(char) - ord("A")], end="")
          elif "0" <= char <= "9" or char == "*" or char == "#":
              print(char, end="")
        print()
    except EOFError:
        break
    
# https://www.beecrowd.com.br/judge/pt/problems/view/2678
# Ranking 00117º, Time 0.058, Submiss Date 17/07/2023 18:15:34 (Python 3.9)