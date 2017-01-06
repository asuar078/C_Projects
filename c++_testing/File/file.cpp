/*
 * =====================================================================================
 *
 *       Filename:  file.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  01/05/2017 09:22:16 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Arian Suarez (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include <fstream>
#include <iostream> 

using namespace std;

int main(){

    ifstream inputFile;
    int fileNotFoundError = 10;
    float a, b = 0;
    float avgA, avgB = 0;
    int count = 0;

    try{
        inputFile.open("challenge.txt", ios::in);
        if(!inputFile)
            throw fileNotFoundError;

        cout << "Opened File Succesfully" << endl;

        while(!inputFile.eof()){
            inputFile >> a >> b;
            cout << a << ", " << b << endl;
            avgA += a;
            avgB += b;
            count++;
        }

        avgA /= (float)count;
        avgB /= (float)count;

        cout << "Average of column A: " << avgA << endl;
        cout << "Average of column B: " << avgB << endl;

    }
    catch(int error) {
        if(error == fileNotFoundError){
            cerr << "Exception opening/reading/closing file\n";
            return 1;
        }
    }

    cout << "End of program" << endl;

    return 0;
}
