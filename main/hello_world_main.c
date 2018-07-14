#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>
#include "esp_system.h"
#include "esp_timer.h"

uint64_t finishTime;
uint64_t startTime=0;
float total;

uint64_t number=0;

void app_main()
{

	//*********************** 100 million *************************************


	//this is slow
	startTime = esp_timer_get_time();
	printf("Counting to 100,000,000\n");
	while (number<100000000)
	{
		number++;
	}
	finishTime = esp_timer_get_time();
	total = (finishTime - startTime)/100000;
	printf("total time = %0.1f Seconds\n\n\n\n\n", total/10);
	number=0;



	//this is slow
	//*********************** 4 Billion *************************************
	startTime = esp_timer_get_time();
	printf("Counting to 4,000,000,000\n");
	while (number<4000000000)
	{
		number++;
	}
	finishTime = esp_timer_get_time();
	total = (finishTime - startTime)/100000;
	printf("total time = %0.1f Seconds\n\n\n\n\n", total/10);
	startTime = finishTime;
	number =0;

	//this is very fast
	//*********************** 100 million *************************************


	startTime = esp_timer_get_time();
	printf("Counting to 100,000,000 faster way\n");
	while (number<100000000)
	{
		number++;
		number++;
		number++;
		number++;
		number++;
		number++;
		number++;
		number++;
		number++;
		number++;
		number++;
		number++;
		number++;
		number++;
	}
	finishTime = esp_timer_get_time();
	total = (finishTime - startTime)/100000;
	printf("total time = %0.1f Seconds\n\n\n\n\n", total/10);
	number=0;

	//this is very fast
	// *********************** 4 Billion *************************************


	startTime = esp_timer_get_time();
	printf("Counting to 4,000,000,000 faster way\n");
	while (number<4000000000)
	{
		number++;
		number++;
		number++;
		number++;
		number++;
		number++;
		number++;
		number++;
		number++;
		number++;
		number++;
		number++;
		number++;
		number++;
	}
	finishTime = esp_timer_get_time();
	total = (finishTime - startTime)/100000;
	printf("total time = %0.1f Seconds\n\n\n\n\n", total/10);
	startTime = finishTime;
	number =0;
}
