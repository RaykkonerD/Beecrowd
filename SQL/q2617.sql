SELECT
  prod.name, prov.name
FROM
  products prod
 JOIN providers prov
 ON (prod.id_providers = prov.id AND
 prov.name = 'Ajax SA')