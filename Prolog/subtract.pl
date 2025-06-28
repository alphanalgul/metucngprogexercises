subtract(X,Y,Z):-number(X),number(Y),Z is X-Y.
subtract(X,Y,Z):-number(X),number(Z), Y is X-Z.
subtract(X,Y,Z):-number(Y),number(Z), X is Y+Z.

