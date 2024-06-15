falha = false
inputs = gets.chomp.split.map(&:to_i)

inputs.each do |inp|
  if inp == 9
    falha = true
    break
  end
end

if falha
  puts "F"
else
  puts "S"
end

# https://www.beecrowd.com.br/judge/pt/problems/view/3432
# Ranking 00001º, Time 0.149, Submiss Date 29/05/2023 03:32:21 (Ruby 2.7)