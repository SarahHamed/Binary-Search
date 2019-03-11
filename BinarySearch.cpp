#include <iostream>
#include <algorithm>
#include<stdio.h>
#include<vector>
#include<time.h>
using namespace std;
bool binarySearch(int search1,int n,vector<int> &s)
{
int first, last, middle ;
int sum=0 ,sub=0;
   first = 0;
   last = n - 1;
   middle = (first+last)/2;

   while (first <= last) {
      if (s[middle] < search1)
       {
         first = middle + 1;
                  }
      else if (s[middle] == search1) {
            return true;
         break;
      }
      else
      {
         last = middle - 1;
         }
for(int i=first;i<last+1;i++)
           {
              // cout<<"s["<<i<<"]"<<s[i]<<" ";
              cout<<s[i]<<" ";
           }
           if(first!=(last+1))cout<<endl;
      middle = (first + last)/2;
   }
   if (first > last)
    return false;
}

int main()
{

   int the_number=0;
   int array_number=0;
   scanf("%d",&the_number);
   scanf("%d",&array_number);
   int i=0;
    vector<int> s(array_number);
   while (i<array_number)
   {
      scanf("%d",&s[i]);
      i++;
   }
  // clock_t start1=clock();
  // binarySearch(the_number,array_number,s);
//  binarySearch(search1,n,vector<int> &s)
   //if(binary_search(s.begin(),s.end(),the_number))
if(binarySearch(the_number,array_number,s))
   {
  //  printf("%d",the_number);
  //  printf("\n");
    printf("YES");
   // clock_t end1=clock();
   // cout<<((double)end1-start1)/CLOCKS_PER_SEC<<endl;
   }
   else
   {
//printf("%d",the_number);
//printf("\n");
    printf("NO");
   }
    return 0;
}
