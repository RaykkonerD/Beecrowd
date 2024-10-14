SELECT
  prod.name, prov.name, prod.price
FROM
  products prod
 JOIN providers prov ON (prod.id_providers = prov.id) 
 JOIN categories catg ON (prod.id_categories = catg.id)
WHERE
  prod.price > 1000 AND catg.name = 'Super Luxury'