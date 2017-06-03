#pragma once

namespace cal1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Linq;
	using namespace System::Text;
	
	/// <summary>
	/// Summary for Form1
	/// </summary>
	 
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	protected: 
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::Button^  button13;
	private: System::Windows::Forms::Button^  button14;
	private: System::Windows::Forms::Button^  button15;
	private: System::Windows::Forms::Button^  button16;
	private: System::Windows::Forms::Button^  button17;
	private: System::Windows::Forms::Button^  button18;
	private: System::Windows::Forms::Button^  button19;

	private: System::Windows::Forms::Button^  button20;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  exitCalculatorToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  aboutToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  aboutTheCalculatorToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  helpToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  howToUseToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  extendedCalculatorToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  basicCalculatorToolStripMenuItem;
	private: System::Windows::Forms::Button^  button21;
	private: System::Windows::Forms::Button^  button22;
	private: System::Windows::Forms::Button^  button23;
	private: System::Windows::Forms::Button^  button24;
	private: System::Windows::Forms::Button^  button25;

	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	private: System::Windows::Forms::TextBox^  textBox1;




	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Button^  button26;
	private: System::Windows::Forms::Button^  button27;
	private: System::Windows::Forms::Button^  button28;
	private: System::Windows::Forms::Button^  button29;
	private: System::Windows::Forms::Button^  button30;

	private: System::Windows::Forms::ToolStripMenuItem^  kilogramsToolStripMenuItem;










	private: System::Windows::Forms::Panel^  panel2;


	private: System::Windows::Forms::ToolStripMenuItem^  radinasAndDegreesToolStripMenuItem;









	private: System::Windows::Forms::ToolStripMenuItem^  temperatureToolStripMenuItem;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Button^  button33;
	private: System::Windows::Forms::Button^  button32;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label5;
private: System::Windows::Forms::Panel^  panel3;
private: System::Windows::Forms::Button^  button36;
private: System::Windows::Forms::Button^  button35;
private: System::Windows::Forms::Button^  button34;
private: System::Windows::Forms::TextBox^  textBox6;
private: System::Windows::Forms::TextBox^  textBox5;
private: System::Windows::Forms::TextBox^  textBox4;
private: System::Windows::Forms::Label^  label9;
private: System::Windows::Forms::Label^  label8;
private: System::Windows::Forms::Label^  label7;
private: System::Windows::Forms::Label^  label1;
private: System::Windows::Forms::Label^  label10;
private: System::Windows::Forms::Button^  button37;
private: System::Windows::Forms::TextBox^  textBox7;
private: System::Windows::Forms::Button^  button39;
private: System::Windows::Forms::Button^  button38;
private: System::Windows::Forms::Label^  label12;
private: System::Windows::Forms::Label^  label11;


