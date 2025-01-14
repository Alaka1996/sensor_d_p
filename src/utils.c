#include <stdint.h>
#include "utils.h"  // Assuming you have a header file for utils
#include "sensor.h"
#include <stdlib.h>
#include <stdio.h>

int calculate_average(const uint16_t *data, int size) {
    
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += data[i];
    }

    return sum / size;
}