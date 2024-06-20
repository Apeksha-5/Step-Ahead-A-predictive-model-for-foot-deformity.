import serial

ser = None

try:
    # Open the serial port
    ser = serial.Serial('COM7', 9600)

    # Open a file for writing
    with open('data.csv', 'w') as file:
        file.write("point 1,point 2,point 3,point 4,point 5,point 6,point 7,point 8\n")

        # Read data from the serial port indefinitely
        while True:
            # Read a line from the serial port
            line = ser.readline().decode('utf-8').strip()

            # Split the line into button states
            button_states = line.split()

            # Write the button states to the CSV file
            file.write(",".join(button_states) + '\n')
            file.flush()  # Flush the buffer to ensure data is written immediately
            
            print("Received:", line)

except KeyboardInterrupt:
    print("Keyboard interrupt detected. Exiting...")

finally:
    
    # Close the serial port
    if ser:
        ser.close()
