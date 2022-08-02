//  blue.cpp
//
//  Created by Charles Phillips on 7/25/22.
//  Copyright © 2022 charles. All rights reserved.
//
// let's try to read from and output to files and maybe do some string manipulation

#include <iostream>
#include <fstream>
#include <string>
#include <cstring>

#define MAX_PATH = 80  // length of the path is less than 80
using namespace std;

int satno = 99999; // declare satno, assign initial value
int year = 20; // define year
string int_des = "01A"; // define international designator

string line;

int main(int argc, const char * argv[])

{
   
    string ifname("/Users/Charles/Desktop/common_files/iod_input.txt");
    string ofname("/Users/Charles/Desktop/common_files/iod_output.txt");
    
    ifstream fin(ifname);
    
    ofstream fout(ofname);
    
    int i = 0; // set up the way to count in the while loop
    
    while (i < 4)
    {
        string line;  //  create line
        getline(fin, line);
      
        ++i;  // increment i to stop while loop
    
    const char *s = line.c_str();
    sscanf(s, "%d" "%d" "%s", &satno, &year, &int_des);
    
    fout << "satno " << satno <<  " year " << year << " int_des " << int_des << endl; // output
   
    }  // end of while loop

    return 0;
} // end of main

//   Users/Charles/Desktop/common_files/iod_input.txt