private: System::Windows::Forms::ToolStripMenuItem^  showPreviousCalculationsToolStripMenuItem;
private: System::Windows::Forms::Panel^  panel4;
private: System::Windows::Forms::Button^  button41;
private: System::Windows::Forms::Button^  button40;
private: System::Windows::Forms::Label^  label13;
private: System::Windows::Forms::RichTextBox^  richTextBox2;
private: System::Windows::Forms::Button^  button43;
private: System::Windows::Forms::Button^  button42;





	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->extendedCalculatorToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->basicCalculatorToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->kilogramsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->radinasAndDegreesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->temperatureToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->showPreviousCalculationsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitCalculatorToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutTheCalculatorToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->howToUseToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->button30 = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->button43 = (gcnew System::Windows::Forms::Button());
			this->button42 = (gcnew System::Windows::Forms::Button());
			this->button39 = (gcnew System::Windows::Forms::Button());
			this->button38 = (gcnew System::Windows::Forms::Button());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->button37 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button33 = (gcnew System::Windows::Forms::Button());
			this->button32 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->button41 = (gcnew System::Windows::Forms::Button());
			this->button40 = (gcnew System::Windows::Forms::Button());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->button35 = (gcnew System::Windows::Forms::Button());
			this->button34 = (gcnew System::Windows::Forms::Button());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button36 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->panel4->SuspendLayout();
			this->panel3->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button1->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Snow;
			this->button1->Location = System::Drawing::Point(-1, 131);
			this->button1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(77, 54);
			this->button1->TabIndex = 0;
			this->button1->Text = L"C";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button2->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button2->Location = System::Drawing::Point(74, 131);
			this->button2->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(77, 54);
			this->button2->TabIndex = 1;
			this->button2->Text = L"x ^ y";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(150, 131);
			this->button3->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(77, 54);
			this->button3->TabIndex = 2;
			this->button3->Text = L"√";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button4->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(226, 131);
			this->button4->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(77, 54);
			this->button4->TabIndex = 3;
			this->button4->Text = L"/";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button5->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(-1, 184);
			this->button5->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(77, 54);
			this->button5->TabIndex = 4;
			this->button5->Text = L"7";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button6->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(74, 184);
			this->button6->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(77, 54);
			this->button6->TabIndex = 5;
			this->button6->Text = L"8";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button7->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(150, 184);
			this->button7->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(77, 54);
			this->button7->TabIndex = 6;
			this->button7->Text = L"9";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &Form1::button7_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button8->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(226, 184);
			this->button8->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(77, 54);
			this->button8->TabIndex = 7;
			this->button8->Text = L"x";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &Form1::button8_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button9->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button9->Location = System::Drawing::Point(-1, 237);
			this->button9->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(77, 54);
			this->button9->TabIndex = 8;
			this->button9->Text = L"4";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &Form1::button9_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button10->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button10->Location = System::Drawing::Point(74, 237);
			this->button10->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(77, 54);
			this->button10->TabIndex = 9;
			this->button10->Text = L"5";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &Form1::button10_Click);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button11->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button11->Location = System::Drawing::Point(150, 237);
			this->button11->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(77, 54);
			this->button11->TabIndex = 10;
			this->button11->Text = L"6";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &Form1::button11_Click);
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button12->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button12->Location = System::Drawing::Point(226, 237);
			this->button12->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(77, 54);
			this->button12->TabIndex = 11;
			this->button12->Text = L"-";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &Form1::button12_Click);
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button13->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button13->Location = System::Drawing::Point(-1, 290);
			this->button13->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(77, 54);
			this->button13->TabIndex = 12;
			this->button13->Text = L"1";
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &Form1::button13_Click);
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button14->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button14->Location = System::Drawing::Point(74, 290);
			this->button14->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(77, 54);
			this->button14->TabIndex = 13;
			this->button14->Text = L"2";
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &Form1::button14_Click);
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button15->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button15->Location = System::Drawing::Point(150, 290);
			this->button15->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(77, 54);
			this->button15->TabIndex = 14;
			this->button15->Text = L"3";
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &Form1::button15_Click);
			// 
			// button16
			// 
			this->button16->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button16->Location = System::Drawing::Point(-1, 342);
			this->button16->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(77, 54);
			this->button16->TabIndex = 15;
			this->button16->Text = L"0";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &Form1::button16_Click);
			// 
			// button17
			// 
			this->button17->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button17->Location = System::Drawing::Point(74, 342);
			this->button17->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(77, 54);
			this->button17->TabIndex = 16;
			this->button17->Text = L".";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &Form1::button17_Click);
			// 
			// button18
			// 
			this->button18->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button18->Location = System::Drawing::Point(150, 342);
			this->button18->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(77, 54);
			this->button18->TabIndex = 17;
			this->button18->Text = L"=";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &Form1::button18_Click);
			// 
			// button19
			// 
			this->button19->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button19->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button19->Location = System::Drawing::Point(226, 290);
			this->button19->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(77, 54);
			this->button19->TabIndex = 18;
			this->button19->Text = L"+";
			this->button19->UseVisualStyleBackColor = false;
			this->button19->Click += gcnew System::EventHandler(this, &Form1::button19_Click);
			// 
			// button20
			// 
			this->button20->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button20->Location = System::Drawing::Point(226, 342);
			this->button20->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(77, 54);
			this->button20->TabIndex = 20;
			this->button20->Text = L"DEL";
			this->button20->UseVisualStyleBackColor = true;
			this->button20->Click += gcnew System::EventHandler(this, &Form1::button20_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::Color::DarkOrange;
			this->menuStrip1->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->fileToolStripMenuItem, 
				this->aboutToolStripMenuItem, this->helpToolStripMenuItem});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(7, 2, 0, 2);
			this->menuStrip1->Size = System::Drawing::Size(303, 25);
			this->menuStrip1->TabIndex = 21;
			this->menuStrip1->Text = L"menuStrip1";
			this->menuStrip1->ItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &Form1::menuStrip1_ItemClicked);
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(7) {this->extendedCalculatorToolStripMenuItem, 
				this->basicCalculatorToolStripMenuItem, this->kilogramsToolStripMenuItem, this->radinasAndDegreesToolStripMenuItem, this->temperatureToolStripMenuItem, 
				this->showPreviousCalculationsToolStripMenuItem, this->exitCalculatorToolStripMenuItem});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(40, 21);
			this->fileToolStripMenuItem->Text = L"File";
			// 
			// extendedCalculatorToolStripMenuItem
			// 
			this->extendedCalculatorToolStripMenuItem->Name = L"extendedCalculatorToolStripMenuItem";
			this->extendedCalculatorToolStripMenuItem->Size = System::Drawing::Size(227, 22);
			this->extendedCalculatorToolStripMenuItem->Text = L"Extended Calculator";
			this->extendedCalculatorToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::extendedCalculatorToolStripMenuItem_Click);
			// 
			// basicCalculatorToolStripMenuItem
			// 
			this->basicCalculatorToolStripMenuItem->Name = L"basicCalculatorToolStripMenuItem";
			this->basicCalculatorToolStripMenuItem->Size = System::Drawing::Size(227, 22);
			this->basicCalculatorToolStripMenuItem->Text = L"Basic Calculator";
			this->basicCalculatorToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::basicCalculatorToolStripMenuItem_Click);
			// 
			// kilogramsToolStripMenuItem
			// 
			this->kilogramsToolStripMenuItem->Name = L"kilogramsToolStripMenuItem";
			this->kilogramsToolStripMenuItem->Size = System::Drawing::Size(227, 22);
			this->kilogramsToolStripMenuItem->Text = L"Weight and mass";
			this->kilogramsToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::kilogramsToolStripMenuItem_Click);
			// 
			// radinasAndDegreesToolStripMenuItem
			// 
			this->radinasAndDegreesToolStripMenuItem->Name = L"radinasAndDegreesToolStripMenuItem";
			this->radinasAndDegreesToolStripMenuItem->Size = System::Drawing::Size(227, 22);
			this->radinasAndDegreesToolStripMenuItem->Text = L"Radinas and degrees";
			this->radinasAndDegreesToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::radinasAndDegreesToolStripMenuItem_Click);
			// 
			// temperatureToolStripMenuItem
			// 
			this->temperatureToolStripMenuItem->Name = L"temperatureToolStripMenuItem";
			this->temperatureToolStripMenuItem->Size = System::Drawing::Size(227, 22);
			this->temperatureToolStripMenuItem->Text = L"Temperature";
			this->temperatureToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::temperatureToolStripMenuItem_Click);
			// 
			// showPreviousCalculationsToolStripMenuItem
			// 
			this->showPreviousCalculationsToolStripMenuItem->Name = L"showPreviousCalculationsToolStripMenuItem";
			this->showPreviousCalculationsToolStripMenuItem->Size = System::Drawing::Size(227, 22);
			this->showPreviousCalculationsToolStripMenuItem->Text = L"Show previous calculations";
			this->showPreviousCalculationsToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::showPreviousCalculationsToolStripMenuItem_Click);
			// 
			// exitCalculatorToolStripMenuItem
			// 
			this->exitCalculatorToolStripMenuItem->Name = L"exitCalculatorToolStripMenuItem";
			this->exitCalculatorToolStripMenuItem->Size = System::Drawing::Size(227, 22);
			this->exitCalculatorToolStripMenuItem->Text = L"Exit ";
			this->exitCalculatorToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::exitCalculatorToolStripMenuItem_Click);
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->aboutTheCalculatorToolStripMenuItem});
			this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(54, 21);
			this->aboutToolStripMenuItem->Text = L"About";
			// 
			// aboutTheCalculatorToolStripMenuItem
			// 
			this->aboutTheCalculatorToolStripMenuItem->Name = L"aboutTheCalculatorToolStripMenuItem";
			this->aboutTheCalculatorToolStripMenuItem->Size = System::Drawing::Size(192, 22);
			this->aboutTheCalculatorToolStripMenuItem->Text = L"About the Calculator";
			this->aboutTheCalculatorToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::aboutTheCalculatorToolStripMenuItem_Click);
			// 
			// helpToolStripMenuItem
			// 
			this->helpToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->howToUseToolStripMenuItem});
			this->helpToolStripMenuItem->Name = L"helpToolStripMenuItem";
			this->helpToolStripMenuItem->Size = System::Drawing::Size(46, 21);
			this->helpToolStripMenuItem->Text = L"Help";
			// 
			// howToUseToolStripMenuItem
			// 
			this->howToUseToolStripMenuItem->Name = L"howToUseToolStripMenuItem";
			this->howToUseToolStripMenuItem->Size = System::Drawing::Size(138, 22);
			this->howToUseToolStripMenuItem->Text = L"How to use";
			this->howToUseToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::howToUseToolStripMenuItem_Click);
			// 
			// button21
			// 
			this->button21->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button21->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button21->Location = System::Drawing::Point(309, 131);
			this->button21->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(77, 54);
			this->button21->TabIndex = 22;
			this->button21->Text = L"sin";
			this->button21->UseVisualStyleBackColor = false;
			this->button21->Click += gcnew System::EventHandler(this, &Form1::button21_Click);
			// 
			// button22
			// 
			this->button22->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button22->Location = System::Drawing::Point(309, 184);
			this->button22->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(77, 54);
			this->button22->TabIndex = 23;
			this->button22->Text = L"cos";
			this->button22->UseVisualStyleBackColor = true;
			this->button22->Click += gcnew System::EventHandler(this, &Form1::button22_Click);
			// 
			// button23
			// 
			this->button23->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button23->Location = System::Drawing::Point(309, 237);
			this->button23->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(77, 54);
			this->button23->TabIndex = 24;
			this->button23->Text = L"tg";
			this->button23->UseVisualStyleBackColor = true;
			this->button23->Click += gcnew System::EventHandler(this, &Form1::button23_Click);
			// 
			// button24
			// 
			this->button24->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button24->Location = System::Drawing::Point(309, 290);
			this->button24->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(77, 54);
			this->button24->TabIndex = 25;
			this->button24->Text = L"ln";
			this->button24->UseVisualStyleBackColor = true;
			this->button24->Click += gcnew System::EventHandler(this, &Form1::button24_Click);
			// 
			// button25
			// 
			this->button25->Font = (gcnew System::Drawing::Font(L"Perpetua", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button25->Location = System::Drawing::Point(309, 342);
			this->button25->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(77, 54);
			this->button25->TabIndex = 26;
			this->button25->Text = L"MEMO";
			this->button25->UseVisualStyleBackColor = true;
			this->button25->Click += gcnew System::EventHandler(this, &Form1::button25_Click);
			// 
			// richTextBox1
			// 
			this->richTextBox1->AcceptsTab = true;
			this->richTextBox1->BackColor = System::Drawing::SystemColors::MenuText;
			this->richTextBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->richTextBox1->ForeColor = System::Drawing::SystemColors::Window;
			this->richTextBox1->Location = System::Drawing::Point(-1, 29);
			this->richTextBox1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->richTextBox1->Size = System::Drawing::Size(304, 77);
			this->richTextBox1->TabIndex = 27;
			this->richTextBox1->Text = L"0";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(10, 105);
			this->textBox1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(234, 42);
			this->textBox1->TabIndex = 28;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_TextChanged);
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Black;
			this->label4->Location = System::Drawing::Point(83, 23);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(136, 50);
			this->label4->TabIndex = 34;
			this->label4->Text = L"Angles\r\n\r\n\r\n";
			this->label4->Click += gcnew System::EventHandler(this, &Form1::label4_Click);
			// 
			// button26
			// 
			this->button26->Font = (gcnew System::Drawing::Font(L"Perpetua", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button26->Location = System::Drawing::Point(378, 131);
			this->button26->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(77, 54);
			this->button26->TabIndex = 35;
			this->button26->Text = L"sin/rad";
			this->button26->UseVisualStyleBackColor = true;
			this->button26->Click += gcnew System::EventHandler(this, &Form1::button26_Click);
			// 
			// button27
			// 
			this->button27->Font = (gcnew System::Drawing::Font(L"Perpetua", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button27->Location = System::Drawing::Point(378, 184);
			this->button27->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(77, 54);
			this->button27->TabIndex = 36;
			this->button27->Text = L"cos/rad";
			this->button27->UseVisualStyleBackColor = true;
			this->button27->Click += gcnew System::EventHandler(this, &Form1::button27_Click);
			// 
			// button28
			// 
			this->button28->Font = (gcnew System::Drawing::Font(L"Perpetua", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button28->Location = System::Drawing::Point(378, 237);
			this->button28->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(77, 54);
			this->button28->TabIndex = 37;
			this->button28->Text = L"tg/rad";
			this->button28->UseVisualStyleBackColor = true;
			this->button28->Click += gcnew System::EventHandler(this, &Form1::button28_Click);
			// 
			// button29
			// 
			this->button29->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button29->Location = System::Drawing::Point(378, 290);
			this->button29->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(77, 54);
			this->button29->TabIndex = 38;
			this->button29->Text = L"ctg";
			this->button29->UseVisualStyleBackColor = true;
			this->button29->Click += gcnew System::EventHandler(this, &Form1::button29_Click);
			// 
			// button30
			// 
			this->button30->Font = (gcnew System::Drawing::Font(L"Perpetua", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button30->Location = System::Drawing::Point(378, 342);
			this->button30->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button30->Name = L"button30";
			this->button30->Size = System::Drawing::Size(77, 54);
			this->button30->TabIndex = 39;
			this->button30->Text = L"ctg/rad";
			this->button30->UseVisualStyleBackColor = true;
			this->button30->Click += gcnew System::EventHandler(this, &Form1::button30_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::LightGray;
			this->panel2->Controls->Add(this->button43);
			this->panel2->Controls->Add(this->button42);
			this->panel2->Controls->Add(this->button39);
			this->panel2->Controls->Add(this->button38);
			this->panel2->Controls->Add(this->label12);
			this->panel2->Controls->Add(this->label11);
			this->panel2->Controls->Add(this->textBox7);
			this->panel2->Controls->Add(this->label4);
			this->panel2->Controls->Add(this->textBox1);
			this->panel2->Location = System::Drawing::Point(0, 29);
			this->panel2->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(303, 367);
			this->panel2->TabIndex = 42;
			this->panel2->Visible = false;
			this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Form1::panel2_Paint);
			this->panel2->Enter += gcnew System::EventHandler(this, &Form1::radinasAndDegreesToolStripMenuItem_Click);
			// 
			// button43
			// 
			this->button43->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button43->Font = (gcnew System::Drawing::Font(L"Perpetua", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button43->ForeColor = System::Drawing::Color::Black;
			this->button43->Location = System::Drawing::Point(157, 164);
			this->button43->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button43->Name = L"button43";
			this->button43->Size = System::Drawing::Size(77, 54);
			this->button43->TabIndex = 48;
			this->button43->Text = L"R-D";
			this->button43->UseVisualStyleBackColor = false;
			this->button43->Click += gcnew System::EventHandler(this, &Form1::button43_Click);
			// 
			// button42
			// 
			this->button42->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button42->Font = (gcnew System::Drawing::Font(L"Perpetua", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button42->ForeColor = System::Drawing::Color::Black;
			this->button42->Location = System::Drawing::Point(56, 164);
			this->button42->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button42->Name = L"button42";
			this->button42->Size = System::Drawing::Size(77, 54);
			this->button42->TabIndex = 47;
			this->button42->Text = L"D-R";
			this->button42->UseVisualStyleBackColor = false;
			this->button42->Click += gcnew System::EventHandler(this, &Form1::button42_Click);
			// 
			// button39
			// 
			this->button39->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button39->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button39->ForeColor = System::Drawing::Color::Black;
			this->button39->Location = System::Drawing::Point(250, 254);
			this->button39->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button39->Name = L"button39";
			this->button39->Size = System::Drawing::Size(44, 41);
			this->button39->TabIndex = 46;
			this->button39->Text = L" π";
			this->button39->UseVisualStyleBackColor = false;
			this->button39->Click += gcnew System::EventHandler(this, &Form1::button39_Click);
			// 
			// button38
			// 
			this->button38->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button38->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button38->ForeColor = System::Drawing::Color::Black;
			this->button38->Location = System::Drawing::Point(92, 308);
			this->button38->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button38->Name = L"button38";
			this->button38->Size = System::Drawing::Size(127, 41);
			this->button38->TabIndex = 45;
			this->button38->Text = L"reset";
			this->button38->UseVisualStyleBackColor = false;
			this->button38->Click += gcnew System::EventHandler(this, &Form1::button38_Click);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::Color::OrangeRed;
			this->label12->Location = System::Drawing::Point(8, 222);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(89, 28);
			this->label12->TabIndex = 44;
			this->label12->Text = L"Radians";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::OrangeRed;
			this->label11->Location = System::Drawing::Point(5, 73);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(89, 28);
			this->label11->TabIndex = 43;
			this->label11->Text = L"Degrees";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(10, 254);
			this->textBox7->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->textBox7->Multiline = true;
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(234, 40);
			this->textBox7->TabIndex = 41;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::LightGray;
			this->panel1->Controls->Add(this->label10);
			this->panel1->Controls->Add(this->button37);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Controls->Add(this->button33);
			this->panel1->Controls->Add(this->button32);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->textBox3);
			this->panel1->Controls->Add(this->textBox2);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Location = System::Drawing::Point(0, 29);
			this->panel1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(303, 367);
			this->panel1->TabIndex = 41;
			this->panel1->Visible = false;
			// 
			// label10
			// 
			this->label10->BackColor = System::Drawing::Color::LightGray;
			this->label10->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::Black;
			this->label10->Location = System::Drawing::Point(7, 16);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(163, 103);
			this->label10->TabIndex = 45;
			this->label10->Text = L"Weight and mass";
			// 
			// button37
			// 
			this->button37->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button37->FlatAppearance->BorderColor = System::Drawing::Color::Silver;
			this->button37->FlatAppearance->BorderSize = 10;
			this->button37->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button37->ForeColor = System::Drawing::Color::Black;
			this->button37->Location = System::Drawing::Point(92, 296);
			this->button37->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button37->Name = L"button37";
			this->button37->Size = System::Drawing::Size(119, 37);
			this->button37->TabIndex = 44;
			this->button37->Text = L"reset";
			this->button37->UseVisualStyleBackColor = false;
			this->button37->Click += gcnew System::EventHandler(this, &Form1::button37_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(176, 16);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(124, 109);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 43;
			this->pictureBox1->TabStop = false;
			// 
			// button33
			// 
			this->button33->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button33->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button33->ForeColor = System::Drawing::Color::Black;
			this->button33->Location = System::Drawing::Point(204, 146);
			this->button33->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button33->Name = L"button33";
			this->button33->Size = System::Drawing::Size(87, 37);
			this->button33->TabIndex = 42;
			this->button33->Text = L"lbs-kg";
			this->button33->UseVisualStyleBackColor = false;
			this->button33->Click += gcnew System::EventHandler(this, &Form1::button33_Click);
			// 
			// button32
			// 
			this->button32->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button32->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button32->ForeColor = System::Drawing::Color::Black;
			this->button32->Location = System::Drawing::Point(204, 229);
			this->button32->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button32->Name = L"button32";
			this->button32->Size = System::Drawing::Size(87, 37);
			this->button32->TabIndex = 41;
			this->button32->Text = L"kg-lbs";
			this->button32->UseVisualStyleBackColor = false;
			this->button32->Click += gcnew System::EventHandler(this, &Form1::button32_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::OrangeRed;
			this->label6->Location = System::Drawing::Point(9, 197);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(110, 28);
			this->label6->TabIndex = 3;
			this->label6->Text = L"Kilograms";
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::SystemColors::Info;
			this->textBox3->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox3->Location = System::Drawing::Point(10, 229);
			this->textBox3->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(166, 36);
			this->textBox3->TabIndex = 2;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::SystemColors::Info;
			this->textBox2->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox2->Location = System::Drawing::Point(10, 147);
			this->textBox2->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(170, 34);
			this->textBox2->TabIndex = 1;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::OrangeRed;
			this->label5->Location = System::Drawing::Point(8, 115);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(85, 28);
			this->label5->TabIndex = 0;
			this->label5->Text = L"Pounds";
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::LightGray;
			this->panel4->Controls->Add(this->button41);
			this->panel4->Controls->Add(this->button40);
			this->panel4->Controls->Add(this->label13);
			this->panel4->Controls->Add(this->richTextBox2);
			this->panel4->Location = System::Drawing::Point(0, 29);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(303, 367);
			this->panel4->TabIndex = 46;
			this->panel4->Visible = false;
			// 
			// button41
			// 
			this->button41->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button41->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button41->ForeColor = System::Drawing::Color::Black;
			this->button41->Location = System::Drawing::Point(176, 41);
			this->button41->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button41->Name = L"button41";
			this->button41->Size = System::Drawing::Size(87, 37);
			this->button41->TabIndex = 44;
			this->button41->Text = L"Reset";
			this->button41->UseVisualStyleBackColor = false;
			this->button41->Click += gcnew System::EventHandler(this, &Form1::button41_Click);
			// 
			// button40
			// 
			this->button40->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button40->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button40->ForeColor = System::Drawing::Color::Black;
			this->button40->Location = System::Drawing::Point(38, 41);
			this->button40->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button40->Name = L"button40";
			this->button40->Size = System::Drawing::Size(87, 37);
			this->button40->TabIndex = 43;
			this->button40->Text = L"Load";
			this->button40->UseVisualStyleBackColor = false;
			this->button40->Click += gcnew System::EventHandler(this, &Form1::button40_Click);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(23, 3);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(185, 26);
			this->label13->TabIndex = 1;
			this->label13->Text = L"Previous calculations";
			// 
			// richTextBox2
			// 
			this->richTextBox2->Location = System::Drawing::Point(23, 85);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->Size = System::Drawing::Size(253, 264);
			this->richTextBox2->TabIndex = 0;
			this->richTextBox2->Text = L"";
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::LightGray;
			this->panel3->Controls->Add(this->button35);
			this->panel3->Controls->Add(this->button34);
			this->panel3->Controls->Add(this->textBox6);
			this->panel3->Controls->Add(this->textBox5);
			this->panel3->Controls->Add(this->textBox4);
			this->panel3->Controls->Add(this->label9);
			this->panel3->Controls->Add(this->label8);
			this->panel3->Controls->Add(this->label7);
			this->panel3->Controls->Add(this->label1);
			this->panel3->Controls->Add(this->button36);
			this->panel3->Location = System::Drawing::Point(0, 29);
			this->panel3->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(303, 367);
			this->panel3->TabIndex = 44;
			this->panel3->Visible = false;
			// 
			// button35
			// 
			this->button35->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button35->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button35->ForeColor = System::Drawing::Color::Black;
			this->button35->Location = System::Drawing::Point(46, 155);
			this->button35->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button35->Name = L"button35";
			this->button35->Size = System::Drawing::Size(87, 43);
			this->button35->TabIndex = 44;
			this->button35->Text = L"C-K";
			this->button35->UseVisualStyleBackColor = false;
			this->button35->Click += gcnew System::EventHandler(this, &Form1::button35_Click);
			// 
			// button34
			// 
			this->button34->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button34->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button34->ForeColor = System::Drawing::Color::Black;
			this->button34->Location = System::Drawing::Point(166, 155);
			this->button34->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button34->Name = L"button34";
			this->button34->Size = System::Drawing::Size(87, 43);
			this->button34->TabIndex = 43;
			this->button34->Text = L"C-F";
			this->button34->UseVisualStyleBackColor = false;
			this->button34->Click += gcnew System::EventHandler(this, &Form1::button34_Click);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(178, 238);
			this->textBox6->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->textBox6->Multiline = true;
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(122, 40);
			this->textBox6->TabIndex = 6;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(3, 238);
			this->textBox5->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->textBox5->Multiline = true;
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(122, 40);
			this->textBox5->TabIndex = 5;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(92, 108);
			this->textBox4->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(116, 34);
			this->textBox4->TabIndex = 4;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::OrangeRed;
			this->label9->Location = System::Drawing::Point(113, 78);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(70, 26);
			this->label9->TabIndex = 3;
			this->label9->Text = L"Celsius";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::OrangeRed;
			this->label8->Location = System::Drawing::Point(19, 208);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(66, 26);
			this->label8->TabIndex = 2;
			this->label8->Text = L"Kelvin";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::OrangeRed;
			this->label7->Location = System::Drawing::Point(176, 208);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(101, 26);
			this->label7->TabIndex = 1;
			this->label7->Text = L"Fahrenheit";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(51, 28);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(202, 44);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Temperature";
			// 
			// button36
			// 
			this->button36->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button36->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button36->ForeColor = System::Drawing::Color::Black;
			this->button36->Location = System::Drawing::Point(101, 296);
			this->button36->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button36->Name = L"button36";
			this->button36->Size = System::Drawing::Size(107, 38);
			this->button36->TabIndex = 45;
			this->button36->Text = L"reset";
			this->button36->UseVisualStyleBackColor = false;
			this->button36->Click += gcnew System::EventHandler(this, &Form1::button36_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::MenuText;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->ClientSize = System::Drawing::Size(303, 396);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->button30);
			this->Controls->Add(this->button29);
			this->Controls->Add(this->button28);
			this->Controls->Add(this->button27);
			this->Controls->Add(this->button26);
			this->Controls->Add(this->button25);
			this->Controls->Add(this->button24);
			this->Controls->Add(this->button23);
			this->Controls->Add(this->button22);
			this->Controls->Add(this->button21);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->menuStrip1);
			this->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::SystemColors::ControlText;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Calculator";
			this->TransparencyKey = System::Drawing::Color::DarkRed;
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &Form1::Form1_FormClosing);
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::Form1_MouseClick);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		Decimal numberone;
		Decimal numbertwo;
		Decimal result;
		Double num1;
		Double num2;
		Double num3;
		Double number1;
		char operation;
		char squareroot;
		int found;
		String^ num;
		Double number;
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 richTextBox1->Text="";
				 richTextBox1->Text="0";
				 textBox1->Text="";
			    
			 }
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(richTextBox1->Text=="0")
				 richTextBox1->Text="7";
			 else if(Convert::ToString(richTextBox1->Text->EndsWith(".")))
				 richTextBox1->Text=Convert::ToString(richTextBox1->Text)+"7";
			 else if(Convert::ToString(richTextBox1->Text->EndsWith("/")) || Convert::ToString(richTextBox1->Text->EndsWith("*")))
				 richTextBox1->Text=Convert::ToString(richTextBox1->Text)+"7";
			 else if(Convert::ToDecimal(richTextBox1->Text)==result)
				 richTextBox1->Text="7";
			 else
				 richTextBox1->Text=Convert::ToString(richTextBox1->Text)+"7";
			 
		 }
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(richTextBox1->Text=="0")
				 richTextBox1->Text="8";
			 else if(Convert::ToString(richTextBox1->Text->EndsWith(".")))
				 richTextBox1->Text=Convert::ToString(richTextBox1->Text)+"8";
			 else if(Convert::ToString(richTextBox1->Text->EndsWith("/")) || Convert::ToString(richTextBox1->Text->EndsWith("*")))
				 richTextBox1->Text=Convert::ToString(richTextBox1->Text)+"8";
			 else if(Convert::ToDecimal(richTextBox1->Text)==result)
				 richTextBox1->Text="8";
			 else
				 richTextBox1->Text=Convert::ToString(richTextBox1->Text)+"8";
		 }
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(richTextBox1->Text=="0")
				 richTextBox1->Text="9";
			 else if(Convert::ToString(richTextBox1->Text->EndsWith(".")))
				 richTextBox1->Text=Convert::ToString(richTextBox1->Text)+"9";
			 else if(Convert::ToString(richTextBox1->Text->EndsWith("/")) || Convert::ToString(richTextBox1->Text->EndsWith("*")))
				 richTextBox1->Text=Convert::ToString(richTextBox1->Text)+"9";
			 else if(Convert::ToDecimal(richTextBox1->Text)==result)
				 richTextBox1->Text="9";
			 else
				 richTextBox1->Text=Convert::ToString(richTextBox1->Text)+"9";
		 }
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(richTextBox1->Text=="0")
				 richTextBox1->Text="4";
			 else if(Convert::ToString(richTextBox1->Text->EndsWith(".")))
				 richTextBox1->Text=Convert::ToString(richTextBox1->Text)+"4";
			 else if(Convert::ToString(richTextBox1->Text->EndsWith("/")) || Convert::ToString(richTextBox1->Text->EndsWith("*")))
				 richTextBox1->Text=Convert::ToString(richTextBox1->Text)+"4";
			 else if(Convert::ToDecimal(richTextBox1->Text)==result)
				 richTextBox1->Text="4";
			 else
				 richTextBox1->Text=Convert::ToString(richTextBox1->Text)+"4";
		 }
private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(richTextBox1->Text=="0")
				 richTextBox1->Text="5";
			 else if(Convert::ToString(richTextBox1->Text->EndsWith(".")))
				 richTextBox1->Text=Convert::ToString(richTextBox1->Text)+"5";
			 else if(Convert::ToString(richTextBox1->Text->EndsWith("/")) || Convert::ToString(richTextBox1->Text->EndsWith("*")))
				 richTextBox1->Text=Convert::ToString(richTextBox1->Text)+"5";
			 else if(Convert::ToDecimal(richTextBox1->Text)==result)
				 richTextBox1->Text="5";
			 else
				 richTextBox1->Text=Convert::ToString(richTextBox1->Text)+"5";
		 }
private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(richTextBox1->Text=="0")
				 richTextBox1->Text="6";
			else if(Convert::ToString(richTextBox1->Text->EndsWith(".")))
				 richTextBox1->Text=Convert::ToString(richTextBox1->Text)+"6";
			 else if(Convert::ToString(richTextBox1->Text->EndsWith("/")) || Convert::ToString(richTextBox1->Text->EndsWith("*")))
				 richTextBox1->Text=Convert::ToString(richTextBox1->Text)+"6";
			 else if(Convert::ToDecimal(richTextBox1->Text)==result)
				 richTextBox1->Text="6";
			 else
				 richTextBox1->Text=Convert::ToString(richTextBox1->Text)+"6";
		 }
private: System::Void button13_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(richTextBox1->Text=="0")
				 richTextBox1->Text="1";
			else if(Convert::ToString(richTextBox1->Text->EndsWith(".")))
				 richTextBox1->Text=Convert::ToString(richTextBox1->Text)+"1";
			 else if(Convert::ToString(richTextBox1->Text->EndsWith("/")) || Convert::ToString(richTextBox1->Text->EndsWith("*")))
				 richTextBox1->Text=Convert::ToString(richTextBox1->Text)+"1";
			 else if(Convert::ToDecimal(richTextBox1->Text)==result)
				 richTextBox1->Text="1";
			 else
				 richTextBox1->Text=Convert::ToString(richTextBox1->Text)+"1";
		 }
private: System::Void button14_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(richTextBox1->Text=="0")
				 richTextBox1->Text="2";
			 else if(Convert::ToString(richTextBox1->Text->EndsWith(".")))
				 richTextBox1->Text=Convert::ToString(richTextBox1->Text)+"2";
			 else if(Convert::ToString(richTextBox1->Text->EndsWith("/")) || Convert::ToString(richTextBox1->Text->EndsWith("*")) || Convert::ToString(richTextBox1->Text->EndsWith("^")))
				 richTextBox1->Text=Convert::ToString(richTextBox1->Text)+"2";
			 else if(Convert::ToDecimal(richTextBox1->Text)==result)
				 richTextBox1->Text="2";
			 else 
				 richTextBox1->Text=Convert::ToString(richTextBox1->Text)+"2";
		 }
private: System::Void button15_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(richTextBox1->Text=="0")
				 richTextBox1->Text="3";
			 else if(Convert::ToString(richTextBox1->Text->EndsWith(".")))
				 richTextBox1->Text=Convert::ToString(richTextBox1->Text)+"3";
			 else if(Convert::ToString(richTextBox1->Text->EndsWith("/")) || Convert::ToString(richTextBox1->Text->EndsWith("*")))
				 richTextBox1->Text=Convert::ToString(richTextBox1->Text)+"3";
			 else if(Convert::ToDecimal(richTextBox1->Text)==result)
				 richTextBox1->Text="3";
			 else
				 richTextBox1->Text=Convert::ToString(richTextBox1->Text)+"3";
		 }
private: System::Void button16_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(richTextBox1->Text=="0")
				 richTextBox1->Text="0";
			 else if(Convert::ToString(richTextBox1->Text->EndsWith(".")))
				 richTextBox1->Text=Convert::ToString(richTextBox1->Text)+"0";
			 else if(Convert::ToString(richTextBox1->Text->EndsWith("/")) || Convert::ToString(richTextBox1->Text->EndsWith("*")))
				 richTextBox1->Text=Convert::ToString(richTextBox1->Text)+"0";
			 else if(Convert::ToDecimal(richTextBox1->Text)==result)
				 richTextBox1->Text="0";
			 else 
				 richTextBox1->Text=Convert::ToString(richTextBox1->Text)+"0";
		 }
