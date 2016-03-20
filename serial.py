# need to download pyserial here: https://pypi.python.org/pypi/pyserial 

# sys.path.append('/Users/Docco/downloads/pyserial-master/serial') #if your path is an issue...
import serial # connection with Arduino
arduino = serial.Serial('/dev/tty.usbmodem1411', 9600, timeout=.1 )
time.sleep(1) #give the connection a second to settle
arduino.write(b'1') #Will (likely) stop the motors