#ifndef EXAM_H
#define EXAM_H

#define _CRT_SECURE_NO_WARNINGS

#include <malloc.h>
#include <string.h>
#include <stdio.h>

void fx1();

struct Person; 

typedef struct
{
	int id;
	char name[20];
	int price;
	char* pictureLink;
	char* description;
	struct Person* owner;
}Product;

struct Person
{
	char name[20];
	char phoneNumber[20];
	Product** products;
	int numProducts;
};

typedef struct Person Person;

typedef struct
{
	Person** users;
	int numUsers;
}Yad2;
/* Q1 */
int canEat(char arr[8][8], int x, int y);
/* Q2 */
int specialSum(int arr[], int length, int num);
/* Q3 */
Person* createPerson(const char* name, const char* phone); 

Product* createProduct(int id, const char* name, int price, const char* pictureLink, const char* description, Person* owner); 

void addProductToPerson(Person* person, Product* product);

Product** searchProduct(Yad2* y2, const char* productName, int limitPrice, int* outNumProducts); 

#endif