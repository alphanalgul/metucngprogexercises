% add(X, Y, Z) is true when X + Y = Z.
% Works in any direction if two values are known.

add(X,Y,Z):-number(X),number(Y),Z is X+Y.
add(X,Y,Z):-number(X),number(Z),Y is Z-X.
add(X,Y,Z):-number(Y),number(Z),X is Z-Y.
