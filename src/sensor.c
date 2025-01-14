#include "sensor.h"
#include "utils.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

#define BUFFER_SIZE 10

void read_sensor_data(uint16_t *data) {
    for(int i = 0; i < BUFFER_SIZE; i++) {
        data[i] = rand() % 1024;
    }
}

void process_data(unsigned short *data) {
    int average = calculate_average(data, BUFFER_SIZE);
    printf("Calculated Average: %d\n", average);

    if(average > 512) {
        printf("Warning: Sensor value exceeds threshold!\n");
    } else {
        printf("Sensor value is within safe range.\n");
    }
}

void print_data(uint16_t *data, int size) {
    for (int i = 0; i < size; i++) {
        printf("Sensor Data[%d]: %d\n", i, data[i]);
    }
}