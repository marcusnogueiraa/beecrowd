SELECT movies.id, movies.name
FROM movies
INNER JOIN prices ON movies.id_prices = prices.id
WHERE prices.value < 2.00;

-- https://www.beecrowd.com.br/judge/pt/problems/view/2613
-- Ranking 02106º, Time 0.002, Submiss Date 30/06/2023 00:41:53 (PostgreSQL)