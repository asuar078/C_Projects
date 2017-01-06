/*
 * =====================================================================================
 *
 *       Filename:  Movie.cpp
 *
 *    Description:  Arian
 *
 *        Version:  1.0
 *        Created:  01/04/2017 05:03:05 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Arian Suarez (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include "Movie.h"
#include <string>
using namespace std;

Movie::Movie(string movieName, int movieYear, string movieRating){

    name = movieName;

    if(movieYear >= 2016 || movieYear <= 1900)
        year = 1999;
    else
        year = movieYear;

    rating = movieRating;
}

void Movie::printMovie(void){
    cout << "Movie name: " << name << endl;
    cout << "Movie year: " << year << endl;
    cout << "Movie rating: " << rating << endl;

}

string Movie::getName(){
    return name;
}

int Movie::getYear(){
    return year;
}

string Movie::getRating(){
    return rating;
}


