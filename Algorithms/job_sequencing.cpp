#include<iostream>

#include<conio.h>

#define MAX 100

#include<conio.h>

#include<stdlib.h>

using namespace std;

class Job

{

public :
char id[5]; 
 int deadline;
 int Profit;

};

void jobSequencing(Job jobs[],int n);

int minvalue(int x,int y)

{

if(x<y)

return x;

return y;

}

int main (void)

{

int i ,j ,n;



Job jobs[5];

cout<<"\Enter the number of jobs:";

cin>>n;

for(i=0;i<n;i++)

{

cout<<"\nEnter the job:";

cin>>jobs[i].id;

cout<< "\nEnter the Profit:";

cin>>jobs[i].Profit;

cout<<"\nEnter deadline:";

cin>>jobs[i].deadline;



}

Job temp;

cout<<"\nJob(i)\t\t Profit\t\t Deadline\t \n\n";

cout<<"--------------------------------------------------";

for(i=0;i<n;i++)

{

cout<<"\n\n";

cout<<jobs[i].id<<"\t\t"<<jobs[i].Profit<<"\t\t"<<jobs[i].deadline;

}

for(i=1;i<n;i++)

{

for(j=0;j<n-i;j++)

{

if(jobs[j+1].Profit>jobs[j].Profit)

{

temp=jobs[j+1];  

jobs[j+1]=jobs[j];// descending order

jobs[j]=temp;

}

}

}

cout<<"\n\nTotal nuber of jobs:"<<n<<endl;

jobSequencing(jobs,n);

getch();

return 0;

}

void jobSequencing(Job jobs[],int n)

{

int i,j,k,maxprofit;

int timeslot[MAX];

int filledTimeSlot= 0;

int dmax= 0;

for (i= 0;i<n;i++) 

{

if(jobs[i].deadline>dmax)

{

dmax =jobs[i].deadline;

}





}



cout<<"\nTotal time slot: "<<dmax<<endl;

for(i=1;i<=dmax;i++) 

{

timeslot[i]=-1;

}

cout<<"\n\nnumber of jobs done: "<<dmax<<endl; 

for(i=1;i<=n;i++)

{

k=minvalue(dmax,jobs[i-1].deadline);

while(k>=1) 

{

if(timeslot[k]==-1)

{

timeslot[k]=i-1;

filledTimeSlot++;

break;

}

k--;

}

if(filledTimeSlot==dmax)

{ 

 break;

}

}

// cout<<"\nJobs done \:n";

for(i=1;i<=dmax;i++)

{

cout<<"\tJob"<<jobs[timeslot[i]].id<<" at time:"<<i<<endl;// at particular time slot

}

maxprofit=0;

for(i=1;i<=dmax;i++)

{

maxprofit+=jobs[timeslot[i]].Profit;

}

    cout<<"\ntotal profit: "<<maxprofit;

}
