divide(X,Y,Z):-number(X),number(Y),Z is X/Y.
divide(X,Y,Z):-number(X),number(Z),Y is X/Z.
divide(X,Y,Z):-number(Y),number(Z),X is Y*Z.
