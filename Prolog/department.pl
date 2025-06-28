employee(193,'Jones','John','173 Elm St.','Hoboken','NJ', 12345,1,'25 Jun 93',25500).
employee(181,'Doe','Betty','11 Spring St.','Paterson','NJ', 12354,3,'12 May 91',28500).

department(1,'Grocery',181).
department(3,'Deli',193).
department(5,'Produce',199).

deli_manager(First,Last):-
    department(_,'Deli',MngrID),employee(MngrID,Last,First,_,_,_,_,_,_,_).


