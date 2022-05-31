SELECT employee_id, IF(((employee_id % 2) <> 0) AND (name not like 'M%'), salary, 0) as bonus
    FROM Employees;
	
	
	
-------- Another solution
SELECT employee_id,
	CASE 
		WHEN SUBSTRING(name, 1, 1) <> 'M' AND employee_id % 2 <> 0 THEN salary
		ELSE 0
	END AS bonus
	FROM Employees;
	