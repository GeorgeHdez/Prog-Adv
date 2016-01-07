#pragma once
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <msclr/marshal.h>
#include <windows.h>

using namespace msclr::interop;

namespace Project2 {	

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO::Ports;
	using namespace System::Windows::Forms::DataVisualization::Charting;
	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{

	public:
		int **matriz_mediciones;
		int **matriz_maximosminimos;
		int **matriz_absoluta;
		int sensores = 5, muestreo=3;
		Series^ sen1;
		Series^ sen2;
		Series^ sen3;
		Series^ sen4;
		Series^ sen5;

	public:

	public:

	public:
	private: System::Windows::Forms::Label^  label6;


	private: System::Windows::Forms::NumericUpDown^  numericUpDown1;
	private: System::Windows::Forms::NumericUpDown^  Numeric_cut;

	private: System::Windows::Forms::Label^  label2;



	private: System::Windows::Forms::TabPage^  tabPage3;
	private: System::Windows::Forms::StatusStrip^  statusStrip1;
	private: System::Windows::Forms::ToolStripStatusLabel^  Strip_Lable;

	private: System::Windows::Forms::Button^  Button_Play;






	private: System::Windows::Forms::Button^  RunGraphBtn;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::RadioButton^  radioButton6;
	private: System::Windows::Forms::RadioButton^  radioButton5;
	private: System::Windows::Forms::RadioButton^  radioButton4;
	private: System::Windows::Forms::RadioButton^  radioButton3;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::RadioButton^  radioButton1;


	private: System::Windows::Forms::RichTextBox^  richTextBox2;
	public:

	public:
		MyForm(void)
		{
			InitializeComponent();
			FindserialPort();
			
			//
			//TODO: Add the constructor code here
			//
		}
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart1;
	private: System::IO::Ports::SerialPort^  serialPort1;


	private: System::Windows::Forms::Button^  buttonConex;


	private: System::Windows::Forms::RichTextBox^  richTextBox1;

	public:
		Series s1;

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::TabControl^  tabControlConexion;
	protected:
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::TabPage^  tabPage2;



	private: System::Windows::Forms::Button^  buttonCalib;
	private: System::Windows::Forms::Button^  buttonSensor;
	private: System::Windows::Forms::Button^  buttonGraph;




	private: System::Windows::Forms::Label^  labelPuerto;

	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Label^  label3;


	private: System::Windows::Forms::Button^  buttonDesconectar;

	private: System::Windows::Forms::Button^  buttonActualizar;

	private: System::Windows::Forms::Button^  buttonConnect;

	private: System::Windows::Forms::GroupBox^  groupBoxCorte;


	private: System::Windows::Forms::Button^  buttonAceptar;
	private: System::Windows::Forms::Button^  buttonConf;

	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::ComponentModel::IContainer^  components;


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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->tabControlConexion = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->labelPuerto = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->buttonDesconectar = (gcnew System::Windows::Forms::Button());
			this->buttonActualizar = (gcnew System::Windows::Forms::Button());
			this->buttonConnect = (gcnew System::Windows::Forms::Button());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->groupBoxCorte = (gcnew System::Windows::Forms::GroupBox());
			this->Numeric_cut = (gcnew System::Windows::Forms::NumericUpDown());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->buttonAceptar = (gcnew System::Windows::Forms::Button());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton6 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton5 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->RunGraphBtn = (gcnew System::Windows::Forms::Button());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->buttonCalib = (gcnew System::Windows::Forms::Button());
			this->buttonSensor = (gcnew System::Windows::Forms::Button());
			this->buttonGraph = (gcnew System::Windows::Forms::Button());
			this->buttonConf = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->serialPort1 = (gcnew System::IO::Ports::SerialPort(this->components));
			this->buttonConex = (gcnew System::Windows::Forms::Button());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			this->Strip_Lable = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->Button_Play = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->tabControlConexion->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->groupBoxCorte->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Numeric_cut))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->tabPage3->SuspendLayout();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->statusStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControlConexion
			// 
			this->tabControlConexion->Controls->Add(this->tabPage1);
			this->tabControlConexion->Controls->Add(this->tabPage2);
			this->tabControlConexion->Controls->Add(this->tabPage3);
			this->tabControlConexion->Location = System::Drawing::Point(46, 17);
			this->tabControlConexion->Margin = System::Windows::Forms::Padding(4, 8, 4, 8);
			this->tabControlConexion->Name = L"tabControlConexion";
			this->tabControlConexion->SelectedIndex = 0;
			this->tabControlConexion->Size = System::Drawing::Size(618, 486);
			this->tabControlConexion->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->BackColor = System::Drawing::Color::WhiteSmoke;
			this->tabPage1->Controls->Add(this->labelPuerto);
			this->tabPage1->Controls->Add(this->comboBox1);
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->buttonDesconectar);
			this->tabPage1->Controls->Add(this->buttonActualizar);
			this->tabPage1->Controls->Add(this->buttonConnect);
			this->tabPage1->ForeColor = System::Drawing::SystemColors::InfoText;
			this->tabPage1->Location = System::Drawing::Point(4, 34);
			this->tabPage1->Margin = System::Windows::Forms::Padding(4, 8, 4, 8);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(4, 8, 4, 8);
			this->tabPage1->Size = System::Drawing::Size(610, 448);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Conexión";
			// 
			// labelPuerto
			// 
			this->labelPuerto->AutoSize = true;
			this->labelPuerto->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelPuerto->Location = System::Drawing::Point(74, 61);
			this->labelPuerto->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelPuerto->Name = L"labelPuerto";
			this->labelPuerto->Size = System::Drawing::Size(231, 30);
			this->labelPuerto->TabIndex = 6;
			this->labelPuerto->Text = L"Puerto de conexión";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(320, 127);
			this->comboBox1->Margin = System::Windows::Forms::Padding(4, 8, 4, 8);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(210, 33);
			this->comboBox1->TabIndex = 5;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(76, 378);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(70, 25);
			this->label3->TabIndex = 4;
			this->label3->Text = L"label3";
			// 
			// buttonDesconectar
			// 
			this->buttonDesconectar->Location = System::Drawing::Point(80, 286);
			this->buttonDesconectar->Margin = System::Windows::Forms::Padding(4, 8, 4, 8);
			this->buttonDesconectar->Name = L"buttonDesconectar";
			this->buttonDesconectar->Size = System::Drawing::Size(170, 67);
			this->buttonDesconectar->TabIndex = 2;
			this->buttonDesconectar->Text = L"Desconectar";
			this->buttonDesconectar->UseVisualStyleBackColor = true;
			this->buttonDesconectar->Click += gcnew System::EventHandler(this, &MyForm::buttonDesconectar_Click);
			// 
			// buttonActualizar
			// 
			this->buttonActualizar->Location = System::Drawing::Point(80, 208);
			this->buttonActualizar->Margin = System::Windows::Forms::Padding(4, 8, 4, 8);
			this->buttonActualizar->Name = L"buttonActualizar";
			this->buttonActualizar->Size = System::Drawing::Size(170, 67);
			this->buttonActualizar->TabIndex = 1;
			this->buttonActualizar->Text = L"Actualizar";
			this->buttonActualizar->UseVisualStyleBackColor = true;
			this->buttonActualizar->Click += gcnew System::EventHandler(this, &MyForm::buttonActualizar_Click);
			// 
			// buttonConnect
			// 
			this->buttonConnect->Location = System::Drawing::Point(80, 127);
			this->buttonConnect->Margin = System::Windows::Forms::Padding(4, 8, 4, 8);
			this->buttonConnect->Name = L"buttonConnect";
			this->buttonConnect->Size = System::Drawing::Size(170, 67);
			this->buttonConnect->TabIndex = 0;
			this->buttonConnect->Text = L"Conectar";
			this->buttonConnect->UseVisualStyleBackColor = true;
			this->buttonConnect->Click += gcnew System::EventHandler(this, &MyForm::buttonConnect_Click);
			// 
			// tabPage2
			// 
			this->tabPage2->BackColor = System::Drawing::Color::WhiteSmoke;
			this->tabPage2->Controls->Add(this->groupBoxCorte);
			this->tabPage2->Location = System::Drawing::Point(4, 34);
			this->tabPage2->Margin = System::Windows::Forms::Padding(4, 8, 4, 8);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(4, 8, 4, 8);
			this->tabPage2->Size = System::Drawing::Size(610, 448);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Configuracion";
			// 
			// groupBoxCorte
			// 
			this->groupBoxCorte->BackColor = System::Drawing::Color::WhiteSmoke;
			this->groupBoxCorte->Controls->Add(this->Numeric_cut);
			this->groupBoxCorte->Controls->Add(this->label2);
			this->groupBoxCorte->Controls->Add(this->numericUpDown1);
			this->groupBoxCorte->Controls->Add(this->label6);
			this->groupBoxCorte->Controls->Add(this->buttonAceptar);
			this->groupBoxCorte->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBoxCorte->ForeColor = System::Drawing::Color::DarkCyan;
			this->groupBoxCorte->Location = System::Drawing::Point(12, 11);
			this->groupBoxCorte->Margin = System::Windows::Forms::Padding(4, 8, 4, 8);
			this->groupBoxCorte->Name = L"groupBoxCorte";
			this->groupBoxCorte->Padding = System::Windows::Forms::Padding(4, 8, 4, 8);
			this->groupBoxCorte->Size = System::Drawing::Size(652, 452);
			this->groupBoxCorte->TabIndex = 4;
			this->groupBoxCorte->TabStop = false;
			this->groupBoxCorte->Text = L"Configuracion";
			// 
			// Numeric_cut
			// 
			this->Numeric_cut->Location = System::Drawing::Point(304, 148);
			this->Numeric_cut->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->Numeric_cut->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 500, 0, 0, 0 });
			this->Numeric_cut->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100, 0, 0, 0 });
			this->Numeric_cut->Name = L"Numeric_cut";
			this->Numeric_cut->Size = System::Drawing::Size(144, 37);
			this->Numeric_cut->TabIndex = 14;
			this->Numeric_cut->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100, 0, 0, 0 });
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(50, 148);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(145, 30);
			this->label2->TabIndex = 13;
			this->label2->Text = L"Corte (mm)";
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(304, 64);
			this->numericUpDown1->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 500, 0, 0, 0 });
			this->numericUpDown1->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100, 0, 0, 0 });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(144, 37);
			this->numericUpDown1->TabIndex = 10;
			this->numericUpDown1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100, 0, 0, 0 });
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(50, 67);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(179, 30);
			this->label6->TabIndex = 6;
			this->label6->Text = L"Longitud (mm)";
			// 
			// buttonAceptar
			// 
			this->buttonAceptar->Location = System::Drawing::Point(304, 323);
			this->buttonAceptar->Margin = System::Windows::Forms::Padding(4, 8, 4, 8);
			this->buttonAceptar->Name = L"buttonAceptar";
			this->buttonAceptar->Size = System::Drawing::Size(170, 67);
			this->buttonAceptar->TabIndex = 5;
			this->buttonAceptar->Text = L"Aceptar";
			this->buttonAceptar->UseVisualStyleBackColor = true;
			this->buttonAceptar->Click += gcnew System::EventHandler(this, &MyForm::buttonAceptar_Click);
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->groupBox1);
			this->tabPage3->Controls->Add(this->RunGraphBtn);
			this->tabPage3->Location = System::Drawing::Point(4, 34);
			this->tabPage3->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->tabPage3->Size = System::Drawing::Size(610, 448);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"tabPage3";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->radioButton6);
			this->groupBox1->Controls->Add(this->radioButton5);
			this->groupBox1->Controls->Add(this->radioButton4);
			this->groupBox1->Controls->Add(this->radioButton3);
			this->groupBox1->Controls->Add(this->radioButton2);
			this->groupBox1->Controls->Add(this->radioButton1);
			this->groupBox1->Location = System::Drawing::Point(59, 36);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(243, 325);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"groupBox1";
			// 
			// radioButton6
			// 
			this->radioButton6->AutoSize = true;
			this->radioButton6->Location = System::Drawing::Point(20, 281);
			this->radioButton6->Name = L"radioButton6";
			this->radioButton6->Size = System::Drawing::Size(103, 29);
			this->radioButton6->TabIndex = 5;
			this->radioButton6->TabStop = true;
			this->radioButton6->Text = L"Todos";
			this->radioButton6->UseVisualStyleBackColor = true;
			this->radioButton6->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton6_CheckedChanged);
			// 
			// radioButton5
			// 
			this->radioButton5->AutoSize = true;
			this->radioButton5->Location = System::Drawing::Point(20, 230);
			this->radioButton5->Name = L"radioButton5";
			this->radioButton5->Size = System::Drawing::Size(69, 29);
			this->radioButton5->TabIndex = 4;
			this->radioButton5->TabStop = true;
			this->radioButton5->Text = L"S5";
			this->radioButton5->UseVisualStyleBackColor = true;
			this->radioButton5->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton5_CheckedChanged);
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Location = System::Drawing::Point(20, 176);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(69, 29);
			this->radioButton4->TabIndex = 3;
			this->radioButton4->TabStop = true;
			this->radioButton4->Text = L"S4";
			this->radioButton4->UseVisualStyleBackColor = true;
			this->radioButton4->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton4_CheckedChanged);
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(20, 132);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(69, 29);
			this->radioButton3->TabIndex = 2;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"S3";
			this->radioButton3->UseVisualStyleBackColor = true;
			this->radioButton3->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton3_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(20, 88);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(69, 29);
			this->radioButton2->TabIndex = 1;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"S2";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton2_CheckedChanged);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(20, 43);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(69, 29);
			this->radioButton1->TabIndex = 0;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"S1";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton1_CheckedChanged_1);
			// 
			// RunGraphBtn
			// 
			this->RunGraphBtn->Location = System::Drawing::Point(347, 317);
			this->RunGraphBtn->Margin = System::Windows::Forms::Padding(6);
			this->RunGraphBtn->Name = L"RunGraphBtn";
			this->RunGraphBtn->Size = System::Drawing::Size(150, 44);
			this->RunGraphBtn->TabIndex = 0;
			this->RunGraphBtn->Text = L"Run";
			this->RunGraphBtn->UseVisualStyleBackColor = true;
			this->RunGraphBtn->Click += gcnew System::EventHandler(this, &MyForm::RunGraphBtn_Click);
			// 
			// chart1
			// 
			this->chart1->BorderSkin->BackColor = System::Drawing::Color::Black;
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(726, 108);
			this->chart1->Margin = System::Windows::Forms::Padding(4, 8, 4, 8);
			this->chart1->Name = L"chart1";
			this->chart1->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::Bright;
			this->chart1->Size = System::Drawing::Size(892, 372);
			this->chart1->TabIndex = 1;
			this->chart1->Text = L"chart1";
			// 
			// buttonCalib
			// 
			this->buttonCalib->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonCalib.BackgroundImage")));
			this->buttonCalib->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonCalib->Location = System::Drawing::Point(878, 17);
			this->buttonCalib->Margin = System::Windows::Forms::Padding(4, 8, 4, 8);
			this->buttonCalib->Name = L"buttonCalib";
			this->buttonCalib->Size = System::Drawing::Size(80, 77);
			this->buttonCalib->TabIndex = 4;
			this->buttonCalib->UseVisualStyleBackColor = true;
			this->buttonCalib->Click += gcnew System::EventHandler(this, &MyForm::buttonCalib_Click);
			// 
			// buttonSensor
			// 
			this->buttonSensor->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonSensor.BackgroundImage")));
			this->buttonSensor->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonSensor->Location = System::Drawing::Point(994, 17);
			this->buttonSensor->Margin = System::Windows::Forms::Padding(4, 8, 4, 8);
			this->buttonSensor->Name = L"buttonSensor";
			this->buttonSensor->Size = System::Drawing::Size(80, 77);
			this->buttonSensor->TabIndex = 5;
			this->buttonSensor->UseVisualStyleBackColor = true;
			this->buttonSensor->Click += gcnew System::EventHandler(this, &MyForm::buttonSensor_Click);
			// 
			// buttonGraph
			// 
			this->buttonGraph->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonGraph.BackgroundImage")));
			this->buttonGraph->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonGraph->Location = System::Drawing::Point(1110, 17);
			this->buttonGraph->Margin = System::Windows::Forms::Padding(4, 8, 4, 8);
			this->buttonGraph->Name = L"buttonGraph";
			this->buttonGraph->Size = System::Drawing::Size(80, 77);
			this->buttonGraph->TabIndex = 6;
			this->buttonGraph->UseVisualStyleBackColor = true;
			this->buttonGraph->Click += gcnew System::EventHandler(this, &MyForm::buttonGraph_Click);
			// 
			// buttonConf
			// 
			this->buttonConf->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonConf.BackgroundImage")));
			this->buttonConf->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonConf->Location = System::Drawing::Point(1224, 17);
			this->buttonConf->Margin = System::Windows::Forms::Padding(4, 8, 4, 8);
			this->buttonConf->Name = L"buttonConf";
			this->buttonConf->Size = System::Drawing::Size(80, 77);
			this->buttonConf->TabIndex = 7;
			this->buttonConf->UseVisualStyleBackColor = true;
			this->buttonConf->Click += gcnew System::EventHandler(this, &MyForm::buttonCut_Click);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::Aquamarine;
			this->textBox1->Location = System::Drawing::Point(732, 533);
			this->textBox1->Margin = System::Windows::Forms::Padding(4, 8, 4, 8);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(196, 31);
			this->textBox1->TabIndex = 8;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(972, 533);
			this->textBox2->Margin = System::Windows::Forms::Padding(4, 8, 4, 8);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(196, 31);
			this->textBox2->TabIndex = 9;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(966, 491);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(165, 29);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Punto máximo";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(726, 491);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(160, 29);
			this->label5->TabIndex = 11;
			this->label5->Text = L"Punto mínimo";
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// buttonConex
			// 
			this->buttonConex->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonConex.BackgroundImage")));
			this->buttonConex->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonConex->Location = System::Drawing::Point(766, 17);
			this->buttonConex->Margin = System::Windows::Forms::Padding(4, 8, 4, 8);
			this->buttonConex->Name = L"buttonConex";
			this->buttonConex->Size = System::Drawing::Size(80, 77);
			this->buttonConex->TabIndex = 12;
			this->buttonConex->UseVisualStyleBackColor = true;
			this->buttonConex->Click += gcnew System::EventHandler(this, &MyForm::buttonConex_Click);
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(1294, 491);
			this->richTextBox1->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(324, 190);
			this->richTextBox1->TabIndex = 13;
			this->richTextBox1->Text = L"";
			// 
			// richTextBox2
			// 
			this->richTextBox2->Location = System::Drawing::Point(448, 533);
			this->richTextBox2->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->Size = System::Drawing::Size(194, 151);
			this->richTextBox2->TabIndex = 14;
			this->richTextBox2->Text = L"";
			// 
			// statusStrip1
			// 
			this->statusStrip1->ImageScalingSize = System::Drawing::Size(27, 27);
			this->statusStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->Strip_Lable });
			this->statusStrip1->Location = System::Drawing::Point(0, 711);
			this->statusStrip1->Name = L"statusStrip1";
			this->statusStrip1->Padding = System::Windows::Forms::Padding(2, 0, 16, 0);
			this->statusStrip1->Size = System::Drawing::Size(1634, 37);
			this->statusStrip1->TabIndex = 15;
			this->statusStrip1->Text = L"Barra de estado en funcionamiento....";
			// 
			// Strip_Lable
			// 
			this->Strip_Lable->Name = L"Strip_Lable";
			this->Strip_Lable->Size = System::Drawing::Size(130, 32);
			this->Strip_Lable->Text = L"Strip_Label";
			// 
			// Button_Play
			// 
			this->Button_Play->BackColor = System::Drawing::Color::Lime;
			this->Button_Play->Location = System::Drawing::Point(744, 575);
			this->Button_Play->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->Button_Play->Name = L"Button_Play";
			this->Button_Play->Size = System::Drawing::Size(136, 108);
			this->Button_Play->TabIndex = 16;
			this->Button_Play->UseVisualStyleBackColor = false;
			this->Button_Play->Click += gcnew System::EventHandler(this, &MyForm::Button_Play_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::MediumTurquoise;
			this->ClientSize = System::Drawing::Size(1634, 748);
			this->Controls->Add(this->Button_Play);
			this->Controls->Add(this->statusStrip1);
			this->Controls->Add(this->richTextBox2);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->buttonConex);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->buttonConf);
			this->Controls->Add(this->buttonGraph);
			this->Controls->Add(this->buttonSensor);
			this->Controls->Add(this->buttonCalib);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->tabControlConexion);
			this->Margin = System::Windows::Forms::Padding(4, 8, 4, 8);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->tabControlConexion->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->groupBoxCorte->ResumeLayout(false);
			this->groupBoxCorte->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Numeric_cut))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->tabPage3->ResumeLayout(false);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->statusStrip1->ResumeLayout(false);
			this->statusStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		public: void FindserialPort(void) {

			label3->Text = "Selecciona un puerto disponible";

			array<Object^>^ objectArray = SerialPort::GetPortNames();
			this->comboBox1->Items->AddRange(objectArray);
		}

	

