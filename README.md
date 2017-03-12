# Arduino Scripts #

This repository contains different kinds of scripts for Arduino microcontroller boards.

## Specifications ##

The following were used to run and use the scripts.

### Hardware Specifications ###

* Arduino Mega 2560   
* 3x4 hex keypad
* long pin connectors

### Software Specifications ###

* Arduino IDE (C++11)

## Projects ###

### Morse Code ###

* This project contains one script file.
+ Description:
	* The board communicates in Morse code the string stored in a constant char array.


### Keypad Password ###

* This project contains the code and a third-party library for the keypad.
+ Description:
	* What the script does is basically requiring the user to create a password then re-enter it until these two match.
	* Then the password itself is requested again until it's correct.
	* If the password entered is correct the LED on the board (PIN 13) that until now has been constantly on is turned off for 1 second.
