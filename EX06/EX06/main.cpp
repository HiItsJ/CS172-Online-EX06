//
//  main.cpp
//  EX06
//
//  Created by Josiah on 6/21/17.
//  Copyright © 2017 Josiah. All rights reserved.
//

#include <iostream>
#include <fstream>
#include "Complex.hpp"

//EX06_01
void createFile(){
    fstream f("Exercise13_1.txt", ios::in);
    if (f.fail()){
        f.close();
        f.open("Exercise13_1.txt", ios::out);
    }
    else {
        f.close();
        f.open("Exercise13_1.txt", ios::out | ios::app);
        
    }
    srand((unsigned)time(NULL));
    int randNum;
    for (int i=0; i<100; i++){
        randNum = rand() % 100;
        f << randNum << " ";
    }
    f.close();
}
//EX06_02
void countCharacters(){
    ifstream is;
    string filename;
    int count;
    while(true){
        cout<<"Enter the name of a file: ";
        cin>>filename;
        
        is.open(filename.c_str());
        if (is.fail()){
            cout<<"The file "<<filename<<" does not exist."<<endl;
        }
        else{
            break;
        }
    }
    char ch = is.get();
    while(!is.eof()){
        count++;
        ch = is.get();
    }
    cout<<"There are "<<count<<" characters in "<<filename<<endl;
}
//EX06_03
void babyNames(){
    int rank = 0;
    int yearInput;
    char genderInput;
    string boy_name, boy_score, girl_name, girl_score, nameInput;
    cout<<"__________\nBABY NAMES\nEnter a year (2001-2010): ";
    cin>>yearInput;
    cout<<"Enter a gender (\'m\' for male, \'f\' for female): ";
    cin>>genderInput;
    cout<<"Enter a name: ";
    cin>>nameInput;
    
    ifstream fin;
    string file = "/Users/Josiah/Desktop/CS/CS172-Online-ALL/CS172-Online-EX06/EX06/BN"+to_string(yearInput)+".txt";
    fin.open(file);
    
    //male
    if (genderInput == 'm'){
        while (boy_name != nameInput){
            if (!fin.eof()){
                fin>>rank>>boy_name>>boy_score>>girl_name>>girl_score;
            }
            else{
                cout<<nameInput<<" was not found."<<endl;
                break;
            }
        }
        if (boy_name == nameInput){
            cout<<nameInput<<" is ranked #"<<rank<<" in year "<<yearInput<<endl;
        }
    }
    //female
    if (genderInput == 'f'){
        while (girl_name != nameInput){
            if (!fin.eof()){
                fin>>rank>>boy_name>>boy_score>>girl_name>>girl_score;
            }
            else{
                cout<<nameInput<<" was not found."<<endl;
                break;
            }
        }
        if (girl_name == nameInput){
            cout<<nameInput<<" is ranked #"<<rank<<" in year "<<yearInput<<endl;
        }
    }
    
    fin.close();
}

int main(){
    //createFile();
    //countCharacters();
    //babyNames();
    //Complex test
    double a1, b1, a2, b2;
    cout<<"Enter the first complex number: ";
    cin>>a1>>a2;
    Complex c1(a1, b1);
    cout<<"Enter the second complex number: ";
    cin>>a2>>b2;
    Complex c2(a2, b2);
    cout<<c1<<" + "<<c2<<" = "<<c1+c2<<endl;
    cout<<c1<<" - "<<c2<<" = "<<c1-c2<<endl;
    cout<<c1<<" * "<<c2<<" = "<<c1*c2<<endl;
    cout<<c1<<" / "<<c2<<" = "<<c1/c2<<endl;
}













