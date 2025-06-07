#include "MainForm.h"

using namespace System;
using namespace System::Windows::Forms;


// Entry point of the program
void main()
{

	// Enable visual styles for the application
	Application::EnableVisualStyles();

	// Set text rendering compatibility to false
	Application::SetCompatibleTextRenderingDefault(false);

	// Instantiate the Quiz from the QUIZ namespace
	CombineSeparateClasses::MainForm form;


	// Run the application using the Main_Form
	Application::Run(% form);
}