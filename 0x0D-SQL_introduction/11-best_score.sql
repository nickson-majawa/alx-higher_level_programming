-- Script that lists all recors with a score >= 10 in table second_table
SELECT score, name
FROM second_table
WHERE score >= 10
ORDER BY score DESC
