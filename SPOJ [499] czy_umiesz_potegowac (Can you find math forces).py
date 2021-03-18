def last_digit_of_force(power, exponent):
    """Count last digit of a exponentation by using modulo.    
    
    Args:        
        power: digit of type int
        exponent: digit of type int

    Returns:        
        A last digit of a number.
    """
    
    if exponent % 4 == 1: return power
    elif exponent % 4 == 2: return str(power**2)[-1]
    elif exponent % 4 == 3: return str(power**3)[-1]
    elif exponent % 4 == 0: return str(power**4)[-1]
    
n = int(input())
for i in range(n):
    p, e = input().split()
    p = p[-1] #takes last digit of a power
    print(last_digit_of_force(int(p),int(e)))