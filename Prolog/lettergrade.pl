lettergrade(Grade,Result):-
    (Grade >=90 -> Result = "You passed with an AA";
     Grade >=85 -> Result = "You passed with a BA";
     Grade >=80 -> Result = "You passed with a BB";
     Grade >=75 -> Result = "You passed with a CB";
     Grade >=70 -> Result = "You passed with a CC";
     Grade >=65 -> Result = "You passed with a DC";
     Grade >=60 -> Result = "You passed with a DD";
     Grade >=50 -> Result = "You failed with an FD";
     Grade >=0 ->  Result = "You failed with an FF";
     Result = "Undefined Grade").