private: System::Void button19_Click(System::Object^  sender, System::EventArgs^  e) {
			 numberone=Convert::ToDecimal(richTextBox1->Text);
			 richTextBox1->Text= Convert::ToString(richTextBox1->Text)+ "+";
			 operation = '+';
		 }
private: System::Void button18_Click(System::Object^  sender, System::EventArgs^  e) {
			 richTextBox1->Text=Convert::ToString(richTextBox1->Text);
			 switch(operation)
			 {
			 case '+': found=(richTextBox1->Text)->IndexOf("+");
					   numbertwo=Convert::ToDecimal(richTextBox1->Text->Substring(found+1));
				       result=Convert::ToDecimal(numberone+numbertwo);
				       richTextBox1->Text=System::Convert::ToString(result);
					   break;
			 case '*': found=(richTextBox1->Text)->IndexOf("*");
					   numbertwo=Convert::ToDecimal(richTextBox1->Text->Substring(found+1));
				       result=Convert::ToDecimal(numberone*numbertwo);
				       richTextBox1->Text=System::Convert::ToString(result);
					   break;
			 case '-': found=(richTextBox1->Text)->IndexOf("-");
					   numbertwo=Convert::ToDecimal(richTextBox1->Text->Substring(found+1));
				       result=Convert::ToDecimal(numberone-numbertwo);
				       richTextBox1->Text=System::Convert::ToString(result);
					   break;
			 case '/': found=(richTextBox1->Text)->IndexOf("/");
					   numbertwo=Convert::ToDecimal(richTextBox1->Text->Substring(found+1));
					   if(numbertwo==0)
						   MessageBox::Show("Can't divide with 0!","Error",MessageBoxButtons::OK,MessageBoxIcon::Stop);
					   else{
				       result=System::Convert::ToDecimal(numberone/numbertwo);
				       richTextBox1->Text=System::Convert::ToString(result);
					   }
					   break;
			 case '^': found=(richTextBox1->Text)->IndexOf("^");
					   numbertwo=Convert::ToDecimal(richTextBox1->Text->Substring(found+1));
					   num1=System::Convert::ToDouble(numberone);
					   num2=System::Convert::ToDouble(numbertwo);
				       number=System::Math::Pow(num1,num2);
					   result=Convert::ToDecimal(number);
				       richTextBox1->Text=System::Convert::ToString(result);
					   break;
			 case 's': found=(richTextBox1->Text)->IndexOf("n");
				       numbertwo=Convert::ToDecimal(richTextBox1->Text->Substring(found+1));
				       num2=Convert::ToDouble(numbertwo);
					   number1=Convert::ToDouble(Math::PI*num2/180.0);
				       number=System::Math::Sin(number1);
					   result=Convert::ToDecimal(number);
					   richTextBox1->Text=System::Convert::ToString(result);
					   break;
			 case 'c': found=(richTextBox1->Text)->IndexOf("s");
				       numbertwo=Convert::ToDecimal(richTextBox1->Text->Substring(found+1));
					   num2=Convert::ToDouble(numbertwo);
					   number1=Convert::ToDouble(Math::PI*num2/180.0);
				       number=System::Math::Cos(number1);
					   result=Convert::ToDecimal(number);
					   richTextBox1->Text=System::Convert::ToString(result);
			           break;
			 case 't': found=(richTextBox1->Text)->IndexOf("g");
				       numbertwo=Convert::ToDecimal(richTextBox1->Text->Substring(found+1));
					   num2=Convert::ToDouble(numbertwo);
					   number1=Convert::ToDouble(Math::PI*num2/180.0);
				       number=System::Math::Tan(number1);
					   result=Convert::ToDecimal(number);
					   richTextBox1->Text=System::Convert::ToString(result);
			           break;
			  case'k': found=(richTextBox1->Text)->IndexOf("g");
				       numbertwo=Convert::ToDecimal(richTextBox1->Text->Substring(found+1));
					   num2=Convert::ToDouble(numbertwo);
					   number1=Convert::ToDouble(Math::PI*num2/180.0);
				       number=System::Math::Tan(number1);
					   num3=System::Convert::ToDouble(1/number);
					   result=Convert::ToDecimal(num3);
					   richTextBox1->Text=System::Convert::ToString(result);
			           break;
			 case'n':  found=(richTextBox1->Text)->IndexOf(")");
				       numbertwo=Convert::ToDecimal(richTextBox1->Text->Substring(found+1));
					   num2=Convert::ToDouble(numbertwo);
					   number=System::Math::Sin(num2);
					   result=Convert::ToDecimal(number);
					   richTextBox1->Text=System::Convert::ToString(result);
					   break;
			  case'o': found=(richTextBox1->Text)->IndexOf(")");
				       numbertwo=Convert::ToDecimal(richTextBox1->Text->Substring(found+1));
					   num2=Convert::ToDouble(numbertwo);
					   number=System::Math::Cos(num2);
					   result=Convert::ToDecimal(number);
					   richTextBox1->Text=System::Convert::ToString(result);
					   break;
			  case'r': found=(richTextBox1->Text)->IndexOf(")");
				       numbertwo=Convert::ToDecimal(richTextBox1->Text->Substring(found+1));
					   num2=Convert::ToDouble(numbertwo);
					   number=System::Math::Tan(num2);
					   result=Convert::ToDecimal(number);
					   richTextBox1->Text=System::Convert::ToString(result);
					   break;
			  case'g': found=(richTextBox1->Text)->IndexOf(")");
				       numbertwo=Convert::ToDecimal(richTextBox1->Text->Substring(found+1));
					   num2=Convert::ToDouble(numbertwo);
					   number=System::Math::Tan(num2);
					   num3=Convert::ToDouble(1/number);
					   result=Convert::ToDecimal(num3);
					   richTextBox1->Text=System::Convert::ToString(result);
					   break;
			  case'l': found=(richTextBox1->Text)->IndexOf("n");
				       numbertwo=Convert::ToDecimal(richTextBox1->Text->Substring(found+1));
				       num2=Convert::ToDouble(numbertwo);
				       number=System::Math::Log(num2);
				       result=Convert::ToDecimal(number);
				       richTextBox1->Text=System::Convert::ToString(result);

			 }
		 }
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
			 numberone=Convert::ToDecimal(richTextBox1->Text);
			 richTextBox1->Text= Convert::ToString(richTextBox1->Text)+ "*";
			 operation = '*';
		 }
