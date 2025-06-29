#It finds the center of the string, then backs up one character, and prints 3 characters starting there.
string='AbCdEfGhI'
length=len(string)
length=length//2-1
print(string[length:length+3])