

def count(n: int):
    if(n < 2):
        return n
    else:
        s = 1 + min(n%3 + count(n/3), n%2 + count(n/2))
	    return s

t = int(input())
while(t > 0):
    n = int(input())
    print(count(n))

