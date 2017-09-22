#pragma once
#define _CRT_SECURE_NO_WARNINGS

#include <vector>
#include <Windows.h>
#include <iostream>
#include "Attrib.h"
#include "WarPlane.h"
#include "TranPlane.h"
#include "Airport.h"
#include "Plane.h"
#include "PlaneVector.h"
#include <ctime>

namespace CP_Air {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^  tabControl1;
			 std::vector<Airport> *Airports;
			 PlaneVector *Plan;

			 String^ P1 = "Москва";
			 String^ P2 = "Сочи";
			 String^ P3 = "Новосибирск";
			 String^ P4 = "Барнаул";
			 String^ P5 = "Змеиногорск";			 

	protected:
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::TabPage^  tabPage3;
	private: System::Windows::Forms::TabPage^  tabPage4;
	private: System::Windows::Forms::Button^  button_start;
	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	private: System::Windows::Forms::Button^  button_exit;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label_Line1;
	private: System::Windows::Forms::Label^  label_Park1;
	private: System::Windows::Forms::Label^  label_Place1;
	private: System::Windows::Forms::Label^  label_AirONE;
	private: System::Windows::Forms::Label^  label_Line;
	private: System::Windows::Forms::Label^  label_Park;
	private: System::Windows::Forms::Label^  label_Place;
	private: System::Windows::Forms::Label^  label_Airs;
	private: System::Windows::Forms::Label^  label_AirFIVE;
	private: System::Windows::Forms::Label^  label_AirFOUR;
	private: System::Windows::Forms::Label^  label_AirTHREE;
	private: System::Windows::Forms::Label^  label_AirTWO;
	private: System::Windows::Forms::Label^  label_Line2;
	private: System::Windows::Forms::Label^  label_Park2;
	private: System::Windows::Forms::Label^  label_Place2;
	private: System::Windows::Forms::Label^  label_Line5;
	private: System::Windows::Forms::Label^  label_Line4;
	private: System::Windows::Forms::Label^  label_Line3;
	private: System::Windows::Forms::Label^  label_Park5;
	private: System::Windows::Forms::Label^  label_Park4;
	private: System::Windows::Forms::Label^  label_Park3;
	private: System::Windows::Forms::Label^  label_Place5;
	private: System::Windows::Forms::Label^  label_Place4;
	private: System::Windows::Forms::Label^  label_Place3;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;


