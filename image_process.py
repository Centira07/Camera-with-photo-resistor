import time
import serial
from PIL import Image, ImageDraw
import re

# Set up serial communication with Arduino
ser = serial.Serial()
ser.baudrate = 9600
ser.port = 'COM5'

ser.open()
time.sleep(2)
line = ser.readline()

find_all = re.findall("\d+", str(line))

A0 = int(find_all[0])

img = Image.new('RGB', (80, 80), color = (255, 255, 255))

Drawer = ImageDraw.Draw(img)
Drawer.rectangle((0,0,80,80), fill=(A0,A0,A0), outline=None)
img.show()
