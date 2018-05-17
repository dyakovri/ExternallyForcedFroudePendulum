#pragma once

namespace ExternallyForcedFroudePendulum {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pictureBox1;

	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::NumericUpDown^  edit_a;

	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::NumericUpDown^  edit_k1;



	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::NumericUpDown^  edit_l;

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::NumericUpDown^  edit_m;

	private: System::Windows::Forms::Button^  StartButton;
	private: System::Windows::Forms::Button^  StopButton;









	private: System::Windows::Forms::Timer^  timer;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::NumericUpDown^  edit_k2;


	private: System::ComponentModel::IContainer^  components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->edit_a = (gcnew System::Windows::Forms::NumericUpDown());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->edit_k1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->edit_l = (gcnew System::Windows::Forms::NumericUpDown());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->edit_m = (gcnew System::Windows::Forms::NumericUpDown());
			this->StartButton = (gcnew System::Windows::Forms::Button());
			this->StopButton = (gcnew System::Windows::Forms::Button());
			this->timer = (gcnew System::Windows::Forms::Timer(this->components));
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->edit_k2 = (gcnew System::Windows::Forms::NumericUpDown());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->edit_a))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->edit_k1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->edit_l))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->edit_m))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->edit_k2))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::SystemColors::Control;
			this->pictureBox1->Location = System::Drawing::Point(523, 8);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(441, 441);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(283, 340);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(40, 13);
			this->label4->TabIndex = 7;
			this->label4->Text = L"a, рад.";
			// 
			// edit_a
			// 
			this->edit_a->DecimalPlaces = 2;
			this->edit_a->Location = System::Drawing::Point(329, 338);
			this->edit_a->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000, 0, 0, 0 });
			this->edit_a->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000, 0, 0, System::Int32::MinValue });
			this->edit_a->Name = L"edit_a";
			this->edit_a->Size = System::Drawing::Size(188, 20);
			this->edit_a->TabIndex = 6;
			this->edit_a->ThousandsSeparator = true;
			this->edit_a->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 164, 0, 0, 131072 });
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(283, 288);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(19, 13);
			this->label3->TabIndex = 5;
			this->label3->Text = L"k1";
			// 
			// edit_k1
			// 
			this->edit_k1->DecimalPlaces = 2;
			this->edit_k1->Location = System::Drawing::Point(329, 286);
			this->edit_k1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000, 0, 0, 0 });
			this->edit_k1->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000, 0, 0, System::Int32::MinValue });
			this->edit_k1->Name = L"edit_k1";
			this->edit_k1->Size = System::Drawing::Size(188, 20);
			this->edit_k1->TabIndex = 4;
			this->edit_k1->ThousandsSeparator = true;
			this->edit_k1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 8, 0, 0, 65536 });
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(5, 340);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(23, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"l, м";
			// 
			// edit_l
			// 
			this->edit_l->DecimalPlaces = 2;
			this->edit_l->Location = System::Drawing::Point(51, 338);
			this->edit_l->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000, 0, 0, 0 });
			this->edit_l->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000, 0, 0, System::Int32::MinValue });
			this->edit_l->Name = L"edit_l";
			this->edit_l->Size = System::Drawing::Size(188, 20);
			this->edit_l->TabIndex = 2;
			this->edit_l->ThousandsSeparator = true;
			this->edit_l->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 3, 0, 0, 0 });
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(5, 316);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(32, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"m, кг";
			// 
			// edit_m
			// 
			this->edit_m->DecimalPlaces = 2;
			this->edit_m->Location = System::Drawing::Point(51, 314);
			this->edit_m->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000, 0, 0, 0 });
			this->edit_m->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000, 0, 0, System::Int32::MinValue });
			this->edit_m->Name = L"edit_m";
			this->edit_m->Size = System::Drawing::Size(188, 20);
			this->edit_m->TabIndex = 0;
			this->edit_m->ThousandsSeparator = true;
			this->edit_m->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2, 0, 0, 0 });
			// 
			// StartButton
			// 
			this->StartButton->Location = System::Drawing::Point(8, 364);
			this->StartButton->Name = L"StartButton";
			this->StartButton->Size = System::Drawing::Size(231, 23);
			this->StartButton->TabIndex = 2;
			this->StartButton->Text = L"Начать";
			this->StartButton->UseVisualStyleBackColor = true;
			this->StartButton->Click += gcnew System::EventHandler(this, &MainForm::StartButton_Click);
			// 
			// StopButton
			// 
			this->StopButton->Enabled = false;
			this->StopButton->Location = System::Drawing::Point(286, 364);
			this->StopButton->Name = L"StopButton";
			this->StopButton->Size = System::Drawing::Size(231, 23);
			this->StopButton->TabIndex = 3;
			this->StopButton->Text = L"Остановить";
			this->StopButton->UseVisualStyleBackColor = true;
			this->StopButton->Click += gcnew System::EventHandler(this, &MainForm::StopButton_Click);
			// 
			// timer
			// 
			this->timer->Interval = 10;
			this->timer->Tick += gcnew System::EventHandler(this, &MainForm::timer_Tick);
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::SystemColors::Control;
			this->pictureBox2->Location = System::Drawing::Point(8, 8);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(509, 238);
			this->pictureBox2->TabIndex = 8;
			this->pictureBox2->TabStop = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(283, 314);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(19, 13);
			this->label5->TabIndex = 10;
			this->label5->Text = L"k2";
			// 
			// edit_k2
			// 
			this->edit_k2->DecimalPlaces = 2;
			this->edit_k2->Location = System::Drawing::Point(329, 312);
			this->edit_k2->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000, 0, 0, 0 });
			this->edit_k2->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000, 0, 0, System::Int32::MinValue });
			this->edit_k2->Name = L"edit_k2";
			this->edit_k2->Size = System::Drawing::Size(188, 20);
			this->edit_k2->TabIndex = 9;
			this->edit_k2->ThousandsSeparator = true;
			this->edit_k2->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 8, 0, 0, 65536 });
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(979, 457);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->edit_k2);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->edit_a);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->edit_k1);
			this->Controls->Add(this->StopButton);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->StartButton);
			this->Controls->Add(this->edit_l);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->edit_m);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"MainForm";
			this->Padding = System::Windows::Forms::Padding(5);
			this->ShowIcon = false;
			this->Text = L"Маятник Капицы";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->edit_a))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->edit_k1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->edit_l))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->edit_m))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->edit_k2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


		private:
			Pendulum *p;
			Graph ^gr1, ^gr2;


		private: System::Void StartButton_Click(System::Object^  sender, System::EventArgs^  e) {
			StartButton->Enabled = false;
			StopButton->Enabled = true;

			double m = (double)edit_m->Value;
			double l = (double)edit_l->Value;
			double k1 = (double)edit_k1->Value;
			double k2 = (double)edit_k2->Value;
			double a = (double)edit_a->Value;

			p = new Pendulum(m, l, a, k1, k2);

			gr1 = gcnew Graph(pictureBox1);
			gr2 = gcnew Graph(pictureBox2);
			gr1->SetupC("X", 10, "Y", 10);
			gr1->Clear();

			gr2->SetupL("t", 10, "a", 10);
			gr2->Clear();
			gr2->MakeGrid();

			timer->Start();
		}

		private: System::Void StopButton_Click(System::Object^  sender, System::EventArgs^  e) {
			StartButton->Enabled = true;
			StopButton->Enabled = false;
			this->timer->Stop();
		}

		private: System::Void CloseButton_Click(System::Object^  sender, System::EventArgs^  e) {
			Close();
		}

		private: System::Void timer_Tick(System::Object^  sender, System::EventArgs^  e) {
			p->Step();
			gr1->Clear();
			gr1->AddGraphDot(p->get_x(), p->get_y());
			gr2->AddGraphDot(p->get_t(), p->get_b());
		}
	};
}
