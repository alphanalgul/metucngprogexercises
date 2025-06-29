x = int(input("Enter x:"))
y = int(input("Enter y:"))

def leastcommonmultiple(x,y):
    if(x%y == 0 or y%x == 0):
        if(x>y):
            return x
        else:
            return y
    elif(x>y):
        return (x*y)/greatestcommondivisor(x,y)
    elif(y>x):
        return (x*y)/greatestcommondivisor(x,y)
    else:
        return x
    
def greatestcommondivisor(x,y):
    if(x>y):
        big = x
        small = y
    elif(y>x):
        big = y
        small = x
    else:
        return x
    
    while(small != 0):
        temp = big%small
        big = small
        small = temp
          
    return big

print(leastcommonmultiple(x,y))
print(greatestcommondivisor(x,y))
