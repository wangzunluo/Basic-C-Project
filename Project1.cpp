#include <iostream>
using namespace std;

class Item //item class 
{
	protected:
		//shared attributes
		int Code;
		int Color;
		int Brand;
		double Height;
		double Length;
		double Width;
		double Weight;
		double Price;
		int Type;
	public:
		Item (); // empty constructor
		Item (int code, int color, int brand, double height, double length, 
			double width, double weight, double price, int type); // nonempty constructor
		double getPrice();//get function for price
		int getBrand();//get function for brand
		double getHeight();//get function for height
		double getLength();//get function for length
		double getWidth();//get function for width
		double getWeight();//get function for weight
		int getColor();//get function for color
		int getType();//get function for type
		int getCode();//get function for code

};

//initialize empty fields to 0
Item::Item() {
	Code = 0;
	Color = 0;
	Brand = 0;
	Height = 0.0;
	Length = 0.0;
	Width = 0.0;
	Weight = 0.0;
	Price = 0.0;
	Type = 0;
};

//assign values to attributes
Item::Item(int code, int color, int brand, double height, double length, double width, 
	double weight, double price, int type) {
	Code = code;
	Color = color;
	Brand = brand;
	Height = height;
	Length = length;
	Width = width;
	Weight = weight;
	Price = price;
	Type = type;
};

//returns the price
double Item::getPrice() {
	return Price;
}

//returns the height
double Item::getHeight() {
	return Height;
}

//returns the length
double Item::getLength() {
	return Length;
}

//returns the width
double Item::getWidth() {
	return Width;
}

//returns the weight
double Item::getWeight() {
	return Weight;
}

//returns the code
int Item::getCode() {
	return Code;
}

//returns the color
int Item::getColor() {
	return Color;
}

//returns the brand
int Item::getBrand() {
	return Brand;
}

//returns the type
int Item::getType() {
	return Type;
}

//pen class Item subclass
class Pens: public Item 
{
	protected:
		//unique pen attributes
		int PacketSize;
		bool AssortedInk;
	public:
		Pens ();//empty constructor
		Pens (int code, int color, int brand, double height, double length,
			double width, double weight, double price, int type, int packetSize, bool assortedInk);// nonempty constructor
		void display();//display method
		
};

Pens::Pens()//initialize empty fields to 0
{
	PacketSize = 0;
	AssortedInk = 0;
}

//assign values
Pens::Pens(int code, int color, int brand, double height, double length,
	double width, double weight, double price, int type, int packetSize, bool assortedInk):
	Item(code, color, brand, height, length, width, weight, price, type) {

	PacketSize = packetSize;
	AssortedInk = assortedInk;

}

//pens display method
void Pens::display() {
	cout << "Item: Pen, ";
	switch (Color) {
		//four cases for color
	case 1:
		cout << " Color: Red, ";
		break;
	case 2:
		cout << " Color: Blue, ";
		break;
	case 3:
		cout << " Color: Green, ";
		break;
	case 4:
		cout << " Color: Black, ";
		break;
	}
	switch (getBrand()) {
		//four cases for brand
	case 1:
		cout << "Brand: Pilot, ";
		break;
	case 2:
		cout << "Brand: Paper mate, ";
		break;
	case 3:
		cout << "Brand: Uni-ball, ";
		break;
	case 4:
		cout << "Brand: Sharpie, ";
		break;
	}
	// print double values
	cout << "Height: " << getHeight() << ", Length: " << getLength() << ", Width: " << getWidth()
		<< ", Weight: " << getWeight() << ", Price: " << getPrice();
	switch (getType()) {
		//four cases for type
	case 1:
		cout << ", Type: Ball Point, ";
		break;
	case 2:
		cout << ", Type: Roller Ball, ";
		break;
	case 3:
		cout << ", Type: Fountain, ";
		break;
	case 4:
		cout << ", Type: Calligraphy, ";
		break;
	}
	switch (AssortedInk) {
		//two cases for Assorted Ink
	case 0:
		cout << "Assorted Ink: No, ";
		break;
	case 1:
		cout << "Assorted Ink: Yes, ";
		break;
	}
	cout << "Packet Size: " << PacketSize << endl;
}

