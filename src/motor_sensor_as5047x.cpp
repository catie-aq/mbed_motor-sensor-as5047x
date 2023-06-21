/*
 * Copyright (c) 2023, CATIE
 * SPDX-License-Identifier: Apache-2.0
 */

#include "motor_sensor_as5047x/motor_sensor_AS5047x.h"

namespace sixtron {

void MotorSensorAS5047x::initSensor()
{
    // nothing to do ...
}

uint16_t MotorSensorAS5047x::getSensorValue()
{
    return _sensor_as5047x->getValue();
}

} // namespace sixtron
