SELECT
  cust.name, rent.rentals_date
FROM
  customers cust
JOIN rentals rent
ON (cust.id = rent.id_customers)
WHERE
  extract(month from rent.rentals_date) = 9;