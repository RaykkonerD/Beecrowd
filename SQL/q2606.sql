SELECT
  prod.id, prod.name
FROM
  products prod
JOIN
  categories catg
ON (prod.id_categories = catg.id AND
    catg.name like 'super%')