size = int(input())
inputArr = [int(x) for x in input().split()]

maxOfL = max(inputArr)

for i in range (0, maxOfL):
    newArr = [x-i for x in inputArr]
    if sum(newArr) == 0:
        print(i)
        break
else:
    print(-1)