#include <Adafruit_NeoPixel.h>
#include <new.h>
#ifdef __AVR__
  #include <avr/power.h>
#endif

#define PIN 6
#define NUMPIXELS 256
#define LIGHT_OFF_RATE 0.2
#define DELAY_VAL 1000

Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

unsigned char delayval_q = 1;
unsigned char delayval_sp = 1;
unsigned char k = 0;

unsigned char m[256];

void setup() {
    pixels.begin();
    pixels.show();
    delay(DELAY_VAL * 3);
    Serial.begin(9600);
    Serial.println("start");
    pixels.setBrightness(20);
    randomSeed(analogRead(0));
}

void loop() {
    bubbleSort();
    selectionSort();
    insertionSort();
    mergeSort();
    quickSort();
    heapSort();
    bitnicSort();
    radixSort();
    Serial.println(".");
}

/*
 *  Matrix manage
 */
void initialize() {
    for (int i = 0; i < NUMPIXELS; ++i) {
        m[i] = i;
    }
    showPixels();
    k = 0;
    delay(DELAY_VAL);
}

void set_delay(int d, int dsp) {
    delayval_q = d;
    delayval_sp = dsp;
}

void destory() {
    delete m;
}


void shuffle() {
    for (int i = 0; i < NUMPIXELS - 1; i++) {
        int j = i + random(1000) / (1000 / (NUMPIXELS - i) + 1);
        int t = m[j];
        m[j] = m[i];
        m[i] = t;
    }
    showPixels();
    delay(DELAY_VAL);
}

void swap(int i, int j) {
    int t1 = m[i];
    int t2 = m[j];
    pixels.setPixelColor(i, pixels.Color(255, 255, 255));
    pixels.setPixelColor(j, pixels.Color(255, 255, 255));
    showup();
    int rgb1[3], rgb2[3];
    h_to_rgb(m[i], rgb1);
    h_to_rgb(m[j], rgb2);
    pixels.setPixelColor(i, pixels.Color(rgb2[0], rgb2[1], rgb2[2]));
    pixels.setPixelColor(j, pixels.Color(rgb1[0], rgb1[1], rgb1[2]));
    m[i] = t2;
    m[j] = t1;
}

void lightOff(int i) {
    int rgb[3];
    h_to_rgb(m[i], rgb);
    pixels.setPixelColor(i, pixels.Color(rgb[0] * LIGHT_OFF_RATE, rgb[1] * LIGHT_OFF_RATE, rgb[2] * LIGHT_OFF_RATE));
}

void showup() {
    if (++k >= delayval_sp) {
        k = 0;
        pixels.show();
        delay(delayval_q);
    }
}

void noswap(int i, int j) {
    pixels.setPixelColor(i, pixels.Color(255, 255, 255));
    pixels.setPixelColor(j, pixels.Color(255, 255, 255));
    showup();
    int rgb1[3], rgb2[3];
    h_to_rgb(m[i], rgb1);
    h_to_rgb(m[j], rgb2);
    pixels.setPixelColor(i, pixels.Color(rgb1[0], rgb1[1], rgb1[2]));
    pixels.setPixelColor(j, pixels.Color(rgb2[0], rgb2[1], rgb2[2]));
}

void showPixels() {
    for (int i = 0; i < NUMPIXELS; ++i) {
        int rgb[3];
        h_to_rgb(m[i], rgb);
        pixels.setPixelColor(i, pixels.Color(rgb[0], rgb[1], rgb[2]));
        // pixels.setPixelColor(i, pixels.Color(255, 255, 255));
        // pixels.setPixelColor(i, pixels.Color(rgb[0], rgb[1], rgb[2]));
    }
    pixels.show();
}

/*
 *  Helpers
 */

void h_to_rgb(int ht, int *rgb) {
    int h = ht * (360 / NUMPIXELS);
    float r = 0, g = 0, b = 0;
    int i = h / 60;
    float f = (float) h / 60 - (float) i;
    if (i == 0) {
        r = 1;
        g = f;
        b = 0;
    } else if (i == 1) {
        r = 1 - f;
        g = 1;
        b = 0;
    } else if (i == 2) {
        r = 0;
        g = 1;
        b = f;
    } else if (i == 3) {
        r = 0;
        g = 1 - f;
        b = 1;
    } else if (i == 4) {
        r = f;
        g = 0;
        b = 1;
    } else if (i == 5) {
        r = 1;
        g = 0;
        b = 1 - f;
    }
    rgb[0] = (int)(r * 255);
    rgb[1] = (int)(g * 255);
    rgb[2] = (int)(b * 255);
}
