hora1, min1, hora2, min2 = gets.split.map(&:to_i)

horas = 0
minutos = 0

if hora1 == hora2 and min1 == min2
  horas = 24
elsif hora1 == hora2
  if min1 < min2
    minutos = min2 - min1
  elsif min1 > min2
    horas = 23
    minutos = 60 - (min1 - min2)
  end
elsif hora1 < hora2
  if min1 == min2
    horas = hora2 - hora1
  else
    horas = hora2 - hora1 - 1
    minutos = (60 - min1) + min2
    if minutos > 59
      minutos -= 60
      horas += 1
    end
  end
elsif min1 == min2
  horas = 24 - hora1 + hora2
else
  horas = 23 - hora1 + hora2
  minutos = (60 - min1) + min2
  if minutos > 59
    minutos -= 60
    horas += 1
  end
end

puts "O JOGO DUROU #{horas} HORA(S) E #{minutos} MINUTO(S)"

# https://www.beecrowd.com.br/judge/pt/problems/view/1047
# Ranking 00076º, Time 0.241, Submiss Date 05/03/2023 17:54:02 (Ruby)