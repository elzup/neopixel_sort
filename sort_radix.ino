#define RADIX_BASE 4
#define RADIX_BASE_BIT 2 // log2(RADIX_BASE)
#define NUMPIXELS_BIT 8

void radixSort() {
    printText("RADIX");
    initialize();
    set_delay(1, 1);
    shuffle();

    unsigned char RADIX_NUM_BUCKET = RADIX_BASE;
    unsigned char RADIX_NUM_BUCKET_SIZE = NUMPIXELS / RADIX_BASE;

    for (int k = 0; k < NUMPIXELS_BIT / RADIX_BASE_BIT; k++) {
        unsigned char buckets[RADIX_NUM_BUCKET][RADIX_NUM_BUCKET_SIZE] = {};
        unsigned char bucketLengths [RADIX_NUM_BUCKET] = {};
        for (int i = 0; i < NUMPIXELS; i++) {
            const char key = (m[i] >> k * RADIX_BASE_BIT) & (RADIX_BASE - 1);
            lightOff(i);
            showup();
            buckets[key][bucketLengths[key]++] = m[i];
        }

        unsigned char t = 0;
        for (int i = 0; i < RADIX_NUM_BUCKET; i++) {
            for (int j = 0; j < RADIX_NUM_BUCKET_SIZE; j++) {
                int rgb[3];
                m[t] = buckets[i][j];
                h_to_rgb(m[t], rgb);
                pixels.setPixelColor(t, pixels.Color(rgb[0], rgb[1], rgb[2]));
                t++;
            }
            showup();
            delay(DELAY_VAL / 2);
        }
    }
    pixels.show();
    destory();
}

