// Hitungan.cpp : main project file.
//
//  Created by Tutu Rulianda on 3/20/10.
//	Modified by Tutu Rulianda on 5/27/10.
//  Copyright Tutu Rulianda 2010 . All rights reserved.
//
#include "stdafx.h"
#include "Form1.h"

using namespace Hitungan;

[STAThreadAttribute]
int main(array<System::String ^> ^args)
{	
	// Enabling Windows XP visual effects before any controls are created
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false); 
	// Create the main window and run it
	Application::Run(gcnew Form1());
	return 0;
}

