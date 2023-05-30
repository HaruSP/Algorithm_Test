# 음계 - 2920번
data = list(map(int,input().split(" ")))

ascending=1
descending=1

for i in range(1,8):    
    if data[i-1] < data[i]:
        ascending+=1
        # print("ascending")
    if data[i-1] > data[i]:
        descending+=1

if ascending==8:
    print("ascending")
elif descending==8:
    print("descending")
else:
    print("mixed")