private: System::Void buttonActualizar_Click(System::Object^  sender, System::EventArgs^  e) {
	this->comboBox1->Items->Clear();
	FindserialPort();
}
private: System::Void buttonConnect_Click(System::Object^  sender, System::EventArgs^  e) {

	if (this->comboBox1->Text == "\0") {
		this->label3->Text = "Primero selecciona un puerto";
	}
	else {

		try {
			if (!this->serialPort1->IsOpen && (this->comboBox1->Text != "")) {

				this->serialPort1->PortName = this->comboBox1->Text;
				serialPort1->BaudRate = 115200;
				serialPort1->Parity = Parity::None;
				serialPort1->StopBits = StopBits::One;
				serialPort1->DataBits = 8;
				serialPort1->Handshake = System::IO::Ports::Handshake::None;

				this->serialPort1->Open();
				this->label3->Text = "Conexion establecida";
				this->buttonActualizar->Enabled = false;
				this->buttonConnect->Enabled = false;
				this->buttonDesconectar->Enabled = true;
			}
			else {
				this->label3->Text = "No se pudo establecer conexion";
			}

		}
		catch (UnauthorizedAccessException^) {
			this->label3->Text = "UnauthorizedAccess";
		}
	}
}
private: System::Void buttonDesconectar_Click(System::Object^  sender, System::EventArgs^  e) {

	if (serialPort1->IsOpen) {

		this->serialPort1->Close();
		this->buttonConnect->Enabled = true;
		this->buttonActualizar->Enabled = true;
		this->buttonDesconectar->Enabled = false;
		this->comboBox1->Items->Clear();
		FindserialPort();
	}
}
private: System::Void buttonCut_Click(System::Object^  sender, System::EventArgs^  e) {

	this->tabControlConexion->SelectTab(tabPage2);

}
private: System::Void buttonSensor_Click(System::Object^  sender, System::EventArgs^  e) { // Inicia el proceso para enviar un dato al microcontrolador y que este le regrese la medicion de 5 sensores

	Esperar_Ubicacion();
	Sleep(2000);

	for (int indice = 0; indice < muestreo; indice++) {
		cli::array <wchar_t, 1>^ send = gcnew array <wchar_t, 1>(5);
		send[0] = 'x';
		serialPort1->Write(send, 0, 1);

		rellenar_matriz(matriz_mediciones, indice);
		
		/*this->sen1->Points->AddXY(indice, matriz_mediciones[indice][0]);
		this->sen2->Points->AddXY(indice, matriz_mediciones[indice][1]);
		this->sen3->Points->AddXY(indice, matriz_mediciones[indice][2]);
		this->sen4->Points->AddXY(indice, matriz_mediciones[indice][3]);
		this->sen5->Points->AddXY(indice, matriz_mediciones[indice][4]);
		*/
		Sleep(2000);
	}

	for (int i = 0; i < muestreo; i++)
		for (int j = 0; j < 5; j++) {

			this->richTextBox1->Text += matriz_mediciones[i][j];
			this->richTextBox1->Text += "      ";
		}

	for (int n = 0; n < muestreo; n++) {
		maximos_minimos(matriz_mediciones, matriz_maximosminimos, sensores, n);
	}

	for (int m = 0; m < 2; m++) {

		maximo_minimo_absoluto(matriz_maximosminimos, matriz_absoluta, m);
	}

	for (int c = 0; c <muestreo; c++)
		for (int b = 0; b < 2; b++) {

			this->richTextBox2->Text += matriz_maximosminimos[c][b];
			this->richTextBox2->Text += "           ";
		}
	this->textBox1->Text += matriz_absoluta[0][0];
	this->textBox2->Text += matriz_absoluta[0][1];

	Excepcion_grosor_madera();


}
private: System::Void buttonConex_Click(System::Object^  sender, System::EventArgs^  e) {
	this->tabControlConexion->SelectTab(tabPage1);
}
void maximo_minimo_absoluto(int **matriz, int **aux, int contador) {

	for (int i = 0; i < muestreo; i++) {
		for (int j = (i + 1); j < muestreo; j++) {

			if (matriz[j][contador] <= matriz[i][contador]) {

				int c;
				c = matriz[j][contador];
				matriz[j][contador] = matriz[i][contador];
				matriz[i][contador] = c;
				//AQUI SE OBTIENE LOS PUNTOS MAXIMOS Y MINIMOS DE LA TABLA;
			}
		}
	}

	if (contador == 0) {
		aux[0][contador] = matriz[0][contador];
	}
	if (contador == 1) {
		aux[0][contador] = matriz[muestreo - 1][contador];
	}

}
int **generar_matriz(int fil, int col) { // Se genera la matriz con la que se va a trabajar // 
			 int **c;
			 c = new int *[fil];
			 for (int i = 0; i < fil; i++) {
				 c[i] = new int[col];

			 }
			 return c;
		 }
