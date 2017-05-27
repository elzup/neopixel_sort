#define NUM_CHARPIXELS 40

void printText(char *text) {
    unsigned char b[NUMPIXELS] = {};
    for (int i = 0; i < NUMPIXELS; ++i) {
        b[i] = 0;
    }
    showText(b);
    int k = 0;
    // sepalate
    for (int i = 0; i < 5; ++i) {
        k += 8;
        unsigned char mat[NUM_CHARPIXELS];
        char_to_mat(text[i], mat);
        for (int j = 0; j < NUM_CHARPIXELS; ++j) {
            b[k++] = mat[j];
        }
    }
    showText(b);
}

void char_to_mat(char c, char *mat) {
    if (c == 'A') {
        unsigned char n[NUM_CHARPIXELS] = {
            1, 1, 1, 1, 1, 1, 1, 1,
            1, 0, 0, 1, 0, 0, 0, 0,
            0, 0, 0, 0, 1, 0, 0, 1,
            1, 0, 0, 1, 0, 0, 0, 0,
            1, 1, 1, 1, 1, 1, 1, 1
        };
        memcpy(mat, n, sizeof(char) * NUM_CHARPIXELS);
        delete n;
    } else if (c == 'B') {
        unsigned char n[NUM_CHARPIXELS] = {
            1, 1, 1, 1, 1, 1, 1, 1,
            1, 0, 0, 1, 0, 0, 0, 1,
            1, 0, 0, 0, 1, 0, 0, 1,
            1, 0, 0, 1, 0, 0, 0, 1,
            0, 1, 1, 1, 0, 1, 1, 0
        };
        memcpy(mat, n, sizeof(char) * NUM_CHARPIXELS);
        delete n;
    } else if (c == 'C') {
        unsigned char n[NUM_CHARPIXELS] = {
            0, 1, 1, 1, 1, 1, 1, 0,
            1, 0, 0, 0, 0, 0, 0, 1,
            1, 0, 0, 0, 0, 0, 0, 1,
            1, 0, 0, 0, 0, 0, 0, 1,
            0, 1, 0, 0, 0, 0, 1, 0
        };
        memcpy(mat, n, sizeof(char) * NUM_CHARPIXELS);
        delete n;
    } else if (c == 'D') {
        unsigned char n[NUM_CHARPIXELS] = {
            1, 1, 1, 1, 1, 1, 1, 1,
            1, 0, 0, 0, 0, 0, 0, 1,
            1, 0, 0, 0, 0, 0, 0, 1,
            1, 0, 0, 0, 0, 0, 1, 0,
            0, 0, 1, 1, 1, 1, 1, 0
        };
        memcpy(mat, n, sizeof(char) * NUM_CHARPIXELS);
        delete n;
    } else if (c == 'E') {
        unsigned char n[NUM_CHARPIXELS] = {
            1, 1, 1, 1, 1, 1, 1, 1,
            1, 0, 0, 1, 0, 0, 0, 1,
            1, 0, 0, 0, 1, 0, 0, 1,
            1, 0, 0, 1, 0, 0, 0, 1,
            1, 0, 0, 0, 1, 0, 0, 1
        };
        memcpy(mat, n, sizeof(char) * NUM_CHARPIXELS);
        delete n;
    } else if (c == 'F') {
        unsigned char n[NUM_CHARPIXELS] = {
            1, 1, 1, 1, 1, 1, 1, 1,
            1, 0, 0, 1, 0, 0, 0, 0,
            0, 0, 0, 0, 1, 0, 0, 1,
            1, 0, 0, 1, 0, 0, 0, 0,
            0, 0, 0, 0, 1, 0, 0, 1
        };
        memcpy(mat, n, sizeof(char) * NUM_CHARPIXELS);
        delete n;
    } else if (c == 'G') {
        unsigned char n[NUM_CHARPIXELS] = {
            0, 1, 1, 1, 1, 1, 1, 0,
            1, 0, 0, 0, 0, 0, 0, 1,
            1, 0, 0, 0, 0, 0, 0, 1,
            1, 0, 0, 0, 1, 0, 0, 1,
            0, 1, 1, 1, 0, 0, 1, 0
        };
        memcpy(mat, n, sizeof(char) * NUM_CHARPIXELS);
        delete n;
    } else if (c == 'H') {
        unsigned char n[NUM_CHARPIXELS] = {
            1, 1, 1, 1, 1, 1, 1, 1,
            0, 0, 0, 0, 1, 0, 0, 0,
            0, 0, 0, 1, 0, 0, 0, 0,
            0, 0, 0, 0, 1, 0, 0, 0,
            1, 1, 1, 1, 1, 1, 1, 1
        };
        memcpy(mat, n, sizeof(char) * NUM_CHARPIXELS);
        delete n;
    } else if (c == 'I') {
        unsigned char n[NUM_CHARPIXELS] = {
            1, 0, 0, 0, 0, 0, 0, 1,
            1, 0, 0, 0, 0, 0, 0, 1,
            1, 1, 1, 1, 1, 1, 1, 1,
            1, 0, 0, 0, 0, 0, 0, 1,
            1, 0, 0, 0, 0, 0, 0, 1
        };
        memcpy(mat, n, sizeof(char) * NUM_CHARPIXELS);
        delete n;
    } else if (c == 'J') {
        unsigned char n[NUM_CHARPIXELS] = {
            0, 1, 0, 0, 0, 0, 0, 0,
            1, 0, 0, 0, 0, 0, 0, 1,
            1, 0, 0, 0, 0, 0, 0, 1,
            0, 1, 1, 1, 1, 1, 1, 1,
            0, 0, 0, 0, 0, 0, 0, 1
        };
        memcpy(mat, n, sizeof(char) * NUM_CHARPIXELS);
        delete n;
    } else if (c == 'K') {
        unsigned char n[NUM_CHARPIXELS] = {
            1, 1, 1, 1, 1, 1, 1, 1,
            1, 0, 0, 0, 0, 0, 0, 1,
            1, 0, 0, 0, 0, 0, 0, 1,
            1, 0, 0, 0, 0, 0, 0, 1,
            1, 1, 1, 1, 1, 1, 1, 1
        };
        memcpy(mat, n, sizeof(char) * NUM_CHARPIXELS);
        delete n;
    } else if (c == 'L') {
        unsigned char n[NUM_CHARPIXELS] = {
            1, 1, 1, 1, 1, 1, 1, 1,
            1, 0, 0, 0, 0, 0, 0, 1,
            1, 0, 0, 0, 0, 0, 0, 1,
            1, 0, 0, 0, 0, 0, 0, 1,
            1, 1, 1, 1, 1, 1, 1, 1
        };
        memcpy(mat, n, sizeof(char) * NUM_CHARPIXELS);
        delete n;
    } else if (c == 'M') {
        unsigned char n[NUM_CHARPIXELS] = {
            1, 1, 1, 1, 1, 1, 1, 1,
            1, 0, 0, 0, 0, 0, 0, 1,
            1, 0, 0, 0, 0, 0, 0, 1,
            1, 0, 0, 0, 0, 0, 0, 1,
            1, 1, 1, 1, 1, 1, 1, 1
        };
        memcpy(mat, n, sizeof(char) * NUM_CHARPIXELS);
        delete n;
    } else if (c == 'N') {
        unsigned char n[NUM_CHARPIXELS] = {
            1, 1, 1, 1, 1, 1, 1, 1,
            1, 0, 0, 0, 0, 0, 0, 1,
            1, 0, 0, 0, 0, 0, 0, 1,
            1, 0, 0, 0, 0, 0, 0, 1,
            1, 1, 1, 1, 1, 1, 1, 1
        };
        memcpy(mat, n, sizeof(char) * NUM_CHARPIXELS);
        delete n;
    } else if (c == 'O') {
        unsigned char n[NUM_CHARPIXELS] = {
            1, 1, 1, 1, 1, 1, 1, 1,
            1, 0, 0, 0, 0, 0, 0, 1,
            1, 0, 0, 0, 0, 0, 0, 1,
            1, 0, 0, 0, 0, 0, 0, 1,
            1, 1, 1, 1, 1, 1, 1, 1
        };
        memcpy(mat, n, sizeof(char) * NUM_CHARPIXELS);
        delete n;
    } else if (c == 'P') {
        unsigned char n[NUM_CHARPIXELS] = {
            1, 1, 1, 1, 1, 1, 1, 1,
            1, 0, 0, 0, 0, 0, 0, 1,
            1, 0, 0, 0, 0, 0, 0, 1,
            1, 0, 0, 0, 0, 0, 0, 1,
            1, 1, 1, 1, 1, 1, 1, 1
        };
        memcpy(mat, n, sizeof(char) * NUM_CHARPIXELS);
        delete n;
    } else if (c == 'Q') {
        unsigned char n[NUM_CHARPIXELS] = {
            1, 1, 1, 1, 1, 1, 1, 1,
            1, 0, 0, 0, 0, 0, 0, 1,
            1, 0, 0, 0, 0, 0, 0, 1,
            1, 0, 0, 0, 0, 0, 0, 1,
            1, 1, 1, 1, 1, 1, 1, 1
        };
        memcpy(mat, n, sizeof(char) * NUM_CHARPIXELS);
        delete n;
    } else if (c == 'R') {
        unsigned char n[NUM_CHARPIXELS] = {
            1, 1, 1, 1, 1, 1, 1, 1,
            1, 0, 0, 0, 0, 0, 0, 1,
            1, 0, 0, 0, 0, 0, 0, 1,
            1, 0, 0, 0, 0, 0, 0, 1,
            1, 1, 1, 1, 1, 1, 1, 1
        };
        memcpy(mat, n, sizeof(char) * NUM_CHARPIXELS);
        delete n;
    } else if (c == 'S') {
        unsigned char n[NUM_CHARPIXELS] = {
            1, 1, 1, 1, 1, 1, 1, 1,
            1, 0, 0, 0, 0, 0, 0, 1,
            1, 0, 0, 0, 0, 0, 0, 1,
            1, 0, 0, 0, 0, 0, 0, 1,
            1, 1, 1, 1, 1, 1, 1, 1
        };
        memcpy(mat, n, sizeof(char) * NUM_CHARPIXELS);
        delete n;
    } else if (c == 'T') {
        unsigned char n[NUM_CHARPIXELS] = {
            1, 1, 1, 1, 1, 1, 1, 1,
            1, 0, 0, 0, 0, 0, 0, 1,
            1, 0, 0, 0, 0, 0, 0, 1,
            1, 0, 0, 0, 0, 0, 0, 1,
            1, 1, 1, 1, 1, 1, 1, 1
        };
        memcpy(mat, n, sizeof(char) * NUM_CHARPIXELS);
        delete n;
    } else if (c == 'U') {
        unsigned char n[NUM_CHARPIXELS] = {
            1, 1, 1, 1, 1, 1, 1, 1,
            1, 0, 0, 0, 0, 0, 0, 1,
            1, 0, 0, 0, 0, 0, 0, 1,
            1, 0, 0, 0, 0, 0, 0, 1,
            1, 1, 1, 1, 1, 1, 1, 1
        };
        memcpy(mat, n, sizeof(char) * NUM_CHARPIXELS);
        delete n;
    } else if (c == 'V') {
        unsigned char n[NUM_CHARPIXELS] = {
            1, 1, 1, 1, 1, 1, 1, 1,
            1, 0, 0, 0, 0, 0, 0, 1,
            1, 0, 0, 0, 0, 0, 0, 1,
            1, 0, 0, 0, 0, 0, 0, 1,
            1, 1, 1, 1, 1, 1, 1, 1
        };
        memcpy(mat, n, sizeof(char) * NUM_CHARPIXELS);
        delete n;
    } else if (c == 'W') {
        unsigned char n[NUM_CHARPIXELS] = {
            1, 1, 1, 1, 1, 1, 1, 1,
            1, 0, 0, 0, 0, 0, 0, 1,
            1, 0, 0, 0, 0, 0, 0, 1,
            1, 0, 0, 0, 0, 0, 0, 1,
            1, 1, 1, 1, 1, 1, 1, 1
        };
        memcpy(mat, n, sizeof(char) * NUM_CHARPIXELS);
        delete n;
    } else if (c == 'X') {
        unsigned char n[NUM_CHARPIXELS] = {
            1, 1, 1, 1, 1, 1, 1, 1,
            1, 0, 0, 0, 0, 0, 0, 1,
            1, 0, 0, 0, 0, 0, 0, 1,
            1, 0, 0, 0, 0, 0, 0, 1,
            1, 1, 1, 1, 1, 1, 1, 1
        };
        memcpy(mat, n, sizeof(char) * NUM_CHARPIXELS);
        delete n;
    } else if (c == 'Y') {
        unsigned char n[NUM_CHARPIXELS] = {
            1, 1, 1, 1, 1, 1, 1, 1,
            1, 0, 0, 0, 0, 0, 0, 1,
            1, 0, 0, 0, 0, 0, 0, 1,
            1, 0, 0, 0, 0, 0, 0, 1,
            1, 1, 1, 1, 1, 1, 1, 1
        };
        memcpy(mat, n, sizeof(char) * NUM_CHARPIXELS);
        delete n;
    } else if (c == 'Z') {
        unsigned char n[NUM_CHARPIXELS] = {
            1, 1, 1, 1, 1, 1, 1, 1,
            1, 0, 0, 0, 0, 0, 0, 1,
            1, 0, 0, 0, 0, 0, 0, 1,
            1, 0, 0, 0, 0, 0, 0, 1,
            1, 1, 1, 1, 1, 1, 1, 1
        };
        memcpy(mat, n, sizeof(char) * NUM_CHARPIXELS);
        delete n;
    }
}

void showText(unsigned char *b) {
    int off = pixels.Color(50, 50, 50);
    int on = pixels.Color(100, 100, 100);
    for (int i = 0; i < NUMPIXELS; ++i) {
        pixels.setPixelColor(i, b[i] == 1 ? on : off);
        pixels.show();
    }
    pixels.show();
    delay(DELAY_VAL * 3);
}