	private: System::Windows::Forms::Label^  label_develop;
	private: System::Windows::Forms::Label^  label_sostplan;
	private: System::Windows::Forms::Label^  label_timefly;
	private: System::Windows::Forms::Label^  label_typeplan;
	private: System::Windows::Forms::Label^  label_sostp;
	private: System::Windows::Forms::Label^  label_numplan;
	private: System::Windows::Forms::Label^  label_num10;
	private: System::Windows::Forms::Label^  label_num9;
	private: System::Windows::Forms::Label^  label_num8;
	private: System::Windows::Forms::Label^  label_num7;
	private: System::Windows::Forms::Label^  label_num6;
	private: System::Windows::Forms::Label^  label_num5;
	private: System::Windows::Forms::Label^  label_num4;
	private: System::Windows::Forms::Label^  label_num3;
	private: System::Windows::Forms::Label^  label_num2;
	private: System::Windows::Forms::Label^  label_num1;
	private: System::Windows::Forms::Label^  label_seats;
	private: System::Windows::Forms::Label^  label_gruz;
	private: System::Windows::Forms::Label^  label_type10;
	private: System::Windows::Forms::Label^  label_type9;
	private: System::Windows::Forms::Label^  label_type8;
	private: System::Windows::Forms::Label^  label_type7;
	private: System::Windows::Forms::Label^  label_type6;
	private: System::Windows::Forms::Label^  label_type5;
	private: System::Windows::Forms::Label^  label_type4;
	private: System::Windows::Forms::Label^  label_type3;
	private: System::Windows::Forms::Label^  label_type2;
	private: System::Windows::Forms::Label^  label_type1;
private: System::Windows::Forms::Label^  label_sost10;
private: System::Windows::Forms::Label^  label_sost9;
private: System::Windows::Forms::Label^  label_sost8;
private: System::Windows::Forms::Label^  label_sost7;
private: System::Windows::Forms::Label^  label_sost6;
private: System::Windows::Forms::Label^  label_sost5;
private: System::Windows::Forms::Label^  label_sost4;
private: System::Windows::Forms::Label^  label_sost3;
private: System::Windows::Forms::Label^  label_sost2;
private: System::Windows::Forms::Label^  label_sost1;
private: System::Windows::Forms::Label^  label_timefly10;
private: System::Windows::Forms::Label^  label_timefly9;
private: System::Windows::Forms::Label^  label_timefly8;
private: System::Windows::Forms::Label^  label_timefly7;
private: System::Windows::Forms::Label^  label_timefly6;
private: System::Windows::Forms::Label^  label_timefly5;
private: System::Windows::Forms::Label^  label_timefly4;
private: System::Windows::Forms::Label^  label_timefly3;
private: System::Windows::Forms::Label^  label_timefly2;
private: System::Windows::Forms::Label^  label_timefly1;
private: System::Windows::Forms::Label^  label_gruz10;
private: System::Windows::Forms::Label^  label_gruz9;
private: System::Windows::Forms::Label^  label_gruz8;
private: System::Windows::Forms::Label^  label_gruz7;
private: System::Windows::Forms::Label^  label_gruz6;
private: System::Windows::Forms::Label^  label_gruz5;
private: System::Windows::Forms::Label^  label_gruz4;
private: System::Windows::Forms::Label^  label_gruz3;
private: System::Windows::Forms::Label^  label_gruz2;
private: System::Windows::Forms::Label^  label_gruz1;
private: System::Windows::Forms::Label^  label_seats10;
private: System::Windows::Forms::Label^  label_seats9;
private: System::Windows::Forms::Label^  label_seats8;
private: System::Windows::Forms::Label^  label_seats7;
private: System::Windows::Forms::Label^  label_seats6;
private: System::Windows::Forms::Label^  label_seats5;
private: System::Windows::Forms::Label^  label_seats4;
private: System::Windows::Forms::Label^  label_seats3;
private: System::Windows::Forms::Label^  label_seats2;
private: System::Windows::Forms::Label^  label_seats1;
private: System::Windows::Forms::Label^  label7;
private: System::Windows::Forms::Label^  label8;



	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Требуется переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Обязательный метод для поддержки конструктора - не изменяйте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button_start = (gcnew System::Windows::Forms::Button());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->label_seats10 = (gcnew System::Windows::Forms::Label());
			this->label_seats9 = (gcnew System::Windows::Forms::Label());
			this->label_seats8 = (gcnew System::Windows::Forms::Label());
			this->label_seats7 = (gcnew System::Windows::Forms::Label());
			this->label_seats6 = (gcnew System::Windows::Forms::Label());
			this->label_seats5 = (gcnew System::Windows::Forms::Label());
			this->label_seats4 = (gcnew System::Windows::Forms::Label());
			this->label_seats3 = (gcnew System::Windows::Forms::Label());
			this->label_seats2 = (gcnew System::Windows::Forms::Label());
			this->label_seats1 = (gcnew System::Windows::Forms::Label());
			this->label_gruz10 = (gcnew System::Windows::Forms::Label());
			this->label_gruz9 = (gcnew System::Windows::Forms::Label());
			this->label_gruz8 = (gcnew System::Windows::Forms::Label());
			this->label_gruz7 = (gcnew System::Windows::Forms::Label());
			this->label_gruz6 = (gcnew System::Windows::Forms::Label());
			this->label_gruz5 = (gcnew System::Windows::Forms::Label());
			this->label_gruz4 = (gcnew System::Windows::Forms::Label());
			this->label_gruz3 = (gcnew System::Windows::Forms::Label());
			this->label_gruz2 = (gcnew System::Windows::Forms::Label());
			this->label_gruz1 = (gcnew System::Windows::Forms::Label());
			this->label_timefly10 = (gcnew System::Windows::Forms::Label());
			this->label_timefly9 = (gcnew System::Windows::Forms::Label());
			this->label_timefly8 = (gcnew System::Windows::Forms::Label());
			this->label_timefly7 = (gcnew System::Windows::Forms::Label());
			this->label_timefly6 = (gcnew System::Windows::Forms::Label());
			this->label_timefly5 = (gcnew System::Windows::Forms::Label());
			this->label_timefly4 = (gcnew System::Windows::Forms::Label());
			this->label_timefly3 = (gcnew System::Windows::Forms::Label());
			this->label_timefly2 = (gcnew System::Windows::Forms::Label());
			this->label_timefly1 = (gcnew System::Windows::Forms::Label());
			this->label_sost10 = (gcnew System::Windows::Forms::Label());
			this->label_sost9 = (gcnew System::Windows::Forms::Label());
			this->label_sost8 = (gcnew System::Windows::Forms::Label());
			this->label_sost7 = (gcnew System::Windows::Forms::Label());
			this->label_sost6 = (gcnew System::Windows::Forms::Label());
			this->label_sost5 = (gcnew System::Windows::Forms::Label());
			this->label_sost4 = (gcnew System::Windows::Forms::Label());
			this->label_sost3 = (gcnew System::Windows::Forms::Label());
			this->label_sost2 = (gcnew System::Windows::Forms::Label());
			this->label_sost1 = (gcnew System::Windows::Forms::Label());
			this->label_type10 = (gcnew System::Windows::Forms::Label());
			this->label_type9 = (gcnew System::Windows::Forms::Label());
			this->label_type8 = (gcnew System::Windows::Forms::Label());
			this->label_type7 = (gcnew System::Windows::Forms::Label());
			this->label_type6 = (gcnew System::Windows::Forms::Label());
			this->label_type5 = (gcnew System::Windows::Forms::Label());
			this->label_type4 = (gcnew System::Windows::Forms::Label());
			this->label_type3 = (gcnew System::Windows::Forms::Label());
			this->label_type2 = (gcnew System::Windows::Forms::Label());
			this->label_type1 = (gcnew System::Windows::Forms::Label());
			this->label_num10 = (gcnew System::Windows::Forms::Label());
			this->label_num9 = (gcnew System::Windows::Forms::Label());
			this->label_num8 = (gcnew System::Windows::Forms::Label());
			this->label_num7 = (gcnew System::Windows::Forms::Label());
			this->label_num6 = (gcnew System::Windows::Forms::Label());
			this->label_num5 = (gcnew System::Windows::Forms::Label());
			this->label_num4 = (gcnew System::Windows::Forms::Label());
			this->label_num3 = (gcnew System::Windows::Forms::Label());
			this->label_num2 = (gcnew System::Windows::Forms::Label());
			this->label_num1 = (gcnew System::Windows::Forms::Label());
			this->label_seats = (gcnew System::Windows::Forms::Label());
			this->label_gruz = (gcnew System::Windows::Forms::Label());
			this->label_timefly = (gcnew System::Windows::Forms::Label());
			this->label_typeplan = (gcnew System::Windows::Forms::Label());
			this->label_sostp = (gcnew System::Windows::Forms::Label());
			this->label_numplan = (gcnew System::Windows::Forms::Label());
			this->label_sostplan = (gcnew System::Windows::Forms::Label());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->label_Line5 = (gcnew System::Windows::Forms::Label());
			this->label_Line4 = (gcnew System::Windows::Forms::Label());
			this->label_Line3 = (gcnew System::Windows::Forms::Label());
			this->label_Park5 = (gcnew System::Windows::Forms::Label());
			this->label_Park4 = (gcnew System::Windows::Forms::Label());
			this->label_Park3 = (gcnew System::Windows::Forms::Label());
			this->label_Place5 = (gcnew System::Windows::Forms::Label());
			this->label_Place4 = (gcnew System::Windows::Forms::Label());
			this->label_Place3 = (gcnew System::Windows::Forms::Label());
			this->label_Line2 = (gcnew System::Windows::Forms::Label());
			this->label_Park2 = (gcnew System::Windows::Forms::Label());
			this->label_Place2 = (gcnew System::Windows::Forms::Label());
			this->label_Line = (gcnew System::Windows::Forms::Label());
			this->label_Park = (gcnew System::Windows::Forms::Label());
			this->label_Place = (gcnew System::Windows::Forms::Label());
			this->label_Airs = (gcnew System::Windows::Forms::Label());
			this->label_AirFIVE = (gcnew System::Windows::Forms::Label());
			this->label_AirFOUR = (gcnew System::Windows::Forms::Label());
			this->label_AirTHREE = (gcnew System::Windows::Forms::Label());
			this->label_AirTWO = (gcnew System::Windows::Forms::Label());
			this->label_Line1 = (gcnew System::Windows::Forms::Label());
			this->label_Park1 = (gcnew System::Windows::Forms::Label());
			this->label_Place1 = (gcnew System::Windows::Forms::Label());
			this->label_AirONE = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->label_develop = (gcnew System::Windows::Forms::Label());
			this->button_exit = (gcnew System::Windows::Forms::Button());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->tabPage4->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Location = System::Drawing::Point(12, 12);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(653, 372);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tabPage1.BackgroundImage")));
			this->tabPage1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->tabPage1->Controls->Add(this->label8);
			this->tabPage1->Controls->Add(this->label7);
			this->tabPage1->Controls->Add(this->label6);
			this->tabPage1->Controls->Add(this->label5);
			this->tabPage1->Controls->Add(this->label4);
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->button_start);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(645, 346);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Запуск";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->ForeColor = System::Drawing::SystemColors::Highlight;
			this->label7->Location = System::Drawing::Point(6, 328);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(392, 15);
			this->label7->TabIndex = 6;
			this->label7->Text = L"При запуске будет создано 5 аэропортов и 10 самолетов";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(604, 3);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(10, 13);
			this->label6->TabIndex = 5;
			this->label6->Text = L" ";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(563, 3);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(10, 13);
			this->label5->TabIndex = 4;
			this->label5->Text = L" ";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(522, 3);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(10, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = L" ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(481, 3);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(10, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L" ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(440, 3);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(10, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L" ";
			// 
			// button_start
			// 
			this->button_start->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_start->Location = System::Drawing::Point(261, 270);
			this->button_start->Name = L"button_start";
			this->button_start->Size = System::Drawing::Size(123, 38);
			this->button_start->TabIndex = 0;
			this->button_start->Text = L"Запуск";
			this->button_start->UseVisualStyleBackColor = true;
			this->button_start->Click += gcnew System::EventHandler(this, &MainForm::button_start_Click);
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->label_seats10);
			this->tabPage2->Controls->Add(this->label_seats9);
			this->tabPage2->Controls->Add(this->label_seats8);
			this->tabPage2->Controls->Add(this->label_seats7);
			this->tabPage2->Controls->Add(this->label_seats6);
			this->tabPage2->Controls->Add(this->label_seats5);
			this->tabPage2->Controls->Add(this->label_seats4);
			this->tabPage2->Controls->Add(this->label_seats3);
			this->tabPage2->Controls->Add(this->label_seats2);
			this->tabPage2->Controls->Add(this->label_seats1);
			this->tabPage2->Controls->Add(this->label_gruz10);
			this->tabPage2->Controls->Add(this->label_gruz9);
			this->tabPage2->Controls->Add(this->label_gruz8);
			this->tabPage2->Controls->Add(this->label_gruz7);
			this->tabPage2->Controls->Add(this->label_gruz6);
			this->tabPage2->Controls->Add(this->label_gruz5);
			this->tabPage2->Controls->Add(this->label_gruz4);
			this->tabPage2->Controls->Add(this->label_gruz3);
			this->tabPage2->Controls->Add(this->label_gruz2);
			this->tabPage2->Controls->Add(this->label_gruz1);
			this->tabPage2->Controls->Add(this->label_timefly10);
			this->tabPage2->Controls->Add(this->label_timefly9);
			this->tabPage2->Controls->Add(this->label_timefly8);
			this->tabPage2->Controls->Add(this->label_timefly7);
			this->tabPage2->Controls->Add(this->label_timefly6);
			this->tabPage2->Controls->Add(this->label_timefly5);
			this->tabPage2->Controls->Add(this->label_timefly4);
			this->tabPage2->Controls->Add(this->label_timefly3);
			this->tabPage2->Controls->Add(this->label_timefly2);
			this->tabPage2->Controls->Add(this->label_timefly1);
			this->tabPage2->Controls->Add(this->label_sost10);
			this->tabPage2->Controls->Add(this->label_sost9);
			this->tabPage2->Controls->Add(this->label_sost8);
			this->tabPage2->Controls->Add(this->label_sost7);
			this->tabPage2->Controls->Add(this->label_sost6);
			this->tabPage2->Controls->Add(this->label_sost5);
			this->tabPage2->Controls->Add(this->label_sost4);
			this->tabPage2->Controls->Add(this->label_sost3);
			this->tabPage2->Controls->Add(this->label_sost2);
			this->tabPage2->Controls->Add(this->label_sost1);
			this->tabPage2->Controls->Add(this->label_type10);
			this->tabPage2->Controls->Add(this->label_type9);
			this->tabPage2->Controls->Add(this->label_type8);
			this->tabPage2->Controls->Add(this->label_type7);
			this->tabPage2->Controls->Add(this->label_type6);
			this->tabPage2->Controls->Add(this->label_type5);
			this->tabPage2->Controls->Add(this->label_type4);
			this->tabPage2->Controls->Add(this->label_type3);
			this->tabPage2->Controls->Add(this->label_type2);
			this->tabPage2->Controls->Add(this->label_type1);
			this->tabPage2->Controls->Add(this->label_num10);
			this->tabPage2->Controls->Add(this->label_num9);
			this->tabPage2->Controls->Add(this->label_num8);
			this->tabPage2->Controls->Add(this->label_num7);
			this->tabPage2->Controls->Add(this->label_num6);
			this->tabPage2->Controls->Add(this->label_num5);
			this->tabPage2->Controls->Add(this->label_num4);
			this->tabPage2->Controls->Add(this->label_num3);
			this->tabPage2->Controls->Add(this->label_num2);
			this->tabPage2->Controls->Add(this->label_num1);
			this->tabPage2->Controls->Add(this->label_seats);
			this->tabPage2->Controls->Add(this->label_gruz);
			this->tabPage2->Controls->Add(this->label_timefly);
			this->tabPage2->Controls->Add(this->label_typeplan);
			this->tabPage2->Controls->Add(this->label_sostp);
			this->tabPage2->Controls->Add(this->label_numplan);
			this->tabPage2->Controls->Add(this->label_sostplan);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(645, 346);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Состояние самолетов";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// label_seats10
			// 
			this->label_seats10->AutoSize = true;
			this->label_seats10->Location = System::Drawing::Point(550, 284);
			this->label_seats10->Name = L"label_seats10";
			this->label_seats10->Size = System::Drawing::Size(10, 13);
			this->label_seats10->TabIndex = 66;
			this->label_seats10->Text = L" ";
			// 
			// label_seats9
			// 
			this->label_seats9->AutoSize = true;
			this->label_seats9->Location = System::Drawing::Point(550, 261);
			this->label_seats9->Name = L"label_seats9";
			this->label_seats9->Size = System::Drawing::Size(10, 13);
			this->label_seats9->TabIndex = 65;
			this->label_seats9->Text = L" ";
			// 
			// label_seats8
			// 
			this->label_seats8->AutoSize = true;
			this->label_seats8->Location = System::Drawing::Point(550, 238);
			this->label_seats8->Name = L"label_seats8";
			this->label_seats8->Size = System::Drawing::Size(10, 13);
			this->label_seats8->TabIndex = 64;
			this->label_seats8->Text = L" ";
			// 
			// label_seats7
			// 
			this->label_seats7->AutoSize = true;
			this->label_seats7->Location = System::Drawing::Point(550, 215);
			this->label_seats7->Name = L"label_seats7";
			this->label_seats7->Size = System::Drawing::Size(10, 13);
			this->label_seats7->TabIndex = 63;
			this->label_seats7->Text = L" ";
			// 
			// label_seats6
			// 
			this->label_seats6->AutoSize = true;
			this->label_seats6->Location = System::Drawing::Point(550, 192);
			this->label_seats6->Name = L"label_seats6";
			this->label_seats6->Size = System::Drawing::Size(10, 13);
			this->label_seats6->TabIndex = 62;
			this->label_seats6->Text = L" ";
			// 
			// label_seats5
			// 
			this->label_seats5->AutoSize = true;
			this->label_seats5->Location = System::Drawing::Point(550, 169);
			this->label_seats5->Name = L"label_seats5";
			this->label_seats5->Size = System::Drawing::Size(10, 13);
			this->label_seats5->TabIndex = 61;
			this->label_seats5->Text = L" ";
			// 
			// label_seats4
			// 
			this->label_seats4->AutoSize = true;
			this->label_seats4->Location = System::Drawing::Point(550, 146);
			this->label_seats4->Name = L"label_seats4";
			this->label_seats4->Size = System::Drawing::Size(10, 13);
			this->label_seats4->TabIndex = 60;
			this->label_seats4->Text = L" ";
			// 
			// label_seats3
			// 
			this->label_seats3->AutoSize = true;
			this->label_seats3->Location = System::Drawing::Point(550, 123);
			this->label_seats3->Name = L"label_seats3";
			this->label_seats3->Size = System::Drawing::Size(10, 13);
			this->label_seats3->TabIndex = 59;
			this->label_seats3->Text = L" ";
			// 
			// label_seats2
			// 
			this->label_seats2->AutoSize = true;
			this->label_seats2->Location = System::Drawing::Point(550, 100);
			this->label_seats2->Name = L"label_seats2";
			this->label_seats2->Size = System::Drawing::Size(10, 13);
			this->label_seats2->TabIndex = 58;
			this->label_seats2->Text = L" ";
			// 
			// label_seats1
			// 
			this->label_seats1->AutoSize = true;
			this->label_seats1->Location = System::Drawing::Point(550, 77);
			this->label_seats1->Name = L"label_seats1";
			this->label_seats1->Size = System::Drawing::Size(10, 13);
			this->label_seats1->TabIndex = 57;
			this->label_seats1->Text = L" ";
			// 
			// label_gruz10
			// 
			this->label_gruz10->AutoSize = true;
			this->label_gruz10->Location = System::Drawing::Point(420, 284);
			this->label_gruz10->Name = L"label_gruz10";
			this->label_gruz10->Size = System::Drawing::Size(10, 13);
			this->label_gruz10->TabIndex = 56;
			this->label_gruz10->Text = L" ";
			// 
			// label_gruz9
			// 
			this->label_gruz9->AutoSize = true;
			this->label_gruz9->Location = System::Drawing::Point(420, 261);
			this->label_gruz9->Name = L"label_gruz9";
			this->label_gruz9->Size = System::Drawing::Size(10, 13);
			this->label_gruz9->TabIndex = 55;
			this->label_gruz9->Text = L" ";
			// 
			// label_gruz8
			// 
			this->label_gruz8->AutoSize = true;
			this->label_gruz8->Location = System::Drawing::Point(420, 238);
			this->label_gruz8->Name = L"label_gruz8";
			this->label_gruz8->Size = System::Drawing::Size(10, 13);
			this->label_gruz8->TabIndex = 54;
			this->label_gruz8->Text = L" ";
			// 
			// label_gruz7
			// 
			this->label_gruz7->AutoSize = true;
			this->label_gruz7->Location = System::Drawing::Point(420, 215);
			this->label_gruz7->Name = L"label_gruz7";
			this->label_gruz7->Size = System::Drawing::Size(10, 13);
			this->label_gruz7->TabIndex = 53;
			this->label_gruz7->Text = L" ";
			// 
			// label_gruz6
			// 
			this->label_gruz6->AutoSize = true;
			this->label_gruz6->Location = System::Drawing::Point(420, 192);
			this->label_gruz6->Name = L"label_gruz6";
			this->label_gruz6->Size = System::Drawing::Size(10, 13);
			this->label_gruz6->TabIndex = 52;
			this->label_gruz6->Text = L" ";
			// 
			// label_gruz5
			// 
			this->label_gruz5->AutoSize = true;
			this->label_gruz5->Location = System::Drawing::Point(420, 169);
			this->label_gruz5->Name = L"label_gruz5";
			this->label_gruz5->Size = System::Drawing::Size(10, 13);
			this->label_gruz5->TabIndex = 51;
			this->label_gruz5->Text = L" ";
			// 
			// label_gruz4
			// 
			this->label_gruz4->AutoSize = true;
			this->label_gruz4->Location = System::Drawing::Point(420, 146);
			this->label_gruz4->Name = L"label_gruz4";
			this->label_gruz4->Size = System::Drawing::Size(10, 13);
			this->label_gruz4->TabIndex = 50;
			this->label_gruz4->Text = L" ";
			// 
			// label_gruz3
			// 
			this->label_gruz3->AutoSize = true;
			this->label_gruz3->Location = System::Drawing::Point(420, 123);
			this->label_gruz3->Name = L"label_gruz3";
			this->label_gruz3->Size = System::Drawing::Size(10, 13);
			this->label_gruz3->TabIndex = 49;
			this->label_gruz3->Text = L" ";
			// 
			// label_gruz2
			// 
			this->label_gruz2->AutoSize = true;
			this->label_gruz2->Location = System::Drawing::Point(420, 100);
			this->label_gruz2->Name = L"label_gruz2";
			this->label_gruz2->Size = System::Drawing::Size(10, 13);
			this->label_gruz2->TabIndex = 48;
			this->label_gruz2->Text = L" ";
			// 
			// label_gruz1
			// 
			this->label_gruz1->AutoSize = true;
			this->label_gruz1->Location = System::Drawing::Point(420, 77);
			this->label_gruz1->Name = L"label_gruz1";
			this->label_gruz1->Size = System::Drawing::Size(10, 13);
			this->label_gruz1->TabIndex = 47;
			this->label_gruz1->Text = L" ";
			// 
			// label_timefly10
			// 
			this->label_timefly10->AutoSize = true;
			this->label_timefly10->Location = System::Drawing::Point(283, 284);
			this->label_timefly10->Name = L"label_timefly10";
			this->label_timefly10->Size = System::Drawing::Size(10, 13);
			this->label_timefly10->TabIndex = 46;
			this->label_timefly10->Text = L" ";
			// 
			// label_timefly9
			// 
			this->label_timefly9->AutoSize = true;
			this->label_timefly9->Location = System::Drawing::Point(283, 261);
			this->label_timefly9->Name = L"label_timefly9";
			this->label_timefly9->Size = System::Drawing::Size(10, 13);
			this->label_timefly9->TabIndex = 45;
			this->label_timefly9->Text = L" ";
			// 
			// label_timefly8
			// 
			this->label_timefly8->AutoSize = true;
			this->label_timefly8->Location = System::Drawing::Point(283, 238);
			this->label_timefly8->Name = L"label_timefly8";
			this->label_timefly8->Size = System::Drawing::Size(10, 13);
			this->label_timefly8->TabIndex = 44;
			this->label_timefly8->Text = L" ";
			// 
			// label_timefly7
			// 
			this->label_timefly7->AutoSize = true;
			this->label_timefly7->Location = System::Drawing::Point(283, 215);
			this->label_timefly7->Name = L"label_timefly7";
			this->label_timefly7->Size = System::Drawing::Size(10, 13);
			this->label_timefly7->TabIndex = 43;
			this->label_timefly7->Text = L" ";
			// 
			// label_timefly6
			// 
			this->label_timefly6->AutoSize = true;
			this->label_timefly6->Location = System::Drawing::Point(283, 192);
			this->label_timefly6->Name = L"label_timefly6";
			this->label_timefly6->Size = System::Drawing::Size(10, 13);
			this->label_timefly6->TabIndex = 42;
			this->label_timefly6->Text = L" ";
			// 
			// label_timefly5
			// 
			this->label_timefly5->AutoSize = true;
			this->label_timefly5->Location = System::Drawing::Point(283, 169);
			this->label_timefly5->Name = L"label_timefly5";
			this->label_timefly5->Size = System::Drawing::Size(10, 13);
			this->label_timefly5->TabIndex = 41;
			this->label_timefly5->Text = L" ";
			// 
			// label_timefly4
			// 
			this->label_timefly4->AutoSize = true;
			this->label_timefly4->Location = System::Drawing::Point(283, 146);
			this->label_timefly4->Name = L"label_timefly4";
			this->label_timefly4->Size = System::Drawing::Size(10, 13);
			this->label_timefly4->TabIndex = 40;
			this->label_timefly4->Text = L" ";
			// 
			// label_timefly3
			// 
			this->label_timefly3->AutoSize = true;
			this->label_timefly3->Location = System::Drawing::Point(283, 123);
			this->label_timefly3->Name = L"label_timefly3";
			this->label_timefly3->Size = System::Drawing::Size(10, 13);
			this->label_timefly3->TabIndex = 39;
			this->label_timefly3->Text = L" ";
			// 
			// label_timefly2
			// 
			this->label_timefly2->AutoSize = true;
			this->label_timefly2->Location = System::Drawing::Point(283, 100);
			this->label_timefly2->Name = L"label_timefly2";
			this->label_timefly2->Size = System::Drawing::Size(10, 13);
			this->label_timefly2->TabIndex = 38;
			this->label_timefly2->Text = L" ";
			// 
			// label_timefly1
			// 
			this->label_timefly1->AutoSize = true;
			this->label_timefly1->Location = System::Drawing::Point(283, 77);
			this->label_timefly1->Name = L"label_timefly1";
			this->label_timefly1->Size = System::Drawing::Size(10, 13);
			this->label_timefly1->TabIndex = 37;
			this->label_timefly1->Text = L" ";
			// 
			// label_sost10
			// 
			this->label_sost10->AutoSize = true;
			this->label_sost10->Location = System::Drawing::Point(143, 284);
			this->label_sost10->Name = L"label_sost10";
			this->label_sost10->Size = System::Drawing::Size(10, 13);
			this->label_sost10->TabIndex = 36;
			this->label_sost10->Text = L" ";
			// 
			// label_sost9
			// 
			this->label_sost9->AutoSize = true;
			this->label_sost9->Location = System::Drawing::Point(143, 261);
			this->label_sost9->Name = L"label_sost9";
			this->label_sost9->Size = System::Drawing::Size(10, 13);
			this->label_sost9->TabIndex = 35;
			this->label_sost9->Text = L" ";
			// 
			// label_sost8
			// 
			this->label_sost8->AutoSize = true;
			this->label_sost8->Location = System::Drawing::Point(143, 238);
			this->label_sost8->Name = L"label_sost8";
			this->label_sost8->Size = System::Drawing::Size(10, 13);
			this->label_sost8->TabIndex = 34;
			this->label_sost8->Text = L" ";
			// 
			// label_sost7
			// 
			this->label_sost7->AutoSize = true;
			this->label_sost7->Location = System::Drawing::Point(143, 215);
			this->label_sost7->Name = L"label_sost7";
			this->label_sost7->Size = System::Drawing::Size(10, 13);
			this->label_sost7->TabIndex = 33;
			this->label_sost7->Text = L" ";
			// 
			// label_sost6
			// 
			this->label_sost6->AutoSize = true;
			this->label_sost6->Location = System::Drawing::Point(143, 192);
			this->label_sost6->Name = L"label_sost6";
			this->label_sost6->Size = System::Drawing::Size(10, 13);
			this->label_sost6->TabIndex = 32;
			this->label_sost6->Text = L" ";
			// 
			// label_sost5
			// 
			this->label_sost5->AutoSize = true;
			this->label_sost5->Location = System::Drawing::Point(143, 169);
			this->label_sost5->Name = L"label_sost5";
			this->label_sost5->Size = System::Drawing::Size(10, 13);
			this->label_sost5->TabIndex = 31;
			this->label_sost5->Text = L" ";
			// 
			// label_sost4
			// 
			this->label_sost4->AutoSize = true;
			this->label_sost4->Location = System::Drawing::Point(143, 146);
			this->label_sost4->Name = L"label_sost4";
			this->label_sost4->Size = System::Drawing::Size(10, 13);
			this->label_sost4->TabIndex = 30;
			this->label_sost4->Text = L" ";
			// 
			// label_sost3
			// 
			this->label_sost3->AutoSize = true;
			this->label_sost3->Location = System::Drawing::Point(143, 123);
			this->label_sost3->Name = L"label_sost3";
			this->label_sost3->Size = System::Drawing::Size(10, 13);
			this->label_sost3->TabIndex = 29;
			this->label_sost3->Text = L" ";
			// 
			// label_sost2
			// 
			this->label_sost2->AutoSize = true;
			this->label_sost2->Location = System::Drawing::Point(143, 100);
			this->label_sost2->Name = L"label_sost2";
			this->label_sost2->Size = System::Drawing::Size(10, 13);
			this->label_sost2->TabIndex = 28;
			this->label_sost2->Text = L" ";
			// 
			// label_sost1
			// 
			this->label_sost1->AutoSize = true;
			this->label_sost1->Location = System::Drawing::Point(143, 77);
			this->label_sost1->Name = L"label_sost1";
			this->label_sost1->Size = System::Drawing::Size(10, 13);
			this->label_sost1->TabIndex = 27;
			this->label_sost1->Text = L" ";
			// 
			// label_type10
			// 
			this->label_type10->AutoSize = true;
			this->label_type10->Location = System::Drawing::Point(71, 284);
			this->label_type10->Name = L"label_type10";
			this->label_type10->Size = System::Drawing::Size(10, 13);
			this->label_type10->TabIndex = 26;
			this->label_type10->Text = L" ";
			// 
			// label_type9
			// 
			this->label_type9->AutoSize = true;
			this->label_type9->Location = System::Drawing::Point(71, 261);
			this->label_type9->Name = L"label_type9";
			this->label_type9->Size = System::Drawing::Size(10, 13);
			this->label_type9->TabIndex = 25;
			this->label_type9->Text = L" ";
			// 
			// label_type8
			// 
			this->label_type8->AutoSize = true;
			this->label_type8->Location = System::Drawing::Point(71, 238);
			this->label_type8->Name = L"label_type8";
			this->label_type8->Size = System::Drawing::Size(10, 13);
			this->label_type8->TabIndex = 24;
			this->label_type8->Text = L" ";
			// 
			// label_type7
			// 
			this->label_type7->AutoSize = true;
			this->label_type7->Location = System::Drawing::Point(71, 215);
			this->label_type7->Name = L"label_type7";
			this->label_type7->Size = System::Drawing::Size(10, 13);
			this->label_type7->TabIndex = 23;
			this->label_type7->Text = L" ";
			// 
			// label_type6
			// 
			this->label_type6->AutoSize = true;
			this->label_type6->Location = System::Drawing::Point(71, 192);
			this->label_type6->Name = L"label_type6";
			this->label_type6->Size = System::Drawing::Size(10, 13);
			this->label_type6->TabIndex = 22;
			this->label_type6->Text = L" ";
			// 
			// label_type5
			// 
			this->label_type5->AutoSize = true;
			this->label_type5->Location = System::Drawing::Point(71, 169);
			this->label_type5->Name = L"label_type5";
			this->label_type5->Size = System::Drawing::Size(10, 13);
			this->label_type5->TabIndex = 21;
			this->label_type5->Text = L" ";
			// 
			// label_type4
			// 
			this->label_type4->AutoSize = true;
			this->label_type4->Location = System::Drawing::Point(71, 146);
			this->label_type4->Name = L"label_type4";
			this->label_type4->Size = System::Drawing::Size(10, 13);
			this->label_type4->TabIndex = 20;
			this->label_type4->Text = L" ";
			// 
			// label_type3
			// 
			this->label_type3->AutoSize = true;
			this->label_type3->Location = System::Drawing::Point(71, 123);
			this->label_type3->Name = L"label_type3";
			this->label_type3->Size = System::Drawing::Size(10, 13);
			this->label_type3->TabIndex = 19;
			this->label_type3->Text = L" ";
			// 
			// label_type2
			// 
			this->label_type2->AutoSize = true;
			this->label_type2->Location = System::Drawing::Point(71, 100);
			this->label_type2->Name = L"label_type2";
			this->label_type2->Size = System::Drawing::Size(10, 13);
			this->label_type2->TabIndex = 18;
			this->label_type2->Text = L" ";
			// 
			// label_type1
			// 
			this->label_type1->AutoSize = true;
			this->label_type1->Location = System::Drawing::Point(71, 77);
			this->label_type1->Name = L"label_type1";
			this->label_type1->Size = System::Drawing::Size(10, 13);
			this->label_type1->TabIndex = 17;
			this->label_type1->Text = L" ";
			// 
			// label_num10
			// 
			this->label_num10->AutoSize = true;
			this->label_num10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_num10->Location = System::Drawing::Point(15, 284);
			this->label_num10->Name = L"label_num10";
			this->label_num10->Size = System::Drawing::Size(29, 13);
			this->label_num10->TabIndex = 16;
			this->label_num10->Text = L"#10";
			// 
			// label_num9
			// 
			this->label_num9->AutoSize = true;
			this->label_num9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_num9->Location = System::Drawing::Point(15, 261);
			this->label_num9->Name = L"label_num9";
			this->label_num9->Size = System::Drawing::Size(22, 13);
			this->label_num9->TabIndex = 15;
			this->label_num9->Text = L"#9";
			// 
			// label_num8
			// 
			this->label_num8->AutoSize = true;
			this->label_num8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_num8->Location = System::Drawing::Point(15, 238);
			this->label_num8->Name = L"label_num8";
			this->label_num8->Size = System::Drawing::Size(22, 13);
			this->label_num8->TabIndex = 14;
			this->label_num8->Text = L"#8";
			// 
			// label_num7
			// 
			this->label_num7->AutoSize = true;
			this->label_num7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_num7->Location = System::Drawing::Point(15, 215);
			this->label_num7->Name = L"label_num7";
			this->label_num7->Size = System::Drawing::Size(22, 13);
			this->label_num7->TabIndex = 13;
			this->label_num7->Text = L"#7";
			// 
			// label_num6
			// 
			this->label_num6->AutoSize = true;
			this->label_num6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_num6->Location = System::Drawing::Point(15, 192);
			this->label_num6->Name = L"label_num6";
			this->label_num6->Size = System::Drawing::Size(22, 13);
			this->label_num6->TabIndex = 12;
			this->label_num6->Text = L"#6";
			// 
			// label_num5
			// 
			this->label_num5->AutoSize = true;
			this->label_num5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_num5->Location = System::Drawing::Point(15, 169);
			this->label_num5->Name = L"label_num5";
			this->label_num5->Size = System::Drawing::Size(22, 13);
			this->label_num5->TabIndex = 11;
			this->label_num5->Text = L"#5";
			// 
			// label_num4
			// 
			this->label_num4->AutoSize = true;
			this->label_num4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_num4->Location = System::Drawing::Point(15, 146);
			this->label_num4->Name = L"label_num4";
			this->label_num4->Size = System::Drawing::Size(22, 13);
			this->label_num4->TabIndex = 10;
			this->label_num4->Text = L"#4";
			// 
			// label_num3
			// 
			this->label_num3->AutoSize = true;
			this->label_num3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_num3->Location = System::Drawing::Point(15, 123);
			this->label_num3->Name = L"label_num3";
			this->label_num3->Size = System::Drawing::Size(22, 13);
			this->label_num3->TabIndex = 9;
			this->label_num3->Text = L"#3";
			// 
			// label_num2
			// 
			this->label_num2->AutoSize = true;
			this->label_num2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_num2->Location = System::Drawing::Point(15, 100);
			this->label_num2->Name = L"label_num2";
			this->label_num2->Size = System::Drawing::Size(22, 13);
			this->label_num2->TabIndex = 8;
			this->label_num2->Text = L"#2";
			// 
			// label_num1
			// 
			this->label_num1->AutoSize = true;
			this->label_num1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_num1->Location = System::Drawing::Point(15, 77);
			this->label_num1->Name = L"label_num1";
			this->label_num1->Size = System::Drawing::Size(22, 13);
			this->label_num1->TabIndex = 7;
			this->label_num1->Text = L"#1";
			// 
			// label_seats
			// 
			this->label_seats->AutoSize = true;
			this->label_seats->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_seats->Location = System::Drawing::Point(490, 48);
			this->label_seats->Name = L"label_seats";
			this->label_seats->Size = System::Drawing::Size(149, 15);
			this->label_seats->TabIndex = 6;
			this->label_seats->Text = L"Количество пассажиров";
			// 
			// label_gruz
			// 
			this->label_gruz->AutoSize = true;
			this->label_gruz->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_gruz->Location = System::Drawing::Point(390, 48);
			this->label_gruz->Name = L"label_gruz";
			this->label_gruz->Size = System::Drawing::Size(77, 15);
			this->label_gruz->TabIndex = 5;
			this->label_gruz->Text = L"Масса груза";
			// 
			// label_timefly
			// 
			this->label_timefly->AutoSize = true;
			this->label_timefly->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_timefly->Location = System::Drawing::Point(225, 48);
			this->label_timefly->Name = L"label_timefly";
			this->label_timefly->Size = System::Drawing::Size(144, 15);
			this->label_timefly->TabIndex = 4;
			this->label_timefly->Text = L"Время до конца полета";
			// 
			// label_typeplan
			// 
			this->label_typeplan->AutoSize = true;
			this->label_typeplan->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_typeplan->Location = System::Drawing::Point(71, 48);
			this->label_typeplan->Name = L"label_typeplan";
			this->label_typeplan->Size = System::Drawing::Size(28, 15);
			this->label_typeplan->TabIndex = 3;
			this->label_typeplan->Text = L"Тип";
			// 
			// label_sostp
			// 
			this->label_sostp->AutoSize = true;
			this->label_sostp->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_sostp->Location = System::Drawing::Point(143, 48);
			this->label_sostp->Name = L"label_sostp";
			this->label_sostp->Size = System::Drawing::Size(70, 15);
			this->label_sostp->TabIndex = 2;
			this->label_sostp->Text = L"Состояние";
			// 
			// label_numplan
			// 
			this->label_numplan->AutoSize = true;
			this->label_numplan->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_numplan->Location = System::Drawing::Point(3, 48);
			this->label_numplan->Name = L"label_numplan";
			this->label_numplan->Size = System::Drawing::Size(46, 15);
			this->label_numplan->TabIndex = 1;
			this->label_numplan->Text = L"Номер";
			// 
			// label_sostplan
			// 
			this->label_sostplan->AutoSize = true;
			this->label_sostplan->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_sostplan->Location = System::Drawing::Point(224, 13);
			this->label_sostplan->Name = L"label_sostplan";
			this->label_sostplan->Size = System::Drawing::Size(197, 20);
			this->label_sostplan->TabIndex = 0;
			this->label_sostplan->Text = L"Состояние самолетов";
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->label_Line5);
			this->tabPage3->Controls->Add(this->label_Line4);
			this->tabPage3->Controls->Add(this->label_Line3);
			this->tabPage3->Controls->Add(this->label_Park5);
			this->tabPage3->Controls->Add(this->label_Park4);
			this->tabPage3->Controls->Add(this->label_Park3);
			this->tabPage3->Controls->Add(this->label_Place5);
			this->tabPage3->Controls->Add(this->label_Place4);
			this->tabPage3->Controls->Add(this->label_Place3);
			this->tabPage3->Controls->Add(this->label_Line2);
			this->tabPage3->Controls->Add(this->label_Park2);
			this->tabPage3->Controls->Add(this->label_Place2);
			this->tabPage3->Controls->Add(this->label_Line);
			this->tabPage3->Controls->Add(this->label_Park);
			this->tabPage3->Controls->Add(this->label_Place);
			this->tabPage3->Controls->Add(this->label_Airs);
			this->tabPage3->Controls->Add(this->label_AirFIVE);
			this->tabPage3->Controls->Add(this->label_AirFOUR);
			this->tabPage3->Controls->Add(this->label_AirTHREE);
			this->tabPage3->Controls->Add(this->label_AirTWO);
			this->tabPage3->Controls->Add(this->label_Line1);
			this->tabPage3->Controls->Add(this->label_Park1);
			this->tabPage3->Controls->Add(this->label_Place1);
			this->tabPage3->Controls->Add(this->label_AirONE);
			this->tabPage3->Controls->Add(this->label1);
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Size = System::Drawing::Size(645, 346);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Состояние аэропортов";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// label_Line5
			// 
			this->label_Line5->AutoSize = true;
			this->label_Line5->Location = System::Drawing::Point(415, 204);
			this->label_Line5->Name = L"label_Line5";
			this->label_Line5->Size = System::Drawing::Size(10, 13);
			this->label_Line5->TabIndex = 24;
			this->label_Line5->Text = L" ";
			// 
			// label_Line4
			// 
			this->label_Line4->AutoSize = true;
			this->label_Line4->Location = System::Drawing::Point(415, 172);
			this->label_Line4->Name = L"label_Line4";
			this->label_Line4->Size = System::Drawing::Size(10, 13);
			this->label_Line4->TabIndex = 23;
			this->label_Line4->Text = L" ";
			// 
			// label_Line3
			// 
			this->label_Line3->AutoSize = true;
			this->label_Line3->Location = System::Drawing::Point(415, 140);
			this->label_Line3->Name = L"label_Line3";
			this->label_Line3->Size = System::Drawing::Size(10, 13);
			this->label_Line3->TabIndex = 22;
			this->label_Line3->Text = L" ";
			// 
			// label_Park5
			// 
			this->label_Park5->AutoSize = true;
			this->label_Park5->Location = System::Drawing::Point(267, 204);
			this->label_Park5->Name = L"label_Park5";
			this->label_Park5->Size = System::Drawing::Size(10, 13);
			this->label_Park5->TabIndex = 21;
			this->label_Park5->Text = L" ";
			// 
			// label_Park4
			// 
			this->label_Park4->AutoSize = true;
			this->label_Park4->Location = System::Drawing::Point(267, 172);
			this->label_Park4->Name = L"label_Park4";
			this->label_Park4->Size = System::Drawing::Size(10, 13);
			this->label_Park4->TabIndex = 20;
			this->label_Park4->Text = L" ";
			// 
			// label_Park3
			// 
			this->label_Park3->AutoSize = true;
			this->label_Park3->Location = System::Drawing::Point(267, 140);
			this->label_Park3->Name = L"label_Park3";
			this->label_Park3->Size = System::Drawing::Size(10, 13);
			this->label_Park3->TabIndex = 19;
			this->label_Park3->Text = L" ";
			// 
			// label_Place5
			// 
			this->label_Place5->AutoSize = true;
			this->label_Place5->Location = System::Drawing::Point(142, 204);
			this->label_Place5->Name = L"label_Place5";
			this->label_Place5->Size = System::Drawing::Size(10, 13);
			this->label_Place5->TabIndex = 18;
			this->label_Place5->Text = L" ";
			// 
			// label_Place4
			// 
			this->label_Place4->AutoSize = true;
			this->label_Place4->Location = System::Drawing::Point(142, 172);
			this->label_Place4->Name = L"label_Place4";
			this->label_Place4->Size = System::Drawing::Size(10, 13);
			this->label_Place4->TabIndex = 17;
			this->label_Place4->Text = L" ";
			// 
			// label_Place3
			// 
			this->label_Place3->AutoSize = true;
			this->label_Place3->Location = System::Drawing::Point(142, 140);
			this->label_Place3->Name = L"label_Place3";
			this->label_Place3->Size = System::Drawing::Size(10, 13);
			this->label_Place3->TabIndex = 16;
			this->label_Place3->Text = L" ";
			// 
			// label_Line2
			// 
			this->label_Line2->AutoSize = true;
			this->label_Line2->Location = System::Drawing::Point(415, 108);
			this->label_Line2->Name = L"label_Line2";
			this->label_Line2->Size = System::Drawing::Size(10, 13);
			this->label_Line2->TabIndex = 15;
			this->label_Line2->Text = L" ";
			// 
			// label_Park2
			// 
			this->label_Park2->AutoSize = true;
			this->label_Park2->Location = System::Drawing::Point(267, 108);
			this->label_Park2->Name = L"label_Park2";
			this->label_Park2->Size = System::Drawing::Size(10, 13);
			this->label_Park2->TabIndex = 14;
			this->label_Park2->Text = L" ";
			// 
			// label_Place2
			// 
			this->label_Place2->AutoSize = true;
			this->label_Place2->Location = System::Drawing::Point(142, 108);
			this->label_Place2->Name = L"label_Place2";
			this->label_Place2->Size = System::Drawing::Size(10, 13);
			this->label_Place2->TabIndex = 13;
			this->label_Place2->Text = L" ";
			// 
			// label_Line
			// 
			this->label_Line->AutoSize = true;
			this->label_Line->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_Line->Location = System::Drawing::Point(415, 40);
			this->label_Line->Name = L"label_Line";
			this->label_Line->Size = System::Drawing::Size(196, 16);
			this->label_Line->TabIndex = 12;
			this->label_Line->Text = L"Взлетно-посадочная полоса";
			// 
			// label_Park
			// 
			this->label_Park->AutoSize = true;
			this->label_Park->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_Park->Location = System::Drawing::Point(267, 40);
			this->label_Park->Name = L"label_Park";
			this->label_Park->Size = System::Drawing::Size(124, 16);
			this->label_Park->TabIndex = 11;
			this->label_Park->Text = L"Свободные места";
			// 
			// label_Place
			// 
			this->label_Place->AutoSize = true;
			this->label_Place->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_Place->Location = System::Drawing::Point(142, 40);
			this->label_Place->Name = L"label_Place";
			this->label_Place->Size = System::Drawing::Size(105, 16);
			this->label_Place->TabIndex = 10;
			this->label_Place->Text = L"Расположение";
			// 
			// label_Airs
			// 
			this->label_Airs->AutoSize = true;
			this->label_Airs->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_Airs->Location = System::Drawing::Point(34, 40);
			this->label_Airs->Name = L"label_Airs";
			this->label_Airs->Size = System::Drawing::Size(72, 16);
			this->label_Airs->TabIndex = 9;
			this->label_Airs->Text = L"Аэропорт";
			// 
			// label_AirFIVE
			// 
			this->label_AirFIVE->AutoSize = true;
			this->label_AirFIVE->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_AirFIVE->Location = System::Drawing::Point(34, 204);
			this->label_AirFIVE->Name = L"label_AirFIVE";
			this->label_AirFIVE->Size = System::Drawing::Size(45, 13);
			this->label_AirFIVE->TabIndex = 8;
			this->label_AirFIVE->Text = L"Пятый";
			// 
			// label_AirFOUR
			// 
			this->label_AirFOUR->AutoSize = true;
			this->label_AirFOUR->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_AirFOUR->Location = System::Drawing::Point(34, 172);
			this->label_AirFOUR->Name = L"label_AirFOUR";
			this->label_AirFOUR->Size = System::Drawing::Size(72, 13);
			this->label_AirFOUR->TabIndex = 7;
			this->label_AirFOUR->Text = L"Четвертый";
			// 
			// label_AirTHREE
			// 
			this->label_AirTHREE->AutoSize = true;
			this->label_AirTHREE->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_AirTHREE->Location = System::Drawing::Point(34, 140);
			this->label_AirTHREE->Name = L"label_AirTHREE";
			this->label_AirTHREE->Size = System::Drawing::Size(49, 13);
			this->label_AirTHREE->TabIndex = 6;
			this->label_AirTHREE->Text = L"Третий";
			// 
			// label_AirTWO
			// 
			this->label_AirTWO->AutoSize = true;
			this->label_AirTWO->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_AirTWO->Location = System::Drawing::Point(34, 108);
			this->label_AirTWO->Name = L"label_AirTWO";
			this->label_AirTWO->Size = System::Drawing::Size(49, 13);
			this->label_AirTWO->TabIndex = 5;
			this->label_AirTWO->Text = L"Второй";
			// 
			// label_Line1
			// 
			this->label_Line1->AutoSize = true;
			this->label_Line1->Location = System::Drawing::Point(415, 76);
			this->label_Line1->Name = L"label_Line1";
			this->label_Line1->Size = System::Drawing::Size(10, 13);
			this->label_Line1->TabIndex = 4;
			this->label_Line1->Text = L" ";
			// 
			// label_Park1
			// 
			this->label_Park1->AutoSize = true;
			this->label_Park1->Location = System::Drawing::Point(267, 76);
			this->label_Park1->Name = L"label_Park1";
			this->label_Park1->Size = System::Drawing::Size(10, 13);
			this->label_Park1->TabIndex = 3;
			this->label_Park1->Text = L" ";
			// 
			// label_Place1
			// 
			this->label_Place1->AutoSize = true;
			this->label_Place1->Location = System::Drawing::Point(142, 76);
			this->label_Place1->Name = L"label_Place1";
			this->label_Place1->Size = System::Drawing::Size(10, 13);
			this->label_Place1->TabIndex = 2;
			this->label_Place1->Text = L" ";
			// 
			// label_AirONE
			// 
			this->label_AirONE->AutoSize = true;
			this->label_AirONE->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_AirONE->Location = System::Drawing::Point(34, 76);
			this->label_AirONE->Name = L"label_AirONE";
			this->label_AirONE->Size = System::Drawing::Size(53, 13);
			this->label_AirONE->TabIndex = 1;
			this->label_AirONE->Text = L"Первый";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(220, 10);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(205, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Состояние аэропортов";
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->label_develop);
			this->tabPage4->Controls->Add(this->button_exit);
			this->tabPage4->Controls->Add(this->richTextBox1);
			this->tabPage4->Location = System::Drawing::Point(4, 22);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Size = System::Drawing::Size(645, 346);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"Справка";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// label_develop
			// 
			this->label_develop->AutoSize = true;
			this->label_develop->Location = System::Drawing::Point(3, 330);
			this->label_develop->Name = L"label_develop";
			this->label_develop->Size = System::Drawing::Size(256, 13);
			this->label_develop->TabIndex = 3;
			this->label_develop->Text = L"Выполнил: студент гр. ПИ-31 Горбаненко Сергей";
			// 
			// button_exit
			// 
			this->button_exit->Location = System::Drawing::Point(567, 320);
			this->button_exit->Name = L"button_exit";
			this->button_exit->Size = System::Drawing::Size(75, 23);
			this->button_exit->TabIndex = 2;
			this->button_exit->Text = L"Выход";
			this->button_exit->UseVisualStyleBackColor = true;
			this->button_exit->Click += gcnew System::EventHandler(this, &MainForm::button_exit_Click);
			// 
			// richTextBox1
			// 
			this->richTextBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->richTextBox1->Location = System::Drawing::Point(3, 3);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->ReadOnly = true;
			this->richTextBox1->Size = System::Drawing::Size(639, 311);
			this->richTextBox1->TabIndex = 1;
			this->richTextBox1->Text = resources->GetString(L"richTextBox1.Text");
			// 
			// timer1
			// 
			this->timer1->Interval = 3000;
			this->timer1->Tick += gcnew System::EventHandler(this, &MainForm::timer1_Tick);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->ForeColor = System::Drawing::SystemColors::Highlight;
			this->label8->Location = System::Drawing::Point(68, 3);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(211, 15);
			this->label8->TabIndex = 7;
			this->label8->Text = L"|Перейдите на любую вкладку|";
			this->label8->Visible = false;
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(677, 396);
			this->Controls->Add(this->tabControl1);
			this->Name = L"MainForm";
			this->Text = L"Сеть аэропортов";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			this->tabPage4->ResumeLayout(false);
			this->tabPage4->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button_exit_Click(System::Object^  sender, System::EventArgs^  e) {
		Close();
	}
			 
