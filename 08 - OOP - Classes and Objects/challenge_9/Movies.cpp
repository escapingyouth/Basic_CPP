#include "Movies.h"
#include "Movie.h"
#include <iostream>
#include <string>

// Movie constructor
Movies::Movies(){};

// Movie Destructor
Movies::~Movies(){};

bool Movies::add_movie(std::string name, std::string rating, int watched)
{

    for (const auto &movie : movies)
        if (movie.get_name() == name)
            return false;

    if (!name.empty() || !rating.empty() || watched != NULL)
    {
        movies.push_back(Movie(name, rating, watched));
        return true;
    }
    return false;
}

bool Movies::increment_watched(std::string name)
{
    for (auto &movie : movies)
    {
        if (movie.get_name() == name)
        {
            movie.increment_watched();
            return true;
        }
    }
    return false;
}

void Movies::display() const
{
    if (movies.empty())
        std::cout << "Sorry, no movies to display" << std::endl;
    else
    {
        for (const auto &movie : movies)
        {
            movie.display();
        }
    }
}
