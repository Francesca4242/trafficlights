#include <Adafruit_NeoPixel.h>

 #define PIN 10
 
// Parameter 1 = number of pixels in strip
// Parameter 2 = pin number (most are valid)
// Parameter 3 = pixel type flags, add together as needed:
//   NEO_KHZ800  800 KHz bitstream (most NeoPixel products w/WS2812 LEDs)
//   NEO_KHZ400  400 KHz (classic 'v1' (not v2) FLORA pixels, WS2811 drivers)
//   NEO_GRB     Pixels are wired for GRB bitstream (most NeoPixel products)
//   NEO_RGB     Pixels are wired for RGB bitstream (v1 FLORA pixels, not v2)
Adafruit_NeoPixel pixels = Adafruit_NeoPixel(60, PIN, NEO_GRB + NEO_KHZ800);

void red() {

    for(int i=0;i<20;i++){

    // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
    pixels.setPixelColor(i, pixels.Color(255,0,0));
    }

     for(int a=20;a<60;a++){

    // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
    pixels.setPixelColor(a, pixels.Color(0,0,0));
    }


    pixels.show(); // This sends the updated pixel color to the hardware
}

void orange(){
   for(int i=0;i<20;i++){

    // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
    pixels.setPixelColor(i, pixels.Color(0,0,0));
    }

     for(int a=20;a<40;a++){

    // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
    pixels.setPixelColor(a, pixels.Color(255,64,0));
    }

    for(int b=40;b<60;b++){

    // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
    pixels.setPixelColor(b, pixels.Color(0,0,0));
    }


    pixels.show(); // This sends the updated pixel color to the hardware
}

void green(){

 for(int i=0;i<40;i++){

    // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
    pixels.setPixelColor(i, pixels.Color(0,0,0));
    }

     for(int a=40;a<60;a++){

    // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
    pixels.setPixelColor(a, pixels.Color(0,255,0));
    }


    pixels.show(); // This sends the updated pixel color to the hardware

}




void setup() {
  // put your setup code here, to run once:
pixels.begin();
Serial.begin(9600);
}



void loop() {
  // put your main code here, to run repeatedly:
int   incomingByte=Serial.read();

    if (incomingByte=='1'){
red();
    }

if (incomingByte=='2'){
orange();
}

if (incomingByte=='3'){
  green();
}
}
