def multiplication(a,b):
    """Returns multiplication of 2 numbers
    
    Args:        
        a: first number of type int
        b: second number of type int

    Returns:        
        A multiplication for that two numbers of type int
    """
    return a*b

n = int(input())
for i in range(n):
    a,b = input().split()
    print(multiplication(int(a), (int(b))))