%Returns the first and last names of the employees whose department is the same as the 
%given department or their salary is smaller than the given salary

employee(193,'Jones','John','173 Elm St.','Hoboken','NJ', 12345,1,'25 Jun 93',25500).
employee(181,'Doe','Betty','11 Spring St.','Paterson','NJ', 12354,3,'12 May 91',28500).
employee(127,'Jack','Williams','13 Stuart St.','Kingston','NJ', 12445,3,'27 Sep
92',29950).

employees(DeptNum, InputSal, First, Last):-
    employee(_,Last,First,_,_,_,_,Dept,_,Sal),
    once((Dept =:= DeptNum ; Sal < InputSal)).