void rellenar_matriz(int **matriz, int indice) { // Decodifica los datos que recibe del microcontrolador y rellena la matriz con estos // 

	unsigned char buffer[10];

	for (int datos = 0; datos < 10; datos++) {

		buffer[datos] = this->serialPort1->ReadChar();

	}

	int a, b, c, d, f;
	int b1, b2, b3, b4, b5, b6, b7, b8, b9, b10;
	b1 = buffer[0];
	b2 = buffer[1];
	b3 = buffer[2];
	b4 = buffer[3];
	b5 = buffer[4];
	b6 = buffer[5];
	b7 = buffer[6];
	b8 = buffer[7];
	b9 = buffer[8];
	b10 = buffer[9];
	
	a = b1 | b2 << 8 ;
	b = b3| b4 << 8 ;
	c = b5| b6 << 8 ;
	d = b7 | b8 << 8 ;
	f = b9| b10 << 8 ;
	

	matriz[indice][0] = a;
	matriz[indice][1] = b;
	matriz[indice][2] = c;
	matriz[indice][3] = d;
	matriz[indice][4] = f;

	}
void maximos_minimos(int **matriz, int**aux, int sensores, int n) { // De una matriz dada genera los maximos y minimos de cada renglon // 

	for (int i = 0; i < sensores; i++)
		for (int j = (i + 1); j < sensores; j++) {
			if (matriz[n][j] <= matriz[n][i]) {
				int c;
				c = matriz[n][j];
				matriz[n][j] = matriz[n][i];
				matriz[n][i] = c;
			}
		}
	aux[n][0] = matriz[n][0];
	aux[n][1] = matriz[n][4];
}

