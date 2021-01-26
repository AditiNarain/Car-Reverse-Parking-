# Reverse Car Parking System
  ## Abstract:
In our project is making system of reverse car parking. Whenever we do reverse back then there is chances of hitting back of car with wall. So our project will be making buzzer sound increasing according to the distance our car can move back. If there is enough distance for the car to move backward it will make normal buzzer beep and slowly when the car reaches too close to the walls then at that time intensity of beeping will keep increasing to indicate that we should stop the car and can print that on the dashboard of the car how much distance we can go further in backward direction..
### Components:
1.	Ultrasonic Sensor
2.	Arduino UNO
3.	Buzzer
4.	LCD
5.	Potentiometer (For Brightness of  LCD) 

### About Component:
####   • Ultrasonic Sensor:
 ##### About Pins:
Trigger pin will send High State for 10 ms and the 8 sonic sound which is received by echo pin.Echo Pin will be responsible for calculating time by that time will be double as time from transmitting the sound to bouncing back. So we will take half time for calculating distance.
 ##### Working:
When the ultrasound transmitted from trigger strikes on 
the object and bounces back to echo. This way we calculate 
the total time.
From time and speed of sound which is 340m/s we can 
calculate the distance of the object from the sensor.   
  ###### Distance=Speed X Time   
  
#### Buzzer:
Operating Voltage 3 to 8V.Buzzer has 2 pins (Ground, Power).Inside the cylindrical buzzer there is a piezo element. When a power given to buzzer then the ceramic disc inside the piezo elements start vibrating. Hence creating a sound
If we apply different frequency to the buzzer from pwm pins of arduino then it vibration changes which results in the change in beep sound or a tone.

  
### Circuit Diagram:

![schematic](https://user-images.githubusercontent.com/73650233/105150945-60c24d80-5b2b-11eb-85be-3dd114cbbc51.png)

### Working: 
When the car will be doing reverse back then our project will get activated.When the oject for example wall is at a particular distance more than 3 m then it will make a normal beep sound indicating that there is much area to move back and the distance also is also displayed on the screen.
![1](https://user-images.githubusercontent.com/73650233/105152196-e09ce780-5b2c-11eb-818a-e2cf6add9bc0.png)
Same as the car is moving back the change is sound of buzzer will let us know how much far we can go.
![2](https://user-images.githubusercontent.com/73650233/105152220-e5fa3200-5b2c-11eb-8fe3-6c85948e60a8.png)
As we reach at the extreme end then beep sound of buzzer is much fast indicating to stop the car.
Same if the person want to know the distance available for the car to move that is also disdplayed on thr screen.
![3](https://user-images.githubusercontent.com/73650233/105152228-e8f52280-5b2c-11eb-9f9f-7289ba398af9.png)
Hence this way we will save our car from hiting as well as easily driver can back the car.
![circuit](https://user-images.githubusercontent.com/73650233/105152428-2bb6fa80-5b2d-11eb-8762-9ce9fcad88ea.png)

### Program Logic:
   #### For measurind distace of the object from sesnor.
	Trigger pin high for 10ms
	Trigger pin low. to detect the signal at echo
 	
 	time=pulseIn(echo,HIGH);
 	distance=time*34/2000;
 	float d=distance/100;

   #### For indication to the car when to stop the car.
  	 if(d<2)
	      print("stop")
	 else if(d>=2&&d<=3)
	      print("move slowly")
	 else if(d>3)
	      print("MOVE BACK");
