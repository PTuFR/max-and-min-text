//Mahdi khademi 
//Predator.m.khadem
//PTuFR
#include<bits/stdc++.h>
#include<sstream>
#include<conio.h>
#include<math.h>
#include<string>
#include<stdio.h>
#include<ctime>
#include<windows.h>
using namespace std;
int main(){
string word, min, max, input="welocme to iran iran is a good country";
cout<<input<<endl;
istringstream iss(input, istringstream::in);
while(iss >> word){
    if(min.length() == 0)
        min = word;
    if(word.length() > max.length())
        max = word;
    if(word.length() < min.length())
        min = word;
}
cout << "min: " << min << endl;
cout << "max: " << max << endl;
getch();
}
