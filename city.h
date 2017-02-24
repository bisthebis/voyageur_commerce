#ifndef CITY_H
#define CITY_H


class City
{
public:
    City(double x, double y);
    double distance(const City& src) const;
private:
     double _x, _y;
};

#endif // CITY_H
