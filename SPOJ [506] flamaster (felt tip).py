def felt_tip(chars):
    """Replacing long repeating of chars with number of repetitions. 

    If number of repetition of some char is bigger than 2 it replaces 
    
    it with a number of repetitions.

    Example: 

    Input string: VBAABBBCCCC

    output string: VBAAB3C4
    
    Args:        
        number: word of type string

    Returns:        
        A string in a shorten version of type string.
    """

    length = len(chars)
    result = chars[0]
    counter = 0
    for i in range(length-1):
        if chars[i+1] == '*':
            if counter == 1:
                result += chars[i]
            elif counter >= 2:
                result += str(counter+1)
            return result
        elif chars[i] == chars[i+1]:
            counter += 1
        else:
            if counter == 0:
                result += chars[i+1]
            elif counter == 1:
                result += chars[i]
                result += chars[i+1]
            elif counter >= 2:
                result += str(counter+1)
                result += chars[i+1]
            counter = 0

n = int(input())
for i in range(n):
    chars = input()
    print(felt_tip(chars+'*'))