class Printer: public Item //printer class Item subclass
{
	protected:
		//unique printer attributes
		int TrayCapacity;
		bool Network;
	public:
		Printer ();//empty constructor
		Printer (int code, int color, int brand, double height, double length, double width, 
			double weight, double price, int type, int trayCapacity, bool network);
		void display();//display method

};

Printer::Printer()//initialize empty fields to 0
{
	TrayCapacity = 0;
	Network = 0;
}

//assign values
Printer::Printer(int code, int color, int brand, double height, double length, double width,
	double weight, double price, int type, int trayCapacity, bool network) :Item(code, color,
		brand, height, length, width, weight, price, type) {
	TrayCapacity = trayCapacity;
	Network = network;
}

//printer display method
void Printer::display() {
	cout << "Item: Printer, ";
	switch (getColor()) {
	case 1:
		cout << "Color: Black, ";
		break;
	case 2:
		cout << "Color: White, ";
		break;
	}
	switch (getBrand()) {
	case 1:
		cout << "Brand: Dell, ";
		break;
	case 2:
		cout << "Brand: HP, ";
		break;
	case 3:
		cout << "Brand: Cannon, ";
		break;
	case 4:
		cout << "Brand: Brother, ";
		break;
	}
	cout << "Height: " << getHeight() << ", Length: " << getLength() << ", Width: " << getWidth() 
		<< ", Weight: " << getWeight() << ", Price: " << getPrice();
	switch (getType()) {
	case 1:
		cout << ", Type: All-In-One, ";
		break;
	case 2:
		cout << ", Type: Laser, ";
		break;
	case 3:
		cout << ", Type: InkJet, ";
		break;
	}
	switch (Network) {
	case 0:
		cout << "Network: No, ";
		break;
	case 1:
		cout << "Network: Yes, ";
		break;
	}
	cout << "Tray Capacity: " << TrayCapacity << endl;
}

class SafeBox: public Item//safebox class Item subclass
{
	public:
		//unique safebox attributes
		bool ElectronicLock;
		bool FireResistant;
		SafeBox ();//empty constructor
		SafeBox (int code, int color, int brand, double height, double length, double width,
			double weight, double price, int type, bool electronicLock, bool fireResistant);//nonempty constructor
		void display();//display method
};


SafeBox::SafeBox()//initialize empty values to 0
{
	ElectronicLock = 0;
	FireResistant = 0;
}

//assign values
SafeBox::SafeBox(int code, int color, int brand, double height, double length, double width,
	double weight, double price, int type, bool electronicLock, bool fireResistant) :Item(code, color,
		brand, height, length, width, weight, price, type) {
	ElectronicLock = electronicLock;
	FireResistant = fireResistant;
}

//safebox display
void SafeBox::display() {
	cout << "Item: Safe Box, ";
	switch (getColor()) {
	case 1:
		cout << "Color: Black, ";
		break;
	case 2:
		cout << "Color: Red, ";
		break;
	}
	switch (getBrand()) {
	case 1:
		cout << "Brand: SentrySafe, ";
		break;
	case 2:
		cout << "Brand: First Alert, ";
		break;
	case 3:
		cout << "Brand: Honeywell, ";
		break;
	}
	cout << "Height: " << getHeight() << ", Length: " << getLength() << ", Width: " << getWidth() 
		<< ", Weight: " << getWeight() << ", Price: " << getPrice();
	switch (getType()) {
	case 1:
		cout << ", Type: Water Proof, ";
		break;
	case 2:
		cout << ", Type: Wall Mountable, ";
		break;
	case 3:
		cout << ", Type: Desktop, ";
		break;
	}
	switch (FireResistant) {
	case 0:
		cout << "Fire Resistant: No, ";
		break;
	case 1:
		cout << "Fire Resistant: Yes, ";
		break;
	}
	switch (ElectronicLock) {
	case 0:
		cout << "Electronic Lock: No, ";
		break;
	case 1:
		cout << "Electronic Lock: Yes, ";
		break;
	}
	cout << endl;
}

//set character array values to empty
void nullTerminate(char* str, int size) {
	for (int i = 0; i < size; i++)
		str[i] = '\0';
};

