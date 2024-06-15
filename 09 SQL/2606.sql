SELECT products.id, products.name 
FROM products
INNER JOIN categories ON products.id_categories = categories.id
WHERE categories.name LIKE 'super%';

-- https://www.beecrowd.com.br/judge/pt/problems/view/2606
-- Ranking 05923º, Time 0.002, Submiss Date 30/06/2023 00:08:26 (PostgreSQL)