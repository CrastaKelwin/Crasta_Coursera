/******************************************************************************
 * Copyright (C) 2023 by Kelwin Crasta - Manipal School of Information Sciences
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are
 * permitted to modify this and use it to learn about the field of embedded
 * software. Kelwin Crasta and Manipal School of Information Sciences are not
 * liable for any misuse of this material.
 *
 *****************************************************************************/
/**
 * @file stats.c
 * @brief Implementations of Array statistics functions
 *
 * This file includes Implementations related to finding mean, median, and
 * other statistical analysis on an array.
 *
 * @author Kelwin Crasta
 * @date 19 August 2023
 *
 */

#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

unsigned char print_array(unsigned char *array, unsigned int length)
{
    printf("Array: [");
    for (unsigned int i = 0; i < length; i++)
    {
        printf("%u ", array[i]);
    }
    printf("\b]\n");
    return 0;
}

void print_statistics(unsigned char *array, unsigned int length)
{
    printf("Statistics:\n");
    printf("Minimum: %u\n", find_minimum(array, length));
    printf("Maximum: %u\n", find_maximum(array, length));
    printf("Mean: %.2f\n", (double)find_mean(array, length));
    printf("Median: %.2f\n", (double)find_median(array, length));
}

float find_median(unsigned char *array, unsigned int length)
{
    sort_array(array, length);

    if (length & 0x01 == 0)
    {
        return (array[length / 2 - 1] + array[length / 2]) / 2.0;
    }
    else
    {
        return array[length / 2];
    }
}

float find_mean(unsigned char *array, unsigned int length)
{
    unsigned int sum = 0;
    for (unsigned int i = 0; i < length; i++)
    {
        sum += array[i];
    }
    return (float)sum / length;
}

unsigned char find_maximum(unsigned char *array, unsigned int length)
{
    unsigned char max = array[0];
    for (unsigned int i = 1; i < length; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
        }
    }
    return max;
}

unsigned char find_minimum(unsigned char *array, unsigned int length)
{
    unsigned char min = array[0];
    for (unsigned int i = 1; i < length; i++)
    {
        if (array[i] < min)
        {
            min = array[i];
        }
    }
    return min;
}

void sort_array(unsigned char *array, unsigned int length)
{
    for (unsigned int i = 0; i < length - 1; i++)
    {
        for (unsigned int j = 0; j < length - i - 1; j++)
        {
            if (array[j] < array[j + 1])
            {
                unsigned char temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

int main()
{
  unsigned char test[SIZE] = {34, 201, 190, 154, 8, 194, 2, 6,
                              114, 88, 45, 76, 123, 87, 25, 23,
                              200, 122, 150, 90, 92, 87, 177, 244,
                              201, 6, 12, 60, 8, 2, 5, 67,
                              7, 87, 250, 230, 99, 3, 100, 90};

    printf("Original array:\n");
    print_array(test, SIZE);

    printf("Sorted array:\n");
    sort_array(test, SIZE);
    print_array(test, SIZE);

    printf("\n");
    print_statistics(test, SIZE);

    return 0;
}