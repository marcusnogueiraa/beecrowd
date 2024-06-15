SELECT categories.name, sum(products.amount)
FROM categories, products
WHERE products.id_categories = categories.id
GROUP by categories.name;

-- https://www.beecrowd.com.br/judge/pt/problems/view/2609
-- Ranking 07774º, Time 0.007, Submiss Date 30/06/2023 00:19:09 (PostgreSQL)