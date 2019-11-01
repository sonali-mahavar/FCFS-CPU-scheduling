#include<conio.h>
#include<iostream.h>
void main()
{
 clrscr();
 int at[50],bt[50],ct[50],wt[50],tat[50],ttat=0,twt=0,atat,awt,i,n;
 cout<<"enter number of process:";
 cin>>n;
 cout<<"enter arrival time and burst time:";
 for(i=0;i<n;i++)
 {
 cout<<"p"<<i+1<<endl;
 cin>>at[i]>>bt[i];
 }
 //calculation for complete time
 for(i=0;i<n;i++)
 {
  if(i==0)
  ct[i]=bt[i];
  else
  ct[i]=bt[i]+ct[i-1];
 }
 //calculation for waiting time
 for(i=0;i<n;i++)
 {
 wt[i]=ct[i]-at[i];
 }
 //calculation for turn around time
 for(i=0;i<n;i++)
 {
  tat[i]=wt[i]+bt[i];
  ttat+=tat[i];
  twt+=wt[i];
  }
  cout<<"process"<<"\t"<<"\tAT\t\tBT\t\tCT\t\tWT\t\tTAT"<<endl;
  cout<<"-------------------------------------------------------------------"<<endl;
  for(i=0;i<n;i++)
  {
  cout<<"p"<<i+1<<"\t\t"<<at[i]<<"\t\t"<<bt[i]<<"\t\t"<<ct[i]<<"\t\t"<<wt[i]<<"\t\t"<<tat[i]<<endl;   }
  atat=(ttat/n);
  awt=(twt/n);
  cout<<"average turnaround time:"<<atat<<endl;
  cout<<"average waiting time:"<<awt<<endl;
  getch();
  }

