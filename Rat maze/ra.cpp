#include<bits/stdc++.h>
#include<iostream>
using namespace std;


bool issafe(int** arr,int x,int y,int n)
{
	if(x<n && y<n && arr[x][y]==1)
	{
		return 1;
	}
	return 0;
}

bool ratinmaze(int** arr,int x,int y,int n,int** solarr)
{
	if(x==n-1 && y==n-1)
	{
		solarr[x][y]=1;
		return 1;
	}
	if(issafe(arr,x,y,n))
	{
		solarr[x][y]=1;
		if(ratinmaze(arr,x+1,y,n,solarr))
		{
			return 1;
		}
			if(ratinmaze(arr,x,y+1,n,solarr))
			{
				return 1;
			}
		 solarr[x][y]=0;
		 return 0;
		 }
		 return 0;
		 }
		 
int main()
{
	int n;
	cin>>n;
	
int **arr=new int*[n];
for(int i=0;i<n;i++)
{ 
    arr[i]=new int[n];
     }
   for(int i=0;i<n;i++)
   {
   	for(int j=0;j<n;j++)
   	{
   		cin>>arr[i][j];
   		}
   		}
   
   int **solarr=new int*[n];
for(int i=0;i<n;i++)
{ 
      solarr[i]=new int[n];
      for(int j=0;j<n;j++)
      {
      	solarr[i][j]=0;
      	
     }
     }
     if(ratinmaze(arr,0,0,n,solarr))
     {
     
      	   for(int i=0;i<n;i++)
   {
   	for(int j=0;j<n;j++)
   	{
   		cout<<solarr[i][j];
   		}
   		cout<<endl;
   }
     }
   		return 0;
   		}