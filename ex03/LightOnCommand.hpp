//
// Created by Gevorg Hovhannisyan on 8/7/24.
//

#ifndef INTRA_UUID_D1C3D73E_631C_4B23_8EB6_7989965F2A99_5891587_GEHOVHAN_LIGHTONCOMMAND_HPP
#define INTRA_UUID_D1C3D73E_631C_4B23_8EB6_7989965F2A99_5891587_GEHOVHAN_LIGHTONCOMMAND_HPP

#include "Light.hpp"
#include "Command.hpp"

class LightOnCommand : public Command {
    public:
        LightOnCommand(Light* light) : light_(light) {}

        void execute() const {
            light_->on();
        }

    private:
        Light* light_;
};


#endif //INTRA_UUID_D1C3D73E_631C_4B23_8EB6_7989965F2A99_5891587_GEHOVHAN_LIGHTONCOMMAND_HPP
