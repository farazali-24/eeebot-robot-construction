
# EEEbot Robot Construction and Motor Control (ESP32)

An ESP32-based robotic vehicle construction project involving PCB assembly, soldering, mechanical integration and DC motor control. The project demonstrates the development of a mobile robot from individual electronic and mechanical components through to programmed movement using Arduino C++.


## Demo / Images

### PCB Assembly

Surface-mount components installed on the EEEbot PCB.

<img src="docs/pcb-surface-mount.jpg" alt="EEEbot PCB Assembly" width="500">

### Motor Control Flowchart

Flowchart illustrating the motor-control logic implemented using the ESP32.

<img src="docs/motor-control-flowchart.jpg" alt="EEEbot Motor Control Flowchart" width="450">

### Front Chassis Assembly

Assembly of the front chassis, including the steering servo and mechanical components.

<img src="docs/front-chassis-assembly.jpg" alt="EEEbot Front Chassis Assembly" width="500">

### Completed EEEbot

Assembled robotic vehicle incorporating the ESP32, PCB, motors and chassis.

<img src="docs/robot-assembled-side.jpg" alt="Completed EEEbot" width="500">

### Additional Documentation

Further construction photographs, the ESP32 pinout and supporting documentation are available in the [docs folder](docs/README.md).


## Hardware

- ESP32 microcontroller
- EEEbot printed circuit board (PCB)
- DC motors
- Motor encoders
- Servo motor
- Motor-driving circuitry
- Front and rear chassis components
- Wheels and mechanical fixings
- Battery and power connections
- Surface-mount and through-hole electronic components

### Motor control pin map

The Arduino program uses ESP32 GPIO pins to control the speed and direction of two DC motors.

The exact connections are documented in the original EEEbot schematic and Arduino program.

## How it works

The ESP32 acts as the main controller for the robotic vehicle.

1. The ESP32 initialises the GPIO pins connected to the motor-driving circuitry.
2. The motor-control outputs are configured.
3. PWM is used to control motor power.
4. Direction signals determine the rotation direction of each motor.
5. Both DC motors are driven to move the vehicle forward.

The motor-driving circuitry allows the low-power ESP32 control signals to operate the vehicle's motors.

## Construction Process

### 1. PCB Assembly

Surface-mount and through-hole components were soldered onto the EEEbot PCB.

This involved component placement, soldering and checking the completed connections.

### 2. Front Chassis Assembly

The front chassis was assembled, including the steering servo and mechanical components.

A mechanical fitting issue with the 3D-printed chassis required adjustment to secure the servo correctly.

### 3. Rear Chassis Assembly

The rear chassis was constructed by integrating the DC motors and encoder components.

Motor and encoder connections were soldered and connected to the PCB.

### 4. Final Integration

The front and rear assemblies were combined to create the complete robotic vehicle.

The motors, electronics and power connections were integrated in preparation for programming and testing.

## Build & run

1. Install the Arduino IDE.
2. Install the ESP32 board support package.
3. Connect the assembled EEEbot to the computer.
4. Open `eeebot-motor-control.ino`.
5. Select the appropriate ESP32 board and serial port.
6. Verify the motor-control connections against the EEEbot schematic.
7. Compile and upload the Arduino program.
8. Test the motor outputs and forward movement.

## Code overview

The Arduino program demonstrates basic control of two DC motors using an ESP32.

### GPIO configuration

GPIO pins are defined for each motor's speed and direction controls.

### Motor initialisation

The required motor-control pins are configured as outputs using `pinMode()`.

### Motor speed control

PWM output is used to regulate the power delivered to the motors.

### Motor direction

Digital output signals determine the direction of motor rotation.

The program configures both motors for forward movement.

## Results / notes

The EEEbot was assembled and programmed as part of a 10-metre movement challenge.

The project demonstrated PCB assembly, electronic integration and programmed motor control.

### Limitations

- Mechanical alignment issues affected the vehicle's ability to travel in a straight line.
- The 3D-printed chassis resulted in slightly misaligned motor positioning.
- Further movement correction would be required to improve straight-line accuracy.

### Future improvements

- Improve motor and chassis alignment.
- Use encoder feedback to monitor wheel rotation.
- Introduce closed-loop control for more accurate movement.
- Implement movement corrections to reduce directional drift.

## What I learned

- Surface-mount and through-hole soldering techniques.
- PCB assembly and component integration.
- Mechanical assembly of robotic chassis components.
- DC motor and encoder integration.
- ESP32 programming using Arduino C++.
- Basic PWM motor control.
- Hardware troubleshooting and mechanical alignment considerations.
- Integrating electronic hardware and embedded software into a robotic system.

## Credits

Developed as part of an Electrical and Electronic Engineering laboratory project.

**Hardware:**
- ESP32 microcontroller
- EEEbot PCB
- DC motors and encoders
- Servo motor
- Robot chassis

**Software:**
- Arduino IDE
- ESP32 Arduino board support

## License

This project is licensed under the MIT License. See [LICENSE](LICENSE) for details.
