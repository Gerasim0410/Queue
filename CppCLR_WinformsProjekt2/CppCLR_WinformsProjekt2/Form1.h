#pragma once
#include "Queue.h"

namespace CppCLR_WinformsProjekt {

		using namespace System;
		using namespace System::ComponentModel;
		using namespace System::Collections;
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;

		/// <summary>
		/// Сводка для Form1
		/// </summary>
		public ref class Form1 : public System::Windows::Forms::Form
		{
			int MaxSize;
			int Size;
			double p;
			double q;
			int PopCount;
			int PushCount;

			TQueue<int>* pQueue;
			int CenterX, CenterY, Width, Height;
			Graphics^ gr;
			Random^ rndl;
			Pen^ BlackPen;
			Pen^ ClearPen;

		private: System::Windows::Forms::Timer^  timer1;
		private: System::Windows::Forms::TextBox^  textBox1;
		private: System::Windows::Forms::TextBox^  textBox2;
		private: System::Windows::Forms::TextBox^  textBox3;
		private: System::Windows::Forms::TextBox^  textBox4;
		private: System::Windows::Forms::Label^  label1;
		private: System::Windows::Forms::Label^  label2;
		private: System::Windows::Forms::Label^  label3;
		private: System::Windows::Forms::Label^  label4;
		private: System::Windows::Forms::Label^  label5;
		private: System::Windows::Forms::Label^  label6;
		private: System::Windows::Forms::Label^  label7;
		private: System::Windows::Forms::Label^  label8;
		private: System::Windows::Forms::Label^  label9;
		private: System::Windows::Forms::Label^  label10;
		private: System::Windows::Forms::Label^  label11;
		private: System::Windows::Forms::Button^  button2;

		public:
			Form1(void)
			{
				InitializeComponent();
				//
				//TODO: добавьте код конструктора
				//

				gr = CreateGraphics();
				rndl = gcnew Random();

				BlackPen = gcnew Pen(Color::DodgerBlue);
				BlackPen->Width = 15.0F;
				ClearPen = gcnew Pen(Color::White);
				ClearPen->Width = 15.0F;

				CenterX = 450;
				CenterY = 100;
				Width = 300;
				Height = 300;

				PopCount = 0;
				PushCount = 0;
			}

		protected:
			/// <summary>
			/// Освободить все используемые ресурсы.
			/// </summary>
			~Form1()
			{
				if (components)
				{
					delete components;
				}
			}
		private: System::Windows::Forms::Button^  button1;
		private: System::ComponentModel::IContainer^  components;
		protected:

		private:
			/// <summary>
			/// Обязательная переменная конструктора.
			/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
			void InitializeComponent(void)
			{
				this->components = (gcnew System::ComponentModel::Container());
				this->button1 = (gcnew System::Windows::Forms::Button());
				this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
				this->textBox1 = (gcnew System::Windows::Forms::TextBox());
				this->textBox2 = (gcnew System::Windows::Forms::TextBox());
				this->textBox3 = (gcnew System::Windows::Forms::TextBox());
				this->textBox4 = (gcnew System::Windows::Forms::TextBox());
				this->label1 = (gcnew System::Windows::Forms::Label());
				this->label2 = (gcnew System::Windows::Forms::Label());
				this->label3 = (gcnew System::Windows::Forms::Label());
				this->label4 = (gcnew System::Windows::Forms::Label());
				this->button2 = (gcnew System::Windows::Forms::Button());
				this->label5 = (gcnew System::Windows::Forms::Label());
				this->label6 = (gcnew System::Windows::Forms::Label());
				this->label7 = (gcnew System::Windows::Forms::Label());
				this->label8 = (gcnew System::Windows::Forms::Label());
				this->label9 = (gcnew System::Windows::Forms::Label());
				this->label10 = (gcnew System::Windows::Forms::Label());
				this->label11 = (gcnew System::Windows::Forms::Label());
				this->SuspendLayout();
				// 
				// button1
				// 
				this->button1->Location = System::Drawing::Point(504, 22);
				this->button1->Name = L"button1";
				this->button1->Size = System::Drawing::Size(75, 23);
				this->button1->TabIndex = 0;
				this->button1->Text = L"Пуск";
				this->button1->UseVisualStyleBackColor = true;
				this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
				// 
				// timer1
				// 
				this->timer1->Interval = 85;
				this->timer1->Tick += gcnew System::EventHandler(this, &Form1::timer1_Tick);
				// 
				// textBox1
				// 
				this->textBox1->Location = System::Drawing::Point(233, 44);
				this->textBox1->Name = L"textBox1";
				this->textBox1->Size = System::Drawing::Size(100, 20);
				this->textBox1->TabIndex = 1;
				this->textBox1->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_TextChanged); \
				this->textBox1->Text = "0";
				// 
				// textBox2
				// 
				this->textBox2->Location = System::Drawing::Point(211, 73);
				this->textBox2->Name = L"textBox2";
				this->textBox2->Size = System::Drawing::Size(38, 20);
				this->textBox2->TabIndex = 2;
				this->textBox2->TextChanged += gcnew System::EventHandler(this, &Form1::textBox2_TextChanged);
				this->textBox2->Text = "0,2";
				// 
				// textBox3
				// 
				this->textBox3->Location = System::Drawing::Point(211, 100);
				this->textBox3->Name = L"textBox3";
				this->textBox3->Size = System::Drawing::Size(38, 20);
				this->textBox3->TabIndex = 3;
				this->textBox3->TextChanged += gcnew System::EventHandler(this, &Form1::textBox3_TextChanged);
				this->textBox3->Text = "0,1";
				// 
				// textBox4
				// 
				this->textBox4->Location = System::Drawing::Point(261, 12);
				this->textBox4->Name = L"textBox4";
				this->textBox4->Size = System::Drawing::Size(100, 20);
				this->textBox4->TabIndex = 4;
				this->textBox4->TextChanged += gcnew System::EventHandler(this, &Form1::textBox4_TextChanged);
				this->textBox4->Text = "12";
				// 
				// label1
				// 
				this->label1->AutoSize = true;
				this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(204)));
				this->label1->ForeColor = System::Drawing::Color::Black;
				this->label1->Location = System::Drawing::Point(-1, 9);
				this->label1->Name = L"label1";
				this->label1->Size = System::Drawing::Size(256, 20);
				this->label1->TabIndex = 5;
				this->label1->Text = L"Максимальный размер очереди:";
				// 
				// label2
				// 
				this->label2->AutoSize = true;
				this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(204)));
				this->label2->Location = System::Drawing::Point(-1, 42);
				this->label2->Name = L"label2";
				this->label2->Size = System::Drawing::Size(228, 20);
				this->label2->TabIndex = 6;
				this->label2->Text = L"Начальный размер очереди:\r\n";
				// 
				// label3
				// 
				this->label3->AutoSize = true;
				this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(204)));
				this->label3->Location = System::Drawing::Point(-1, 98);
				this->label3->Name = L"label3";
				this->label3->Size = System::Drawing::Size(203, 20);
				this->label3->TabIndex = 7;
				this->label3->Text = L"Вероятность извлечения";
				// 
				// label4
				// 
				this->label4->AutoSize = true;
				this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(204)));
				this->label4->Location = System::Drawing::Point(-1, 73);
				this->label4->Name = L"label4";
				this->label4->Size = System::Drawing::Size(206, 20);
				this->label4->TabIndex = 8;
				this->label4->Text = L"Вероятность добавления";
				// 
				// button2
				// 
				this->button2->Location = System::Drawing::Point(636, 22);
				this->button2->Name = L"button2";
				this->button2->Size = System::Drawing::Size(75, 23);
				this->button2->TabIndex = 9;
				this->button2->Text = L"Стоп";
				this->button2->UseVisualStyleBackColor = true;
				this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
				// 
				// label5
				// 
				this->label5->AutoSize = true;
				this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(204)));
				this->label5->Location = System::Drawing::Point(57, 213);
				this->label5->Name = L"label5";
				this->label5->Size = System::Drawing::Size(198, 20);
				this->label5->TabIndex = 10;
				this->label5->Text = L"Колличество дабвленых";
				// 
				// label6
				// 
				this->label6->AutoSize = true;
				this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(204)));
				this->label6->Location = System::Drawing::Point(57, 247);
				this->label6->Name = L"label6";
				this->label6->Size = System::Drawing::Size(213, 20);
				this->label6->TabIndex = 11;
				this->label6->Text = L"Колличество извлеченных\r\n";
				// 
				// label7
				// 
				this->label7->AutoSize = true;
				this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(204)));
				this->label7->Location = System::Drawing::Point(12, 374);
				this->label7->Name = L"label7";
				this->label7->Size = System::Drawing::Size(0, 20);
				this->label7->TabIndex = 12;
				// 
				// label8
				// 
				this->label8->AutoSize = true;
				this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(204)));
				this->label8->Location = System::Drawing::Point(12, 434);
				this->label8->Name = L"label8";
				this->label8->Size = System::Drawing::Size(0, 20);
				this->label8->TabIndex = 13;
				// 
				// label9
				// 
				this->label9->AutoSize = true;
				this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(204)));
				this->label9->Location = System::Drawing::Point(276, 213);
				this->label9->Name = L"label9";
				this->label9->Size = System::Drawing::Size(0, 20);
				this->label9->TabIndex = 14;
				this->label9->Click += gcnew System::EventHandler(this, &Form1::label9_Click);
				// 
				// label10
				// 
				this->label10->AutoSize = true;
				this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(204)));
				this->label10->Location = System::Drawing::Point(276, 247);
				this->label10->Name = L"label10";
				this->label10->Size = System::Drawing::Size(0, 20);
				this->label10->TabIndex = 15;
				this->label10->Click += gcnew System::EventHandler(this, &Form1::label10_Click);
				// 
				// label11
				// 
				this->label11->AutoSize = true;
				this->label11->Location = System::Drawing::Point(134, 138);
				this->label11->Name = L"label11";
				this->label11->Size = System::Drawing::Size(41, 13);
				this->label11->TabIndex = 16;
				// 
				// Form1
				// 
				this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
				this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
				this->BackColor = System::Drawing::Color::White;
				this->ClientSize = System::Drawing::Size(878, 558);
				this->Controls->Add(this->label11);
				this->Controls->Add(this->label10);
				this->Controls->Add(this->label9);
				this->Controls->Add(this->label8);
				this->Controls->Add(this->label7);
				this->Controls->Add(this->label6);
				this->Controls->Add(this->label5);
				this->Controls->Add(this->button2);
				this->Controls->Add(this->label4);
				this->Controls->Add(this->label3);
				this->Controls->Add(this->label2);
				this->Controls->Add(this->label1);
				this->Controls->Add(this->textBox4);
				this->Controls->Add(this->textBox3);
				this->Controls->Add(this->textBox2);
				this->Controls->Add(this->textBox1);
				this->Controls->Add(this->button1);
				this->Name = L"Form1";
				this->Text = L"Form1";
				this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
				this->ResumeLayout(false);
				this->PerformLayout();

			}
