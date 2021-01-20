# Pollution Monitor
  ## Abstract:
In our project is making system of reverse car parking. Whenever we do reverse back then there is chances of hitting back of car with wall. So our project will be making buzzer sound increasing according to the distance our car can move back. If there is enough distance for the car to move backward it will make normal buzzer beep and slowly when the car reaches too close to the walls then at that time intensity of beeping will keep increasing to indicate that we should stop the car and can print that on the dashboard of the car how much distance we can go further in backward direction..
### Components:
1.	Ultrasonic Sensor
2.	Arduino UNO
3.	Buzzer
4.	LCD
5.	Potentiometer (For Brightness of  LCD) 

### About Component:
   • Ultrasonic Sensor:About Pins:
Trigger pin will send High State for 10 ms and the 8 sonic sound which is received by echo pin.Echo Pin will be responsible for calculating time by that time will be double as time from transmitting the sound to bouncing back. So we will take half time for calculating 
distance.

Working:
When the ultrasound transmitted from trigger strikes on 
the object and bounces back to echo. This way we calculate 
the total time.
From time and speed of sound which is 340m/s we can 
calculate the distance of the object from the sensor.   
                           Distance=Speed X Time   
Buzzer:Operating Voltage 3 to 8V.
Buzzer has 2 pins (Ground, Power).Inside the cylindrical buzzer there is a piezo element. When a power given to buzzer then the ceramic disc inside the piezo elements start vibrating. Hence creating a sound
If we apply different frequency to the buzzer from pwm pins then it vibration changes making different beep sound or a tone

  
### Circuit Diagram:




### Working: 

### Program Logic:
        For measurind distace of the object from sesnor.
	Trigger pin high for 10ms
	Trigger pin low. to detect the signal at echo
 	
 	time=pulseIn(echo,HIGH);
 	distance=time*34/2000;
 	float d=distance/100;

      For indication to the car when to stop the car.

  	 if(d<2)
    	      print("stop")
	 else if(d>=2&&d<=3)
                           print("move slowly")
	 else if(d>3)
                           print("MOVE BACK");