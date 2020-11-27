/*
An electrical components company offers discounts on various components ordered in quantity.  
Write a program to display the data in the table below as a table, prompt the user for and read in the quantity, component number and unit cost
display the original price and discount offered along with the total discounted price.


The price for each Resistor is $0.50
The price for each Capacitor is $0.75
The price for each transistor is $0.75
The price for each IC is $1.25 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Varibles
    
    double capacitorcount = 0;
    double resistorcount = 0;
    double transistorcount = 0;
    double iccount = 0;
    double resistorcost = 0;
    double capacitorcost = 0;
    double transistorcost = 0;
    double iccost = 0;
    const double baseresistorcost = .50;
    const double basecapacitorcost = .75;
    const double basetransistorcost = .75;
    const double baseiccost = 1.25;
    double totalcost = 0;

 //print and scan statements to get the needed information


    printf("A resistor has a base cost of %lf, a capacitors base cost is %lf, a transistors base cost is %lf, a IC's base cost is %lf \n",baseresistorcost, basecapacitorcost,basetransistorcost, baseiccost);

    printf("How many resistor do you wish to purchase \n");
    scanf("%lf", &resistorcount);

    printf("How many capacitors do you wish to purchase \n");
    scanf("%lf",&capacitorcount);

    printf("How many transistors do you wish to purchase \n");
    scanf("%lf", &transistorcount);

    printf("How many iccount do you wish to purchase \n");
    scanf("%lf", &iccount);


    printf("You want to buy %lf resistors \t, %lf capacitors\t, %lf transistors \t, %lf IC's \n", resistorcount, capacitorcount, transistorcount, iccount);
    
    //Individual prices

    resistorcost = baseresistorcost * resistorcount;
    capacitorcost = basecapacitorcost * capacitorcount;
    transistorcost = basetransistorcost * transistorcount;
    iccost = baseiccost * iccount ;
    printf("Your resistor cost before discount is %lf\n, your capacitor cost before discount is %lf\n, your transistor cost before discount is %lf\n, your IC cost before discount is %lf\n", resistorcost, capacitorcost, transistorcost, iccost);

    /*discountss at 299 cap and resist discount of 5% Trans and IC are 2.5%
    discount at 499 for cap and resist for 7.5%  Trans and IC 5%
    discount at 500+ 10%*/


if (resistorcount <= 299)
{
    resistorcost = .95 * (baseresistorcost * resistorcount);
    printf("You will pay %lf on resistors with the five percent discount\n", resistorcost);
}

else if (resistorcount >= 300 && resistorcount <= 499)
{
    resistorcost = .925 * (baseresistorcost * resistorcount);
    printf("You will pay %lf on resistors with the seven and a half percent discount\n", resistorcost);
}

else if (resistorcount >= 500)
{
    resistorcost = .9 * (baseresistorcost * resistorcount);
    printf("You will pay %lf on resistors with the ten percent discount\n", resistorcost);
}


if (capacitorcount <= 299)
{
    capacitorcost = .95 * (basecapacitorcost * capacitorcount);
    printf("You will pay %lf on capacitors with the five percent discount\n", capacitorcost);
}

else if (capacitorcount >= 300 && capacitorcount <= 499)
{
    capacitorcost = .925 * (basecapacitorcost * capacitorcount);
    printf("You will pay %lf on capacitors with the seven and a half percent discount\n", capacitorcost);
}

else if (capacitorcount >= 500)
{
    capacitorcost = .9 * (basecapacitorcost * capacitorcount);
    printf("You will pay %lf on capacitors with the ten percent discount\n", capacitorcost);
}


if (transistorcount <= 299)
{
    transistorcost = .975 * (basetransistorcost * transistorcount);
    printf("You will pay %lf on transistors with the two and a half percent discount\n", transistorcost);
}

else if (transistorcount >= 300 && transistorcount <= 499)
{
    transistorcost = .95 * (basetransistorcost * transistorcount);
    printf("You will pay %lf on transistors with the five percent discount\n", transistorcost);
}

else if (transistorcount >= 500)
{
    transistorcost = .9 * (basetransistorcost * transistorcount);
    printf("You will pay %lf on transistors with the ten percent discount\n", transistorcost);
}


if (iccount <= 299)
{
    iccost = .975 * (baseiccost * iccount);
    printf("You will pay %lf on the IC's with the two and a half percent discount\n", iccost);
}

else if (iccount >= 300 && iccount <= 499)
{
    iccost = .95 * (baseiccost * iccount);
    printf("You will pay %lf on IC's with the five percent discount\n", iccost);
}

else if (iccount >= 500)
{
    iccost = .9 * (baseiccost * iccount);
    printf("You will pay %lf on IC's with the ten percent discount\n", iccost);
}


    totalcost = iccost + transistorcost + capacitorcost + resistorcost; 


    printf("Your total cost is %lf, we hope you have a good day\n", totalcost);

    return(0);
}