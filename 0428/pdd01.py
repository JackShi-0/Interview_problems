import sys

def compute(n):
    index = 0
    output = []
    while n > 0 :
        if n % 2 != 0:
            output.append(index)
            n = n-1
        n = n // 2 
        index += 1
    output = [str(index-x) for x in output]
    output = output[::-1]
    # output = sorted(output,reverse=True)
    return output, index

t = int(sys.stdin.readline().strip())

for _ in range(t):
    n = int(sys.stdin.readline().strip())
    output, index = compute(n)
    print(index)
    print(" ".join(output))

# ///2 3 5  //2  1 2  3  1 3 
# // 1 2    //2  1