# Arduino-based Automatic Firefighter

An autonomous robot designed to detect and extinguish fires using Arduino technology.

## Table of Contents

- [Introduction](#introduction)
- [Features](#features)
- [Components](#components)
- [Circuit Diagram](#circuit-diagram)
- [Setup and Installation](#setup-and-installation)
- [Usage](#usage)
- [Contributing](#contributing)
- [License](#license)

## Introduction

This project involves building an autonomous fire-fighting robot that can detect and extinguish flames without human intervention. The robot uses flame sensors to detect fire and a water pump mechanism to extinguish it.

## Features

- **Autonomous Navigation**: The robot moves independently in its environment.
- **Fire Detection**: Equipped with flame sensors to detect fire sources.
- **Fire Extinguishing**: Uses a water pump to extinguish detected fires.
- **Servo-Controlled Nozzle**: A servo motor directs the water spray towards the fire.

## Components

- Arduino Uno
- L298N Motor Driver Module
- Flame Sensors (3 units)
- Servo Motor
- DC Motors (for movement)
- Mini DC Submersible Pump
- Water Tank
- Robot Chassis
- 12V Battery
- Connecting Wires

## Setup and Installation

1. **Assemble the Hardware**:
   - Mount the Arduino Uno and motor driver onto the robot chassis.
   - Connect the flame sensors to the front of the robot for optimal detection.
   - Attach the servo motor and fix the water nozzle to it.
   - Install the water pump and connect it to the water tank.
   - Wire the DC motors to the motor driver for movement control.

2. **Wiring**:
   - Connect the components as per the circuit diagram.
   - Ensure all grounds are connected to a common ground.

3. **Programming**:
   - Download and install the [Arduino IDE](https://www.arduino.cc/en/software).
   - Clone this repository:
     ```bash
     git clone https://github.com/sylvester684/ARduino-based-automatic-Firefighter-
     ```
   - Open the `Main.ino` file in the Arduino IDE.
   - Connect the Arduino Uno to your computer via USB.
   - Select the appropriate board and port in the Arduino IDE.
   - Upload the code to the Arduino Uno.

## Usage

1. **Power On**: Turn on the robot using the connected 12V battery.
2. **Operation**:
   - The robot will begin to navigate its environment autonomously.
   - Upon detecting a flame, it will stop and orient the water nozzle towards the fire.
   - The water pump will activate to extinguish the fire.
   - After extinguishing, the robot will resume its patrol.

## Contributing

Contributions are welcome! Please fork this repository and submit a pull request with your enhancements.

## License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.
