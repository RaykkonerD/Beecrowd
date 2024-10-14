SELECT
  mv.id, mv.name
FROM
  movies mv
JOIN prices p
ON (mv.id_prices = p.id)
WHERE
  p.value < 2.00