private: System::Void button_start_Click(System::Object^  sender, System::EventArgs^  e) {
		
	srand(time(0));
	
	Airports = new vector < Airport > ;
	Plan = new PlaneVector("XPlane");

	//Wars = new vector < WarPlane > ;
	//Trans = new vector < TranPlane > ;
	
	//Создание объектов типа Аэропорт
	Airport *AirONE = new Airport(1, 10, 0);
	Airports->push_back(*AirONE);

	Airport *AirTWO = new Airport(2, 10, 0);
	Airports->push_back(*AirTWO);

	Airport *AirTHREE = new Airport(3, 10, 0);
	Airports->push_back(*AirTHREE);

	Airport *AirFOUR = new Airport(4, 10, 0);
	Airports->push_back(*AirFOUR);

	Airport *AirFIVE = new Airport(5, 10, 0);
	Airports->push_back(*AirFIVE);

	//Вывод Информации

	ShowAirs();


	//Создание объектов типа Самолет
	int n = 0;
	for (int i = 0; i < 10; i++)
	{
		int speed = 700 + rand() % 100;
		int weight = 1000 + rand() % 1000;
		int time_fly = 0;
		int time_service = 10 + rand() % 10;

		if (rand() % 2)
		{
			//int gruz = 500 + rand() % 500;
			int gruz = 0;
			TranPlane *a = new TranPlane(weight, speed, time_fly, time_service, gruz);
			Plan->insert(Plan->begin(), a);
		}
		else
		{
			//int seats = 50 + rand() % 20;
			int seats = 0;
			WarPlane *a = new WarPlane(weight, speed, time_fly, time_service, seats);
			Plan->insert(Plan->begin(), a);
		}

	}
	
	//доп. инфо
	/*this->label2->Text = (num[0] + 1).ToString();
	this->label3->Text = (num[1] + 1).ToString();
	this->label4->Text = (num[2] + 1).ToString();
	this->label5->Text = (num[3] + 1).ToString();
	this->label6->Text = (num[4] + 1).ToString();*/

	this->timer1->Enabled = TRUE;

	this->label8->Visible = TRUE;

	ShowPlanes();
}
	
