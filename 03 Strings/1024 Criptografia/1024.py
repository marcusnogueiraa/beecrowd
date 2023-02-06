def invertText(text):
    return text[::-1]


cases = int(input())
for i in range(cases):
    text = list(input())
    for letter in range(len(text)):
        if (90 >= ord(text[letter]) >= 65) or (122 >= ord(text[letter]) >= 97):
            text[letter] = chr(ord(text[letter]) + 3)
    text = invertText(text)

    init = len(text) // 2 if len(text) % 2 == 0 else (len(text) - 1) // 2

    for letter in range(init, len(text)):
        text[letter] = chr(ord(text[letter]) - 1)

    print(''.join(text))

# https://www.beecrowd.com.br/judge/pt/problems/view/1024
# Ranking 03029º, Time 	1.863, Submiss Date 06/02/2023 13:17:50 (Python 3.9)
