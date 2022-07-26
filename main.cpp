//  blue.cpp
//
//  Created by Charles Phillips on 7/25/22.
//  Copyright © 2022 charles. All rights reserved.
//
// let's try to read from and output to files and maybe do some string manipulation

#include <iostream>
#include <fstream>
#define MAX_PATH = 80  // length of the path is less than 80
using namespace std;

int main(int argc, const char * argv[])

{
    char iod_input;
    // iod_input is the test file here
   
    cout << "enter file name";
    
    cin.getline(iod_input, MAX_PATH);
    
    ofstream file_out(iod_input);
    
    return 0;
}

//   Users/Charles/Desktop/common_files/iod_input.txt