private: void ShowAirs()
{
	//Вывод Информации

	//Первый
	if (this->Airports->at(0).getPlace() == 1)
		this->label_Place1->Text = P1;
	else this->label_Place1->Text = L"Ошибка";
	this->label_Park1->Text = this->Airports->at(0).getPark().ToString();
	if (this->Airports->at(0).getLine() == 0)
		this->label_Line1->Text = L"Свободна";
	else this->label_Line1->Text = L"Занята";

	//Второй
	if (this->Airports->at(1).getPlace() == 2)
		this->label_Place2->Text = P2;
	else this->label_Place2->Text = L"Ошибка";
	this->label_Park2->Text = this->Airports->at(1).getPark().ToString();
	if (this->Airports->at(1).getLine() == 0)
		this->label_Line2->Text = L"Свободна";
	else this->label_Line2->Text = L"Занята";

	//Третий
	if (this->Airports->at(2).getPlace() == 3)
		this->label_Place3->Text = P3;
	else this->label_Place3->Text = L"Ошибка";
	this->label_Park3->Text = this->Airports->at(2).getPark().ToString();
	if (this->Airports->at(2).getLine() == 0)
		this->label_Line3->Text = L"Свободна";
	else this->label_Line3->Text = L"Занята";

	//Четвертый
	if (this->Airports->at(3).getPlace() == 4)
		this->label_Place4->Text = P4;
	else this->label_Place4->Text = L"Ошибка";
	this->label_Park4->Text = this->Airports->at(3).getPark().ToString();
	if (this->Airports->at(3).getLine() == 0)
		this->label_Line4->Text = L"Свободна";
	else this->label_Line4->Text = L"Занята";

	//Пятый
	if (this->Airports->at(4).getPlace() == 5)
		this->label_Place5->Text = P5;
	else this->label_Place5->Text = L"Ошибка";
	this->label_Park5->Text = this->Airports->at(4).getPark().ToString();
	if (this->Airports->at(4).getLine() == 0)
		this->label_Line5->Text = L"Свободна";
	else this->label_Line5->Text = L"Занята";
}

