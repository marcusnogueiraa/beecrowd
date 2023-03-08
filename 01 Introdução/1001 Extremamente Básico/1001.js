var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
    
var num1 = parseInt(lines.shift());
var num2 = parseInt(lines.shift());
   
console.log('X = ' + (num1+num2));

// https://www.beecrowd.com.br/judge/pt/problems/view/1001
// Ranking 09539º, Time 0.669, Submiss Date 08/03/2023 21:52:23 (JavaScript 12.18)