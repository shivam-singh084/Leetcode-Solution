SELECT a.unique_id, b.name
FROM Employees b
LEFT JOIN EmployeeUNI a
ON b.id = a.id;