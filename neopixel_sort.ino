#include <Adafruit_NeoPixel.h>
#ifdef __AVR__
  #include <avr/power.h>
#endif

#define REP(i,n) for(int i=0;i<n;i++)

#define PIN 6
#define NUMPIXELS 256

Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

int delayval = 1000;
int delayval_q = 1;
int k = 0;
int delayval_sp = 70;

int m[256];

void setup() {
    pixels.begin();
    Serial.begin(9600);
    Serial.println("start");
    pixels.setBrightness(10);
}

void loop() {
    bubbleSort();
    // pixels.setPixelColor(i, pixels.Color(rgb[0], rgb[1], rgb[2]));
    Serial.println("l");
}

/*
 *  Sort algorism
 */
void bubbleSort() {
    initialize();
    shuffle();
    REP(i, NUMPIXELS) {
        REP(j, NUMPIXELS - 1 - i) {
            if (m[j] > m[j + 1]) {
                swap(j, j + 1);
            } else {
                noswap();
            }
        }
    }
    pixels.show();
}

/*
 *  Matrix manage
 */
void initialize() {
    REP(i, NUMPIXELS) {
        m[i] = i;
    }
    showPixels();
    delay(delayval);
}

void shuffle() {
    for (int i = 0; i < NUMPIXELS - 1; i++) {
        int j = i + rand() / (RAND_MAX / (NUMPIXELS - i) + 1);
        int t = m[j];
        m[j] = m[i];
        m[i] = t;
    }
    showPixels();
    delay(delayval);
}

void swap(int i, int j) {
    Serial.println(i, j);
    int t1 = m[i];
    int t2 = m[j];
    int rgb1[3];
    h_to_rgb(m[i], rgb1);
    int rgb2[3];
    h_to_rgb(m[j], rgb2);
    pixels.setPixelColor(i, pixels.Color(255, 255, 255));
    pixels.setPixelColor(j, pixels.Color(255, 255, 255));
    if (k ++ == delayval_sp) {
        k = 0;
        pixels.show();
        delay(delayval_q);
    }
    pixels.setPixelColor(i, pixels.Color(rgb2[0], rgb2[1], rgb2[2]));
    pixels.setPixelColor(j, pixels.Color(rgb1[0], rgb1[1], rgb1[2]));
    m[i] = t2;
    m[j] = t1;
}

void noswap() {
    if (k ++ == delayval_sp) {
        k = 0;
        delay(delayval_q);
    }
}

void showPixels() {
    REP(i, NUMPIXELS) {
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

void h_to_rgb(int h, int *rgb) {
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
