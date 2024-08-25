# arduino-mcp2515-simulink
A documentation on how to use CAN on Arduino with Simulink 

Hardware Required : 

Arduino with SPI interface(Arduino Uno or Arduino Mega, I used Arduino Mega)

MCP2515 CAN transceiver. (get the SPI model)

Jumper Wire

A usb to CAN send and receive with a software for debug (PCAN,VectorCAN or CANable V2.0. CANable V2.0 is what I am using with cangaroo)

Matlab and Simulink

Setup the wiring 
![Arduino_MCP2515_connection](https://github.com/user-attachments/assets/b9af91c2-6201-4ce9-a421-89c0464168bb)

Next is to setup the Arduino for transmit and receive in Simulink

First is to get the hardware support package for the simulink to compile and build for Arduino. 

![Screenshot 2024-08-25 214739](https://github.com/user-attachments/assets/b96a2082-3baf-414b-96b5-99f3a20624e4)

Once got everything install, Click on hardware Tab and on the top left is where to setup the target microcontroller to build. Any other manufacturer board can be setup here. Just need to get the hardware support package.

![Screenshot 2024-08-25 215053](https://github.com/user-attachments/assets/36d54a82-aed4-4a01-abc0-311b706a95c0)

For Arduino series do not need to do any setting but you can pay attention to pin setup for SPI and CAN. that will explain the purpose of INT pin and CS pin.



