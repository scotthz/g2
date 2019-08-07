/*
 * settings_stm5045.h - machine profile for Scott's CNC, etc using ST-M5045 drivers
 * This file is part of the g2core project
 *
 * Copyright (c) 2012 - 2017 Alden S. Hart, Jr.
 *
 * This file ("the software") is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License, version 2 as published by the
 * Free Software Foundation. You should have received a copy of the GNU General Public
 * License, version 2 along with the software.  If not, see <http://www.gnu.org/licenses/>.
 *
 * As a special exception, you may use this file as part of a software library without
 * restriction. Specifically, if other files instantiate templates or use macros or
 * inline functions from this file, or you compile this file and link it with  other
 * files to produce an executable, this file does not by itself cause the resulting
 * executable to be covered by the GNU General Public License. This exception does not
 * however invalidate any other reasons why the executable file might be covered by the
 * GNU General Public License.
 *
 * THE SOFTWARE IS DISTRIBUTED IN THE HOPE THAT IT WILL BE USEFUL, BUT WITHOUT ANY
 * WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES
 * OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT
 * SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF
 * OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 */

#define INIT_MESSAGE "Initializing configs to Höllenmaschine settings"
#define USB_SERIAL_PORTS_EXPOSED   1

#define GCODE_DEFAULT_UNITS         MILLIMETERS

//
// Motors
//
#define M1_MOTOR_MAP                AXIS_X
#define M1_TRAVEL_PER_REV           8.070
#define M1_STEP_ANGLE               1.8
#define M1_MICROSTEPS               8
#define M1_POWER_MODE               MOTOR_ALWAYS_POWERED
#define M1_POLARITY                 0

#define M2_MOTOR_MAP                AXIS_Y
#define M2_TRAVEL_PER_REV           8.070
#define M2_STEP_ANGLE               1.8
#define M2_MICROSTEPS               8
#define M2_POWER_MODE               MOTOR_ALWAYS_POWERED
#define M2_POLARITY                 1

#define M3_MOTOR_MAP                AXIS_Z
#define M3_TRAVEL_PER_REV           8.070
#define M3_STEP_ANGLE               1.8
#define M3_MICROSTEPS               8
#define M3_POWER_MODE               MOTOR_ALWAYS_POWERED
#define M3_POLARITY                 1
//
// Axes
//
#define X_AXIS_MODE                 AXIS_STANDARD
#define X_VELOCITY_MAX              3200.0
#define X_FEEDRATE_MAX              2032.0
#define X_TRAVEL_MIN                0.0
#define X_TRAVEL_MAX                615
#define X_JERK_MAX                  3600
#define X_JERK_HIGH_SPEED           4000
#define X_HOMING_INPUT              1
#define X_HOMING_DIRECTION          0
#define X_SEARCH_VELOCITY           1016.0  // 40.0
#define X_LATCH_VELOCITY            101.6   // 4.0
#define X_LATCH_BACKOFF             2
#define X_ZERO_BACKOFF              1.0

#define Y_AXIS_MODE                 AXIS_STANDARD
#define Y_VELOCITY_MAX              3200.0
#define Y_FEEDRATE_MAX              2032.0
#define Y_TRAVEL_MIN                0.0
#define Y_TRAVEL_MAX                807.72  // 31.8
#define Y_JERK_MAX                  3600
#define Y_JERK_HIGH_SPEED           4000
#define Y_HOMING_INPUT              3
#define Y_HOMING_DIRECTION          0
#define Y_SEARCH_VELOCITY           1016.0  // 40.0
#define Y_LATCH_VELOCITY            101.6   // 4.0
#define Y_LATCH_BACKOFF             2
#define Y_ZERO_BACKOFF              1.0

#define Z_AXIS_MODE                 AXIS_STANDARD
#define Z_VELOCITY_MAX              1016
#define Z_FEEDRATE_MAX              508
#define Z_TRAVEL_MIN                -87.63  // -3.45
#define Z_TRAVEL_MAX                0.0
#define Z_JERK_MAX                  76.2    // 32.0
#define Z_JERK_HIGH_SPEED           1219.2  // 48.0
#define Z_HOMING_INPUT              6
#define Z_HOMING_DIRECTION          1
#define Z_SEARCH_VELOCITY           800.0   // 31.5
#define Z_LATCH_VELOCITY            101.6   // 4.0
#define Z_LATCH_BACKOFF             2
#define Z_ZERO_BACKOFF              1.0
//
// Inputs
//
// Xmin
// $di1
// Due p14
#define DI1_MODE                    IO_ACTIVE_HIGH
#define DI1_ACTION                  INPUT_ACTION_STOP
#define DI1_FUNCTION                INPUT_FUNCTION_LIMIT
//
// Xmax
// $di2
// Due p15
#define DI2_MODE                    IO_ACTIVE_HIGH
#define DI2_ACTION                  INPUT_ACTION_FAST_STOP
#define DI2_FUNCTION                INPUT_FUNCTION_LIMIT
//
// Ymin
// $di3
// Due p16
#define DI3_MODE                    IO_ACTIVE_HIGH
#define DI3_ACTION                  INPUT_ACTION_STOP
#define DI3_FUNCTION                INPUT_FUNCTION_LIMIT
//
// Ymax
// $di4
// Due p17
#define DI4_MODE                    IO_ACTIVE_HIGH
#define DI4_ACTION                  INPUT_ACTION_FAST_STOP
#define DI4_FUNCTION                INPUT_FUNCTION_LIMIT
//
// Z min
// $di5
// Due p18
#define DI5_MODE                    IO_ACTIVE_HIGH
#define DI5_ACTION                  INPUT_ACTION_ALARM
#define DI5_FUNCTION                INPUT_FUNCTION_LIMIT
//
// Zmax
// $di6
// Due p19
#define DI6_MODE                    IO_ACTIVE_HIGH
#define DI6_ACTION                  INPUT_ACTION_STOP
#define DI6_FUNCTION                INPUT_FUNCTION_LIMIT
