// Kevin Bensimoun
// Program containing an array of structs that contain information about a product

#include <stdio.h>
#include <string.h>
#define size 1000

struct product {
	char name[size + 1]; // structure with products
	double unit_price;
	double tot_pounds_sold;
	double sale_volume;
};

void find_product(struct product products[], int n, char *name);
void selection_sort(struct product products[], int n); // selection sort function
int main(int argc, char *argv[]) // takes in arguments from command line
{
	FILE *fp;
	FILE *pFile;
	struct product products[size + 1]; // array of structs
	int i=0, line_amount;

	if(argc > 2){ // checks amount of arguments
		printf("Too many arguments!");
		return 1;
	}
	
	if(argc < 2){ // checks amount of arguments
		printf("One argument is needed!");
		return 1;
	}

        fp = fopen("sale.txt", "r"); // opens sale.txt file
	pFile = fopen("sorted_products.txt", "w"); // opens new file sorted_products.txt

	if(fp == NULL){ // checks to make sure its opening a file 
		printf("Error opening the file.\n");
		return 1;
	}

	fprintf(pFile,"#name unit price($) units(pound)sold\t sale volume($)\n"); // prints to new file
		
	while(fscanf(fp, "%s%lf%lf", products[i].name, &products[i].unit_price, &products[i].tot_pounds_sold) != 1){
		line_amount++; // while loop that scans in from the file into array of product structs
		++i; // variables to count how many lines of products
		if(feof(fp)){ // checks to see if file ends
			break;
		}
	}

	for(i = 0; i < line_amount; i++){ // for loop that calculates the value for sale_volume for each product
		products[i].sale_volume = (products[i].unit_price)*(products[i].tot_pounds_sold);
	}	

	selection_sort(products,line_amount); // calls selection_sort function

	for(i = 0; i < line_amount; i++){ // for loop that prints to file the products
       		fprintf(pFile, "%s \t  %lf \t %lf \t %lf\n", products[i].name, products[i].unit_price, products[i].tot_pounds_sold, products[i].sale_volume);
	}
	
	find_product(products,line_amount,argv[1]); // calls function that will return the product the user wants
	
	fclose(fp); // closes the files
	fclose(pFile);
	return 0;
}
	
void selection_sort(struct product products[], int n) // selection sort function
{
	int i, largest = 0; // variables
	double temp, temp2, temp3;
	
	if(n == 1){ 
		return;
	}
     
	for(i = 0; i < n; i++){ // checks to find largest sale volume
		if(products[i].sale_volume > products[largest].sale_volume){
			largest = i;
		}
	}

	if(largest < n - 1){ // a large if statement changing values in the different products to match the correct ones as they ascend
		temp = products[n-1].sale_volume;
		struct product temp1 = products[n-1];
		temp2 = products[n-1].unit_price;
		temp3 = products[n-1].tot_pounds_sold;
		products[n-1].sale_volume = products[largest].sale_volume;
		products[n-1] = products[largest];
		products[n-1].unit_price = products[largest].unit_price;
		products[n-1].tot_pounds_sold = products[largest].tot_pounds_sold;
		products[largest].sale_volume = temp;
		products[largest] = temp1;
		products[largest].unit_price = temp2;
		products[largest].tot_pounds_sold = temp3;
	}
	
	selection_sort(products, n-1); // continuous recursion
}

void find_product(struct product products[], int n, char *name) // finds product user wants
{
	int i = 0;

	if(n == 1){ 
		return;
	}
  
	for(i = 0; i < n; i++){ // for loop that compares the name the user enters to each product and prints if true
		if(strcmp(products[i].name, name) == 0){
			printf("Output: \n");
			printf("Name: %s\n", products[i].name);
			printf("Unit Price: %.02lf\n", products[i].unit_price);
			printf("Number of pounds sold: %.02lf\n", products[i].tot_pounds_sold);
			printf("Sale volume: %.02lf\n", products[i].sale_volume);
		}
	}
}