void num_muestreos(void) { // Determina el numero de mediciones respecto al tama~o de la madera // medicion por cm 

	int bar = System::Convert::ToInt32(this->numericUpDown1->Text);
	std::cout << bar;

	muestreo = (bar/ 10);

	matriz_mediciones = generar_matriz(muestreo, sensores);
	matriz_maximosminimos = generar_matriz(muestreo, 2);
	matriz_absoluta = generar_matriz(1, 2);


}
private: System::Void buttonAceptar_Click(System::Object^  sender, System::EventArgs^  e) { // Acepta las configuraciones de corte y tama~o de la madera //

	num_muestreos();

}
private: System::Void buttonCalib_Click(System::Object^  sender, System::EventArgs^  e) { // Se manda una señal para que el microcontrolador calibre la maquina //
	this->Strip_Lable->Text = "Calibrando....";
	cli::array <wchar_t, 1>^ calibrar = gcnew array <wchar_t, 1>(5);
	calibrar[0] = 'c';
	serialPort1->Write(calibrar, 0, 1);

	char buffer[1];
	do {
		buffer[0]= this->serialPort1->ReadChar();
	} while (buffer[0] != 'c');
	
	if (buffer[0] == 'c') {
		this->Strip_Lable->Text = "Calibracion Completada";
	}
}
private: System::Void Button_Play_Click(System::Object^  sender, System::EventArgs^  e) {
	cli::array <wchar_t, 1>^send_key= gcnew array <wchar_t, 1>(5);
	send_key[0] = 'r';
	this->serialPort1->Write(send_key, 0, 1);
	Enviar_datos_corte_pic();
}
void Excepcion_grosor_madera(void) {

	int bar = System::Convert::ToInt32(this->Numeric_cut->Text);
	std::cout << bar;
	if (matriz_absoluta[0][0] > bar) {

		this->Strip_Lable->Text = "El corte es menor al minimo de la tabla";
	}
	else {
		this->Strip_Lable->Text = "Preparado para cortar.";
	}
}
Void Enviar_datos_corte_pic(void) {


	cli::array <wchar_t, 1>^ send_info = gcnew array <wchar_t, 1>(6);

	//Profundidad de corte de 1 mm 
	int corte = System::Convert::ToInt32(this->Numeric_cut->Text);
	int max = matriz_absoluta[0][1];
	
	double max_convert = Conversion(max);

	int repeat = (int)(max_convert - corte);

		send_info[0] = repeat;
		


	this->serialPort1->Write(send_info, 0, 1);
}
private: System::Void buttonGraph_Click(System::Object^  sender, System::EventArgs^  e) {
	this->tabControlConexion->SelectTab(tabPage3);
}
private: System::Void RunGraphBtn_Click(System::Object^  sender, System::EventArgs^  e) {
	Funcion_Graficar();
}
private: Void Graficas1() {

	int cs1 = 0;
	for (int ren = 0; ren < muestreo; ren++) {

		if ((cs1 + 1) <= muestreo) {
			this->sen1->Points->AddXY(cs1, matriz_mediciones[ren][0]);
			cs1 += 1;
		}
	}
	this->chart1->Series->Add(this->sen1);
};

