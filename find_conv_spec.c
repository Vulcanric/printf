#include "main.h"

/**
 * find_conv_spec - Finds the conversion specifier character
 * @format: The format string to examine
 * @current_ind: the current index where '%' is found in the format string
 * Return: conversion specifier character found
 */
int find_conv_spec(const char *format, int *current_ind)
{
	int i = *current_ind + 1;
	int conv_spec_ch = format[i];

	*current_ind += 1;
	return (conv_spec_ch);
}
