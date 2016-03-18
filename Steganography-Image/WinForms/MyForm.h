#pragma once

namespace WinForms {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Runtime::InteropServices;

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

	protected:
	private: System::Windows::Forms::PictureBox^  Picture;
	private: System::Windows::Forms::Button^  BtOpenImage;
	private: System::Windows::Forms::OpenFileDialog^  openImageDialog;
	private: System::Windows::Forms::OpenFileDialog^  openMessDialog;
	private: System::Windows::Forms::Button^  BtGetMessage;
	private: System::Windows::Forms::Button^  BtOpenMessage;
	private: System::Windows::Forms::Button^  BtPutMessage;
	private: System::Windows::Forms::ComboBox^  BitCount;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  OffsetByte;
	private: System::Windows::Forms::SaveFileDialog^  saveImageDialog;
	private: System::Windows::Forms::SaveFileDialog^  saveMessDialog;
	private: System::Windows::Forms::Button^  BtSaveMessage;
	private: System::Windows::Forms::RichTextBox^  TextBox;







	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора - не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->Picture = (gcnew System::Windows::Forms::PictureBox());
			this->BtOpenImage = (gcnew System::Windows::Forms::Button());
			this->openImageDialog = (gcnew System::Windows::Forms::OpenFileDialog());
			this->openMessDialog = (gcnew System::Windows::Forms::OpenFileDialog());
			this->BtGetMessage = (gcnew System::Windows::Forms::Button());
			this->BtOpenMessage = (gcnew System::Windows::Forms::Button());
			this->BtPutMessage = (gcnew System::Windows::Forms::Button());
			this->BitCount = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->OffsetByte = (gcnew System::Windows::Forms::TextBox());
			this->saveImageDialog = (gcnew System::Windows::Forms::SaveFileDialog());
			this->saveMessDialog = (gcnew System::Windows::Forms::SaveFileDialog());
			this->BtSaveMessage = (gcnew System::Windows::Forms::Button());
			this->TextBox = (gcnew System::Windows::Forms::RichTextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Picture))->BeginInit();
			this->SuspendLayout();
			// 
			// Picture
			// 
			this->Picture->Location = System::Drawing::Point(12, 12);
			this->Picture->Name = L"Picture";
			this->Picture->Size = System::Drawing::Size(507, 353);
			this->Picture->TabIndex = 1;
			this->Picture->TabStop = false;
			// 
			// BtOpenImage
			// 
			this->BtOpenImage->Location = System::Drawing::Point(12, 371);
			this->BtOpenImage->Name = L"BtOpenImage";
			this->BtOpenImage->Size = System::Drawing::Size(132, 23);
			this->BtOpenImage->TabIndex = 2;
			this->BtOpenImage->Text = L"Открыть изображение";
			this->BtOpenImage->UseVisualStyleBackColor = true;
			this->BtOpenImage->Click += gcnew System::EventHandler(this, &MyForm::BtOpenImage_Click);
			// 
			// openImageDialog
			// 
			this->openImageDialog->Filter = L"JPEG files|*.jpg";
			// 
			// openMessDialog
			// 
			this->openMessDialog->Filter = L"Text files|*.txt";
			// 
			// BtGetMessage
			// 
			this->BtGetMessage->Location = System::Drawing::Point(766, 342);
			this->BtGetMessage->Name = L"BtGetMessage";
			this->BtGetMessage->Size = System::Drawing::Size(135, 23);
			this->BtGetMessage->TabIndex = 3;
			this->BtGetMessage->Text = L"Получить сообщение";
			this->BtGetMessage->UseVisualStyleBackColor = true;
			// 
			// BtOpenMessage
			// 
			this->BtOpenMessage->Location = System::Drawing::Point(537, 342);
			this->BtOpenMessage->Name = L"BtOpenMessage";
			this->BtOpenMessage->Size = System::Drawing::Size(170, 23);
			this->BtOpenMessage->TabIndex = 4;
			this->BtOpenMessage->Text = L"Открыть сообщение из файла";
			this->BtOpenMessage->UseVisualStyleBackColor = true;
			this->BtOpenMessage->Click += gcnew System::EventHandler(this, &MyForm::BtOpenMessage_Click);
			// 
			// BtPutMessage
			// 
			this->BtPutMessage->Location = System::Drawing::Point(766, 371);
			this->BtPutMessage->Name = L"BtPutMessage";
			this->BtPutMessage->Size = System::Drawing::Size(135, 23);
			this->BtPutMessage->TabIndex = 5;
			this->BtPutMessage->Text = L"Поместить сообщение";
			this->BtPutMessage->UseVisualStyleBackColor = true;
			this->BtPutMessage->Click += gcnew System::EventHandler(this, &MyForm::BtPutMessage_Click);
			// 
			// BitCount
			// 
			this->BitCount->FormattingEnabled = true;
			this->BitCount->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"1", L"2", L"4" });
			this->BitCount->Location = System::Drawing::Point(777, 271);
			this->BitCount->Name = L"BitCount";
			this->BitCount->Size = System::Drawing::Size(121, 21);
			this->BitCount->TabIndex = 6;
			this->BitCount->Text = L"1";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(534, 274);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(224, 13);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Число используемых последних бит байта";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(534, 307);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(143, 13);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Величина смещения (байт)";
			// 
			// OffsetByte
			// 
			this->OffsetByte->Location = System::Drawing::Point(777, 304);
			this->OffsetByte->MaxLength = 2;
			this->OffsetByte->Name = L"OffsetByte";
			this->OffsetByte->Size = System::Drawing::Size(121, 20);
			this->OffsetByte->TabIndex = 9;
			this->OffsetByte->Text = L"1";
			// 
			// BtSaveMessage
			// 
			this->BtSaveMessage->Location = System::Drawing::Point(537, 371);
			this->BtSaveMessage->Name = L"BtSaveMessage";
			this->BtSaveMessage->Size = System::Drawing::Size(170, 23);
			this->BtSaveMessage->TabIndex = 11;
			this->BtSaveMessage->Text = L"Сохранить сообщение в файл";
			this->BtSaveMessage->UseVisualStyleBackColor = true;
			this->BtSaveMessage->Click += gcnew System::EventHandler(this, &MyForm::BtSaveMessage_Click);
			// 
			// TextBox
			// 
			this->TextBox->Location = System::Drawing::Point(537, 12);
			this->TextBox->Name = L"TextBox";
			this->TextBox->Size = System::Drawing::Size(364, 240);
			this->TextBox->TabIndex = 12;
			this->TextBox->Text = L"";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(913, 401);
			this->Controls->Add(this->TextBox);
			this->Controls->Add(this->BtSaveMessage);
			this->Controls->Add(this->OffsetByte);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->BitCount);
			this->Controls->Add(this->BtPutMessage);
			this->Controls->Add(this->BtOpenMessage);
			this->Controls->Add(this->BtGetMessage);
			this->Controls->Add(this->BtOpenImage);
			this->Controls->Add(this->Picture);
			this->Name = L"MyForm";
			this->Text = L"Image Steganography";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Picture))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		// Открытие изображения
	private: System::Void BtOpenImage_Click(System::Object^  sender, System::EventArgs^  e) {
		MyForm::openImageDialog->ShowDialog();
		MyForm::openImageDialog->CheckFileExists = true;
		if (MyForm::openImageDialog->FileName != "")
			MyForm::Picture->Load(openImageDialog->FileName);
	}
			 // Открытие файла сообщения
	private: System::Void BtOpenMessage_Click(System::Object^  sender, System::EventArgs^  e) {
		MyForm::openMessDialog->ShowDialog();
		if (MyForm::openMessDialog->FileName != "")
		{
			StreamReader^ din = File::OpenText(openMessDialog->FileName);
			String^ str;
			TextBox->Clear();
			while ((str = din->ReadLine()) != nullptr)
			{
				MyForm::TextBox->AppendText(str + "\n");
			}
			din->Close();
		}
	}
			 // Сохранение сообщения в файл 
	private: System::Void BtSaveMessage_Click(System::Object^  sender, System::EventArgs^  e) {
		MyForm::saveMessDialog->ShowDialog();
		if (MyForm::openMessDialog->FileName != "")
		{
			StreamWriter^ sw = gcnew StreamWriter(openMessDialog->FileName);
			for (int i = 0; i < TextBox->Lines->Length; i++)
			{
				sw->WriteLine(MyForm::TextBox->Lines[i]);
			}
			sw->Close();
		}
	}
			 // Окрытие изображения
	private: System::Void BtPutMessage_Click(System::Object^  sender, System::EventArgs^  e) {
		for (int i = 0; i < TextBox->Lines->Length; i++)
		{
			String ^str = TextBox->Lines[0]->ToString();
			for (int j = 0; j < str->Length; j++)
			{
				array<Int32> ^a = gcnew array<Int32>(1);
				a[0] = Convert::ToInt16(str[j]);
				BitArray ^bits = gcnew BitArray(a);
				/* //bits->int
				bits->Set(0, 0);
				bits->CopyTo(a, 0);
				TextBox->AppendText(((wchar_t)(Convert::ToInt16(a[0]))).ToString());
				*/
			}
		}
	}
	};
}