private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {

	Fly();
	ShowAirs();
	ShowPlanes();

}
private: void Fly()
{
	int n = rand() % 10;				//случайный самолет
	int b = rand() % 5;					//случайный аэропорт
	if (Plan->goTimeFly(n) <= 0)
	{
		Plan->goFly(n);			//задание случайных
		Plan->goSetTime(n);						  //начальных значений
		this->Airports->at(b).setPark(this->Airports->at(b).getPark() + 1);		//освобождение парковачного места
	}
	for (unsigned int i = 0; i < Plan->size(); i++)
		Plan->goMinusTime(i);							//каждый тик таймера уменьшается время полета
	
	for (unsigned int i = 0; i < Plan->size(); i++)
		if (Plan->goTimeFly(i) == 1)
			this->Airports->at(b).setPark(this->Airports->at(b).getPark() - 1);		//прибытие в аэропорт

}

private: void RAND5(int num[])
{
	//Создние массива из 5 рандомных чисел без повторений (для выбора аэропорта назначения)
	for (int i = 0; i < 5; i++)
		num[i] = rand() % 5;
	if (num[0] == num[1])
		do num[1] = rand() % 5;
	while (num[0] == num[1]);
	if (num[0] == num[2] || num[1] == num[2])
		do num[2] = rand() % 5;
	while (num[0] == num[2] || num[1] == num[2]);
	if (num[0] == num[3] || num[1] == num[3] || num[2] == num[3])
		do num[3] = rand() % 5;
	while (num[0] == num[3] || num[1] == num[3] || num[2] == num[3]);
	if (num[0] == num[4] || num[1] == num[4] || num[2] == num[4] || num[3] == num[4])
		do num[4] = rand() % 5;
	while (num[0] == num[4] || num[1] == num[4] || num[2] == num[4] || num[3] == num[4]);
}

