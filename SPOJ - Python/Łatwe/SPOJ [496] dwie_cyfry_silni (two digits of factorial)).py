def factorial(number):
    """Count factorial of a number.    
    
    Args:        
        number: digit of type int

    Returns:        
        A factorial of a number of type int.
    """
    
    factorial = 1
    for i in range(number):
        factorial *= (i+1)
    return factorial

def result_print(x):
    x_str = str(x)
    if x < 10:
        print("0 ", x_str[-1])
    else:
        print(x_str[-2]," ",x_str[-1])
    return

n = int(input())
for i in range(n):
    d = int(input())
    if d <= 9:
        d_factorial = factorial(d)
        result_print(d_factorial)
    else:
        result_print(0)