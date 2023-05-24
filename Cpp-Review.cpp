
/*___C review___:
Some instructions, concepts and principles for C programming language
****************************************************
*****************www.amokh.ir***********************
**************************************************** 
Autors Name: Email : ListNumber/s
--------------------------------
1- Amir Mardani (AmirM) : mir.mardani@gmail.com : 1 to 31
--------------------------------
2- ?  

*/

/*___Introduction___:
C++ is an object-oriented programming language.
Everything in C++ is associated with classes and objects
The main difference between C and C++ is that C++ support classes and objects, while C does not
C++ consist of classes and objects with related attributes and methods for example:
-------------------------------------
Class  :|			car				|
-------------------------------------
Obhects:|Volvo	|	BMW		|	Benz|
-------------------------------------
class members: 
				Atributes: weight, color,... -> Atributes are like Adjectives -> In codes variables are Atributes
				Methods: drive, brake -> Methods are like verbs -> In code functions are Methods.

Briefly: Class is an object constructor or a BLUEPRINT for creating objects.
*/

/*___List___:
1-Create a Class. (Line: 50)
To create a class, use the class keyword:
Example1 (Just Class):
Below Example explained:
The class keyword is used to create a class called MyClass.
The public keyword is an access specifier, which specifies that members (attributes and methods) of the class are accessible from outside the class. You will learn more about access specifiers later.
Inside the class, there is an integer variable myNum and a string variable myString. When variables are declared within a class, they are called attributes.
At last, end the class definition with a semicolon ;.
*/
class MyClass {	//The class
	public:	//Access specifier
		int myNum;	//Atribute (int variable)
		string myString;	//Atribute (string variable)
};

/*
Example2 (Class&Object):
*/
class MyClass{
	public:
		int myNum;
		string myString;
	
};

int main(){
	MyClass myObj; // Create an object of MyClass
	
	//Access attributes and set values
	myObj.myNum = 15;
	myObj.myString = "Some text";
	
	//Print attribute values
	cout << myObj.myNum << "\n";
	cout << myObj.myString;
	return 0;
	
	
}