private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e) {
			 numberone=Convert::ToDecimal(richTextBox1->Text);
			 num=Convert::ToString(numberone);
			 if(numberone==0 || num=="")
				 richTextBox1->Text=richTextBox1->Text->Remove(0)+"-";
			 else
			     richTextBox1->Text= Convert::ToString(richTextBox1->Text)+ "-";
			 operation = '-';
		 }
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			 numberone=Convert::ToDecimal(richTextBox1->Text);
			 richTextBox1->Text= Convert::ToString(richTextBox1->Text)+ "/";
			 operation = '/';
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 numberone=Convert::ToDecimal(richTextBox1->Text);
			 richTextBox1->Text= Convert::ToString(richTextBox1->Text)+ "^";
			 operation = '^';
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			  numberone=Convert::ToDecimal(richTextBox1->Text);
			  if(numberone<0)
				  MessageBox::Show("Can't find a square root of a negative number!","Error",MessageBoxButtons::OK,MessageBoxIcon::Stop);
			  else{
			  num1=Convert::ToDouble(numberone);
			  number=System::Math::Sqrt(num1);
		      result=Convert::ToDecimal(number);
		      richTextBox1->Text=System::Convert::ToString(result);
			  }
				 }
private: System::Void button17_Click(System::Object^  sender, System::EventArgs^  e) {
			 richTextBox1->Text=Convert::ToString(richTextBox1->Text)+ ".";
		 }
