#include <Adafruit_NeoPixel.h>
#include <Arduino.h>

int Power = 11;
int Neo_PIN = 12;

#define NUMPIXELS 1
#define THRESHOLD 69
#define DELAY 100

Adafruit_NeoPixel pixels(NUMPIXELS, Neo_PIN, NEO_GRB + NEO_KHZ800);

const int piezoPin = A0;
const int outPin = D10;

void setup()
{
  // Setup input
  pinMode(piezoPin, INPUT);
  analogReadResolution(12);

  // Configure outpin and bring low (inactive/normally closed).
  pinMode(outPin, OUTPUT);

  // Configure neopixel
  pixels.begin();
  pinMode(Power, OUTPUT);
  digitalWrite(Power, HIGH);
}

void loop()
{
  // It would be nice to see if arduino inlines analogRead() here.
  // This article doesn't answer explicitly, but the only optimization that 
  // changes anything is -O2. Arduino uses -Os by default.
  // Frome https://www.elektormagazine.com/labs/arduino-compiler-optimizations-for-faster-smaller-code
  // | | -O0 | -O1 | -O2 | -O3 | -Os | -Ofast |
  // | -- - | -- - | -- - | -- - | -- - | -- - | -- - |
  // Program memory | 38858 | 22188 | 20920 | 32208 | 20730 | 31834 |
  // Dynamic memory | 382 | 240 | 240 | 240 | 240 | 232 |
  // digitalRead | 14.074 | 5.597 | 5.097 | 3.96 | 4.902 | 3.962 |
  // digitalWrite | 12.592 | 4.5 | 4.502 | 3.24 | 4.532 | 3.24 |
  // pinMode | 14.072 | 4.405 | 4.282 | 2.707 | 4.342 | 2.705 |
  // random() | 141.85 | 96.837 | 50.312 | 50.287 | 91.287 | 50.312 |
  // analogRead() | 148.75 | 111.987 | 111.937 | 111.987 | 111.987 | 111.987 |
  // analogWrite() PWM | 55.54 | 7.607 | 6.417 | 4.277 | 6.602 | 4.27 |

  if (analogRead(piezoPin) > THRESHOLD)
  {
    // reconfigure outpin to float (high-Z/active)
    pinMode(outPin, INPUT);

    // flash pixel orange
    pixels.setPixelColor(0, pixels.Color(150, 15, 0));
    pixels.show();

    // Delay to allow to settle
    delay(DELAY);

    // Configure outpin and bring low (inactive)
    // The default state is low, so it's not necessary to set it explicitly.
    pinMode(outPin, OUTPUT);

    // Turn off LED
    pixels.clear();
    pixels.show();
  }
}
