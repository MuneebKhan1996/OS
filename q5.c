#include<stdlib.h>
#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>
int sum(int i, int j, int arra[]){
	int sum=0;
	for(int i=i;i<j;i++)
		sum+=arra[i];
	return sum;
}
int main(){
	int a[1000],size=0;
	int ar0[2],ar1[2],ar2[2],ar3[2],ar4[2],ar5[2],ar6[2],ar7[2],ar8[2],ar9[2];
	pipe(ar0),pipe(ar1),pipe(ar2),pipe(ar3),pipe(ar4),pipe(ar5),pipe(ar6),pipe(ar7),pipe(ar8),pipe(ar9);
	int r0,r1,r2,r3,r4,r5,r6,r7,r8,r9;
	for(int i=0;i<1000;i++){
		a[i]=i+1;	
	}
	int cpid=fork();
	if(cpid==0){
		s=sum(0,100,a);
		write(ar0,&s,sizeof(int));
		close(ar0(1));
		exit(0);
	}
	else{
		int cpid1=fork();
	if(cpid1==0){
		s=sum(100,200,a);
		write(ar1,&s,sizeof(int));
		close(ar1(1));
		exit(0);
	}
	else{
		int cpid2=fork();
	if(cpid2==0){
		s=sum(200,300,a);
		write(ar2,&s,sizeof(int));
		close(ar2(1));
		exit(0);
	}
	else{int cpid3=fork();
	if(cpid3==0){
		s=sum(300,400,a);
		write(ar3,&s,sizeof(int));
		close(ar3(1));
		exit(0);
	}
	else{
		int cpid4=fork();
	if(cpid4==0){
		s=sum(400,500,a);
		write(ar4,&s,sizeof(int));
		close(ar4(1));
		exit(0);
	}
	else{
		int cpid5=fork();
	if(cpid5==0){
		s=sum(500,600,a);
		write(ar5,&s,sizeof(int));
		close(ar5(1));
		exit(0);
	}
	else{
		int cpid6=fork();
	if(cpid6==0){
		s=sum(600,700,a);
		write(ar6,&s,sizeof(int));
		close(ar6(1));
		exit(0);
	}
	else{
		int cpid7=fork();
	if(cpid7==0){
		s=sum(700,800,a);
		write(ar7,&s,sizeof(int));
		close(ar7(1));
		exit(0);
	}	
	else{
		int cpid8=fork();
	if(cpid8==0){
		s=sum(800,900,a);
		write(ar8,&s,sizeof(int));
		close(ar8(1));
		exit(0);
	}
	else{
		int cpid9=fork();
	if(cpid9==0){
		s=sum(900,1000,a);
		write(ar9,&s,sizeof(int));
		close(ar9(1));
		exit(0);
	}
	}
	}
	}
	}
	}
	}
	}
	}
	}
	read(ar0[0],&r0,sizeof(int));close(ar0[0]);
	read(ar1[0],&r1,sizeof(int));close(ar1[0]);
	read(ar2[0],&r2,sizeof(int));close(ar2[0]);
	read(ar3[0],&r3,sizeof(int));close(ar3[0]);
	read(ar4[0],&r4,sizeof(int));close(ar4[0]);
	read(ar5[0],&r5,sizeof(int));close(ar5[0]);
	read(ar6[0],&r6,sizeof(int));close(ar6[0]);
	read(ar7[0],&r7,sizeof(int));close(ar7[0]);
	read(ar8[0],&r8,sizeof(int));close(ar8[0]);
	read(ar9[0],&r9,sizeof(int));close(ar9[0]);
	int sum=r0,r1,r2,r3,r4,r5,r6,r7,r8,r9;
	printf("sum = %d\n",sum);
}

