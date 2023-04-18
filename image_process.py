import time
import serial
from PIL import Image, ImageDraw
import re

# Set up serial communication with Arduino
with serial.Serial('COM5', 9600, timeout=1) as ser:
    time.sleep(2)
    ser.readline()  # discard first line

    try:
        # Read the value of the photoresistor from the serial port
        line = ser.readline().decode().strip()
        A0 = int(re.search(r'\d+', line).group(0))

        # Create a new image with a white background
        img = Image.new('RGB', (80, 80), color=(255, 255, 255))

        # Draw a rectangle with varying shades of grey
        Drawer = ImageDraw.Draw(img)
        Drawer.rectangle((0, 0, 80, 80), fill=(A0, A0, A0), outline=None)

        # Show the image on the screen
        img.show()

    except serial.SerialException as e:
        print(f"Serial port error: {e}")
