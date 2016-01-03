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
		Series^ max;
		Series^ min;

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
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::RadioButton^  radBtnBoth;

	private: System::Windows::Forms::RadioButton^  radBtnMin;

	private: System::Windows::Forms::RadioButton^  radBtnMax;
	private: System::Windows::Forms::Button^  RunGraphBtn;
	private: System::Windows::Forms::Timer^  timer1;


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
			this->radBtnBoth = (gcnew System::Windows::Forms::RadioButton());
			this->radBtnMin = (gcnew System::Windows::Forms::RadioButton());
			this->radBtnMax = (gcnew System::Windows::Forms::RadioButton());
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
			this->tabControlConexion->Location = System::Drawing::Point(38, 15);
			this->tabControlConexion->Margin = System::Windows::Forms::Padding(3, 7, 3, 7);
			this->tabControlConexion->Name = L"tabControlConexion";
			this->tabControlConexion->SelectedIndex = 0;
			this->tabControlConexion->Size = System::Drawing::Size(515, 428);
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
			this->tabPage1->Location = System::Drawing::Point(4, 31);
			this->tabPage1->Margin = System::Windows::Forms::Padding(3, 7, 3, 7);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3, 7, 3, 7);
			this->tabPage1->Size = System::Drawing::Size(507, 393);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Conexión";
			// 
			// labelPuerto
			// 
			this->labelPuerto->AutoSize = true;
			this->labelPuerto->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelPuerto->Location = System::Drawing::Point(62, 54);
			this->labelPuerto->Name = L"labelPuerto";
			this->labelPuerto->Size = System::Drawing::Size(221, 29);
			this->labelPuerto->TabIndex = 6;
			this->labelPuerto->Text = L"Puerto de conexión";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(292, 54);
			this->comboBox1->Margin = System::Windows::Forms::Padding(3, 7, 3, 7);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(176, 30);
			this->comboBox1->TabIndex = 5;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(63, 333);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(60, 24);
			this->label3->TabIndex = 4;
			this->label3->Text = L"label3";
			// 
			// buttonDesconectar
			// 
			this->buttonDesconectar->Location = System::Drawing::Point(67, 252);
			this->buttonDesconectar->Margin = System::Windows::Forms::Padding(3, 7, 3, 7);
			this->buttonDesconectar->Name = L"buttonDesconectar";
			this->buttonDesconectar->Size = System::Drawing::Size(142, 59);
			this->buttonDesconectar->TabIndex = 2;
			this->buttonDesconectar->Text = L"Desconectar";
			this->buttonDesconectar->UseVisualStyleBackColor = true;
			this->buttonDesconectar->Click += gcnew System::EventHandler(this, &MyForm::buttonDesconectar_Click);
			// 
			// buttonActualizar
			// 
			this->buttonActualizar->Location = System::Drawing::Point(67, 183);
			this->buttonActualizar->Margin = System::Windows::Forms::Padding(3, 7, 3, 7);
			this->buttonActualizar->Name = L"buttonActualizar";
			this->buttonActualizar->Size = System::Drawing::Size(142, 59);
			this->buttonActualizar->TabIndex = 1;
			this->buttonActualizar->Text = L"Actualizar";
			this->buttonActualizar->UseVisualStyleBackColor = true;
			this->buttonActualizar->Click += gcnew System::EventHandler(this, &MyForm::buttonActualizar_Click);
			// 
			// buttonConnect
			// 
			this->buttonConnect->Location = System::Drawing::Point(67, 112);
			this->buttonConnect->Margin = System::Windows::Forms::Padding(3, 7, 3, 7);
			this->buttonConnect->Name = L"buttonConnect";
			this->buttonConnect->Size = System::Drawing::Size(142, 59);
			this->buttonConnect->TabIndex = 0;
			this->buttonConnect->Text = L"Conectar";
			this->buttonConnect->UseVisualStyleBackColor = true;
			this->buttonConnect->Click += gcnew System::EventHandler(this, &MyForm::buttonConnect_Click);
			// 
			// tabPage2
			// 
			this->tabPage2->BackColor = System::Drawing::Color::WhiteSmoke;
			this->tabPage2->Controls->Add(this->groupBoxCorte);
			this->tabPage2->Location = System::Drawing::Point(4, 31);
			this->tabPage2->Margin = System::Windows::Forms::Padding(3, 7, 3, 7);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3, 7, 3, 7);
			this->tabPage2->Size = System::Drawing::Size(507, 393);
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
			this->groupBoxCorte->Location = System::Drawing::Point(10, 10);
			this->groupBoxCorte->Margin = System::Windows::Forms::Padding(3, 7, 3, 7);
			this->groupBoxCorte->Name = L"groupBoxCorte";
			this->groupBoxCorte->Padding = System::Windows::Forms::Padding(3, 7, 3, 7);
			this->groupBoxCorte->Size = System::Drawing::Size(543, 398);
			this->groupBoxCorte->TabIndex = 4;
			this->groupBoxCorte->TabStop = false;
			this->groupBoxCorte->Text = L"Configuracion";
			// 
			// Numeric_cut
			// 
			this->Numeric_cut->Location = System::Drawing::Point(253, 130);
			this->Numeric_cut->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 500, 0, 0, 0 });
			this->Numeric_cut->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100, 0, 0, 0 });
			this->Numeric_cut->Name = L"Numeric_cut";
			this->Numeric_cut->Size = System::Drawing::Size(120, 32);
			this->Numeric_cut->TabIndex = 14;
			this->Numeric_cut->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100, 0, 0, 0 });
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(42, 130);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(134, 29);
			this->label2->TabIndex = 13;
			this->label2->Text = L"Corte (mm)";
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(253, 56);
			this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 500, 0, 0, 0 });
			this->numericUpDown1->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100, 0, 0, 0 });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(120, 32);
			this->numericUpDown1->TabIndex = 10;
			this->numericUpDown1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100, 0, 0, 0 });
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(42, 59);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(168, 29);
			this->label6->TabIndex = 6;
			this->label6->Text = L"Longitud (mm)";
			// 
			// buttonAceptar
			// 
			this->buttonAceptar->Location = System::Drawing::Point(253, 284);
			this->buttonAceptar->Margin = System::Windows::Forms::Padding(3, 7, 3, 7);
			this->buttonAceptar->Name = L"buttonAceptar";
			this->buttonAceptar->Size = System::Drawing::Size(142, 59);
			this->buttonAceptar->TabIndex = 5;
			this->buttonAceptar->Text = L"Aceptar";
			this->buttonAceptar->UseVisualStyleBackColor = true;
			this->buttonAceptar->Click += gcnew System::EventHandler(this, &MyForm::buttonAceptar_Click);
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->groupBox1);
			this->tabPage3->Controls->Add(this->RunGraphBtn);
			this->tabPage3->Location = System::Drawing::Point(4, 31);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(507, 393);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"tabPage3";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->radBtnBoth);
			this->groupBox1->Controls->Add(this->radBtnMin);
			this->groupBox1->Controls->Add(this->radBtnMax);
			this->groupBox1->Location = System::Drawing::Point(8, 8);
			this->groupBox1->Margin = System::Windows::Forms::Padding(5);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(5);
			this->groupBox1->Size = System::Drawing::Size(333, 169);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Plot...";
			// 
			// radBtnBoth
			// 
			this->radBtnBoth->AutoSize = true;
			this->radBtnBoth->Checked = true;
			this->radBtnBoth->Location = System::Drawing::Point(12, 115);
			this->radBtnBoth->Margin = System::Windows::Forms::Padding(5);
			this->radBtnBoth->Name = L"radBtnBoth";
			this->radBtnBoth->Size = System::Drawing::Size(88, 28);
			this->radBtnBoth->TabIndex = 2;
			this->radBtnBoth->TabStop = true;
			this->radBtnBoth->Text = L"BOTH";
			this->radBtnBoth->UseVisualStyleBackColor = true;
			// 
			// radBtnMin
			// 
			this->radBtnMin->AutoSize = true;
			this->radBtnMin->Location = System::Drawing::Point(12, 74);
			this->radBtnMin->Margin = System::Windows::Forms::Padding(5);
			this->radBtnMin->Name = L"radBtnMin";
			this->radBtnMin->Size = System::Drawing::Size(69, 28);
			this->radBtnMin->TabIndex = 1;
			this->radBtnMin->Text = L"MIN";
			this->radBtnMin->UseVisualStyleBackColor = true;
			// 
			// radBtnMax
			// 
			this->radBtnMax->AutoSize = true;
			this->radBtnMax->Location = System::Drawing::Point(12, 34);
			this->radBtnMax->Margin = System::Windows::Forms::Padding(5);
			this->radBtnMax->Name = L"radBtnMax";
			this->radBtnMax->Size = System::Drawing::Size(78, 28);
			this->radBtnMax->TabIndex = 0;
			this->radBtnMax->Text = L"MAX";
			this->radBtnMax->UseVisualStyleBackColor = true;
			// 
			// RunGraphBtn
			// 
			this->RunGraphBtn->Location = System::Drawing::Point(217, 188);
			this->RunGraphBtn->Margin = System::Windows::Forms::Padding(5);
			this->RunGraphBtn->Name = L"RunGraphBtn";
			this->RunGraphBtn->Size = System::Drawing::Size(125, 39);
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
			this->chart1->Location = System::Drawing::Point(605, 95);
			this->chart1->Margin = System::Windows::Forms::Padding(3, 7, 3, 7);
			this->chart1->Name = L"chart1";
			this->chart1->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::Bright;
			this->chart1->Size = System::Drawing::Size(743, 327);
			this->chart1->TabIndex = 1;
			this->chart1->Text = L"chart1";
			// 
			// buttonCalib
			// 
			this->buttonCalib->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonCalib.BackgroundImage")));
			this->buttonCalib->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonCalib->Location = System::Drawing::Point(732, 15);
			this->buttonCalib->Margin = System::Windows::Forms::Padding(3, 7, 3, 7);
			this->buttonCalib->Name = L"buttonCalib";
			this->buttonCalib->Size = System::Drawing::Size(67, 68);
			this->buttonCalib->TabIndex = 4;
			this->buttonCalib->UseVisualStyleBackColor = true;
			this->buttonCalib->Click += gcnew System::EventHandler(this, &MyForm::buttonCalib_Click);
			// 
			// buttonSensor
			// 
			this->buttonSensor->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonSensor.BackgroundImage")));
			this->buttonSensor->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonSensor->Location = System::Drawing::Point(828, 15);
			this->buttonSensor->Margin = System::Windows::Forms::Padding(3, 7, 3, 7);
			this->buttonSensor->Name = L"buttonSensor";
			this->buttonSensor->Size = System::Drawing::Size(67, 68);
			this->buttonSensor->TabIndex = 5;
			this->buttonSensor->UseVisualStyleBackColor = true;
			this->buttonSensor->Click += gcnew System::EventHandler(this, &MyForm::buttonSensor_Click);
			// 
			// buttonGraph
			// 
			this->buttonGraph->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonGraph.BackgroundImage")));
			this->buttonGraph->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonGraph->Location = System::Drawing::Point(925, 15);
			this->buttonGraph->Margin = System::Windows::Forms::Padding(3, 7, 3, 7);
			this->buttonGraph->Name = L"buttonGraph";
			this->buttonGraph->Size = System::Drawing::Size(67, 68);
			this->buttonGraph->TabIndex = 6;
			this->buttonGraph->UseVisualStyleBackColor = true;
			this->buttonGraph->Click += gcnew System::EventHandler(this, &MyForm::buttonGraph_Click);
			// 
			// buttonConf
			// 
			this->buttonConf->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonConf.BackgroundImage")));
			this->buttonConf->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonConf->Location = System::Drawing::Point(1020, 15);
			this->buttonConf->Margin = System::Windows::Forms::Padding(3, 7, 3, 7);
			this->buttonConf->Name = L"buttonConf";
			this->buttonConf->Size = System::Drawing::Size(67, 68);
			this->buttonConf->TabIndex = 7;
			this->buttonConf->UseVisualStyleBackColor = true;
			this->buttonConf->Click += gcnew System::EventHandler(this, &MyForm::buttonCut_Click);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::Aquamarine;
			this->textBox1->Location = System::Drawing::Point(610, 469);
			this->textBox1->Margin = System::Windows::Forms::Padding(3, 7, 3, 7);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(164, 28);
			this->textBox1->TabIndex = 8;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(810, 469);
			this->textBox2->Margin = System::Windows::Forms::Padding(3, 7, 3, 7);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(164, 28);
			this->textBox2->TabIndex = 9;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(805, 432);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(148, 25);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Punto máximo";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(605, 432);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(142, 25);
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
			this->buttonConex->Location = System::Drawing::Point(638, 15);
			this->buttonConex->Margin = System::Windows::Forms::Padding(3, 7, 3, 7);
			this->buttonConex->Name = L"buttonConex";
			this->buttonConex->Size = System::Drawing::Size(67, 68);
			this->buttonConex->TabIndex = 12;
			this->buttonConex->UseVisualStyleBackColor = true;
			this->buttonConex->Click += gcnew System::EventHandler(this, &MyForm::buttonConex_Click);
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(1078, 432);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(271, 168);
			this->richTextBox1->TabIndex = 13;
			this->richTextBox1->Text = L"";
			// 
			// richTextBox2
			// 
			this->richTextBox2->Location = System::Drawing::Point(373, 469);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->Size = System::Drawing::Size(162, 133);
			this->richTextBox2->TabIndex = 14;
			this->richTextBox2->Text = L"";
			// 
			// statusStrip1
			// 
			this->statusStrip1->ImageScalingSize = System::Drawing::Size(27, 27);
			this->statusStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->Strip_Lable });
			this->statusStrip1->Location = System::Drawing::Point(0, 623);
			this->statusStrip1->Name = L"statusStrip1";
			this->statusStrip1->Padding = System::Windows::Forms::Padding(2, 0, 13, 0);
			this->statusStrip1->Size = System::Drawing::Size(1362, 35);
			this->statusStrip1->TabIndex = 15;
			this->statusStrip1->Text = L"Barra de estado en funcionamiento....";
			// 
			// Strip_Lable
			// 
			this->Strip_Lable->Name = L"Strip_Lable";
			this->Strip_Lable->Size = System::Drawing::Size(113, 30);
			this->Strip_Lable->Text = L"Strip_Label";
			// 
			// Button_Play
			// 
			this->Button_Play->BackColor = System::Drawing::Color::Lime;
			this->Button_Play->Location = System::Drawing::Point(620, 506);
			this->Button_Play->Name = L"Button_Play";
			this->Button_Play->Size = System::Drawing::Size(113, 95);
			this->Button_Play->TabIndex = 16;
			this->Button_Play->UseVisualStyleBackColor = false;
			this->Button_Play->Click += gcnew System::EventHandler(this, &MyForm::Button_Play_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(10, 22);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::MediumTurquoise;
			this->ClientSize = System::Drawing::Size(1362, 658);
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
			this->Margin = System::Windows::Forms::Padding(3, 7, 3, 7);
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
	
	for (int indice = 0; indice < muestreo; indice++) {
		cli::array <wchar_t, 1>^ send = gcnew array <wchar_t, 1>(5);
		send[0] = 'x';
		serialPort1->Write(send, 0, 1);

		rellenar_matriz(matriz_mediciones, indice);
		
		Sleep(200);
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


	for (int i = 0; i < muestreo; i++)
		matriz_maximosminimos[i][1];
	//Enviar_datos_corte_pic();


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

	char buffer[10];

	for (int datos = 0; datos < 10; datos++) {

		buffer[datos] = this->serialPort1->ReadChar();

	}

	int a, b, c, d, f;

	a = buffer[0] | buffer[1] << 8;
	b = buffer[2] | buffer[3] << 8;
	c = buffer[4] | buffer[5] << 8;
	d = buffer[6] | buffer[7] << 8;
	f = buffer[8] | buffer[9] << 8;
	

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

	cli::array <wchar_t, 1>^ send_info = gcnew array <wchar_t, 1>(5);

	//Profundidad de corte de 1 mm 
	int corte = System::Convert::ToInt32(this->Numeric_cut->Text);
	int max = matriz_absoluta[0][1];

	send_info[0] = corte;
	send_info[1] = corte >> 8;
	send_info[2] = max;
	send_info[3] = max >> 8;


	this->serialPort1->Write(send_info, 0, 1);
	this->serialPort1->Write(send_info, 1, 1);
	this->serialPort1->Write(send_info, 2, 1);
	this->serialPort1->Write(send_info, 3, 1);
}
private: System::Void buttonGraph_Click(System::Object^  sender, System::EventArgs^  e) {
	this->tabControlConexion->SelectTab(tabPage3);
}
private: System::Void RunGraphBtn_Click(System::Object^  sender, System::EventArgs^  e) {
	
	
	this->chart1->ChartAreas["ChartArea1"]->AxisX->Interval = 10;
	
	this->chart1->ChartAreas["ChartArea1"]->AxisX->Minimum = 0;

	this->chart1->ChartAreas["ChartArea1"]->AxisX->Maximum = muestreo;

	this->max = gcnew Series();
	this->max->Color = Color::Red;
	this->max->BorderWidth = 1;
	this->max->ChartArea = "ChartArea1";
	this->max->ChartType = SeriesChartType::Line;
	this->max->Name = "max";


	this->min = gcnew Series();
	this->min->Color = Color::Blue;
	this->min->BorderWidth = 1;
	this->min->ChartArea = "ChartArea1";
	this->min->ChartType = SeriesChartType::Line;
	this->min->Name = "min";

	this->chart1->Series->Clear();

	if (radBtnMax->Checked) {
		GraficaMax();
	}
	else if (radBtnMin->Checked) {
		GraficaMin();
	}
	else {
		GraficaMax();
		GraficaMin();
	}
}

	private: Void GraficaMax() {
	int cMax = 0;

	for (int ren = 0; ren < muestreo; ren++) {
		if ((cMax + 10) <= muestreo) {
			this->max->Points->AddXY(cMax, matriz_maximosminimos[ren][1]);
			cMax += 10;
		}
		else {
			this->max->Points->AddXY(muestreo, matriz_maximosminimos[ren][1]);
		}
	}

	this->chart1->Series->Add(this->max);
}

	private: Void GraficaMin() {
		int cMin = 0;
		for (int ren = 0; ren < muestreo; ren++) {
			if ((cMin + 10) <= muestreo) {
				this->min->Points->AddXY(cMin, matriz_maximosminimos[ren][0]);
				cMin += 10;
			}
			else {
				this->min->Points->AddXY(muestreo, matriz_maximosminimos[ren][0]);
			}
		}

		this->chart1->Series->Add(this->min);
	}

};
}
