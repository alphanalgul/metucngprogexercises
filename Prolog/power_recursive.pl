%Computing Nth power of a number and printing the result to the user

power(_,0,1).
power(X,N,Y):-
    number(X),number(N),
    N1 is N-1,
    power(X,N1,Y1),
    Y is X*Y1.