private: System::Void Form1_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {
			 if(MessageBox::Show("Exit Calculator?","Calculator down",MessageBoxButtons::YesNo,MessageBoxIcon::Question)==System::Windows::Forms::DialogResult::Yes)
				 Application::Exit();
			 else
				 e->Cancel=true;
		 }
private: System::Void Form1_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 Application::Exit();
		 }
private: System::Void button20_Click(System::Object^  sender, System::EventArgs^  e) {
                richTextBox1->Text=richTextBox1->Text->Remove(richTextBox1->Text->Length-1);
				
		 }
private: System::Void exitCalculatorToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(MessageBox::Show("Exit Calculator?","Calculator down",MessageBoxButtons::YesNo,MessageBoxIcon::Question)==System::Windows::Forms::DialogResult::Yes)
				 Application::Exit();
			 
		 }
private: System::Void aboutTheCalculatorToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 MessageBox::Show("Made by Vana Brajcic", "About Calculator",MessageBoxButtons::OK,MessageBoxIcon::Information);
			 
		 }
private: System::Void howToUseToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 MessageBox::Show("Instructions:\n\n -Just simply press the buttons or type them to the text box.\n\n -If you want an advanced calculator click the File button and then choose an option.\n\n -Hope you enjoy it :)\n","How to use",MessageBoxButtons::OK,MessageBoxIcon::Information);
		 }
