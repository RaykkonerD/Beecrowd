SELECT
  cust.id, cust.name
FROM
  customers cust
WHERE
  cust.id NOT IN(
      SELECT loc.id_customers
      FROM locations loc
      )
ORDER BY
  cust.id