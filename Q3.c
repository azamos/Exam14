#include "exam.h"

Person* createPerson(const char* name, const char* phone)
{
	Person* newPerson = (Person*)malloc(sizeof(Person));
	newPerson->numProducts = 0;
	newPerson->products = NULL;
	strcpy(newPerson->name, name);
	strcpy(newPerson->phoneNumber, phone);
	return newPerson;
}

Product* createProduct(int id, const char* name, int price, const char* pictureLink,
	const char* description, Person* owner)
{
	Product* newProduct = (Product*)malloc(sizeof(Product));
	/*
	* First, I will allocate memory for the pictureLink and description attributes/fields.
	*/
	char* newPictureLink = (char*)malloc(sizeof(char) * (1 + strlen(pictureLink)));
	char* newDescription = (char*)malloc(sizeof(char)*(1+strlen(description)));
	strcpy(newPictureLink, pictureLink);
	strcpy(newDescription, description);
	/*
	* now to set the fields/members/attributes
	*/
	newProduct->id = id;
	strcpy(newProduct->name, name);
	newProduct->price = price;
	newProduct->description = newDescription;
	newProduct->pictureLink = newPictureLink;
	newProduct->owner = owner;
	return newProduct;
}

void addProductToPerson(Person* person, Product* product)
{
	/*
	* I assume that product.owner = NULL, and that owner does not have the product
	* in his product list. The way the questioned was phrased implicates that this
	* is the most probable situation.
	*/
	product->owner = person;//set the product owner to person
	/*
	* Now, to reallocate person's products list to its size, +1
	*/
	person->products =
		(Product**)realloc(person->products,
			sizeof(Product*) * (1+person->numProducts));
	person->products[person->numProducts] = product;
	person->numProducts++;

};

Product** searchProduct(Yad2* y2, const char* productName, int limitPrice, int* outNumProducts)
{
	/*reseting outNumProducts to 0*/
	*outNumProducts = 0;
	/* declaring the returned list*/
	Product** filteredProducts = NULL;
	/*i iterats over persons*/
	for (int i = 0; i < y2->numUsers; i++) {
		Person* currentPerson = y2->users[i];
		/*j iterates over person[i]'s products*/
		for (int j = 0; j < currentPerson->numProducts; j++) {
			Product* currentProduct = currentPerson->products[j];
			if (strcmp(currentProduct->name, productName) == 0
				&& currentProduct->price <= limitPrice) {
				/*first, reallocate filterProducts*/
				filteredProducts = (Product**)realloc(filteredProducts, (*outNumProducts+1)*sizeof(Product*));
				filteredProducts[*outNumProducts] = currentProduct;
				(*outNumProducts)++;
			}
		}
	}
	return filteredProducts;
}