
// Frequency counter sketch, for measuring frequencies low enough to execute an interrupt for each cycle
// Connect the frequency source to the INT0 pin (digital pin 2 on an Arduino Uno)

volatile unsigned long firstPulseTime;
volatile unsigned long lastPulseTime;
volatile unsigned long numPulses;
unsigned long window = 100;
unsigned long timelapse;
float criticaltime;

void isr()
{
 ++numPulses;
}

void setup()
{
 Serial.begin(9600);    // this is here so that we can print the result
 pinMode(2, INPUT);     // put a PWM signal on pin 3, then we can connect pin 3 to pin 2 to test the counter
 //analogWrite(3, 128);
  criticaltime = 1000 * window * 0.9;
}

// Measure the frequency over the specified sample time in milliseconds, returning the frequency in Hz
float readFrequency(unsigned long sampleTime)
{
 numPulses = 0;                      // prime the system to start a new reading

 firstPulseTime = micros();
 // ON the Arduino Micro, interrupt 0 = pin 3 and interrupt 1 = pin 2
 
 attachInterrupt(0, isr, RISING);    // enable the interrupt
 delay(sampleTime);
 lastPulseTime = micros();
 detachInterrupt(0);
 timelapse = (unsigned long)(lastPulseTime - firstPulseTime);
 float cat = (numPulses < 3) ? 0 : (1000000.0 * (float)(numPulses - 2))/timelapse;
 if (timelapse < criticaltime) { 
   // when in error, spits out 20 lines per second at window of 100 ms
  cat = -140000;
 }
/* Serial.print(numPulses);
 Serial.print(" ");
 Serial.print(lastPulseTime);
 Serial.print(" ");
 Serial.print(firstPulseTime);
 Serial.print(" ");
 Serial.println((unsigned long)(lastPulseTime - firstPulseTime));
 */
 return(cat);
}

void loop()
{
 float freq = readFrequency(window);
 //Serial.print(firstPulseTime/1000000.0);
 //Serial.print("\t");
 Serial.println(freq);
 delay(5);
}



