SELECT 
  prod.name, cat.name 
FROM 
  categories cat 
JOIN 
  products prod ON (prod.id_categories = cat.id) 
WHERE 
  prod.amount > 100 AND (cat.id >= 1 AND cat.id <= 3 OR cat.id = 6 OR cat.id = 9) 
ORDER BY 
  cat.id ASC;