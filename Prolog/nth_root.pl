%Takes the nth root of the given number and prints the result to the user

root(X,N,Y):- number(X),number(N),Y is X**(1/N).
