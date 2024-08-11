//
// Created by Gevorg Hovhannisyan on 8/7/24.
//

#ifndef INTRA_UUID_D1C3D73E_631C_4B23_8EB6_7989965F2A99_5891587_GEHOVHAN_LIGHT_HPP
#define INTRA_UUID_D1C3D73E_631C_4B23_8EB6_7989965F2A99_5891587_GEHOVHAN_LIGHT_HPP

#include <iostream>


class Light {
    public:
        void on() {
            std::cout << "The light is ON" << std::endl;
        }

        void off() {
            std::cout << "The light is OFF" << std::endl;
        }
};


#endif //INTRA_UUID_D1C3D73E_631C_4B23_8EB6_7989965F2A99_5891587_GEHOVHAN_LIGHT_HPP
