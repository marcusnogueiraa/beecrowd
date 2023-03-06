def FR(x, y)
  return (3 * x)**2 + y**2
end

def FB(x, y)
  return 2 * (x**2) + (5 * y)**2
end

def FC(x, y)
  return -100 * x + y**3
end

cases = gets.to_i

for i in 0..cases do
  x, y = gets.to_s.strip.split(' ')
  x = x.to_i
  y = y.to_i

  if FR(x, y) > FB(x, y) and FR(x, y) > FC(x, y)
    puts "Rafael ganhou"
  elsif FB(x, y) > FR(x, y) and FB(x, y) > FC(x, y)
    puts "Beto ganhou"
  elsif FC(x, y) > FB(x, y) and FC(x, y) > FR(x, y)
    puts "Carlos ganhou"
  end
end

# https://www.beecrowd.com.br/judge/pt/problems/view/1555
# Ranking 00012º, Time 0.176, Submiss Date 06/03/2023 15:47:31 (Ruby 2.7)