private: void RAND10(int num[])
{
	//Создние массива из 10 рандомных чисел без повторений (для выбора самолета)
	for (int i = 0; i < 10; i++)
		num[i] = rand() % 10;
	if (num[0] == num[1])
		do num[1] = rand() % 10;
	while (num[0] == num[1]);
	if (num[0] == num[2] || num[1] == num[2])
		do num[2] = rand() % 10;
	while (num[0] == num[2] || num[1] == num[2]);
	if (num[0] == num[3] || num[1] == num[3] || num[2] == num[3])
		do num[3] = rand() % 10;
	while (num[0] == num[3] || num[1] == num[3] || num[2] == num[3]);
	if (num[0] == num[4] || num[1] == num[4] || num[2] == num[4] || num[3] == num[4])
		do num[4] = rand() % 10;
	while (num[0] == num[4] || num[1] == num[4] || num[2] == num[4] || num[3] == num[4]);
	if (num[0] == num[4] || num[1] == num[4] || num[2] == num[4] || num[3] == num[4] || num[4] == num[5])
		do num[5] = rand() % 10;
	while (num[0] == num[4] || num[1] == num[4] || num[2] == num[4] || num[3] == num[4] || num[4] == num[5]);
	if (num[0] == num[4] || num[1] == num[4] || num[2] == num[4] || num[3] == num[4] || num[4] == num[5] || num[5] == num[6])
		do num[6] = rand() % 10;
	while (num[0] == num[4] || num[1] == num[4] || num[2] == num[4] || num[3] == num[4] || num[4] == num[5] || num[5] == num[6]);
	if (num[0] == num[4] || num[1] == num[4] || num[2] == num[4] || num[3] == num[4] || num[4] == num[5] || num[5] == num[6] || num[6] == num[7])
		do num[7] = rand() % 10;
	while (num[0] == num[4] || num[1] == num[4] || num[2] == num[4] || num[3] == num[4] || num[4] == num[5] || num[5] == num[6] || num[6] == num[7]);
	if (num[0] == num[4] || num[1] == num[4] || num[2] == num[4] || num[3] == num[4] || num[4] == num[5] || num[5] == num[6] || num[6] == num[7] || num[7] == num[8])
		do num[8] = rand() % 10;
	while (num[0] == num[4] || num[1] == num[4] || num[2] == num[4] || num[3] == num[4] || num[4] == num[5] || num[5] == num[6] || num[6] == num[7] || num[7] == num[8]);
	if (num[0] == num[4] || num[1] == num[4] || num[2] == num[4] || num[3] == num[4] || num[4] == num[5] || num[5] == num[6] || num[6] == num[7] || num[7] == num[8] || num[8] == num[9])
		do num[9] = rand() % 10;
	while (num[0] == num[4] || num[1] == num[4] || num[2] == num[4] || num[3] == num[4] || num[4] == num[5] || num[5] == num[6] || num[6] == num[7] || num[7] == num[8] || num[8] == num[9]);
}


