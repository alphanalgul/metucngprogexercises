% Determines which of the two given numbers is greater

find_max(X,Y,Max):-
   ( X>=Y ->Max = X; Max = Y).