//main method
int main()
{
	Item* Bag[256];//create a bag with size 256 to hold input objects

	int bagPos = 0;//position of bag used for adding items
	int noItems;//counts the number of items in the bag
	int noPens = 0;//counts the number of pens added
	int noPrinter = 0;//counts the number of printers added
	int noSafeBox = 0;//counts the number of safeboxes added
	double totalPens = 0.0;//adds up the total price for the pens
	double totalPrinter = 0.0;//adds up the total price for the printers
	double totalSafeBox = 0.0;//adds up the total price for the safe boxes
	double totalPrice = 0.0;//adds up all the prices


	char command [10];//holds the command string
	int quantity;//holds the quantity of the item
	int code;//specifies the type of item
	int color;//determines the color of the item
	int brand;//determines the brand of the item
	double height;//determines the height of the item
	double length;//determines the length of the item
	double width;//determines the width of the item
	double weight;//determines the weight of the item
	double price;//determines the weight of the price
	int type;//determines the type of item
	bool att10;//this is a unique field for the three items
	int att11;//this is the second unique field for the three items


	nullTerminate(command, 10);//clears the command array


	cin >> command;//read in first attribute
	cout << "File Input: " << endl;
	while (!cin.eof())	//while end of line is not reached
	{
		//read a line from input
		//cin >> command >> quantity >> code >> all other attributes
		cin >> quantity >> code >> color >> brand >> height >> length >> width >> 
			weight >> price >> type >> att10 >> att11;

		//print out the line that was read
		cout << command << " " << quantity << " " << code << " " << color << " " << brand << " " << height << " " << 
			length << " " << width << " " << weight << " " << price << " " << type << " " << att10 << " " << att11 << endl;
		//Based on code create the appropriate object and store it in the Bag array as described in project description
		//creates an item based on what the value of code is
		switch (code) {
		case 1: //Pens
			for (int i = 0; i < quantity; i++) {
				Bag[bagPos + i] = new Pens(code,color,brand,height,length,width,weight,price,type,att10,att11);
				noPens++;
			}
			bagPos += quantity;
			break;
		case 2: //Printer
			for (int i = 0; i < quantity; i++) {
				Bag[bagPos + i] = new Printer(code, color, brand, height, length,
					width, weight, price, type, att10, att11);
				noPrinter++;
			}
			bagPos += quantity;
			break;
		case 3: //Safe box
			for (int i = 0; i < quantity; i++) {
				Bag[bagPos + i] = new SafeBox(code, color, brand, height, length, 
					width, weight, price, type, att10, att11);
				noSafeBox++;
			}
			bagPos += quantity;
			break;
		}

		cin >> command;
	}
	noItems = noPens + noPrinter + noSafeBox;//add up the number of items
	//write code to display each item stored in the Bag array using code described in the project description
	//Let noItems be the number of Item objects stored (it is the number Item object pointers)
	//stored in the Bag
	cout << "Item(s) in bag: " << endl;

	for (int i = 0; i < noItems; i++) {
		switch ((*Bag[i]).getCode()) {
		case 1: {//Pens
			(static_cast<Pens*>(Bag[i]))->display();
			totalPens += (*Bag[i]).getPrice();
			break;
		}
		case 2: {//Printers
			(static_cast<Printer*>(Bag[i]))->display();
			totalPrinter += (*Bag[i]).getPrice();
			break;
		}
		case 3: {//Safe Box
			(static_cast<SafeBox*>(Bag[i]))->display();
			totalSafeBox += (*Bag[i]).getPrice();
			break;
		}
		default: cout << "I do not recognize this Item in the Bag" << endl;
		}
	}
	//print summary statistics
	totalPrice = totalPens + totalPrinter + totalSafeBox;
	cout << "Summary Statistics: " << endl;
	cout << "#Pen(s): " << noPens << "  #Printer(s): " << noPrinter << "  #Safe Box(s): " << noSafeBox << endl;
	cout << "The total price for the pen(s): $" << totalPens << endl;
	cout << "The total price for the printer(s): $" << totalPrinter << endl;
	cout << "The total price for the safe box(s): $" << totalSafeBox << endl;
	cout << "The total price for the item(s): $" << totalPrice << endl;
	return 0;
}