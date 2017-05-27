#define NUM_CHARPIXELS 5
#define NUM_LINES 32

void printText(char *text) {
    char b[NUMPIXELS] = {};
    showText(b);
    int k = 0;
    for (int i = 0; i < 5; ++i) {
        k ++;
        char mat[NUM_CHARPIXELS];
        char_to_mat(text[i], mat);
        for (int j = 0; j < 5; ++j) {
            b[k++] = mat[j];
        }
    }
    showText(b);
    delay(DELAY_VAL * 3);
}

void char_to_mat(char c, char *mat) {
    if (c == 'A') {
        char n[NUM_CHARPIXELS] = {
            0b11111111,
            0b10010000,
            0b00001001,
            0b10010000,
            0b11111111
        };
        memcpy(mat, n, sizeof(char) * NUM_CHARPIXELS);
        delete n;
    } else if (c == 'B') {
        char n[NUM_CHARPIXELS] = {
            0b11111111,
            0b10010001,
            0b10001001,
            0b10010001,
            0b01110110
        };
        memcpy(mat, n, sizeof(char) * NUM_CHARPIXELS);
        delete n;
    } else if (c == 'C') {
        char n[NUM_CHARPIXELS] = {
            0b01111110,
            0b10000001,
            0b10000001,
            0b10000001,
            0b01000010
        };
        memcpy(mat, n, sizeof(char) * NUM_CHARPIXELS);
        delete n;
    } else if (c == 'D') {
        char n[NUM_CHARPIXELS] = {
            0b11111111,
            0b10000001,
            0b10000001,
            0b10000010,
            0b00111110
        };
        memcpy(mat, n, sizeof(char) * NUM_CHARPIXELS);
        delete n;
    } else if (c == 'E') {
        char n[NUM_CHARPIXELS] = {
            0b11111111,
            0b10010001,
            0b10001001,
            0b10010001,
            0b10001001
        };
        memcpy(mat, n, sizeof(char) * NUM_CHARPIXELS);
        delete n;
    } else if (c == 'F') {
        char n[NUM_CHARPIXELS] = {
            0b11111111,
            0b10010000,
            0b00001001,
            0b10010000,
            0b00001001
        };
        memcpy(mat, n, sizeof(char) * NUM_CHARPIXELS);
        delete n;
    } else if (c == 'G') {
        char n[NUM_CHARPIXELS] = {
            0b01111110,
            0b10000001,
            0b10000001,
            0b10001001,
            0b01110010
        };
        memcpy(mat, n, sizeof(char) * NUM_CHARPIXELS);
        delete n;
    } else if (c == 'H') {
        char n[NUM_CHARPIXELS] = {
            0b11111111,
            0b00001000,
            0b00010000,
            0b00001000,
            0b11111111
        };
        memcpy(mat, n, sizeof(char) * NUM_CHARPIXELS);
        delete n;
    } else if (c == 'I') {
        char n[NUM_CHARPIXELS] = {
            0b10000001,
            0b10000001,
            0b11111111,
            0b10000001,
            0b10000001
        };
        memcpy(mat, n, sizeof(char) * NUM_CHARPIXELS);
        delete n;
    } else if (c == 'J') {
        char n[NUM_CHARPIXELS] = {
            0b01000000,
            0b10000001,
            0b10000001,
            0b01111111,
            0b00000001
        };
        memcpy(mat, n, sizeof(char) * NUM_CHARPIXELS);
        delete n;
    } else if (c == 'K') {
        char n[NUM_CHARPIXELS] = {
            0b11111111,
            0b10000001,
            0b10000001,
            0b10000001,
            0b11111111
        };
        memcpy(mat, n, sizeof(char) * NUM_CHARPIXELS);
        delete n;
    } else if (c == 'L') {
        char n[NUM_CHARPIXELS] = {
            0b11111111,
            0b10000001,
            0b10000001,
            0b10000001,
            0b11111111
        };
        memcpy(mat, n, sizeof(char) * NUM_CHARPIXELS);
        delete n;
    } else if (c == 'M') {
        char n[NUM_CHARPIXELS] = {
            0b11111111,
            0b10000001,
            0b10000001,
            0b10000001,
            0b11111111
        };
        memcpy(mat, n, sizeof(char) * NUM_CHARPIXELS);
        delete n;
    } else if (c == 'N') {
        char n[NUM_CHARPIXELS] = {
            0b11111111,
            0b10000001,
            0b10000001,
            0b10000001,
            0b11111111
        };
        memcpy(mat, n, sizeof(char) * NUM_CHARPIXELS);
        delete n;
    } else if (c == 'O') {
        char n[NUM_CHARPIXELS] = {
            0b11111111,
            0b10000001,
            0b10000001,
            0b10000001,
            0b11111111
        };
        memcpy(mat, n, sizeof(char) * NUM_CHARPIXELS);
        delete n;
    } else if (c == 'P') {
        char n[NUM_CHARPIXELS] = {
            0b11111111,
            0b10000001,
            0b10000001,
            0b10000001,
            0b11111111
        };
        memcpy(mat, n, sizeof(char) * NUM_CHARPIXELS);
        delete n;
    } else if (c == 'Q') {
        char n[NUM_CHARPIXELS] = {
            0b11111111,
            0b10000001,
            0b10000001,
            0b10000001,
            0b11111111
        };
        memcpy(mat, n, sizeof(char) * NUM_CHARPIXELS);
        delete n;
    } else if (c == 'R') {
        char n[NUM_CHARPIXELS] = {
            0b11111111,
            0b10000001,
            0b10000001,
            0b10000001,
            0b11111111
        };
        memcpy(mat, n, sizeof(char) * NUM_CHARPIXELS);
        delete n;
    } else if (c == 'S') {
        char n[NUM_CHARPIXELS] = {
            0b11111111,
            0b10000001,
            0b10000001,
            0b10000001,
            0b11111111
        };
        memcpy(mat, n, sizeof(char) * NUM_CHARPIXELS);
        delete n;
    } else if (c == 'T') {
        char n[NUM_CHARPIXELS] = {
            0b11111111,
            0b10000001,
            0b10000001,
            0b10000001,
            0b11111111
        };
        memcpy(mat, n, sizeof(char) * NUM_CHARPIXELS);
        delete n;
    } else if (c == 'U') {
        char n[NUM_CHARPIXELS] = {
            0b11111111,
            0b10000001,
            0b10000001,
            0b10000001,
            0b11111111
        };
        memcpy(mat, n, sizeof(char) * NUM_CHARPIXELS);
        delete n;
    } else if (c == 'V') {
        char n[NUM_CHARPIXELS] = {
            0b11111111,
            0b10000001,
            0b10000001,
            0b10000001,
            0b11111111
        };
        memcpy(mat, n, sizeof(char) * NUM_CHARPIXELS);
        delete n;
    } else if (c == 'W') {
        char n[NUM_CHARPIXELS] = {
            0b11111111,
            0b10000001,
            0b10000001,
            0b10000001,
            0b11111111
        };
        memcpy(mat, n, sizeof(char) * NUM_CHARPIXELS);
        delete n;
    } else if (c == 'X') {
        char n[NUM_CHARPIXELS] = {
            0b11111111,
            0b10000001,
            0b10000001,
            0b10000001,
            0b11111111
        };
        memcpy(mat, n, sizeof(char) * NUM_CHARPIXELS);
        delete n;
    } else if (c == 'Y') {
        char n[NUM_CHARPIXELS] = {
            0b11111111,
            0b10000001,
            0b10000001,
            0b10000001,
            0b11111111
        };
        memcpy(mat, n, sizeof(char) * NUM_CHARPIXELS);
        delete n;
    } else if (c == 'Z') {
        char n[NUM_CHARPIXELS] = {
            0b11111111,
            0b10000001,
            0b10000001,
            0b10000001,
            0b11111111
        };
        memcpy(mat, n, sizeof(char) * NUM_CHARPIXELS);
        delete n;
    }
}

void showText(char *b) {
    uint32_t off = pixels.Color(0, 0, 0);
    uint32_t on = pixels.Color(255, 255, 255);
    for (int i = 0; i < NUM_LINES; ++i) {
        for (int j = 0; j < 8; j++) {
            pixels.setPixelColor(i * 8 + j, (b[i] >> j) & 1 ? on : off);
        }
    }
    pixels.show();
}
