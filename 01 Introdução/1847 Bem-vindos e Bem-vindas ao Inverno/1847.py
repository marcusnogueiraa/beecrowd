A, B, C = [int(x) for x in input().split(' ')]

if (A > B and C >= B):
    print(":)")
elif (B > A and B >= C):
    print(":(")
elif (C > B > A and C-B < B-A):
    print(":(")
elif (C > B > A and C-B >= B-A):
    print(":)")
elif (A > B > C and B-C < A-B):
    print(":)")
elif (A > B > C and B-C >= A-B):
    print(":(")
elif (A == B and C > B):
    print(":)")
else:
    print(":(")

# https://www.beecrowd.com.br/judge/pt/problems/view/1847
# Ranking 00906º, Time 0.021, Submiss Date 01/04/2023 19:11:17 (Python 3.9)