private: System::Void extendedCalculatorToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 Form1::Width=471;
			 richTextBox1->Width=456;
			 panel1->Visible=false;
			 panel2->Visible=false;
			 panel3->Visible=false;
			 panel4->Visible=false;
		 }
private: System::Void basicCalculatorToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 Form1::Width=319;
			 richTextBox1->Width=304;
			 panel1->Visible=false;
			 panel2->Visible=false;
			 panel3->Visible=false;
			 panel4->Visible=false;
		 }
private: System::Void button21_Click(System::Object^  sender, System::EventArgs^  e) {
			 richTextBox1->Text=richTextBox1->Text->Remove(0) + "sin";
			 operation='s';
		 }
private: System::Void button25_Click(System::Object^  sender, System::EventArgs^  e) {
			 String^ appendText;
			 Encoding^ encoding;
			 appendText=richTextBox1->Text + Environment::NewLine;
			 File::AppendAllText("Vana.txt", appendText, Encoding::UTF8);
      
		 }

private: System::Void button24_Click(System::Object^  sender, System::EventArgs^  e) {
			 richTextBox1->Text=richTextBox1->Text->Remove(0) + "ln";
			 operation='l';
		 }

private: System::Void button22_Click(System::Object^  sender, System::EventArgs^  e) {
			 richTextBox1->Text=richTextBox1->Text->Remove(0) + "cos";
			 operation='c';
		 }
