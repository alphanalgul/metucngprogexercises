fibonacci(1,1).
fibonacci(2,1).
fibonacci(X,R):-
    number(X),
    X1 is X-1,
    X2 is X-2,
    fibonacci(X1,R1),
    fibonacci(X2,R2),
    R is R1+R2.
