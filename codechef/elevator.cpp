#include <stdio.h> 
#include <stdlib.h> 
#include <windows.h> 
#include <conio.h> 
int main() 
{ 
int curfl = 0, destfl, floor; 
float high, speed; 
float time1; 
high = 3.0; // Height of the floor 
speed = 5.0; // Speed of the elevator per second 
while(1) 
{ 
printf("Currently the elevator is at floor number = %d\n", curfl); 
printf("Enter the floor number between 0-25 : "); 
// printf("%d %d", &curfl, &time1); 
scanf("%d", &destfl); 
if(destfl > curfl) 
{ 
floor = destfl - curfl; 
time1 = (floor * (high / speed)); 
printf("Elevator will take %.2f second to reach %d (st, nd, rd) floor \n", time1, destfl); 
while(curfl != destfl) 
{ 
Sleep((1000 * 3) / 5); 
curfl++; 
printf("You are at floor number %d \n", curfl); 

} 
printf("Door opening \n"); printf ("\7") ;
Sleep(10000); 
printf("Door Closed\n \n"); 
} 
else if(destfl < curfl) 
{ 
floor = curfl - destfl; 
time1 = (floor * (high / speed)); 
printf("Elevator will take %.2f second to reach %d (st, nd, rd) floor \n", time1, destfl); 
while(curfl != destfl) 
{ 
Sleep((1000 * 3) / 5); 
curfl--; 
printf("You are at floor number %d \n", curfl); 
} 
printf("Door opening \n"); 
Sleep(10000); 
printf("Door Closed\n \n"); 
} 
else{ 
printf("You are the same floor. Please getout from the elevator \n"); 
} 
} 
// printf("Hello world!\n"); 
return 0; 
}
