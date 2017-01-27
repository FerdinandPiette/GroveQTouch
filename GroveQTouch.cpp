#include "GroveQTouch.h"

GroveQTouch::GroveQTouch(GrovePin pins) { }

void GroveQTouch::initialize() { }

boolean GroveQTouch::isKeyTouch(unsigned char key) {
	return this->_sensor.isTouch(key);
}

unsigned char GroveQTouch::getState() {
	return this->_sensor.getState();
}
