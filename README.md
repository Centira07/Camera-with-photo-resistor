# Photoresistor Digital Camera
Project made by Connor Grammens and Jie Feng

# photoresistor.ino
Below is a detailed description on how the c++ code made in Arduino IDE that is used to write the values of the photoresistor to the serial monitor.

The code uses one sensor value, 3 values s0, s1, and s3 are used for cycling through the multiplexers, an inhibitor value used to enable the multiplexers, a button value and a bolean value that determines if the photoresistors values are recorded. The values s0, s1, and s2 are used as outputs and the button value is used as an input. When the button is high corresponding to the button being pressed the inhibitor is set to low and the boolean value is set to 1. The opposite being when the button is high the inhibitor is set to high. Now when the boolean is set to 1 the for loop will cycle through the corresponding s0, s1, and s2 values that are needed to correspond the output to each input based on the table found in the wiki under the multiplexer section in the circuit diagram page. The code will print each row corresponding to one multiplxer in individually. Now at each change in s0, s1, s2 values coresponding to different inputs of the multiplexer the sensor value is read from the analog pin attached to the multiplexer. The sensor value is then mapped to a value between 0 and 255 in order so the python code can use the value for a pixel value. The pixel value is then printed to the serial monitor for the python code to read. 

# image_process.py
This python script is written to read data from the Arduino through a serial connection and create an image based on the received data. 
