#pragma once

namespace Task2 {

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
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
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
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(25) {
				L"Вінниця", L"Дніпро", L"Донецьк", L"Житомир",
					L"Запоріжжя", L"Івано-Франківськ", L"Київ", L"Кропивницький", L"Луганськ", L"Луцьк", L"Львів", L"Миколаїв", L"Одеса", L"Полтава",
					L"Рівне", L"Суми", L"Тернопіль", L"Ужгород", L"Харків", L"Херсон", L"Хмельницький", L"Черкаси", L"Чернівці", L"Чернігів", L"Мукачево"
			});
			this->comboBox1->Location = System::Drawing::Point(64, 63);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 0;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(64, 166);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(121, 20);
			this->textBox1->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(102, 30);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(35, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Місто";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(102, 127);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(50, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Область";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->comboBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		String^ city = comboBox1->SelectedItem->ToString();
		String^ region;

		if (city == "Вінниця") {
			region = "Вінницька область";
		}
		else if (city == "Дніпро") {
			region = "Дніпропетровська область";
		}
		else if (city == "Донецьк") {
			region = "Донецька область";
		}
		if (city == "Житомир") {
			region = "Житомирська область";
		}
		else if (city == "Запоріжжя") {
			region = "Запорізька область";
		}
		else if (city == "Івано-Франківськ") {
			region = "Івано-франківська область";
		}
		if (city == "Київ") {
			region = "Київська область";
		}
		else if (city == "Кропивницький") {
			region = "Кіровоградська область";
		}
		else if (city == "Луганськ") {
			region = "Луганська область";
		}
		if (city == "Луцьк") {
			region = "Волинська область";
		}
		else if (city == "Львів") {
			region = "Львівська область";
		}
		else if (city == "Миколаїв") {
			region = "МИколаївська область";
		}
		if (city == "Одеса") {
			region = "Одеська область";
		}
		else if (city == "Полтава") {
			region = "Полтавська область";
		}
		else if (city == "Рівне") {
			region = "Рівненська область";
		}
		if (city == "Суми") {
			region = "Сумська область";
		}
		else if (city == "Тернопіль") {
			region = "Тернопільська область";
		}
		else if (city == "Ужгород") {
			region = "Закарпатська область";
		}
		if (city == "Харків") {
			region = "Харківська область";
		}
		else if (city == "Херсон") {
			region = "Херсонська область";
		}
		else if (city == "Хмельницький") {
			region = "Хмельницька область";
		}
		if (city == "Черкаси") {
			region = "Черкаська область";
		}
		else if (city == "Чернівці") {
			region = "Чернівецька область";
		}
		else if (city == "Чернігів") {
			region = "Чернігівська область";
		}
		else {
			region = "Не визначено";
		}

		textBox1->Text = region;
	}
	};
}
