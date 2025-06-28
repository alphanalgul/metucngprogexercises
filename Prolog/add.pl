add(X,Y,Z):-number(X),number(Y),Z is X+Y.
add(X,Y,Z):-number(X),number(Z),Y is Z-X.
add(X,Y,Z):-number(Y),number(Z),X is Z-Y.
