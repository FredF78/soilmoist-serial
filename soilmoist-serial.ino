#include <SimpleTimer.h>

const int MOIST_IN = 0;

SimpleTimer timer;

void setup(void)
{
  Serial.begin(9600);
  timer.setInterval(5000, measureAndSend);
}

void loop()
{
  timer.run();
}

void measureAndSend(void) 
{
  int moistLevel = analogRead(MOIST_IN);
  Serial.print(moistLevel);
  Serial.print("\r\n");
}
