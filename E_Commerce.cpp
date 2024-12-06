
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <string>
#include <conio.h>

using namespace std;

class Ecommerce {
private:
    string product_name, product_id;
    float price;
    int quantity;

public:
    void menu();
    void add();
    void display();
    void modify();
    void search();
    void deleted();
};

void Ecommerce::menu() {
menustart:
    int choice;
    char x;
    system("cls");
    cout << "\t\t\t*****************************" << endl;
    cout << "\t\t\t|   E-COMMERCE MANAGEMENT   |" << endl;
    cout << "\t\t\t*****************************" << endl;
    cout << "\t\t\t 1. Add New Product" << endl;
    cout << "\t\t\t 2. Display Products" << endl;
    cout << "\t\t\t 3. Search Product" << endl;
    cout << "\t\t\t 4. Delete Product" << endl;
    cout << "\t\t\t 5. Modify Product" << endl;
    cout << "\t\t\t 6. Exit\n" << endl;
    cout << " Enter Your Choice: ";
    cin >> choice;
    switch (choice) {
    case 1:
        do {
            add();
            cout << "\n\n\t\t\t Add Another Product Record (Y/N): ";
            cin >> x;
        } while (x == 'y' || x == 'Y');
        break;
    case 2:
        display();
        break;
    case 3:
        search();
        break;
    case 4:
        deleted();
        break;
    case 5:
        modify();
        break;
    case 6:
        cout << "\n\t\t\t    Program Exiting!!!";
        cout << "\n*************************       Thank you       *************************\n";
        exit(0);
    default:
        cout << "\n\n\t\t\t Invalid Choice!!! Please Try Again...";
    }
    getch();
    goto menustart;
}

void Ecommerce::add() {
    system("cls");
    fstream file;
    cout << "\n\t\t\t*****************************" << endl;
    cout << "\t\t\t       Add Product Details     " << endl;
    cout << "\t\t\t*****************************" << endl;
    cout << "\t\t\tEnter Product Name: ";
    cin >> product_name;
    cout << "\t\t\tEnter Product ID: ";
    cin >> product_id;
    cout << "\t\t\tEnter Price: ";
    cin >> price;
    cout << "\t\t\tEnter Quantity: ";
    cin >> quantity;
    file.open("productRecord.txt", ios::app | ios::out);
    file << " " << product_name << " " << product_id << " " << price << " " << quantity << "\n";
    file.close();
}

void Ecommerce::display() {
    system("cls");
    fstream file;
    int total = 1;
    cout << "\n-------------------------------------------------------------------------------------------------------" << endl;
    cout << "------------------------------------- Product Record Table --------------------------------------------" << endl;
    file.open("productRecord.txt", ios::in);
    if (!file) {
        cout << "\n\t\t\tNo Data is Present... ";
        file.close();
    } else {
        file >> product_name >> product_id >> price >> quantity;
        while (!file.eof()) {
            cout << "\n\n\t\t\tProduct No.: " << total++ << endl;
            cout << "\t\t\tProduct Name: " << product_name << "\n";
            cout << "\t\t\tProduct ID: " << product_id << "\n";
            cout << "\t\t\tPrice: " << price << "\n";
            cout << "\t\t\tQuantity: " << quantity << "\n";
            file >> product_name >> product_id >> price >> quantity;
        }
    }
    file.close();
}

void Ecommerce::modify() {
    system("cls");
    fstream file, file1;
    string prod_id;
    int found = 0;
    cout << "\n-------------------------------------------------------------------------------------------------------" << endl;
    cout << "------------------------------------- Modify Product Details ------------------------------------------" << endl;
    file.open("productRecord.txt", ios::in);
    if (!file) {
        cout << "\n\t\t\tNo Data is Present...";
        file.close();
    } else {
        cout << "\nEnter Product ID of the Product you want to Modify: ";
        cin >> prod_id;
        file1.open("temp.txt", ios::app | ios::out);
        file >> product_name >> product_id >> price >> quantity;
        while (!file.eof()) {
            if (prod_id != product_id)
                file1 << " " << product_name << " " << product_id << " " << price << " " << quantity << "\n";
            else {
                cout << "\n\t\t\tEnter New Product Name: ";
                cin >> product_name;
                cout << "\t\t\tEnter New Product ID: ";
                cin >> product_id;
                cout << "\t\t\tEnter New Price: ";
                cin >> price;
                cout << "\t\t\tEnter New Quantity: ";
                cin >> quantity;
                file1 << " " << product_name << " " << product_id << " " << price << " " << quantity << "\n";
                found++;
            }
            file >> product_name >> product_id >> price >> quantity;
        }
        if (found == 0) {
            cout << "\n\n\t\t\t Product ID Not Found...";
        }
        file1.close();
        file.close();
        remove("productRecord.txt");
        rename("temp.txt", "productRecord.txt");
    }
}

void Ecommerce::search() {
    system("cls");
    fstream file;
    int found = 0;
    string prod_id;
    file.open("productRecord.txt", ios::in);
    if (!file) {
        cout << "\n-------------------------------------------------------------------------------------------------------" << endl;
        cout << "------------------------------------- Search Product Data --------------------------------------------" << endl;
        cout << "\n\t\t\tNo Data is Present..." << endl;
    } else {
        cout << "\n-------------------------------------------------------------------------------------------------------" << endl;
        cout << "------------------------------------- Search Product Table --------------------------------------------" << endl;
        cout << "\nEnter Product ID of the Product you want to search: ";
        cin >> prod_id;
        file >> product_name >> product_id >> price >> quantity;
        while (!file.eof()) {
            if (prod_id == product_id) {
                cout << "\n\n\t\t\tProduct Name: " << product_name << "\n";
                cout << "\t\t\tProduct ID: " << product_id << "\n";
                cout << "\t\t\tPrice: " << price << "\n";
                cout << "\t\t\tQuantity: " << quantity << "\n";
                found++;
            }
            file >> product_name >> product_id >> price >> quantity;
        }
        if (found == 0) {
            cout << "\n\t\t\t Product ID Not Found...";
        }
        file.close();
    }
}

void Ecommerce::deleted() {
    system("cls");
    fstream file, file1;
    int found = 0;
    string prod_id;
    cout << "\n-------------------------------------------------------------------------------------------------------" << endl;
    cout << "------------------------------------- Delete Product Details ------------------------------------------" << endl;
    file.open("productRecord.txt", ios::in);
    if (!file) {
        cout << "\n\t\t\tNo Data is Present...";
        file.close();
    } else {
        cout << "\nEnter Product ID of the Product you want to Delete: ";
        cin >> prod_id;
        file1.open("temp.txt", ios::app | ios::out);
        file >> product_name >> product_id >> price >> quantity;
        while (!file.eof()) {
            if (prod_id != product_id) {
                file1 << " " << product_name << " " << product_id << " " << price << " " << quantity << "\n";
            } else {
                found++;
                cout << "\n\t\t\tSuccessfully Deleted Data";
            }
            file >> product_name >> product_id >> price >> quantity;
        }
        if (found == 0) {
            cout << "\n\t\t\t Product ID Not Found...";
        }
        file1.close();
        file.close();
        remove("productRecord.txt");
        rename("temp.txt", "productRecord.txt");
    }
}

int main() {
    system("color 0E");
    Ecommerce project;
    project.menu();
    return 0;
}
