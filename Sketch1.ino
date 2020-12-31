#include <Joystick.h>

Joystick_ Joystick(JOYSTICK_DEFAULT_REPORT_ID, JOYSTICK_TYPE_GAMEPAD,
	5, 2,
	true, true, false,
	true, true, true,
	false, false,
	false, false, false);

int RxAxis_ = 0;
int RyAxis_ = 0;
int XAxis_ = 0;
int YAxis_ = 0;

const bool initAutoSendState = true;

void setup()
{
	pinMode(9, INPUT_PULLUP);
	pinMode(4, INPUT_PULLUP);
	pinMode(5, INPUT_PULLUP);
	pinMode(6, INPUT_PULLUP);
	pinMode(2, INPUT_PULLUP);
	pinMode(8, INPUT_PULLUP);
	pinMode(3, INPUT_PULLUP);
	Joystick.begin();
	Joystick.begin();

}




void loop()
{

	RxAxis_ = analogRead(A2);
	RxAxis_ = map(RxAxis_, 0, 1023, 255, 0);
	Joystick.setRxAxis(RxAxis_);

	RyAxis_ = analogRead(A3);
	RyAxis_ = map(RyAxis_, 0, 1023, 255, 0);
	Joystick.setRxAxis(RyAxis_);

	XAxis_ = analogRead(A0);
	XAxis_ = map(XAxis_, 0, 1023, 255, 0);
	Joystick.setXAxis(XAxis_);

	YAxis_ = analogRead(A1);
	YAxis_ = map(YAxis_, 0, 1023, 255, 0);
	Joystick.setYAxis(YAxis_);

	if (digitalRead(9) == LOW)
	{
		Joystick.pressButton(0);
	}
	else
	{
		Joystick.releaseButton(0);
	}

	if (digitalRead(4) == LOW)
	{
		Joystick.pressButton(1);
	}
	else
	{
		Joystick.releaseButton(1);
	}

	if (digitalRead(5) == LOW)
	{
		Joystick.pressButton(2);
	}
	else
	{
		Joystick.releaseButton(2);
	}

	if (digitalRead(6) == LOW)
	{
		Joystick.pressButton(3);
	}
	else
	{
		Joystick.releaseButton(3);
	}

	if (digitalRead(2) == LOW)
	{
		Joystick.pressButton(4);
	}
	else
	{
		Joystick.releaseButton(4);
	}
	if (digitalRead(8) == LOW)
	{
		Joystick.pressButton(5);
	}
	else
	{
		Joystick.releaseButton(5);
	}

	if (digitalRead(3) == LOW)
	{
		Joystick.pressButton(6);
	}
	else
	{
		Joystick.releaseButton(6);
	}


	delay(10);
}