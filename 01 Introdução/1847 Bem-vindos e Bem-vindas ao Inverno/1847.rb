A, B, C = gets.split.map(&:to_i)

if A > B and C >= B
  puts ":)"
elsif B > A and B >= C
  puts ":("
elsif C > B and B > A and C-B < B-A
  puts ":("
elsif C > B and B > A and C-B >= B-A
  puts ":)"
elsif A > B and B > C and B-C < A-B
  puts ":)"
elsif A > B and B > C and B-C >= A-B
  puts ":("
elsif A == B and C > B
  puts ":)"
else
  puts ":("
end

# https://www.beecrowd.com.br/judge/pt/problems/view/1847
# Ranking 00018º, Time 0.128, Submiss Date 01/04/2023 19:35:26 (Ruby)