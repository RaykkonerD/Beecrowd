SELECT 
  mv.id, mv.name
FROM
  movies mv
  JOIN genres g
  ON (g.id = mv.id_genres)
WHERE
  g.description = 'Action'