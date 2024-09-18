

namespace PR1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListBox^ listBox1;
	protected:


	protected:







	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->SuspendLayout();
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 16;
			this->listBox1->Items->AddRange(gcnew cli::array< System::Object^  >(7) {
				L"Пряма", L"Прямокутник", L"Заф. приямокутник",
					L"Еліпс", L"Заф. еліпс", L"Сегмент", L"Зірка"
			});
			this->listBox1->Location = System::Drawing::Point(12, 12);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(145, 132);
			this->listBox1->TabIndex = 0;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::listBox1_SelectedIndexChanged);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(718, 500);
			this->Controls->Add(this->listBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		Graphics^ graf = CreateGraphics();

		Pen^ pn = gcnew System::Drawing::Pen(Color::Black, 2); 

		Brush^ br = gcnew System::Drawing::SolidBrush(Color::Blue);

		graf->Clear(SystemColors::Control);

		array<Point>^ p;
		p = gcnew array<Point>(11);
		p[0].X = 250; p[0].Y = 30;
		p[1].X = 210; p[1].Y = 120;
		p[2].X = 100; p[2].Y = 140;
		p[3].X = 180; p[3].Y = 200;
		p[4].X = 150; p[4].Y = 300;
		p[5].X = 250; p[5].Y = 250;
		p[6].X = 350; p[6].Y = 300;
		p[7].X = 320; p[7].Y = 200;
		p[8].X = 400; p[8].Y = 150;
		p[9].X = 300; p[9].Y = 120;
		p[10].X = 250; p[10].Y = 30;

		switch (listBox1->SelectedIndex)
		{
		case 0:graf->DrawLine(pn, 150, 40, 360, 180); break;
		case 1:graf->DrawRectangle(pn, 150, 30, 300, 110); break;
		case 2:graf->FillRectangle(br, 150, 30, 300, 110); break;
		case 3:graf->DrawEllipse(pn, 150, 30, 300, 110); break;
		case 4:graf->FillEllipse(br, 150, 30, 300, 110); break;
		case 5:graf->FillPie(br, 150, 30, 300, 110, 50, 230); break;
		case 6:graf->FillPolygon(br, p); break;
		}

	}
	};
}
