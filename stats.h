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
 * @file stats.h
 * @brief statistical analysis on a Array
 *
 * This header file provides functions for statistical analysis on an array of unsigned char data.
 *
 * @author Kelwin Crasta
 * @date 19 August 2023
 *
 */

#ifndef __STATS_H__
#define __STATS_H__

/**
 * @brief Prints the elements of an unsigned char array.
 *
 * This function prints the elements of an unsigned char array of the specified length to the terminal.
 *
 * @param array An unsigned char pointer to an n-element data array.
 * @param length An unsigned int indicating the size of the array.
 *
 * @return 0 - success
 */
unsigned char print_array(unsigned char *array, unsigned int length);

/**
 * @brief Prints the statistics of an array including minimum, maximum, mean, and median.
 *
 * This function calculates and prints the minimum, maximum, mean, and median of an unsigned char array.
 *
 * @param array An unsigned char pointer to an n-element data array.
 * @param length An unsigned int indicating the size of the array.
 */
void print_statistics(unsigned char *array, unsigned int length);

/**
 * @brief Calculates the median value of an array.
 *
 * This function calculates and returns the median value of an unsigned char array.
 *
 * @param array An unsigned char pointer to an n-element data array.
 * @param length An unsigned int indicating the size of the array.
 * @return The median value as a float.
 */
float find_median(unsigned char *array, unsigned int length);

/**
 * @brief Finds the maximum value in an array.
 *
 * This function finds and returns the maximum value in an unsigned char array.
 *
 * @param array An unsigned char pointer to an n-element data array.
 * @param length An unsigned int indicating the size of the array.
 * @return The maximum value as an unsigned char.
 */
unsigned char find_maximum(unsigned char *array, unsigned int length);

/**
 * @brief Finds the minimum value in an array.
 *
 * This function finds and returns the minimum value in an unsigned char array.
 *
 * @param array An unsigned char pointer to an n-element data array.
 * @param length An unsigned int indicating the size of the array.
 * @return The minimum value as an unsigned char.
 */
unsigned char find_minimum(unsigned char *array, unsigned int length);

/**
 * @brief Sorts an array in descending order using the bubble sort algorithm.
 *
 * This function sorts an unsigned char array in descending order using the bubble sort algorithm.
 *
 * @param array An unsigned char pointer to an n-element data array.
 * @param length An unsigned int indicating the size of the array.
 */
void sort_array(unsigned char *array, unsigned int length);

/**
 * @brief Calculates the mean value of an array.
 *
 * This function calculates and returns the mean value of an unsigned char array.
 *
 * @param array An unsigned char pointer to an n-element data array.
 * @param length An unsigned int indicating the size of the array.
 * @return The mean value as a float.
 */
float find_mean(unsigned char *array, unsigned int length);

/**
 * @brief Finds the maximum value in an array.
 *
 * This function finds and returns the maximum value in an unsigned char array.
 *
 * @param array An unsigned char pointer to an n-element data array.
 * @param length An unsigned int indicating the size of the array.
 * @return The maximum value as an unsigned char.
 */
unsigned char find_maximum(unsigned char *array, unsigned int length);

/**
 * @brief Finds the minimum value in an array.
 *
 * This function finds and returns the minimum value in an unsigned char array.
 *
 * @param array An unsigned char pointer to an n-element data array.
 * @param length An unsigned int indicating the size of the array.
 * @return The minimum value as an unsigned
 */
float find_mean(unsigned char *array, unsigned int length);

#endif /* __STATS_H__ */
