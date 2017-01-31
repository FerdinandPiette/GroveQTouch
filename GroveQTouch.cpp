#include "GroveQTouch.h"

GroveQTouch::GroveQTouch() { }

void GroveQTouch::initialize(GrovePin pins) { }

boolean GroveQTouch::isKeyTouch(unsigned char key) {
	return this->_sensor.isTouch(key);
}

unsigned char GroveQTouch::getState() {
	return this->_sensor.getState();
}
