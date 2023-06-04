#include "Movie.h"
#include <iostream>
#include <string>

Movie::Movie(std::string name, std::string rating, int watched)
    : name(name), rating(rating), watched(watched)
{
}

// Implementation of the copy constructor
Movie::Movie(const Movie &source)
    : Movie(source.name, source.rating, source.watched)
{
}

// Implementation of the destructor
Movie::~Movie()
{
}

// Basic getters and setters for private attributes

void Movie::set_name(std::string name)
{
    this->name = name;
}

string Movie::get_name() const
{
    return name;
}

void Movie::set_rating(std::string rating)
{
    this->rating = rating;
}

string Movie::get_rating() const
{
    return rating;
}

void Movie::set_watched(int watched)
{
    this->watched = watched;
}

int Movie::get_watched() const
{
    return watched;
}

// Simply increment the watched attribute by 1
void Movie::increment_watched()
{
    watched++;
}

// Simply displays the move information ex.) Big, PG-13, 2
void Movie::display() const
{
    std::cout << name << ", " << rating << ", " << watched << std::endl;
}