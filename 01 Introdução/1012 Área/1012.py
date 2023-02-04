valores = input().split(' ')
A, B, C = valores
A = float(A)
B = float(B)
C = float(C)

areaTrianguloRetangulo = (A * C) / 2
areaCirculo = 3.14159 * C**2
areaTrapezio = (A+B)*C / 2
areaQuadrado = B**2
areaRetangulo = A * B

print(f"TRIANGULO: {areaTrianguloRetangulo:.3f}")
print(f"CIRCULO: {areaCirculo:.3f}")
print(f"TRAPEZIO: {areaTrapezio:.3f}")
print(f"QUADRADO: {areaQuadrado:.3f}")
print(f"RETANGULO: {areaRetangulo:.3f}")

# https://www.beecrowd.com.br/judge/pt/problems/view/1012
# Ranking 03349º, Time 0.003, Submiss Date 04/02/2023 09:08:10 (Python 3.9)
