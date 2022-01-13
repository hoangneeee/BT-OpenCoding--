from math import trunc

# trunc tra ve mot so nguyen la phan nguyen cua x
t = int(input())
while(t > 0):
    list_items = input().split()
    a = int(list_items[0])
    b = int(list_items[1])
    divide= a/b
    remainder = a%b

    print(trunc(divide), remainder)
    t -= 1
