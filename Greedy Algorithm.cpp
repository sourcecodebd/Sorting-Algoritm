#include<iostream>
using namespace std;
void activity_selection(int start[], int end[], int job[],int n)
{

   int j,i=0,output[n],k=1;
   output[0]=job[0];
   for(j=1; j< n; j++){
      if(start[j] >= end[i])
          {
            output[k++]=job[j];
            i=j;
          }
    }
          cout<<"selected activities index no: "<<endl;
    for(i=0;i<k;i++)
        cout<<output[i]<<" ";

}

int main()
{
   int n,i,j;
   cout<<"Enter size of list: "<<endl;
   cin>>n;
   int start[n],end[n],job[n];
   //cout<<"Enter Sorted no :"<<endl;
   cout<<"Enter start time and end time :"<<endl;

   for(i=0;i<n;i++)
   {
      cin>>start[i];
      cin>>end[i];
   }
    for(i=0;i<n;i++)
    job[i]=i;
   for(i=0;i<n-1;i++)
   {
       int min=i;
       for(j=i+1;j<n;j++)
       {
           if(end[min]>end[j])
           {
               min=j;
           }
       }
       swap(end[min],end[i]);
       swap(start[min],start[i]);
       swap(job[min],job[i]);
   }


   activity_selection(start,end,job,n);
   return 0;
}
