pro1=[0,1,2]
pri1=[1,2,0]
bT1=[8,4,6]
pro=[0,0,0]
bT=[0,0,0]
wT=[0,0,0]
tT=[0,0,0]
a=0
temp=0
temp1=0
max=bT1[0]
for i in range(0,3-1):
	for j in range(i+1,3):
		if(bT1[i]<bT1[j]):
			temp=bT1[i]
			bT1[i]=bT1[j]
			bT1[j]=temp
			temp1=pro1[i]
			pro1[i]=pro1[j]
			pro1[j]=temp1
sumTT=0
sumWT=0
for i in range(0,3):
	wT[i]=bT1[i-1]+wT[i-1]
for i in range(0,3):
	tT[i]=wT[i]+bT1[i]

for i in range(0,3):
	sumTT=sumTT+tT[i]
	sumWT=sumWT+wT[i]
print("process burst time    waiting time     turnaround time")
for i in range(0,3):
	print(str(pro1[i])+"    "+str(bT1[i])+"     "+str(wT[i])+"        "+str(tT[i]))
print("average waiting time =")
print(sumWT/3)
print("average turnaround time =")
print(sumTT/3)
