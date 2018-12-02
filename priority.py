pro1=[0,1,2]
pri1=[1,2,0]
bT1=[8,4,6]
pro=[0,0,0]
bT=[0,0,0]
wT=[0,0,0]
tT=[0,0,0]
a=0
for i in range(0,3):
	a=pri1[i]
	pro[a]=pro1[i]
	bT[a]=bT1[i]
sumTT=0
sumWT=0
for i in range(0,3):
	wT[i]=bT[i-1]+wT[i-1]
for i in range(0,3):
	tT[i]=wT[i]+bT[i]

for i in range(0,3):
	sumTT=sumTT+tT[i]
	sumWT=sumWT+wT[i]
print("process burst time    waiting time     turnaround time")
for i in range(0,3):
	print(str(pro[i])+"    "+str(bT[i])+"     "+str(wT[i])+"        "+str(tT[i]))
print("average waiting time =")
print(sumWT/3)
print("average turnaround time =")
print(sumTT/3)
