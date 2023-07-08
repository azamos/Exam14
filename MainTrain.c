
#include "exam.h"
int count1 = 0;

void fx1(){
    count1++;
}

int main()
{
    //Q1
    char board1[8][8] = { {'*','*','*','*','*','*','*','*'},
                           {'*','*','*','*','*','*','*','*'},
                           {'*','*','*','*','*','*','*','*'},
                           {'*','*','*','*','*','*','*','*'},
                           {'*','*','*','*','*','*','*','*'},
                           {'*','*','*','*','*','*','*','*'},
                           {'*','*','*','*','*','*','*','*'},
                           {'*','*','*','*','*','*','*','*'} };

    int boolCanEat1 = canEat(board1, 2, 3);

    if (boolCanEat1)
        printf("canEat function is wrong for train1_1 (-8)\n");

    char board2[8][8] = { {'*','B','*','*','*','*','*','*'},
                          {'*','W','B','*','*','*','*','*'},
                          {'*','B','B','*','*','*','*','*'},
                          {'*','*','*','*','*','*','*','*'},
                          {'*','*','*','*','*','*','*','*'},
                          {'*','*','*','*','*','*','*','*'},
                          {'*','*','*','*','*','*','*','*'},
                          {'*','*','*','*','*','*','*','*'} };

    int boolCanEat2 = canEat(board2, 1, 1);

    if (boolCanEat2 != 1)
        printf("canEat function is wrong for train1_2 (-8)\n");



    char board3[8][8] = { {'*','B','B','*','*','*','*','*'},
                          {'*','W','B','*','*','*','*','*'},
                          {'*','B','B','*','*','*','*','*'},
                          {'*','*','*','*','*','*','*','*'},
                          {'*','*','*','*','*','*','*','*'},
                          {'*','*','*','*','*','*','*','*'},
                          {'*','*','*','*','*','*','*','*'},
                          {'*','*','*','*','*','*','*','*'} };

    int boolCanEat3 = canEat(board3, 1, 2);

    if (boolCanEat3)
        printf("canEat function is wrong for train1_3 (-9)\n");


 //   //Q2
	//int arr1[] = { 1,2,3,4,5 };
	//int res1 = specialSum(arr1, 5, 5);

	//if (count1 < 3)
	//	printf("specialSum function is not recursive (-8)\n");
	//else if (res1 != 10)
	//{
	//	printf("specialSum function is wrong for train2_1  (-8)\n");
	//}

	//count1 = 0;
	//int arr2[] = { 1,2,3,-4, 4, 5, 6 };
	//int res2 = specialSum(arr2, 7, 5);

	//if (count1 < 5)
	//	printf("specialSum function is not recursive (-9)\n");
	//else if (res2 != 20)
	//{
	//	printf("specialSum function is wrong for train2_2  (-9)\n");
	//}

	//count1 = 0;
	//int arr3[] = { 9,9 };
	//int res3 = specialSum(arr3, 2, 8);

	//if (res3 != 18)
	//{
	//	printf("specialSum function is wrong for train2_3  (-8)\n");
	//}

 //   //Q3
	//Person* perArr[5];
	//Product* prodArr[8];
	//Yad2 y2;
	//Product** retProd;
	//int num;

	//perArr[0] = createPerson("David", "32455");
	//perArr[1] = createPerson("Moshe", "232134");
	//perArr[2] = createPerson("Shlomi", "56454");
	//perArr[3] = createPerson("David", "67889");
	//perArr[4] = createPerson("Yosi", "3242234455");

	//if (strcmp(perArr[1]->name, "Moshe"))
	//	printf("createPerson function is wrong for train3_1 (-3)\n");
	//if (perArr[2]->numProducts != 0)
	//	printf("createPerson function is wrong for train3_2 (-3)\n");
	//if (perArr[4]->products != NULL)
	//	printf("createPerson function is wrong for train3_2 (-4)\n");

	//prodArr[0] = createProduct(1, "Sofa", 1500, "mySofa.png", "Great Sofa", perArr[0]);
	//prodArr[1] = createProduct(2, "Gitar", 1000, "myGitar.png", "Great Gitar", perArr[1]);
	//prodArr[2] = createProduct(3, "Shoes", 250, "myShoes.jpg", "Great Shoes Ever", perArr[0]);
	//prodArr[3] = createProduct(4, "Sofa", 1100, "mySofa.png", "A Sofa", perArr[2]);
	//prodArr[4] = createProduct(5, "Chair", 300, "Chair.png", "4 legs chair", perArr[3]);
	//prodArr[5] = createProduct(6, "Gitar", 1150, "myGitar.jpg", "Old Gitar", perArr[4]);
	//prodArr[6] = createProduct(7, "Gitar", 1050, "Gitar.png", "", perArr[2]);
	//prodArr[7] = createProduct(8, "Sofa", 900, "anotherSofa.png", "", perArr[2]);

	//if (strcmp(prodArr[1]->name, "Gitar"))
	//	printf("createProduct function is wrong for train3_4 (-3)\n");
	//if (prodArr[3]->owner != perArr[2])
	//	printf("createProduct function is wrong for train3_5 (-3)\n");
	//if (prodArr[7]->price != 900)
	//	printf("createProduct function is wrong for train3_6 (-4)\n");
	//

	//addProductToPerson(perArr[0], prodArr[0]);
	//addProductToPerson(perArr[1], prodArr[1]);
	//addProductToPerson(perArr[0], prodArr[2]);
	//addProductToPerson(perArr[2], prodArr[3]);
	//addProductToPerson(perArr[3], prodArr[4]);
	//addProductToPerson(perArr[4], prodArr[5]);
	//addProductToPerson(perArr[2], prodArr[6]);
	//addProductToPerson(perArr[2], prodArr[7]);

	//if (perArr[0]->numProducts != 2)
	//	printf("addProductToPerson function is wrong for train3_7 (-3)\n");
	//if (perArr[2]->products[2]->id != 8)
	//	printf("addProductToPerson function is wrong for train3_8 (-3)\n");
	//if (strcmp(perArr[1]->products[0]->pictureLink, "myGitar.png"))
	//	printf("addProductToPerson function is wrong for train3_9 (-4)\n");



	//y2.users = perArr;
	//y2.numUsers = 5;
	//retProd = searchProduct(&y2, "Gitar", 1100, &num);

	//if (num != 2)
	//	printf("searchProduct function is wrong for train3_10 (-6)\n");
	//if (retProd[1]->owner != perArr[2])
	//	printf("searchProduct function is wrong for train3_11 (-6)\n");

	//free(retProd);
	//retProd = searchProduct(&y2, "Sofa", 2000, &num);
	//if (num != 3)
	//	printf("searchProduct function is wrong for train3_12 (-8)\n");

	printf("done");
    return 0;
}
