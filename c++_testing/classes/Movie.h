#ifndef MOVIE_H
#define MOVIE_H 

#include <iostream>
#include <string>
using namespace std;

class Movie{

    public:
        Movie(string movieName, int movieYear, string movieRating);

        string getName();
        int getYear();
        string getRating();

        void setName(string s);
        void setYear(int y);
        void setRating(string r);

        void printMovie(void);

    private:
        string name;
        int year;
        string rating;
};

#endif