private: Void Graficas2() {
	int cs2 = 0;
	for (int ren = 0; ren < muestreo; ren++) {

		if ((cs2 + 1) <= muestreo) {
			this->sen2->Points->AddXY(cs2, matriz_mediciones[ren][1]);
			cs2 += 1;
		}
	}
	this->chart1->Series->Add(this->sen2);
};
private: Void Graficas3() {

	int cs3 = 0;
	for (int ren = 0; ren < muestreo; ren++) {

		if ((cs3 + 1) <= muestreo) {
			this->sen3->Points->AddXY(cs3, matriz_mediciones[ren][2]);
			cs3 += 1;
		}
	}
	this->chart1->Series->Add(this->sen3);
};

private: Void Graficas4() {

	int cs4 = 0;
	for (int ren = 0; ren < muestreo; ren++) {

		if ((cs4 + 1) <= muestreo) {
			this->sen4->Points->AddXY(cs4, matriz_mediciones[ren][3]);
			cs4 += 1;
		}
	}
	this->chart1->Series->Add(this->sen4);
};
private: Void Graficas5() {

	int cs5 = 0;
	for (int ren = 0; ren < muestreo; ren++) {

		if ((cs5 + 1) <= muestreo) {
			this->sen5->Points->AddXY(cs5, matriz_mediciones[ren][4]);
			cs5 += 1;
		}
	}
	this->chart1->Series->Add(this->sen5);

};



