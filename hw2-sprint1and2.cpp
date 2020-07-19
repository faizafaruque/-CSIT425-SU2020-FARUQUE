//Software Engineering
//Homework 2
#include <iostream>

using namespace std;

int main(){



//creating arrays with given numbers from task 
int arraylist1[] = {4,5,6,7};  
int arraylist2[] = {2,3,4,5};



//finding both the arrays length
int lengtha1=0,lengtha2;

lengtha1 = *(&arraylist1+1) - arraylist1;
lengtha2 = *(&arraylist2+1) - arraylist2;


//loop through to get the first number for addition
int firstnum=0;
for(int i=lengtha1-1;i>=0;i--){
firstnum= 10*firstnum + arraylist1[i];
}

//loop through to get the second number for addition
int secondnum=0;
for(int i = lengtha2 - 1;i>=0;i--){
secondnum = 10*secondnum + arraylist2[i];
}

//the addition of the two numbers and store it 
int newnum = 0;
newnum = firstnum+secondnum;
int i = newnum;
int length = 0;

//getting the length of new array
while(i!=0){
length += 1;
i = i/10;
}
i = newnum;

//storing the numbers in the array similar to the arraylist1 and arraylist2 
int *arraylist3 = new int[length];
for(int j = 0;j<length;j++){
arraylist3[i] = i%10;
i = i/10;
}

//Output
if(sizeof(arraylist3)<=4&&sizeof(newnum)<=4)
{
 cout<<"Addition of  "<<firstnum<<" and "<<secondnum<<" : "<<endl;
 for(int j = 0;j<length;j++)
 {
 cout<<arraylist3[i]<<" ";
 }
 cout<<endl;
 }
else{
 cout<<"Addition of "<<firstnum<<" and "<<secondnum<<" is empty because the reseult is larger than an integer"<<endl;
 }
return 0;
}
