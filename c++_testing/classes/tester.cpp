/*
 * =====================================================================================
 *
 *       Filename:  tester.cpp
 *
 *    Description:  Arian Suarez
 *
 *        Version:  1.0
 *        Created:  01/04/2017 05:36:18 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Arian Suarez (), 
 *   Organization:  
 *
 * =====================================================================================
 */


#include <iostream>
#include "Movie.h"

using namespace std;

int main(){

    
    Movie movie("Titanic", 2001, "R");

    movie.printMovie();

    return 0;
}
