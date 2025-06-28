% subtract(X, Y, Z) is true when X - Y = Z.
% Works in any direction if two values are known.

subtract(X,Y,Z):-number(X),number(Y),Z is X-Y.
subtract(X,Y,Z):-number(X),number(Z), Y is X-Z.
subtract(X,Y,Z):-number(Y),number(Z), X is Y+Z.

