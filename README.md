# GroveQTouch
QTouch Sensor Library for Arduino + Grove shield

[Link to the tested grove module](http://wiki.seeed.cc/Grove-Q_Touch_Sensor/)

## Example
```c++
#include <GroveQTouch.h>

GroveQTouch qTouchSensor;

void setup() {
  Serial.begin(9600);
  qTouchSensor.initialize(GROVE_I2C);
  pinMode(13, OUTPUT);
}

void loop() {
  if(qTouchSensor.isKeyTouch(0)) {
    digitalWrite(13, HIGH);
  } else {
    digitalWrite(13, LOW);
  }
  
  unsigned char state = qTouchSensor.getState();
  if(state) {
    Serial.println(state, BIN);
  }
  
  delay(100);
}
```

## Documentation

###`void initialize(GrovePin pins)`
Initialize the sensor before using it.

Parameters:
- `pins`: Must be a digital socket (GROVE_D2 to GROVE_D8)

###`boolean isKeyTouch(unsigned char key)`
Return `true` if the key is curently touched

Parameters:
- `key`: the number of the key (between 0 ans 6)

###`unsigned char getState()`
Return the state of all the keys. Each bit represent the state of a key. Bit0 correspond to key0 and so on. If the bit is 1 then the jey is pressed.