#include<bits/stdc++.h>
using namespace std;
void nhapMotChuoiDemSoTu() {
     long long chuoi[100000];
     int i;
     int n;
     cin>>n;
     for(i=0;i<n;i++)
     {cin>>chuoi[i];
	 }

     for (int i=n-1; i>=0 ;i--) {
         cout<<chuoi[i]<<" ";
     }
 }
 int main()
 {
 	nhapMotChuoiDemSoTu();
 }

