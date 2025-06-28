
employee(193,'Jones','John','173 Elm St.','Hoboken','NJ', 12345,1,'25 Jun 93',25500).
employee(181,'Doe','Betty','11 Spring St.','Paterson','NJ', 12354,3,'12 May 91',28500).
employee(127,'Jack','Williams','13 Stuart St.','Kingston','NJ', 12445,3,'27 Sep
92',29950).

employee_list(First,Last,DeptNum,InputSalary):-

 employee(_,Last,First,_,_,_,_,Dept_id,_,Salary),
 (Dept_id =:= DeptNum ; Salary < InputSalary).
