lettergrade(Grade,Result):-
     number(Grade),
     Grade>0,Grade=<100,
    ( Grade >=90 -> Result = "You passed and got an AA"
     ;Grade >=85 -> Result = "You passed and got a BA"
     ;Grade >=80 -> Result = "You passed and got a BB"
     ;Grade >=75 -> Result = "You passed and got a CB"
     ;Grade >=70 -> Result = "You passed and got a CC"
     ;Grade >=65 -> Result = "You passed and got a DC"
     ;Grade >=60 -> Result = "You passed and got a DD"
     ;Grade >=50 -> Result = "You failed with an FD"
     ;Grade <50 ->  Result = "You failed with an FF"
     ;Result = "Invalid Grade").

find_max(X,Y,Max):-
     number(X),number(Y),
     (X>=Y, Max is X
      ;  Max is Y).

factorial(1,1).
factorial(2,1).
factorial(X,Result):-
     number(X),
     X1 is X-1,
     X2 is X-2,
     factorial(X1,R1),
     factorial(X2,R2),
     Result is R1+R2.

power(_,0,1).
power(X,N,Result):-
     number(X),number(N),
     N1 is N-1,
     power(X,N1,R1),
     Result is X*R1.

a_function(X,Y):-
     number(X),
     (X>4 -> Y is X**4+3*X+1
     ;X<0 -> Y is X**2+2*X+24
     ;Y is X**3).

recfunc(0,3).
recfunc(1,4).
recfunc(X,Y):-
     number(X),
     X1 is X-1,
     X2 is X-2,
     recfunc(X1,Y1),
     recfunc(X2,Y2),
     Y is 3*Y1+2*Y2+1.
