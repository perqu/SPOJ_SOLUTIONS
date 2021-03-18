def is_prime_number(number):
    """Checks if the transmitted number is prime.    
    
    Args:        
        number: digit of type int

    Returns:        
        True/False.
    """

    if number == 2:
        return True
    if number % 2 == 0 or number <= 1:
        return False

    prime = int(number**0.5) + 1
    for divider in range(3, prime, 2):
        if number % divider == 0:
            return False
    return True

n = int(input())

for i in range(n):
    number = int(input())
    if is_prime_number(number) == True:
        print("TAK")
    else:
        print("NIE")