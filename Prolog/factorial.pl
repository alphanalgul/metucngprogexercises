%computes the factorial of the given number recursively

factorial(0,1).
factorial(1,1).
factorial(X,Y):-
    number(X),
    X1 is X-1,
    factorial(X1,Y1),
    Y is X*Y1.
