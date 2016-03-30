#pragma once
#using <mscorlib.dll>
#include <math.h>
namespace WinForms {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Runtime::InteropServices;
	using namespace System::Windows::Media::Imaging;

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

	private: System::Windows::Forms::Button^  BtOpenImage;
	private: System::Windows::Forms::OpenFileDialog^  openImageDialog;
	private: System::Windows::Forms::OpenFileDialog^  openMessDialog;
	private: System::Windows::Forms::Button^  BtGetMessage;
	private: System::Windows::Forms::Button^  BtOpenMessage;
	private: System::Windows::Forms::Button^  BtPutMessage;
	private: System::Windows::Forms::ComboBox^  BitCount;
	private: System::Windows::Forms::Label^  label1;


	private: System::Windows::Forms::SaveFileDialog^  saveImageDialog;
	private: System::Windows::Forms::SaveFileDialog^  saveMessDialog;
	private: System::Windows::Forms::Button^  BtSaveMessage;
	private: System::Windows::Forms::RichTextBox^  TextBox;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::PictureBox^  Picture;
	private: int bit = 1;
	private: Int16 GetMask(int);
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
			this->BtOpenImage = (gcnew System::Windows::Forms::Button());
			this->openImageDialog = (gcnew System::Windows::Forms::OpenFileDialog());
			this->openMessDialog = (gcnew System::Windows::Forms::OpenFileDialog());
			this->BtGetMessage = (gcnew System::Windows::Forms::Button());
			this->BtOpenMessage = (gcnew System::Windows::Forms::Button());
			this->BtPutMessage = (gcnew System::Windows::Forms::Button());
			this->BitCount = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->saveImageDialog = (gcnew System::Windows::Forms::SaveFileDialog());
			this->saveMessDialog = (gcnew System::Windows::Forms::SaveFileDialog());
			this->BtSaveMessage = (gcnew System::Windows::Forms::Button());
			this->TextBox = (gcnew System::Windows::Forms::RichTextBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->Picture = (gcnew System::Windows::Forms::PictureBox());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Picture))->BeginInit();
			this->SuspendLayout();
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
			this->openImageDialog->Filter = L"PNG files|*.png";
			// 
			// openMessDialog
			// 
			this->openMessDialog->Filter = L"Text files|*.txt";
			// 
			// BtGetMessage
			// 
			this->BtGetMessage->Enabled = false;
			this->BtGetMessage->Location = System::Drawing::Point(771, 314);
			this->BtGetMessage->Name = L"BtGetMessage";
			this->BtGetMessage->Size = System::Drawing::Size(135, 23);
			this->BtGetMessage->TabIndex = 3;
			this->BtGetMessage->Text = L"Найти сообщение";
			this->BtGetMessage->UseVisualStyleBackColor = true;
			this->BtGetMessage->Click += gcnew System::EventHandler(this, &MyForm::BtGetMessage_Click);
			// 
			// BtOpenMessage
			// 
			this->BtOpenMessage->Location = System::Drawing::Point(542, 314);
			this->BtOpenMessage->Name = L"BtOpenMessage";
			this->BtOpenMessage->Size = System::Drawing::Size(170, 23);
			this->BtOpenMessage->TabIndex = 4;
			this->BtOpenMessage->Text = L"Открыть сообщение из файла";
			this->BtOpenMessage->UseVisualStyleBackColor = true;
			this->BtOpenMessage->Click += gcnew System::EventHandler(this, &MyForm::BtOpenMessage_Click);
			// 
			// BtPutMessage
			// 
			this->BtPutMessage->Enabled = false;
			this->BtPutMessage->Location = System::Drawing::Point(771, 343);
			this->BtPutMessage->Name = L"BtPutMessage";
			this->BtPutMessage->Size = System::Drawing::Size(135, 23);
			this->BtPutMessage->TabIndex = 5;
			this->BtPutMessage->Text = L"Скрыть сообщение";
			this->BtPutMessage->UseVisualStyleBackColor = true;
			this->BtPutMessage->Click += gcnew System::EventHandler(this, &MyForm::BtPutMessage_Click);
			// 
			// BitCount
			// 
			this->BitCount->FormattingEnabled = true;
			this->BitCount->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"1", L"2", L"4" });
			this->BitCount->Location = System::Drawing::Point(782, 271);
			this->BitCount->Name = L"BitCount";
			this->BitCount->Size = System::Drawing::Size(121, 21);
			this->BitCount->TabIndex = 6;
			this->BitCount->Text = L"1";
			this->BitCount->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::BitCount_SelectedIndexChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(539, 274);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(224, 13);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Число используемых последних бит байта";
			// 
			// saveImageDialog
			// 
			this->saveImageDialog->Filter = L"PNG Files|*.png";
			// 
			// saveMessDialog
			// 
			this->saveMessDialog->Filter = L"Text Files|*.txt";
			// 
			// BtSaveMessage
			// 
			this->BtSaveMessage->Location = System::Drawing::Point(542, 343);
			this->BtSaveMessage->Name = L"BtSaveMessage";
			this->BtSaveMessage->Size = System::Drawing::Size(170, 23);
			this->BtSaveMessage->TabIndex = 11;
			this->BtSaveMessage->Text = L"Сохранить сообщение в файл";
			this->BtSaveMessage->UseVisualStyleBackColor = true;
			this->BtSaveMessage->Click += gcnew System::EventHandler(this, &MyForm::BtSaveMessage_Click);
			// 
			// TextBox
			// 
			this->TextBox->Location = System::Drawing::Point(542, 12);
			this->TextBox->MaxLength = 65535;
			this->TextBox->Name = L"TextBox";
			this->TextBox->Size = System::Drawing::Size(364, 240);
			this->TextBox->TabIndex = 12;
			this->TextBox->Text = L"";
			// 
			// panel1
			// 
			this->panel1->AutoScroll = true;
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->Controls->Add(this->Picture);
			this->panel1->Location = System::Drawing::Point(3, 3);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(525, 362);
			this->panel1->TabIndex = 13;
			// 
			// Picture
			// 
			this->Picture->Location = System::Drawing::Point(5, 6);
			this->Picture->Name = L"Picture";
			this->Picture->Size = System::Drawing::Size(513, 348);
			this->Picture->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->Picture->TabIndex = 0;
			this->Picture->TabStop = false;
			// 
			// MyForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->ClientSize = System::Drawing::Size(914, 401);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->TextBox);
			this->Controls->Add(this->BtSaveMessage);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->BitCount);
			this->Controls->Add(this->BtPutMessage);
			this->Controls->Add(this->BtOpenMessage);
			this->Controls->Add(this->BtGetMessage);
			this->Controls->Add(this->BtOpenImage);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"Image Steganography";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
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
	{
		BtGetMessage->Enabled = true;
		BtPutMessage->Enabled = true;
		MyForm::Picture->Load(openImageDialog->FileName);
	}
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
// Скрытие сообщения
private: System::Void BtPutMessage_Click(System::Object^  sender, System::EventArgs^  e) 
{
	Int16 clr_mask = GetMask(bit);
	String ^s = TextBox->Text;
	array<Int16> ^a = gcnew array<Int16>(s->Length);
	for (int i = 0; i < s->Length; i++)
	{
		a[i] = Convert::ToInt16(s[i]);
	}
	Bitmap ^img = gcnew Bitmap(openImageDialog->FileName);
	if (img->Height*img->Width<s->Length*(4/bit))
	{
		MessageBox::Show(this,"Размер изображения мал для скрытия данного сообщения","Ошибка",MessageBoxButtons::OK);
	}
	else
	{
		array<Color> ^p = gcnew array<Color>(3);
		array<Int16> ^x = gcnew array<Int16>(9);
		for (int i = 0; i < 3; i++)
		{
			p[i] = img->GetPixel(0,i);
			x[3*i] = p[i].R & 252;
			x[3*i+1] = p[i].G & 252;
			x[3*i+2] = p[i].B & 252;
		}
		x[0] |= BitCount->SelectedIndex;
		for (int i = 0; i < 8; i++)
		{
			x[i + 1] |= (s->Length >> (2 * i)) & 3;
		}
		for (int i = 0; i < 3; i++)
		{
			img->SetPixel(0, i, Color::FromArgb(x[3*i], x[3*i+1], x[3*i+2]));
		}
		int k = 0;
		for (int i = 0; i < img->Width*img->Height-3; i++)
		{
			k = i / (4 / bit);
			if (k >= s->Length)
				break;
			Color pixel = img->GetPixel((i+3)/img->Height, i+3);
			int r = (pixel.R & clr_mask)|(a[k]&(~clr_mask));
			a[k] >>= bit;
			int g = (pixel.G & clr_mask)|(a[k]&(~clr_mask));
			a[k] >>= bit;
			int b = (pixel.B & clr_mask)|(a[k]&(~clr_mask));
			a[k] >>= bit;
			img->SetPixel((i+3)/img->Height, i+3, Color::FromArgb(r, g, b));
		}
		saveImageDialog->ShowDialog();
		MyForm::openImageDialog->CheckFileExists = true;
		if (saveImageDialog->FileName != "")
			img->Save(saveImageDialog->FileName);
		MessageBox::Show(this, "Сообщение скрыто", "Готово", MessageBoxButtons::OK);
	}
}
private: System::Void BitCount_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	bit = 1;
	bit = bit << BitCount->SelectedIndex;
}
private: System::Void BtGetMessage_Click(System::Object^  sender, System::EventArgs^  e) {
	Bitmap ^img = gcnew Bitmap(openImageDialog->FileName);
	array<Color> ^p = gcnew array<Color>(3);
	array<Int16> ^x = gcnew array<Int16>(9);
	int msk = 4095 >> 3 * (4-bit);
	for (int i = 0; i < 3; i++)
	{
		p[i] = img->GetPixel(0, i);
		x[3 * i] = p[i].R & 3;
		x[3 * i + 1] = p[i].G & 3;
		x[3 * i + 2] = p[i].B & 3;
	}
	int bit = 1 << x[0];
	int len = 0;
	int k = 0;
	for (int i = 8; i > 0; i--)
	{
		len |= x[i]<<2*(i-1);
	}
	array<Int16> ^a = gcnew array<Int16>(len);
	int mask = GetMask(bit);
	for (int i = 0; i < img->Width*img->Height - 3; i++)
	{
		k = i / (4 / bit);
		if (k >= len)
			break;
		Color pixel = img->GetPixel((i + 3) / img->Height, i + 3);
		int d = 0;
		int r = (pixel.B & ~mask);
		d |= r;
		d <<= bit;
		int g = (pixel.G & ~mask);
		d |= g;
		d <<= bit;
		int b = (pixel.R & ~mask);
		d |= b;
		int shift = 3 * bit*(i % (4 / bit));
		a[k] |= d << shift;
		if (i%(4/bit)==4/bit-1)
		{
			TextBox->AppendText(((wchar_t)(Convert::ToInt16(a[k]))).ToString());
		}
	}
	MessageBox::Show(this, "Сообщение скрыто", "Готово", MessageBoxButtons::OK);
}
};
}
