#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
  int i,j,temp,n,num,count=0;
    cin>>n;
    vector<int> A(n);
    for(i=0;i<n;i++){
        cin>>num;
        A.push_back(num);
    }
    for(i=1;i<n-1;i++){
       temp=A[i];
       j=i-1;
       while((temp<A[j])&&(j>=0)){
           A[j+1]=A[j];
           j--;
          
       } 
       A[j+1]=temp;
	    
    }
    for(i=0;i<n;i++)
      cout<<A[i];
    return 0;
}
