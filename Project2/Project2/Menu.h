#include "Tree.h"
#include <iostream>
#include <fstream>



void showMenu()
{
	std::cout << " \t\t\t\tDe tai 13: Kiem tra 2 cay nhi phan co tuong tu nhau hay khong";
	std::cout << "\n1/ Them vao cay 1.";
	std::cout << "\n2/ Them vao cay 2.";
	std::cout << "\n3/ Kiem tra 2 cay tuong tu.";
	std::cout << "\n4/ Hien Thi Cay.";
	std::cout << "\n5/ Reset.";
	std::cout << "\n Choice = ";
}
void addToTree(Tree& tree) {
	std::ifstream fileInput("E:/tree1.txt");

	if (fileInput.fail())
	{
		std::cout << "Failed to open this file!" << std::endl;
	}
	while (!fileInput.eof())
	{
		int value;
		fileInput >> value;
		std::cout << value << " ";
		tree.addLeaf(value);
	}
	

	fileInput.close();
	std::cout << "\nFINISH!!!\n\n";
	system("pause");
}
void addToTree2(Tree& tree) {
	std::ifstream fileInput("E:/tree2.txt");

	if (fileInput.fail())
	{
		std::cout << "Failed to open this file!" << std::endl;
	}
	while (!fileInput.eof())
	{
		int value;
		fileInput >> value;
		std::cout << value << " ";
		tree.addLeaf(value);
	}


	fileInput.close();
	std::cout << "\nFINISH!!!\n\n";
	system("pause");
}
void menu(Tree& firstTree, Tree& secondTree)
{
	while (true)
	{
		system("cls");
		showMenu();

		int choice;
		std::cin >> choice;
		std::cout << "\n\n";       

		if (choice == 1)
		{
			addToTree(firstTree);
		}

		else if (choice == 2)
		{
			addToTree2(secondTree);
		}

		else if (choice == 3)
		{
			std::string answer = (firstTree.IsTwoSimilarTree(secondTree)) ? "DUNG" : "SAI";
			std::cout << "Hai cay tuong tu: " << answer << ".\n\n";
			system("pause");
		}
		else if (choice == 4)
		{
			std::cout << "\n\nHien Thi Cay:\n";
			std::cout << "\nCay #1: ";
			firstTree.showTree();
			std::cout << "\nCay #2: ";
			secondTree.showTree();
			std::cout << "\n\n";
			system("pause");
		}
		else if (choice == 5)
		{
			firstTree.reset();
			secondTree.reset();
			std::cout << "\n\n Reset Finish!!!\n\n";
			system("pause");
		}

		else break;
	}
}