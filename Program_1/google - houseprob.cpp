#include <iostream> 
#include <cstdio> 
#include <cassert> 
using namespace std; 

int v[1000][3]; 
int dp[1000][3]; 

int min(int a, int b) 
{ 
 if (a <= b) 
 { 
 return a; 
 } 
 return b; 
} 

int min(int a, int b, int c) 
{ 
 return min(min(a, b), c); 
} 

void printPath(int n) 
{ 
 int c = 0; 
 if (dp[n][1] < dp[n][c]) 
 { 
 c = 1; 
 } 
 if (dp[n][2] < dp[n][c]) 
 { 
 c = 2; 
 } 
 char buff[20]; 
 sprintf(buff, "%d", c); 
 string result = string(buff); 
 for (int i = n - 1; i > 0; --i) 
 { 
 if (dp[i][(c + 1) % 3] <= dp[i][(c + 2) % 3]) 
 { 
 c = (c + 1) % 3; 
 sprintf(buff, "%d", c); 
 result = string(buff) + " " + result; 
 } 
 else 
 { 
 c = (c + 2) % 3; 
 sprintf(buff, "%d", c); 
 result = string(buff) + " " + result; 
 } 
 } 
 cout << result << endl; 
} 

int paint(int n) 
{ 
 assert(n > 0); 
 dp[1][0] = v[1][0]; 
 dp[1][1] = v[1][1]; 
 dp[1][2] = v[1][2]; 
 for (int i = 2; i <= n; ++i) 
 { 
 dp[i][0] = min(dp[i - 1][1], dp[i - 1][2]) + v[i][0]; 
 dp[i][1] = min(dp[i - 1][0], dp[i - 1][2]) + v[i][1]; 
 dp[i][2] = min(dp[i - 1][1], dp[i - 1][0]) + v[i][2]; 
 } 
 int result = min(dp[n][0], dp[n][1], dp[n][2]); 
 printPath(n); 
 return result; 
} 
int main() 
{ 
 int n; 
 cin >> n; 
 for (int i = 1; i <= n; ++i) 
 { 
 cin >> v[i][0]; 
 } 
 for (int i = 1; i <= n; ++i) 
 { 
 cin >> v[i][1]; 
 } 
 for (int i = 1; i <= n; ++i) 
 { 
 cin >> v[i][2]; 
 } 
 int result = paint(n); 
 cout << result << endl; 
 return 0; 
}
