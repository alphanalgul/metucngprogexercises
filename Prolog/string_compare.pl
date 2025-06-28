%Checks if the two given strings are equal or not
string(S1,S2,S3):-
    string(S1),string(S2),
    ( S1 == S2 -> S3 ="These Strings are equal" ; S3="These strings are not equal").
