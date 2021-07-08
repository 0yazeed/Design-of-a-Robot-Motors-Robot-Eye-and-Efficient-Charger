# Charger



### This is a circuit design for charging `LIPO` battery 

Input is 220 v with 60 Frq ac, so I designed the circuit to give output 11.1 v and 220mA `why I chose 220mA? because, to charge the battery you need to supply it by 10% current of its capacity, so 10% of 2200mAh is 220mA`


### Implementation Steps

*  transformer to transform 220v to 11.1 v
* two diode to build a full-wave rectifier 
* capacitor to modify the wave to be a dc 
* two resistors to fix current and voltage