private: void ShowPlanes()
{

	//Вывод типа
	this->label_type1->Text = gcnew String(Plan->goTypePlanes(0).c_str());
	this->label_type2->Text = gcnew String(Plan->goTypePlanes(1).c_str());
	this->label_type3->Text = gcnew String(Plan->goTypePlanes(2).c_str());
	this->label_type4->Text = gcnew String(Plan->goTypePlanes(3).c_str());
	this->label_type5->Text = gcnew String(Plan->goTypePlanes(4).c_str());
	this->label_type6->Text = gcnew String(Plan->goTypePlanes(5).c_str());
	this->label_type7->Text = gcnew String(Plan->goTypePlanes(6).c_str());
	this->label_type8->Text = gcnew String(Plan->goTypePlanes(7).c_str());
	this->label_type9->Text = gcnew String(Plan->goTypePlanes(8).c_str());
	this->label_type10->Text = gcnew String(Plan->goTypePlanes(9).c_str());
	
	//Вывод состояния
	this->label_sost1->Text = gcnew String(Plan->goSost(0).c_str());
	this->label_sost2->Text = gcnew String(Plan->goSost(1).c_str());
	this->label_sost3->Text = gcnew String(Plan->goSost(2).c_str());
	this->label_sost4->Text = gcnew String(Plan->goSost(3).c_str());
	this->label_sost5->Text = gcnew String(Plan->goSost(4).c_str());
	this->label_sost6->Text = gcnew String(Plan->goSost(5).c_str());
	this->label_sost7->Text = gcnew String(Plan->goSost(6).c_str());
	this->label_sost8->Text = gcnew String(Plan->goSost(7).c_str());
	this->label_sost9->Text = gcnew String(Plan->goSost(8).c_str());
	this->label_sost10->Text = gcnew String(Plan->goSost(9).c_str());


	//Вывод времени полета
	if (Plan->goTimeFly(0) <= 0)
		this->label_timefly1->Text = L"0";
	else
		this->label_timefly1->Text = Plan->goTimeFly(0).ToString();
//1
	if (Plan->goTimeFly(1) <= 0)
		this->label_timefly2->Text = L"0";
	else
		this->label_timefly2->Text = Plan->goTimeFly(1).ToString();
//2
	if (Plan->goTimeFly(2) <= 0)
		this->label_timefly3->Text = L"0";
	else
		this->label_timefly3->Text = Plan->goTimeFly(2).ToString();
//3
	if (Plan->goTimeFly(3) <= 0)
		this->label_timefly4->Text = L"0";
	else
		this->label_timefly4->Text = Plan->goTimeFly(3).ToString();
//4
	if (Plan->goTimeFly(4) <= 0)
		this->label_timefly5->Text = L"0";
	else
		this->label_timefly5->Text = Plan->goTimeFly(4).ToString();
//5
	if (Plan->goTimeFly(5) <= 0)
		this->label_timefly6->Text = L"0";
	else
		this->label_timefly6->Text = Plan->goTimeFly(5).ToString();
//6
	if (Plan->goTimeFly(6) <= 0)
		this->label_timefly7->Text = L"0";
	else
		this->label_timefly7->Text = Plan->goTimeFly(6).ToString();
//7
	if (Plan->goTimeFly(7) <= 0)
		this->label_timefly8->Text = L"0";
	else
		this->label_timefly8->Text = Plan->goTimeFly(7).ToString();
//8
	if (Plan->goTimeFly(8) <= 0)
		this->label_timefly9->Text = L"0";
	else
		this->label_timefly9->Text = Plan->goTimeFly(8).ToString();
//9
	if (Plan->goTimeFly(9) <= 0)
		this->label_timefly10->Text = L"0";
	else
		this->label_timefly10->Text = Plan->goTimeFly(9).ToString();
	
	/*
	this->label_timefly2->Text = Plan->goTimeFly(1).ToString();
	this->label_timefly3->Text = Plan->goTimeFly(2).ToString();
	this->label_timefly4->Text = Plan->goTimeFly(3).ToString();
	this->label_timefly5->Text = Plan->goTimeFly(4).ToString();
	this->label_timefly6->Text = Plan->goTimeFly(5).ToString();
	this->label_timefly7->Text = Plan->goTimeFly(6).ToString();
	this->label_timefly8->Text = Plan->goTimeFly(7).ToString();
	this->label_timefly9->Text = Plan->goTimeFly(8).ToString();
	this->label_timefly10->Text = Plan->goTimeFly(9).ToString();*/

	//Вывод массы груза (для грузовых)
	this->label_gruz1->Text = Plan->goGruz(0).ToString();
	this->label_gruz2->Text = Plan->goGruz(1).ToString();
	this->label_gruz3->Text = Plan->goGruz(2).ToString();
	this->label_gruz4->Text = Plan->goGruz(3).ToString();
	this->label_gruz5->Text = Plan->goGruz(4).ToString();
	this->label_gruz6->Text = Plan->goGruz(5).ToString();
	this->label_gruz7->Text = Plan->goGruz(6).ToString();
	this->label_gruz8->Text = Plan->goGruz(7).ToString();
	this->label_gruz9->Text = Plan->goGruz(8).ToString();
	this->label_gruz10->Text = Plan->goGruz(9).ToString();

	//Вывод количества пассажиров (для пассижирских)
	this->label_seats1->Text = Plan->goSeats(0).ToString();
	this->label_seats2->Text = Plan->goSeats(1).ToString();
	this->label_seats3->Text = Plan->goSeats(2).ToString();
	this->label_seats4->Text = Plan->goSeats(3).ToString();
	this->label_seats5->Text = Plan->goSeats(4).ToString();
	this->label_seats6->Text = Plan->goSeats(5).ToString();
	this->label_seats7->Text = Plan->goSeats(6).ToString();
	this->label_seats8->Text = Plan->goSeats(7).ToString();
	this->label_seats9->Text = Plan->goSeats(8).ToString();
	this->label_seats10->Text = Plan->goSeats(9).ToString();

}

private: System::Void MainForm_Load(System::Object^  sender, System::EventArgs^  e) {
}
};
}
