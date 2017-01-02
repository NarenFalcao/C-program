#include<iostream>

using namespace std;

int main(){
const int m = 3;
const int n = 4;
int a[m][n] = {{1,2,3},{4,5,6}};
int b[m] = {0};
int c[n] = {0};
int i,j,k;
for(i = 0;i for(j = 0;j b[i]+= a[i][j];
}
}
for(i = 0;i for(j = 0;j c[i]+= a[j][i];
}
}
for(i=0;i for(j=0;j if(b[i]>b[i+1]){
k = b[i];
b[i]=b[i+1];
b[i+1]=k;
}
}
}
for(i=0;i for(j=0;j if(c[i]>c[i+1]){
k = c[i];
c[i]=c[i+1];
c[i+1]=k;
}
}
}
for(i=1;i b[1]+=b[i];
}
for(i=1;i c[1]+=c[i];
}
if(c[1]>b[1]){
cout< <"The submatrix m*[n-1] excluding the column with sum "< else if(b[1]>c[1]){
cout<<“The submatrix [m-1]*n excluding the row with sum “< else{cout<<"anyone is the same"< cin.get();
return 0 ;
}
