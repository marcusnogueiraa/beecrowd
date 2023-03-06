def is_primo(num)
  if 1 >= num
    return false
  end
  
  divisor = 2

  while divisor**2 <= num
    if num % divisor == 0
      return false
    end
    divisor += 1
  end

  return true
end

cases = gets.to_i

for i in 1..cases do
  num = gets.to_i
  if is_primo(num)
    puts "Prime"
  else
    puts "Not Prime"
  end

end

# https://www.beecrowd.com.br/judge/pt/problems/view/1221
# Ranking 00013º, Time 0.703, Submiss Date 06/03/2023 19:15:48 (Ruby 2.7)