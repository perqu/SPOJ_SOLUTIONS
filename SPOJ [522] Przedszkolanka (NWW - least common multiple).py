def GCD(a, b): #NWD
    """Counts GCD of two numbers
    
    Args:        
        a: first number of type int
        b: second number of type int

    Returns:        
        A GCD for that two numbers of type int
    """
    if b > 0:
        return GCD(b, a%b)
    return a

def LCM(a,b): #NWW
    """Counts LCM using base of GCD
    
    Args:        
        a: first number of type int
        b: second number of type int

    Returns:        
        A LCM for that two numbers of type int
    """
    return (a*b)//(GCD(a,b))

n = int(input())
for i in range(n):
    g1,g2 = input().split()
    print(LCM(int(g1),int(g2)))