void Esperar_Ubicacion(void) {
	cli::array <wchar_t, 1>^send_key2 = gcnew array <wchar_t, 1>(5);
	send_key2[0] = 's';
	this->serialPort1->Write(send_key2, 0, 1);
	do
	{

	} while (this->serialPort1->ReadChar() != 'n');

}
double Conversion(int x) { //CONVERSION PENDIENTE

	return x * 0.3;
}

private: System::Void radioButton1_CheckedChanged_1(System::Object^  sender, System::EventArgs^  e) {
	void Graficas1();
}
private: System::Void radioButton2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	void Graficas2();
}
private: System::Void radioButton3_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	void Graficas3();
}
private: System::Void radioButton4_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	void Graficas4();
}
private: System::Void radioButton5_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	void Graficas5();
}

private: System::Void radioButton6_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	void Graficas1();
	void Graficas2();
	void Graficas3();
	void Graficas4();
	void Graficas5();
}
void Funcion_Graficar(void) {
	this->chart1->ChartAreas["ChartArea1"]->AxisX->Minimum = 0;

	this->chart1->ChartAreas["ChartArea1"]->AxisX->Maximum = muestreo;

	this->chart1->Series->Clear();

	if (radioButton1->Checked) {
		//propiedades Sensor 1
		this->sen1 = gcnew Series;
		this->sen1->Color = Color::Black;
		this->sen1->BorderWidth = 1;
		this->sen1->ChartArea = "ChartArea1";
		this->sen1->ChartType = SeriesChartType::Line;
		this->sen1->Name = "sen1";
		Graficas1();
	}
	else if (radioButton2->Checked) {
		//propiedades Sensor 2
		this->sen2 = gcnew Series;
		this->sen2->Color = Color::Red;
		this->sen2->BorderWidth = 1;
		this->sen2->ChartArea = "ChartArea1";
		this->sen2->ChartType = SeriesChartType::Line;
		this->sen2->Name = "sen2";
		Graficas2();
	}
	else if (radioButton3->Checked) {
		//propiedades Sensor 3
		this->sen3 = gcnew Series;
		this->sen3->Color = Color::Blue;
		this->sen3->BorderWidth = 1;
		this->sen3->ChartArea = "ChartArea1";
		this->sen3->ChartType = SeriesChartType::Line;
		this->sen3->Name = "sen3";
		Graficas3();
	}
	else if (radioButton4->Checked) {
		//propiedades Sensor 4
		this->sen4 = gcnew Series;
		this->sen4->Color = Color::Yellow;
		this->sen4->BorderWidth = 1;
		this->sen4->ChartArea = "ChartArea1";
		this->sen4->ChartType = SeriesChartType::Line;
		this->sen4->Name = "sen4";
		Graficas4();
	}
	else if (radioButton5->Checked) {
		//propiedades Sensor 5
		this->sen5 = gcnew Series;
		this->sen5->Color = Color::Green;
		this->sen5->BorderWidth = 1;
		this->sen5->ChartArea = "ChartArea1";
		this->sen5->ChartType = SeriesChartType::Line;
		this->sen5->Name = "sen5";
		Graficas5();
	}
	else {
		Graficas1();
		Graficas2();
		Graficas3();
		Graficas4();
		Graficas5();
	}
}
void Timpo_real_graficar(int i) {

	
}
};
}
