/*
"Enter your age: "
"Enter your height: "
"Enter your bounty: "
"Your character = "
"Zoro"
"Sanji"
"Usopp"
"Chopper"
"Franky"
"Brook"
"Jinbe"
*/
/*
"Enter your age: "
"Enter your height: "
"Enter your bounty: "
"Your character = "
"Zoro"
"Sanji"
"Usopp"
"Chopper"
"Franky"
"Brook"
"Jinbe"
*/

#include<iostream>
#include<string>
using namespace std;

int main(){
    int age,height,bounty;
    string character;
    cout << "Enter your age: ";
    cin >> age;
    if (age <= 25){
        cout << "Enter your height: ";
        cin >> height;
        if (height<180 && height>=100) character = "Usopp";
        else if(height<100)character = "Chopper";
        if (age <= 25 && height>=180){
        cout << "Enter your bounty: ";
        cin >> bounty;
        if(bounty>1100000000) character = "Zoro";
        else if(bounty<=1100000000) character = "Sanji";
    }
}
    else if (age <= 60){
        cout << "Enter your bounty: ";
        cin >> bounty;
        if(bounty <= 500000000) character = "Franky";
        else character = "Jinbe";
    }
    else character = "Brook";
    cout << "Your character = " << character;
}