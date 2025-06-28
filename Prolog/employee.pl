employee(193, 'Jones', 'John', '173 Elm St.', 'Hoboken', 'NJ', 12345, 1, '25 Jun 93', 25500).
employee(181, 'Doe', 'Betty', '11 Spring St.', 'Paterson', 'NJ', 12354, 3, '12 May 91', 28500).
well_paid_emp(First, Last) :-
    employee(_, Last, First, _, _, _, _, _, _, Salary),
    Salary > 28000.
