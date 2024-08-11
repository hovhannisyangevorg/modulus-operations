//
// Created by Gevorg Hovhannisyan on 8/7/24.
//

#ifndef INTRA_UUID_D1C3D73E_631C_4B23_8EB6_7989965F2A99_5891587_GEHOVHAN_REMOTECONTROL_HPP
#define INTRA_UUID_D1C3D73E_631C_4B23_8EB6_7989965F2A99_5891587_GEHOVHAN_REMOTECONTROL_HPP

#include "Command.hpp"

class RemoteControl {
    private:
        Command* command_;
    public:
        void setCommand(Command *command) {
            this->command_ = command;
        }

    void pressButton() {
        if (command_) {
            this->command_->execute();
        }
    }
};


#endif //INTRA_UUID_D1C3D73E_631C_4B23_8EB6_7989965F2A99_5891587_GEHOVHAN_REMOTECONTROL_HPP
