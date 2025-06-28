%Computes the values of Y based on the values of X
%If X > 4:    Y = X⁴ + 3X + 1
%If X < 0:    Y = X² + 2X + 24
%Else (0 ≤ X ≤ 4): Y = X³

a_function(X,Y):-
     number(X),
     (X>4 -> Y is X**4+3*X+1
     ;X<0 -> Y is X**2+2*X+24
     ;Y is X**3).

%Base cases F(0) = 3(X=0) F(1) = 4(X=1)
%Compute the Values of Y based on the two previous values of X
%Y = 3*F(X-1) + 2*F(X-2)+1
recfunc(0,3).
recfunc(1,4).
recfunc(X,Y):-
     number(X),
     X1 is X-1,
     X2 is X-2,
     recfunc(X1,Y1),
     recfunc(X2,Y2),
     Y is 3*Y1+2*Y2+1.
