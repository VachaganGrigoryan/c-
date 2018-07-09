n = int(input())
s = input()
new = s.split(' ')
A = []
sum_ = 0
for i in new:
    A.append(int(i))
    sum_ = sum_ + int(i)
    
A = sorted(A)
include = [0] * n
l_len = n
r_len = 0
l_sum = sum_
r_sum = 0
diff_before = sum_
while True:
    if l_sum > r_sum:
        for i in range(n-1):
            if include[i] == 0 and abs((l_sum - A[i]) - (r_sum + A[i])) < abs(l_sum - r_sum): 
                include[i] = 1
                l_sum -=A[i]
                r_sum += A[i]
    elif r_sum > l_sum:
        for i in range(n-1):
            if include[i] == 1 and abs((r_sum - A[i]) - (l_sum + A[i])) < abs(l_sum - r_sum): 
                include[i] = 0
                r_sum -=A[i]
                l_sum += A[i]
    diff_after = abs(l_sum - r_sum)
    if diff_before == diff_after or diff_after == 0:
        break
    elif diff_after < diff_before:
        diff_before = diff_after
a = int(abs(l_sum - r_sum))
print(a)