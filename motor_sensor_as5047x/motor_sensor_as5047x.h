/*
 * Copyright (c) 2023, CATIE
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef CATIE_SIXTRON_MOTORSENSOR_MBED_AS147X_H
#define CATIE_SIXTRON_MOTORSENSOR_MBED_AS147X_H

#include "as5047x.h"
#include "mbed.h"
#include "motor_sensor_encoder.h"

namespace sixtron {

#define DIR_NORMAL (+1)
#define DIR_INVERTED (-1)

class MotorSensorAS5047x: public MotorSensorEncoder {
public:
    MotorSensorAS5047x(AS5047x *sensor_as5047x,
            float rate_dt,
            int32_t sensorResolution,
            float motorResolution,
            float motorWheelRadius,
            int encDirection = DIR_NORMAL):
            MotorSensorEncoder(
                    rate_dt, sensorResolution, motorResolution, motorWheelRadius, encDirection),
            _sensor_as5047x(sensor_as5047x) {};

protected:
    void initSensor() override;
    uint16_t getSensorValue() override;

private:
    AS5047x *_sensor_as5047x;
};

} // namespace sixtron

#endif // CATIE_SIXTRON_MOTORSENSOR_MBED_AS147X_H