#pragma endregion

			void DrawQueue() {
				int start = 360 * pQueue->GetHead() / pQueue->GetMaxSize();
				int finish = 360 * (pQueue->GetSize()) / pQueue->GetMaxSize();
				gr->DrawArc(BlackPen, CenterX, CenterY, Width, Height, start, finish);
			}
			void Clean()
			{
				int start = 360 * pQueue->GetHead() / pQueue->GetMaxSize();
				int finish = 360 * (pQueue->GetSize()) / pQueue->GetMaxSize();
				gr->DrawArc(ClearPen, CenterX, CenterY, Width, Height, start, finish);
			}

		private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			try {
				MaxSize = Convert::ToInt32(textBox4->Text);
				Size = Convert::ToInt32(textBox1->Text);
				p = Convert::ToDouble(textBox2->Text);
				q = Convert::ToDouble(textBox3->Text);
				if (MaxSize == 0) { throw 1; }
				pQueue = new TQueue<int>(MaxSize);
				for (int i = 0; i < Size; i++)
				{
					pQueue->Push(i);
				}

				DrawQueue();
				timer1->Enabled = true;
			}
			catch (int) {
				label11->Text = "Заполните все поля!!!";
			}
		}
		private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
			Clean();

			if (rndl->NextDouble() < p)
			{
				if (!pQueue->Full())
				{
					pQueue->Push(1);
					PushCount++;
				}
			}
			if (rndl->NextDouble() < q)
			{
				if (!pQueue->Empty())
				{
					pQueue->Pop();
					PopCount++;
				}
			}
			DrawQueue();
			label9->Text = Convert::ToString(PushCount);
			label10->Text = Convert::ToString(PopCount);
		}
		private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		}
		private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		}
		private: System::Void textBox3_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		}
		private: System::Void textBox4_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		}
		private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			timer1->Enabled = false;
		}
		private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {

		}
		private: System::Void label9_Click(System::Object^  sender, System::EventArgs^  e) {
		}
		private: System::Void label10_Click(System::Object^  sender, System::EventArgs^  e) {
		}
		};
	}
