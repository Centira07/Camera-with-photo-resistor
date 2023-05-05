import time
import serial
from PIL import Image, ImageDraw
import re

# Set up serial communication with Arduino
with serial.Serial('COM12', 9600, timeout=1) as ser:
    time.sleep(2)

    try:
        # Create a new image with a white background
        img = Image.new('RGB', (640, 960), color=(255, 255, 255))

        # Read the value 
        lines = ser.readlines()
        numbers = []
        for line in lines:
            line = line.decode().strip().rstrip(';')
            line_numbers = [int(num) for num in line.split(',')]
            numbers.extend(line_numbers)

        # Draw 80x80 rectangles 
        Drawer = ImageDraw.Draw(img)
        for i, num in enumerate(numbers):
            x = (i % 8) * 80
            y = (i // 8) * 80
            Drawer.rectangle((x, y, x+80, y+80), fill=(num, num, num), outline=None)
            
            # Print the number on the rectangle
            #text_color = (255 - num, 255 - num, 255 - num)  # Invert the color for better visibility
            #Drawer.text((x + 30, y + 30), str(num), fill=text_color)
        

        # Show the image on the screen
        img = img.rotate(90, expand=True)
        img.show()
        img.save("photo.png")



    except serial.SerialException as e:
        print(f"Serial port error: {e}")




