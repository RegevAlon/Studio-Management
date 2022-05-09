#include "../include/Workout.h"

Workout::Workout(int w_id, std::string w_name, int w_price, WorkoutType w_type) :  id(w_id), name(w_name), price(w_price), type(w_type)
{
}

int Workout::getId() const
{
    return id;
}

std::string Workout::getName() const
{
    return name;
}

int Workout::getPrice() const
{
    return price;
}

WorkoutType Workout::getType() const
{
    return type;
}

std::string Workout::getDetails() const
{
    std::string types;
    if (type == 0)
        types = "Anaerobic";
    else if(type == 1)
        types = "Mixed";
    else types = "Cardio";
    return std::string(getName() + ", " + types + ", " + std::to_string(getPrice()));
}

Workout::~Workout()
{
}

Workout::Workout(const Workout& other):id(other.id), name(other.name), price(other.price), type(other.type)
{
}

Workout::Workout(Workout&& other): id(other.id), name(other.name), price(other.price), type(other.type)
{
}

