SELECT
  c.name, o.id
FROM
  customers c
  JOIN orders o
  ON(c.id = o.id_customers)
WHERE
  extract(month from o.orders_date) <= 6
ORDER BY
  o.id