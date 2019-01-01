/*
 * settings_mani.h - Settings for Mani's NC mill.
 *
 * Copyright (c) 2019 Manuel Desbonnet
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
#define INIT_MESSAGE "Initializing configs to Mani mill settings"

// Do not set Mx_STEPS_PER_UNIT - it seems to cause the TRAVEL_PER_REV value to
// be corrupted (and set to zero). Let the controller work it out itself.

// MOTOR 1
#define M1_MOTOR_MAP                AXIS_X_EXTERNAL         // {1ma: AXIS_X, AXIS_Y...
#define M1_STEP_ANGLE               1.8                     // {1sa: degrees per step
#define M1_TRAVEL_PER_REV           4.0                     // {1tr:
#define M1_MICROSTEPS               8                       // {1mi:  1,2,4,8,    16,32 (G2 ONLY)
#define M1_STEPS_PER_UNIT           0                       // {1su:  steps to issue per unit of length or degrees of rotation
#define M1_POLARITY                 1                       // {1po:  0=normal direction, 1=inverted direction
#define M1_POWER_MODE               MOTOR_POWERED_IN_CYCLE  // {1pm:  MOTOR_DISABLED, MOTOR_ALWAYS_POWERED, MOTOR_POWERED_IN_CYCLE, MOTOR_POWERED_ONLY_WHEN_MOVING

// MOTOR 2
#define M2_MOTOR_MAP                AXIS_Y_EXTERNAL         // {1ma: AXIS_X, AXIS_Y...
#define M2_STEP_ANGLE               1.8                     // {1sa: degrees per step
#define M2_TRAVEL_PER_REV           4.0                     // {1tr:
#define M2_MICROSTEPS               8                       // {1mi:  1,2,4,8,    16,32 (G2 ONLY)
#define M2_POLARITY                 0                       // {1po:  0=normal direction, 1=inverted direction
#define M2_POWER_MODE               MOTOR_POWERED_IN_CYCLE  // {1pm:  MOTOR_DISABLED, MOTOR_ALWAYS_POWERED, MOTOR_POWERED_IN_CYCLE, MOTOR_POWERED_ONLY_WHEN_MOVING

// MOTOR 3
#define M3_MOTOR_MAP                AXIS_Z_EXTERNAL         // {1ma: AXIS_X, AXIS_Y...
#define M3_STEP_ANGLE               1.8                     // {1sa: degrees per step
#define M3_TRAVEL_PER_REV           2.0                     // {1tr:
#define M3_MICROSTEPS               8                       // {1mi:  1,2,4,8,    16,32 (G2 ONLY)
#define M3_POLARITY                 1                       // {1po:  0=normal direction, 1=inverted direction
#define M3_POWER_MODE               MOTOR_POWERED_IN_CYCLE  // {1pm:  MOTOR_DISABLED, MOTOR_ALWAYS_POWERED, MOTOR_POWERED_IN_CYCLE, MOTOR_POWERED_ONLY_WHEN_MOVING

// X AXIS
#define X_AXIS_MODE                 AXIS_STANDARD            // {xam:  see canonical_machine.h cmAxisMode for valid values
#define X_VELOCITY_MAX              800.0                   // {xvm:  G0 max velocity in mm/min
#define X_FEEDRATE_MAX              800.0                   // {xfr:  G1 max feed rate in mm/min
#define X_TRAVEL_MIN                0.0                     // {xtn:  minimum travel for soft limits
#define X_TRAVEL_MAX                370.0                   // {xtm:  travel between switches or crashes
#define X_JERK_MAX                  500.0                   // {xjm:
#define X_JERK_HIGH_SPEED           500.0                   // {xjh:
#define X_HOMING_INPUT              1                       // {xhi:  input used for homing or 0 to disable
#define X_HOMING_DIRECTION          0                       // {xhd:  0=search moves negative, 1= search moves positive
#define X_SEARCH_VELOCITY           800.0                   // {xsv:  minus means move to minimum switch
#define X_LATCH_VELOCITY            100.0                   // {xlv:  mm/min
#define X_LATCH_BACKOFF             10.0                    // {xlb:  mm
#define X_ZERO_BACKOFF              2.0                     // {xzb:  mm

// Y AXIS
#define Y_AXIS_MODE                 AXIS_STANDARD            // {xam:  see canonical_machine.h cmAxisMode for valid values
#define Y_VELOCITY_MAX              800.0                   // {xvm:  G0 max velocity in mm/min
#define Y_FEEDRATE_MAX              800.0                   // {xfr:  G1 max feed rate in mm/min
#define Y_TRAVEL_MIN                0.0                     // {xtn:  minimum travel for soft limits
#define Y_TRAVEL_MAX                230.0                   // {xtm:  travel between switches or crashes
#define Y_JERK_MAX                  500.0                   // {xjm:
#define Y_JERK_HIGH_SPEED           500.0                   // {xjh:
#define Y_HOMING_INPUT              3                       // {xhi:  input used for homing or 0 to disable
#define Y_HOMING_DIRECTION          0                       // {xhd:  0=search moves negative, 1= search moves positive
#define Y_SEARCH_VELOCITY           800.0                   // {xsv:  minus means move to minimum switch
#define Y_LATCH_VELOCITY            100.0                   // {xlv:  mm/min
#define Y_LATCH_BACKOFF             10.0                    // {xlb:  mm
#define Y_ZERO_BACKOFF              2.0                     // {xzb:  mm

// Z AXIS
#define Z_AXIS_MODE                 AXIS_STANDARD            // {xam:  see canonical_machine.h cmAxisMode for valid values
#define Z_VELOCITY_MAX              800.0                   // {xvm:  G0 max velocity in mm/min
#define Z_FEEDRATE_MAX              800.0                   // {xfr:  G1 max feed rate in mm/min
#define Z_TRAVEL_MIN                0.0                     // {xtn:  minimum travel for soft limits
#define Z_TRAVEL_MAX                125.0                   // {xtm:  travel between switches or crashes
#define Z_JERK_MAX                  500.0                   // {xjm:
#define Z_JERK_HIGH_SPEED           500.0                   // {xjh:
#define Z_HOMING_INPUT              6                       // {xhi:  input used for homing or 0 to disable
#define Z_HOMING_DIRECTION          1                       // {xhd:  0=search moves negative, 1= search moves positive
#define Z_SEARCH_VELOCITY           800.0                   // {xsv:  minus means move to minimum switch
#define Z_LATCH_VELOCITY            100.0                   // {xlv:  mm/min
#define Z_LATCH_BACKOFF             10.0                    // {xlb:  mm
#define Z_ZERO_BACKOFF              2.0                     // {xzb:  mm

//*****************************************************************************
//*** GPIO Input / Output Settings ********************************************
//*****************************************************************************

// DIGITAL INPUTS
// Set to allow the board to function if not otherwise set up
// (least disruptive settings)

/* Legend:
    IO_MODE_DISABLED
    IO_ACTIVE_LOW    aka NORMALLY_OPEN
    IO_ACTIVE_HIGH   aka NORMALLY_CLOSED

    INPUT_ACTION_NONE
    INPUT_ACTION_STOP
    INPUT_ACTION_FAST_STOP
    INPUT_ACTION_HALT
    INPUT_ACTION_RESET

    INPUT_FUNCTION_NONE
    INPUT_FUNCTION_LIMIT
    INPUT_FUNCTION_INTERLOCK
    INPUT_FUNCTION_SHUTDOWN
    INPUT_FUNCTION_PANIC
*/

// Xmin
#define DI1_MODE                    IO_ACTIVE_LOW     // Normally open
#define DI1_ACTION                  INPUT_ACTION_NONE
#define DI1_FUNCTION                INPUT_FUNCTION_NONE

// Ymin
#define DI3_MODE                    IO_ACTIVE_LOW     // Normally open
#define DI3_ACTION                  INPUT_ACTION_NONE
#define DI3_FUNCTION                INPUT_FUNCTION_NONE

// Zmax
#define DI6_MODE                    IO_ACTIVE_LOW     // Normally open
#define DI6_ACTION                  INPUT_ACTION_NONE
#define DI6_FUNCTION                INPUT_FUNCTION_NONE
