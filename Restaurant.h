//
// Created by hloi on 10/17/2023.
//

#ifndef CH08LLFA23_RESTAURANT_H
#define CH08LLFA23_RESTAURANT_H
#include <string>
#include <sstream>

using std::ostream;
using std::string;

class Restaurant {
private:
    string restaurantName;
    string foodType;
    double rating;

public:

    Restaurant() {}

    Restaurant(string name, string food, double review);


    const string &getRestaurantName() const;

    void setRestaurantName(const string &restaurantName);

    const string &getFoodType() const;

    void setFoodType(const string &foodType);

    double getRating() const;

    void setRating(double rating);

    friend ostream& operator<<(ostream& out, Restaurant& other);
};


#endif //CH08LLFA23_RESTAURANT_H