private: System::Void button23_Click(System::Object^  sender, System::EventArgs^  e) {
			 richTextBox1->Text=richTextBox1->Text->Remove(0) + "tg";
			 operation='t';
		 }
private: System::Void button29_Click(System::Object^  sender, System::EventArgs^  e) {
			 richTextBox1->Text=richTextBox1->Text->Remove(0) + "ctg";
			 operation='k';
		 }
private: System::Void button26_Click(System::Object^  sender, System::EventArgs^  e) {
			 richTextBox1->Text=richTextBox1->Text->Remove(0) + "sin(rad)";
			 operation='n';
		 }
private: System::Void button27_Click(System::Object^  sender, System::EventArgs^  e) {
             richTextBox1->Text=richTextBox1->Text->Remove(0) + "cos(rad)";
			 operation='o';
		 }
private: System::Void button28_Click(System::Object^  sender, System::EventArgs^  e) {
			 richTextBox1->Text=richTextBox1->Text->Remove(0) + "tg(rad)";
			 operation='r';
		 }
private: System::Void button30_Click(System::Object^  sender, System::EventArgs^  e) {
			 richTextBox1->Text=richTextBox1->Text->Remove(0) + "ctg(rad)";
			 operation='g';
		 }

private: System::Void kilogramsToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 Form1::Width=319;
			 richTextBox1->Width=304;
			 panel1->Visible=true;
			 panel2->Visible=false;
			 panel3->Visible=false;
			 panel4->Visible=false;
		 }

