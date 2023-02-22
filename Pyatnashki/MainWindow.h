#pragma once
#include "MyTimer.h"
#include "Game.h"

namespace Pyatnashki {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainWindow
	/// </summary>
	public ref class MainWindow : public System::Windows::Forms::Form
	{

	//Завожу таймер
	MyTimer mt;

	Game game;

	public:
		MainWindow(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MainWindow()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ sq_1x1;
	protected:
	private: System::Windows::Forms::Button^ sq_1x2;
	private: System::Windows::Forms::Button^ sq_1x3;
	private: System::Windows::Forms::Button^ sq_1x4;
	private: System::Windows::Forms::Button^ sq_2x4;
	private: System::Windows::Forms::Button^ sq_2x3;
	private: System::Windows::Forms::Button^ sq_2x2;
	private: System::Windows::Forms::Button^ sq_2x1;
	private: System::Windows::Forms::Button^ sq_3x4;
	private: System::Windows::Forms::Button^ sq_3x3;
	private: System::Windows::Forms::Button^ sq_3x2;
	private: System::Windows::Forms::Button^ sq_3x1;
	private: System::Windows::Forms::Button^ sq_4x4;
	private: System::Windows::Forms::Button^ sq_4x3;
	private: System::Windows::Forms::Button^ sq_4x2;
	private: System::Windows::Forms::Button^ sq_4x1;
	private: System::Windows::Forms::Timer^ Timer;
	private: System::Windows::Forms::Label^ Time;
	private: System::Windows::Forms::GroupBox^ WictoryMenu;

	private: System::Windows::Forms::Label^ YourTime;
	private: System::Windows::Forms::Label^ YourPos;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ Restart;
	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->sq_1x1 = (gcnew System::Windows::Forms::Button());
			this->sq_1x2 = (gcnew System::Windows::Forms::Button());
			this->sq_1x3 = (gcnew System::Windows::Forms::Button());
			this->sq_1x4 = (gcnew System::Windows::Forms::Button());
			this->sq_2x4 = (gcnew System::Windows::Forms::Button());
			this->sq_2x3 = (gcnew System::Windows::Forms::Button());
			this->sq_2x2 = (gcnew System::Windows::Forms::Button());
			this->sq_2x1 = (gcnew System::Windows::Forms::Button());
			this->sq_3x4 = (gcnew System::Windows::Forms::Button());
			this->sq_3x3 = (gcnew System::Windows::Forms::Button());
			this->sq_3x2 = (gcnew System::Windows::Forms::Button());
			this->sq_3x1 = (gcnew System::Windows::Forms::Button());
			this->sq_4x4 = (gcnew System::Windows::Forms::Button());
			this->sq_4x3 = (gcnew System::Windows::Forms::Button());
			this->sq_4x2 = (gcnew System::Windows::Forms::Button());
			this->sq_4x1 = (gcnew System::Windows::Forms::Button());
			this->Timer = (gcnew System::Windows::Forms::Timer(this->components));
			this->Time = (gcnew System::Windows::Forms::Label());
			this->WictoryMenu = (gcnew System::Windows::Forms::GroupBox());
			this->Restart = (gcnew System::Windows::Forms::Button());
			this->YourTime = (gcnew System::Windows::Forms::Label());
			this->YourPos = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->WictoryMenu->SuspendLayout();
			this->SuspendLayout();
			// 
			// sq_1x1
			// 
			this->sq_1x1->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->sq_1x1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->sq_1x1->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->sq_1x1->Location = System::Drawing::Point(12, 12);
			this->sq_1x1->Name = L"sq_1x1";
			this->sq_1x1->Size = System::Drawing::Size(100, 100);
			this->sq_1x1->TabIndex = 0;
			this->sq_1x1->Text = L"1";
			this->sq_1x1->UseVisualStyleBackColor = false;
			this->sq_1x1->Click += gcnew System::EventHandler(this, &MainWindow::TryMove);
			// 
			// sq_1x2
			// 
			this->sq_1x2->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->sq_1x2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->sq_1x2->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->sq_1x2->Location = System::Drawing::Point(118, 12);
			this->sq_1x2->Name = L"sq_1x2";
			this->sq_1x2->Size = System::Drawing::Size(100, 100);
			this->sq_1x2->TabIndex = 1;
			this->sq_1x2->Text = L"2";
			this->sq_1x2->UseVisualStyleBackColor = false;
			this->sq_1x2->Click += gcnew System::EventHandler(this, &MainWindow::TryMove);
			// 
			// sq_1x3
			// 
			this->sq_1x3->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->sq_1x3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->sq_1x3->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->sq_1x3->Location = System::Drawing::Point(224, 12);
			this->sq_1x3->Name = L"sq_1x3";
			this->sq_1x3->Size = System::Drawing::Size(100, 100);
			this->sq_1x3->TabIndex = 2;
			this->sq_1x3->Text = L"3";
			this->sq_1x3->UseVisualStyleBackColor = false;
			this->sq_1x3->Click += gcnew System::EventHandler(this, &MainWindow::TryMove);
			// 
			// sq_1x4
			// 
			this->sq_1x4->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->sq_1x4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->sq_1x4->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->sq_1x4->Location = System::Drawing::Point(330, 12);
			this->sq_1x4->Name = L"sq_1x4";
			this->sq_1x4->Size = System::Drawing::Size(100, 100);
			this->sq_1x4->TabIndex = 3;
			this->sq_1x4->Text = L"4";
			this->sq_1x4->UseVisualStyleBackColor = false;
			this->sq_1x4->Click += gcnew System::EventHandler(this, &MainWindow::TryMove);
			// 
			// sq_2x4
			// 
			this->sq_2x4->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->sq_2x4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->sq_2x4->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->sq_2x4->Location = System::Drawing::Point(330, 118);
			this->sq_2x4->Name = L"sq_2x4";
			this->sq_2x4->Size = System::Drawing::Size(100, 100);
			this->sq_2x4->TabIndex = 7;
			this->sq_2x4->Text = L"8";
			this->sq_2x4->UseVisualStyleBackColor = false;
			this->sq_2x4->Click += gcnew System::EventHandler(this, &MainWindow::TryMove);
			// 
			// sq_2x3
			// 
			this->sq_2x3->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->sq_2x3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->sq_2x3->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->sq_2x3->Location = System::Drawing::Point(224, 118);
			this->sq_2x3->Name = L"sq_2x3";
			this->sq_2x3->Size = System::Drawing::Size(100, 100);
			this->sq_2x3->TabIndex = 6;
			this->sq_2x3->Text = L"7";
			this->sq_2x3->UseVisualStyleBackColor = false;
			this->sq_2x3->Click += gcnew System::EventHandler(this, &MainWindow::TryMove);
			// 
			// sq_2x2
			// 
			this->sq_2x2->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->sq_2x2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->sq_2x2->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->sq_2x2->Location = System::Drawing::Point(118, 118);
			this->sq_2x2->Name = L"sq_2x2";
			this->sq_2x2->Size = System::Drawing::Size(100, 100);
			this->sq_2x2->TabIndex = 5;
			this->sq_2x2->Text = L"6";
			this->sq_2x2->UseVisualStyleBackColor = false;
			this->sq_2x2->Click += gcnew System::EventHandler(this, &MainWindow::TryMove);
			// 
			// sq_2x1
			// 
			this->sq_2x1->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->sq_2x1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->sq_2x1->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->sq_2x1->Location = System::Drawing::Point(12, 118);
			this->sq_2x1->Name = L"sq_2x1";
			this->sq_2x1->Size = System::Drawing::Size(100, 100);
			this->sq_2x1->TabIndex = 4;
			this->sq_2x1->Text = L"5";
			this->sq_2x1->UseVisualStyleBackColor = false;
			this->sq_2x1->Click += gcnew System::EventHandler(this, &MainWindow::TryMove);
			// 
			// sq_3x4
			// 
			this->sq_3x4->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->sq_3x4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->sq_3x4->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->sq_3x4->Location = System::Drawing::Point(330, 224);
			this->sq_3x4->Name = L"sq_3x4";
			this->sq_3x4->Size = System::Drawing::Size(100, 100);
			this->sq_3x4->TabIndex = 11;
			this->sq_3x4->Text = L"12";
			this->sq_3x4->UseVisualStyleBackColor = false;
			this->sq_3x4->Click += gcnew System::EventHandler(this, &MainWindow::TryMove);
			// 
			// sq_3x3
			// 
			this->sq_3x3->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->sq_3x3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->sq_3x3->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->sq_3x3->Location = System::Drawing::Point(224, 224);
			this->sq_3x3->Name = L"sq_3x3";
			this->sq_3x3->Size = System::Drawing::Size(100, 100);
			this->sq_3x3->TabIndex = 10;
			this->sq_3x3->Text = L"11";
			this->sq_3x3->UseVisualStyleBackColor = false;
			this->sq_3x3->Click += gcnew System::EventHandler(this, &MainWindow::TryMove);
			// 
			// sq_3x2
			// 
			this->sq_3x2->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->sq_3x2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->sq_3x2->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->sq_3x2->Location = System::Drawing::Point(118, 224);
			this->sq_3x2->Name = L"sq_3x2";
			this->sq_3x2->Size = System::Drawing::Size(100, 100);
			this->sq_3x2->TabIndex = 9;
			this->sq_3x2->Text = L"10";
			this->sq_3x2->UseVisualStyleBackColor = false;
			this->sq_3x2->Click += gcnew System::EventHandler(this, &MainWindow::TryMove);
			// 
			// sq_3x1
			// 
			this->sq_3x1->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->sq_3x1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->sq_3x1->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->sq_3x1->Location = System::Drawing::Point(12, 224);
			this->sq_3x1->Name = L"sq_3x1";
			this->sq_3x1->Size = System::Drawing::Size(100, 100);
			this->sq_3x1->TabIndex = 8;
			this->sq_3x1->Text = L"9";
			this->sq_3x1->UseVisualStyleBackColor = false;
			this->sq_3x1->Click += gcnew System::EventHandler(this, &MainWindow::TryMove);
			// 
			// sq_4x4
			// 
			this->sq_4x4->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->sq_4x4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->sq_4x4->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->sq_4x4->Location = System::Drawing::Point(330, 330);
			this->sq_4x4->Name = L"sq_4x4";
			this->sq_4x4->Size = System::Drawing::Size(100, 100);
			this->sq_4x4->TabIndex = 15;
			this->sq_4x4->UseVisualStyleBackColor = false;
			this->sq_4x4->Click += gcnew System::EventHandler(this, &MainWindow::TryMove);
			// 
			// sq_4x3
			// 
			this->sq_4x3->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->sq_4x3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->sq_4x3->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->sq_4x3->Location = System::Drawing::Point(224, 330);
			this->sq_4x3->Name = L"sq_4x3";
			this->sq_4x3->Size = System::Drawing::Size(100, 100);
			this->sq_4x3->TabIndex = 14;
			this->sq_4x3->Text = L"15";
			this->sq_4x3->UseVisualStyleBackColor = false;
			this->sq_4x3->Click += gcnew System::EventHandler(this, &MainWindow::TryMove);
			// 
			// sq_4x2
			// 
			this->sq_4x2->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->sq_4x2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->sq_4x2->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->sq_4x2->Location = System::Drawing::Point(118, 330);
			this->sq_4x2->Name = L"sq_4x2";
			this->sq_4x2->Size = System::Drawing::Size(100, 100);
			this->sq_4x2->TabIndex = 13;
			this->sq_4x2->Text = L"14";
			this->sq_4x2->UseVisualStyleBackColor = false;
			this->sq_4x2->Click += gcnew System::EventHandler(this, &MainWindow::TryMove);
			// 
			// sq_4x1
			// 
			this->sq_4x1->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->sq_4x1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->sq_4x1->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->sq_4x1->Location = System::Drawing::Point(12, 330);
			this->sq_4x1->Name = L"sq_4x1";
			this->sq_4x1->Size = System::Drawing::Size(100, 100);
			this->sq_4x1->TabIndex = 12;
			this->sq_4x1->Text = L"13";
			this->sq_4x1->UseVisualStyleBackColor = false;
			this->sq_4x1->Click += gcnew System::EventHandler(this, &MainWindow::TryMove);
			// 
			// Timer
			// 
			this->Timer->Enabled = true;
			this->Timer->Interval = 1000;
			this->Timer->Tick += gcnew System::EventHandler(this, &MainWindow::Timer_Tick);
			// 
			// Time
			// 
			this->Time->AutoSize = true;
			this->Time->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Time->Location = System::Drawing::Point(183, 443);
			this->Time->Name = L"Time";
			this->Time->Size = System::Drawing::Size(80, 57);
			this->Time->TabIndex = 16;
			this->Time->Text = L"0:0";
			// 
			// WictoryMenu
			// 
			this->WictoryMenu->Controls->Add(this->Restart);
			this->WictoryMenu->Controls->Add(this->YourTime);
			this->WictoryMenu->Controls->Add(this->YourPos);
			this->WictoryMenu->Controls->Add(this->label3);
			this->WictoryMenu->Controls->Add(this->label2);
			this->WictoryMenu->Controls->Add(this->label1);
			this->WictoryMenu->Location = System::Drawing::Point(-9, -30);
			this->WictoryMenu->Name = L"WictoryMenu";
			this->WictoryMenu->Size = System::Drawing::Size(453, 549);
			this->WictoryMenu->TabIndex = 17;
			this->WictoryMenu->TabStop = false;
			this->WictoryMenu->Text = L"groupBox1";
			this->WictoryMenu->Visible = false;
			// 
			// Restart
			// 
			this->Restart->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->Restart->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Restart->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Restart->Location = System::Drawing::Point(113, 427);
			this->Restart->Name = L"Restart";
			this->Restart->Size = System::Drawing::Size(246, 57);
			this->Restart->TabIndex = 5;
			this->Restart->Text = L"Начать заново";
			this->Restart->UseVisualStyleBackColor = false;
			this->Restart->Click += gcnew System::EventHandler(this, &MainWindow::Restart_Click);
			// 
			// YourTime
			// 
			this->YourTime->AutoSize = true;
			this->YourTime->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->YourTime->Location = System::Drawing::Point(225, 315);
			this->YourTime->Name = L"YourTime";
			this->YourTime->Size = System::Drawing::Size(61, 43);
			this->YourTime->TabIndex = 4;
			this->YourTime->Text = L"0:0";
			// 
			// YourPos
			// 
			this->YourPos->AutoSize = true;
			this->YourPos->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->YourPos->Location = System::Drawing::Point(225, 255);
			this->YourPos->Name = L"YourPos";
			this->YourPos->Size = System::Drawing::Size(36, 43);
			this->YourPos->TabIndex = 3;
			this->YourPos->Text = L"1";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(32, 315);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(191, 43);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Твое время:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(26, 254);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(188, 43);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Твое место:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(32, 71);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(409, 43);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Ты победил!!! поздравляю!!";
			// 
			// MainWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(440, 512);
			this->Controls->Add(this->WictoryMenu);
			this->Controls->Add(this->Time);
			this->Controls->Add(this->sq_4x4);
			this->Controls->Add(this->sq_4x3);
			this->Controls->Add(this->sq_4x2);
			this->Controls->Add(this->sq_4x1);
			this->Controls->Add(this->sq_3x4);
			this->Controls->Add(this->sq_3x3);
			this->Controls->Add(this->sq_3x2);
			this->Controls->Add(this->sq_3x1);
			this->Controls->Add(this->sq_2x4);
			this->Controls->Add(this->sq_2x3);
			this->Controls->Add(this->sq_2x2);
			this->Controls->Add(this->sq_2x1);
			this->Controls->Add(this->sq_1x4);
			this->Controls->Add(this->sq_1x3);
			this->Controls->Add(this->sq_1x2);
			this->Controls->Add(this->sq_1x1);
			this->Name = L"MainWindow";
			this->Text = L"Pyatnashki";
			this->Load += gcnew System::EventHandler(this, &MainWindow::MainWindow_Load);
			this->WictoryMenu->ResumeLayout(false);
			this->WictoryMenu->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	//функция вызывается при нажатии любой из 16 кнопок
	private: System::Void TryMove(System::Object^ sender, System::EventArgs^ e) {
		//преобразуем тип-object в тип-button
		Button^ button = safe_cast<Button^>(sender);
		//извлекаем индексы из имени кнопки
		int i = button->Name[3] - 48 - 1;
		int j = button->Name[5] - 48 - 1;

		//пробуем ходить
		On4Sides(i, j);

		//Переносим изменения из двумерного массива на форму
		VsePoSvoimMestam();

		//Проверям на наличие победы
		IsWictory();
	}

	//через try catch пробую отыскать в соседних ячейках массива(int) число -1
	//если находим, то меняем значения
	private: System::Void On4Sides(int i, int j) {
		try
		{
			if (map[i + 1][j] == -1 && i < 3) {
				int temp = map[i][j];
				map[i][j] = map[i + 1][j];
				map[i + 1][j] = temp;
			}
		}
		catch (_exception) {}

		try
		{
			if (map[i - 1][j] == -1 && i > 0) {
				int temp = map[i][j];
				map[i][j] = map[i - 1][j];
				map[i - 1][j] = temp;
			}
		}
		catch (_exception) {}

		try
		{
			if (map[i][j + 1] == -1 && j < 3) {
				int temp = map[i][j];
				map[i][j] = map[i][j + 1];
				map[i][j + 1] = temp;
			}
		}
		catch (_exception) {}

		try
		{
			if (map[i][j - 1] == -1 && j > 0) {
				int temp = map[i][j];
				map[i][j] = map[i][j - 1];
				map[i][j - 1] = temp;
			}
		}
		catch (_exception) {}
	}

	//эта функция запускается каждую секунду
	private: System::Void Timer_Tick(System::Object^ sender, System::EventArgs^ e) {
		//+ 1 секунда для переменной отвечающей за секунды
		mt.PlusSec();

		//60 секунд = 1 минута)
		if (mt.GetSec() == 60) {
			mt.SetSec(0);
			mt.PlusMin();
		}

		//обновляю текс lable-а на новое время
		Time->Text = mt.GetMin() + ":" + mt.GetSec();
	}

	//Вызывается 1 раз при загрузке приложения
	private: System::Void MainWindow_Load(System::Object^ sender, System::EventArgs^ e) {
		MixMap();//перемешать значения
		VsePoSvoimMestam();
	}

	//Перемешивает значения. Меняем местами случайные ячейки map
	private: System::Void MixMap() {
		for (int c = 0; c < 30; c++) {
			int i = rand() % 4;
			int j = rand() % 4;
			int k = rand() % 4;
			int l = rand() % 4;

			int temp = map[i][j];
			map[i][j] = map[k][l];
			map[k][l] = temp;
		}
	}

	//проверка на победу. Если комбинация собрана - то выводим
	//победный экран со статистикой игрока
	private: System::Void IsWictory() {
		if (sq_1x1->Text == "1" &&
			sq_1x2->Text == "2" &&
			sq_1x3->Text == "3" &&
			sq_1x4->Text == "4" &&
			sq_2x1->Text == "5" &&
			sq_2x2->Text == "6" &&
			sq_2x3->Text == "7" &&
			sq_2x4->Text == "8" &&
			sq_3x1->Text == "9" &&
			sq_3x2->Text == "10" &&
			sq_3x3->Text == "11" &&
			sq_3x4->Text == "12" &&
			sq_4x1->Text == "13" &&
			sq_4x2->Text == "14" &&
			sq_4x3->Text == "15" &&
			sq_4x4->Text == "")
		{
			WictoryMenu->Visible = true;
			YourPos->Text = game.GetYourPosition(mt.GetMin(), mt.GetSec()).ToString();
			YourTime->Text = mt.GetMin().ToString() + ":" + mt.GetSec().ToString();
		}
	}

	//Переносит элементы из двумерного массива на форму
	private: System::Void VsePoSvoimMestam() {
		if (map[0][0] == -1)
			sq_1x1->Text = "";
		else
			sq_1x1->Text = map[0][0].ToString();

		if (map[0][1] == -1)
			sq_1x2->Text = "";
		else
			sq_1x2->Text = map[0][1].ToString();

		if (map[0][2] == -1)
			sq_1x3->Text = "";
		else
			sq_1x3->Text = map[0][2].ToString();

		if (map[0][3] == -1)
			sq_1x4->Text = "";
		else
			sq_1x4->Text = map[0][3].ToString();


		
		if (map[1][0] == -1)
			sq_2x1->Text = "";
		else
			sq_2x1->Text = map[1][0].ToString();

		if (map[1][1] == -1)
			sq_2x2->Text = "";
		else
			sq_2x2->Text = map[1][1].ToString();

		if (map[1][2] == -1)
			sq_2x3->Text = "";
		else
			sq_2x3->Text = map[1][2].ToString();

		if (map[1][3] == -1)
			sq_2x4->Text = "";
		else
			sq_2x4->Text = map[1][3].ToString();


		
		if (map[2][0] == -1)
			sq_3x1->Text = "";
		else
			sq_3x1->Text = map[2][0].ToString();

		if (map[2][1] == -1)
			sq_3x2->Text = "";
		else
			sq_3x2->Text = map[2][1].ToString();

		if (map[2][2] == -1)
			sq_3x3->Text = "";
		else
			sq_3x3->Text = map[2][2].ToString();

		if (map[2][3] == -1)
			sq_3x4->Text = "";
		else
			sq_3x4->Text = map[2][3].ToString();
		

		
		if (map[3][0] == -1)
			sq_4x1->Text = "";
		else
			sq_4x1->Text = map[3][0].ToString();

		if (map[3][1] == -1)
			sq_4x2->Text = "";
		else
			sq_4x2->Text = map[3][1].ToString();

		if (map[3][2] == -1)
			sq_4x3->Text = "";
		else
			sq_4x3->Text = map[3][2].ToString();

		if (map[3][3] == -1)
			sq_4x4->Text = "";
		else
			sq_4x4->Text = map[3][3].ToString();
	}

	//Перезапуск игры
	private: System::Void Restart_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Restart();
	}
};
}
