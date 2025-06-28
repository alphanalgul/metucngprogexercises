% Determines which of the two given numbers is greater and prints out the maximum number to the user

find_max(X,Y,Max):-
   ( X>=Y ->Max = X; Max = Y).
