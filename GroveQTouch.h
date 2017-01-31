#ifndef GroveQTouch_H
#define GroveQTouch_H

#include <Arduino.h>
#include <Grove.h>
#include "Seeed_QTouch.h"

class GroveQTouch {
	private:
		unsigned int _pin;
		SeeedQTouch _sensor;
		
	public:
		GroveQTouch();
		virtual ~GroveQTouch() {};
		void initialize(GrovePin pins);
		boolean isKeyTouch(unsigned char key);
		unsigned char getState();
};

#endif