private: System::Void radinasAndDegreesToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 Form1::Width=319;
			 richTextBox1->Width=304;
			 panel2->Visible=true;
			 panel1->Visible=false;
			 panel3->Visible=false;
			 panel4->Visible=false;
		 }

private: System::Void temperatureToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 Form1::Width=319;
			 richTextBox1->Width=304;
			 panel1->Visible=false;
			 panel2->Visible=false;
			 panel3->Visible=true;
			 panel4->Visible=false;
		 }

private: System::Void button33_Click(System::Object^  sender, System::EventArgs^  e) {
			 num1=Convert::ToDouble(textBox2->Text);
			 textBox3->Text=Convert::ToString(num1*0.45359237);
		 }

private: System::Void button32_Click(System::Object^  sender, System::EventArgs^  e) {
			 num1=Convert::ToDouble(textBox3->Text);
			 textBox2->Text=Convert::ToString(num1*2.20462262);
		 }
private: System::Void label4_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void menuStrip1_ItemClicked(System::Object^  sender, System::Windows::Forms::ToolStripItemClickedEventArgs^  e) {
		 }
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void textBox4_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }

private: System::Void button35_Click(System::Object^  sender, System::EventArgs^  e) {
			 num1=Convert::ToDouble(textBox4->Text);
			 if(num1<-273.15)
				 MessageBox::Show("Doesn't exist!","Error!",MessageBoxButtons::OK,MessageBoxIcon::Stop);
			 else{
				 result=Convert::ToDecimal(num1+273.15);
				 textBox5->Text=Convert::ToString(result);
			 }
			
		 }
private: System::Void button34_Click(System::Object^  sender, System::EventArgs^  e) {
			 num1=Convert::ToDouble(textBox4->Text);
			 if(num1<-459.67)
				 MessageBox::Show("Doesn't exist!","Error!",MessageBoxButtons::OK, MessageBoxIcon::Stop);
			 else{
				 result=Convert::ToDecimal(num1*9/5+32);
			     textBox6->Text=Convert::ToString(result);
			 }
		 }
private: System::Void button36_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBox4->Text="";
			 textBox5->Text="";
			 textBox6->Text="";
		 }
private: System::Void button39_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBox7->Text=textBox7->Text+Math::PI;
		 }
private: System::Void button38_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBox7->Text="";
			 textBox1->Text="";
		 }
private: System::Void label3_Click_1(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void panel2_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
		 }
private: System::Void button37_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBox2->Text="";
			 textBox3->Text="";
		 }
private: System::Void showPreviousCalculationsToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 Form1::Width=319;
			 panel1->Visible=false;
			 panel2->Visible=false;
			 panel3->Visible=false;
			 panel4->Visible=true;
		 }
private: System::Void button40_Click(System::Object^  sender, System::EventArgs^  e) {
			 richTextBox2->LoadFile("Vana.txt", RichTextBoxStreamType::PlainText);
		 }
private: System::Void button41_Click(System::Object^  sender, System::EventArgs^  e) {
			 richTextBox2->Text="";
		 }
private: System::Void button42_Click(System::Object^  sender, System::EventArgs^  e) {
			    num1=System::Convert::ToDouble(textBox1->Text);
			    num2=Convert::ToDouble(Math::PI*num1/180.0);
			    textBox7->Text=Convert::ToString(num2);
		 }
private: System::Void button43_Click(System::Object^  sender, System::EventArgs^  e) {
            if(textBox7->Text->IndexOf("/")==16)
				 {
				   num3=Convert::ToDouble(textBox7->Text->Substring(17));
				   num1=System::Convert::ToDouble(Math::PI/num3);
				   num2=Convert::ToDouble(180.0*num1/Math::PI);
				   textBox1->Text=Convert::ToString(num2);
				 }
				 else
				 {
				   num1=Convert::ToDouble(textBox7->Text);
				   num2=Convert::ToDouble(180.0*num1/Math::PI);
				   textBox1->Text=Convert::ToString(num2);
				 }
		 }
};
}

