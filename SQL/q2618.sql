SELECT
   pd.name, pv.name, cg.name
FROM
  products pd
 JOIN providers pv
 ON (pd.id_providers = pv.id)
 JOIN categories cg
 ON (pd.id_categories = cg.id)
WHERE
  pv.name = 'Sansul SA' AND
  cg.name = 'Imported'