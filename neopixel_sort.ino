#include <Adafruit_NeoPixel.h>
#include <new.h>
#ifdef __AVR__
  #include <avr/power.h>
#endif

#define REP(i,n) for(int i=0;i<n;i++)

#define PIN 6
#define NUMPIXELS 256
#define DELAYVAL_SP_DEF 255
#define LIGHT_OFF_RATE 0.2

Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

const int delayval = 1000;
unsigned char delayval_q = 1;
unsigned char delayval_sp = DELAYVAL_SP_DEF;
unsigned char k = 0;
// int delayval_sp = 70;

unsigned char m[256];

void setup() {
    pixels.begin();
    Serial.begin(9600);
    Serial.println("start");
    pixels.setBrightness(10);
    randomSeed(analogRead(0));
}

void loop() {
    while (true) {heapSort();}
    bubbleSort();
    selectionSort();
    mergeSort();
    quickSort();
    heapSort();
    Serial.println(".");
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
                noswap(j, j + 1);
            }
        }
    }
    pixels.show();
    destory();
}

void selectionSort() {
    initialize();
    shuffle();
    REP(i, NUMPIXELS - 1) {
        int sm = i;
        for (int j = i + 1; j < NUMPIXELS; j++) {
            if (m[j] < m[sm]) {
                sm = j;
            }
            noswap(i, sm);
        }
        swap(i, sm);
    }
    pixels.show();
    destory();
}

void quickSort() {
    delayval_q = 30;
    delayval_sp = 5;
    initialize();
    shuffle();
    revQuick(0, NUMPIXELS - 1);
    pixels.show();
    destory();
    delayval_q = 1;
    delayval_sp = DELAYVAL_SP_DEF;
}

void revQuick(int left, int right) {
    if (left >= right) {
        return;
    }
    int i = left;
    int j = right;
    int pivot = m[left];
    while (true) {
        while (m[i] < pivot) {
            noswap(i, left);
            i++;
        }
        while (pivot < m[j]) {
            noswap(left, j);
            j--;
        }
        if (i >= j) {
            break;
        }
        swap(i, j);
        i ++;
        j --;
    }
    revQuick(left, i - 1);
    revQuick(j + 1, right);
}

void mergeSort() {
    delayval_q = 50;
    delayval_sp = 5;
    initialize();
    shuffle();
    revMerge(0, NUMPIXELS - 1);
    pixels.show();
    destory();
    delayval_q = 1;
    delayval_sp = DELAYVAL_SP_DEF;
}

void revMerge(int left, int right) {
    if (right - left <= 2) {
        if (m[left] > m[right]) {
            swap(left, right);
        } else {
            noswap(left, right);
        }
        return;
    }
    int middle = (left + right) / 2;
    revMerge(left, middle);
    revMerge(middle + 1, right);
//  10 11 12 13 14
//  [10] 11 (12)
//  13 [14]
    int sl1 = middle - left + 1;
    int sl2 = right - middle;
    int stack1[sl1 + 1], stack2[sl2 + 1];
    for (int i = 0; i < sl1; i++) {
        stack1[i] = m[left + i];
        lightOff(left + i);
    }
    stack1[sl1] = 256;
    stack2[sl2] = 256;
    for (int i = 0; i < sl2; i++) {
        stack2[i] = m[middle + 1 + i];
        lightOff(middle + 1 + i);
    }
    showup();
    int i1 = 0, i2 = 0;
    for (int i = left; i <= right; i++) {
        int k = 0;
        if (stack1[i1] < stack2[i2]) {
            k = stack1[i1];
            i1 ++;
        } else {
            k = stack2[i2];
            i2 ++;
        }
        m[i] = k;
        int rgb[3];
        h_to_rgb(m[i], rgb);
        pixels.setPixelColor(i, pixels.Color(rgb[0], rgb[1], rgb[2]));
        showup();
    }
}

void heapSort() {
    delayval_q = 20;
    delayval_sp = 1;
    initialize();
    shuffle();

    for (int i = (NUMPIXELS / 2) - 1; i >= 0; i--) {
        shiftDown(i, NUMPIXELS);
    }
    delayval_q = 1;
    delayval_sp = 1;
    for (int i = NUMPIXELS - 1; i >= 1; i--) {
        swap(0, i);
        shiftDown(0, i - 1);
    }
    pixels.show();
    destory();
    delayval_q = 1;
    delayval_sp = DELAYVAL_SP_DEF;
}

void shiftDown(int root, int bottom) {
    int maxChild, temp;
    while ((root * 2 <= bottom)) {
        if (root * 2 == bottom) {
            maxChild = root * 2;
        } else if (m[root * 2] > m[root * 2 + 1]) {
            maxChild = root * 2;
        } else {
            maxChild = root * 2 + 1;
        }
        if (m[root] < m[maxChild]) {
            swap(root, maxChild);
            root = maxChild;
        } else {
            break;
        }
    }
}

/*
 *  Matrix manage
 */
void initialize() {
    REP(i, NUMPIXELS) {
        m[i] = i * (360 / NUMPIXELS);
    }
    showPixels();
    k = 0;
    // delay(delayval);
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
    delay(delayval);
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
    if (k ++ >= delayval_sp) {
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
