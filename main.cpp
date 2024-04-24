#include <iostream>
#include <random>
#include <time.h>

class sensors{
private:
    double _value;
public:
    sensors() = delete;
    sensors(int min, int max){
        _value = min + rand() % (max - min + 1);
    }
    void print_value(){
        std::cout<<_value<<std::endl;
    }
    double GetValue(){
        return _value;
    }
};

class sensors_temp: public sensors {
public:
    const int min_temp = 10;
    const int max_temp = 100;
    sensors_temp() : sensors(min_temp, max_temp){};
};

class sensors_pressure: public sensors{
public:
    const int min_pres = 25;
    const int max_pres = 150;
    sensors_pressure() : sensors(min_pres, max_pres){};
};

class sensors_humidity: public sensors{
public:
    const int min_hum = 0;
    const int max_hum = 100;
    sensors_humidity() : sensors(min_hum, max_hum){};
};

class sensors_CO2: public sensors{
public:
    const int min_hum = 0;
    const int max_hum = 100;
    sensors_CO2() : sensors(min_hum, max_hum){};
};

class sensors_ATH22: public sensors{
public:
    const int min_hum = 0;
    const int max_hum = 100;
    sensors_ATH22() : sensors(min_hum, max_hum){};
};

class sensors_array{
private:
    sensors** _array;
    int _size = 50;
public:
    sensors_array(){
        _array = new sensors*[50];
    }
};

int main(){

}