def solve(n, k, m, num):
    left = 0
    right = 0
    count = 0
    flag = False
    for i in range(len(num)):
        if (num[i] % 2 == 1):
            if ~flag : count+=1
            if (right - left + 1 < m):
                flag = True
                right += 1
            else:
                flag = True
                left = i
                right = i
        else:
            flag = False
            left = i
            right = i
        if count > k:
            return False
    return True