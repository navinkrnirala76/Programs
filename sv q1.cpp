#include <bits/stdc++.h> 
#include<iostream>
#include <stdio.h>
#include <string>
using namespace std;


#define NO_OF_STUDENTS	10
#define NO_OF_SUBJECTS	3


main(void)
{
	int n,r,c,i,j,index[NO_OF_STUDENTS];	
	float Marks[NO_OF_STUDENTS][NO_OF_SUBJECTS+2];
	for(r=0;r<NO_OF_STUDENTS;r++)
	{
		Marks[r][NO_OF_SUBJECTS]=0;
		for(c=0;c<NO_OF_SUBJECTS;c++)
		{
			n=0;
			while(n<=0 ||n>100)	n=rand();
			Marks[r][c] = n;
			Marks[r][NO_OF_SUBJECTS] = Marks[r][NO_OF_SUBJECTS]+Marks[r][c];
		}
		Marks[r][NO_OF_SUBJECTS+1] = (Marks[r][NO_OF_SUBJECTS]/(100*NO_OF_SUBJECTS))*100;
	}
	cout<<"\n\nStudent ID";
	for(c=0;c<NO_OF_SUBJECTS+1;c++) 
	{
		if(c<NO_OF_SUBJECTS)cout<<setw(8)<<"Sub."<<c+1;	
		else				cout<<setw(8)<<"Total";	
	}
	cout<<"\n";
	for(r=0;r<NO_OF_STUDENTS;r++)
	{
		cout<<setw(8)<<r+1;	
		for(c=0;c<NO_OF_SUBJECTS+1;c++)
		{
			cout<<setw(9)<<Marks[r][c];
		}
		cout<<" ("<<setprecision(3)<<Marks[r][NO_OF_SUBJECTS+1]<<"%)\n";
	}
	
	for(i=0;i<NO_OF_STUDENTS;i++)	index[i]=i;
	for(i=0;i<NO_OF_STUDENTS;i++)
 	{	
  		for(j=i+1;j<NO_OF_STUDENTS;j++)
  		{
   			int temp; 
   			if(Marks[index[i]][NO_OF_SUBJECTS] > Marks[index[j]][NO_OF_SUBJECTS])
   			{
    			temp = index[i];
    			index[i] = index[j];
    			index[j] = temp;
   			}
  		}
 	}
	//for(i=0;i<NO_OF_STUDENTS;i++) cout<<"\n"<<Marks[index[i]][NO_OF_SUBJECTS]<<"\t"<<index[i];
	cout<<"\n\nTop 3 Students:\n";
	cout<<"Student ID";
	for(c=0;c<NO_OF_SUBJECTS+1;c++) 
	{
		if(c<NO_OF_SUBJECTS)cout<<setw(8)<<"Sub."<<c+1;	
		else				cout<<setw(8)<<"Total";	
	}
	cout<<"\n";
	for(r=0;r<3;r++)
	{
		cout<<setw(8)<<index[NO_OF_STUDENTS-r-1];	
		for(c=0;c<NO_OF_SUBJECTS+1;c++)
		{
			cout<<setw(9)<<Marks[index[NO_OF_STUDENTS-r-1]][c];
		}
		cout<<setprecision(3)<<" ("<<Marks[index[NO_OF_STUDENTS-r-1]][NO_OF_SUBJECTS+1]<<" %)\n";
	}


	return(0);
}