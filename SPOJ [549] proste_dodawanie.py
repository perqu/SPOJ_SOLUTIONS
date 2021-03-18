def addition(numbers):
    return sum(numbers)

n = int(input())
for i in range(n):
    empty_idiot_string = input()
    numbers = input().split()
    intiger_numbers = list(map(int, numbers))
    print(addition(intiger_numbers))