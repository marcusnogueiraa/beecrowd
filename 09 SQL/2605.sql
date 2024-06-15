SELECT products.name, providers.name
FROM products
INNER JOIN providers ON providers.id = products.id_providers
WHERE products.id_categories = 6;

-- https://www.beecrowd.com.br/judge/pt/problems/view/2605
-- Ranking 07098º, Time 0.002, Submiss Date 29/06/2023 23:58:13 (PostgreSQL)