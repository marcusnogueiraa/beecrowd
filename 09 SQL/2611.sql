SELECT movies.id, movies.name
FROM movies
INNER JOIN genres ON movies.id_genres = genres.id
WHERE genres.description = 'Action';

-- https://www.beecrowd.com.br/judge/pt/problems/view/2611
-- Ranking 01601º, Time 0.002, Submiss Date 30/06/2023 00:35:26 (PostgreSQL)