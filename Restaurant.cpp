//
// Created by hloi on 10/17/2023.
//

#include "Restaurant.h"

const string &Restaurant::getRestaurantName() const {
    return restaurantName;
}

void Restaurant::setRestaurantName(const string &restaurantName) {
    Restaurant::restaurantName = restaurantName;
}

const string &Restaurant::getFoodType() const {
    return foodType;
}

void Restaurant::setFoodType(const string &foodType) {
    Restaurant::foodType = foodType;
}

double Restaurant::getRating() const {
    return rating;
}

void Restaurant::setRating(double rating) {
    Restaurant::rating = rating;
}

ostream &operator<<(ostream &out, Restaurant &other) {
    out << other.restaurantName << " " << other.foodType << " " << other.rating;
    return out;
}

Restaurant::Restaurant(string name, string food, double review) {
    this->restaurantName = name;
    this->foodType = food;
    this->rating = review;

}
