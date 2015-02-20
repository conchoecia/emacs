# Photino 
## An easy-to-build luminometer for sensitive measurements of light

### Parts list

* [This chip](insert_link_here) gives a frequency from 0.3 Hz to 200 kHz in direct proportion to the light output.

* The [Arduino Micro](http://arduino.cc/en/Main/arduinoBoardMicro) can talk to the chip directly. (Other boards will work as well, but you might need to connect to pin 2 instead of pin 3.)

* There are some 3D printed enclosures to act as light-tight sample chambers.

* The UI for control and data acquisition is done using [MaxMSP](https://cycling74.com/products/max/) with [R scripts](http://www.r-project.org) to generate plots.

### Code used

* Arduino sketch to upload to your board

* Circuit diagram for connecting the sensor

* MaxMSP code to run on your desktop and talk to the Arduino (and sensor).

* R code for plotting the saved files.

