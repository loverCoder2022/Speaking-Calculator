
#pragma once
#include "Header1.h"
namespace project 
{

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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

	protected: 
	private: System::Windows::Forms::Button^  button1;






	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  Fnumber;
	private: System::Windows::Forms::Label^  operation;

	private: System::Windows::Forms::Label^  Snumber;
	private: System::Windows::Forms::Label^  result;
	private: System::Windows::Forms::CheckBox^  Fine;
	private: System::Windows::Forms::CheckBox^  checkop;
	private: System::Windows::Forms::CheckBox^  Scheck;
	private: System::Windows::Forms::Button^  reset;




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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->Fnumber = (gcnew System::Windows::Forms::Label());
			this->operation = (gcnew System::Windows::Forms::Label());
			this->Snumber = (gcnew System::Windows::Forms::Label());
			this->result = (gcnew System::Windows::Forms::Label());
			this->Fine = (gcnew System::Windows::Forms::CheckBox());
			this->checkop = (gcnew System::Windows::Forms::CheckBox());
			this->Scheck = (gcnew System::Windows::Forms::CheckBox());
			this->reset = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::HotTrack;
			this->button1->Location = System::Drawing::Point(69, 211);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(159, 96);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Recording";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(100, 20);
			this->label1->TabIndex = 6;
			this->label1->Text = L"First Number";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->label2->Location = System::Drawing::Point(285, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(124, 20);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Second Number";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->label3->Location = System::Drawing::Point(164, 9);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(74, 20);
			this->label3->TabIndex = 8;
			this->label3->Text = L" Oeration";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->label4->Location = System::Drawing::Point(456, 9);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(55, 20);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Result";
			this->label4->Click += gcnew System::EventHandler(this, &Form1::label4_Click);
			// 
			// Fnumber
			// 
			this->Fnumber->BackColor = System::Drawing::Color::White;
			this->Fnumber->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->Fnumber->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Fnumber->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->Fnumber->Location = System::Drawing::Point(12, 61);
			this->Fnumber->Name = L"Fnumber";
			this->Fnumber->Size = System::Drawing::Size(80, 85);
			this->Fnumber->TabIndex = 10;
			this->Fnumber->Text = L"0";
			this->Fnumber->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// operation
			// 
			this->operation->BackColor = System::Drawing::Color::White;
			this->operation->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->operation->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->operation->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->operation->Location = System::Drawing::Point(158, 61);
			this->operation->Name = L"operation";
			this->operation->Size = System::Drawing::Size(80, 85);
			this->operation->TabIndex = 11;
			this->operation->Text = L"0";
			this->operation->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->operation->Click += gcnew System::EventHandler(this, &Form1::label5_Click);
			// 
			// Snumber
			// 
			this->Snumber->BackColor = System::Drawing::Color::White;
			this->Snumber->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->Snumber->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Snumber->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->Snumber->Location = System::Drawing::Point(311, 61);
			this->Snumber->Name = L"Snumber";
			this->Snumber->Size = System::Drawing::Size(80, 85);
			this->Snumber->TabIndex = 12;
			this->Snumber->Text = L"0";
			this->Snumber->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// result
			// 
			this->result->BackColor = System::Drawing::Color::White;
			this->result->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->result->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->result->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->result->Location = System::Drawing::Point(440, 61);
			this->result->Name = L"result";
			this->result->Size = System::Drawing::Size(80, 85);
			this->result->TabIndex = 13;
			this->result->Text = L"0";
			this->result->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// Fine
			// 
			this->Fine->AutoSize = true;
			this->Fine->Location = System::Drawing::Point(12, 178);
			this->Fine->Name = L"Fine";
			this->Fine->Size = System::Drawing::Size(66, 24);
			this->Fine->TabIndex = 14;
			this->Fine->Text = L"Fine";
			this->Fine->UseVisualStyleBackColor = true;
			this->Fine->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox1_CheckedChanged);
			// 
			// checkop
			// 
			this->checkop->AutoSize = true;
			this->checkop->Location = System::Drawing::Point(146, 178);
			this->checkop->Name = L"checkop";
			this->checkop->Size = System::Drawing::Size(66, 24);
			this->checkop->TabIndex = 15;
			this->checkop->Text = L"Fine";
			this->checkop->UseVisualStyleBackColor = true;
			// 
			// Scheck
			// 
			this->Scheck->AutoSize = true;
			this->Scheck->Location = System::Drawing::Point(311, 178);
			this->Scheck->Name = L"Scheck";
			this->Scheck->Size = System::Drawing::Size(66, 24);
			this->Scheck->TabIndex = 16;
			this->Scheck->Text = L"Fine";
			this->Scheck->UseVisualStyleBackColor = true;
			this->Scheck->CheckedChanged += gcnew System::EventHandler(this, &Form1::Scheck_CheckedChanged);
			// 
			// reset
			// 
			this->reset->BackColor = System::Drawing::SystemColors::HotTrack;
			this->reset->Location = System::Drawing::Point(333, 211);
			this->reset->Name = L"reset";
			this->reset->Size = System::Drawing::Size(159, 96);
			this->reset->TabIndex = 17;
			this->reset->Text = L"Reset";
			this->reset->UseVisualStyleBackColor = false;
			this->reset->Click += gcnew System::EventHandler(this, &Form1::reset_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(541, 358);
			this->Controls->Add(this->reset);
			this->Controls->Add(this->Scheck);
			this->Controls->Add(this->checkop);
			this->Controls->Add(this->Fine);
			this->Controls->Add(this->result);
			this->Controls->Add(this->Snumber);
			this->Controls->Add(this->operation);
			this->Controls->Add(this->Fnumber);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Name = L"Form1";
			this->Text = L"   ";
			this->ResumeLayout(false);
			this->PerformLayout();

		}

 void initilization_by_zero()
{
 
   for(int i=0;i<100000;i++)  
   {
      Normalized_array[i]=0;
   }


   for(int i=0;i<T;i++)
   {
     for(int j=0;j<FRAMESIZE;j++)
	 {
       frame_data[i][j]=0;
	   frame[j]=0;
	 }
   }


   for(int i=0;i<T;i++)
	{
	  for(int j=0;j<12;j++)
		{
		  cps[i][j]=0;
		}
   }

   for(int i=0;i<32;i++)
	{
	  for(int j=0;j<12;j++)
		{
		  LBG_codebook[i][j]=0;
		}
	}
}

//***************************************************************** noramlization *********************************************
void data_normalize(FILE *file)
{
    char line[100];
	int sample_count=0;
	double dc_shift=0;
	double max=0;
	int num=0;
	frame_count=0;
	
	/*for(int i=0;i<5;i++)// skip initial 5 line from test file
	{
	  fgets(line ,100,file);
	}*/
   for(int i=0;i<8200;i++)// skip initial 5 line from test file
	{
	  fgets(line ,100,file);
	}
    while(!feof(file))//read each sample from text file
	{
	    fscanf(file,"%d",&num);
	    dc_shift +=num;
	    Normalized_array[sample_count++]=num;
	    if(abs(num)>max)// find maximum energy
	    {
		   max=abs(num);
	    }
	}
   dc_shift=dc_shift/sample_count;// dc-shift calculate
   frame_count=floor(sample_count/FRAMESIZE*1.0);// # of frames
     
	for(int i=0;i<sample_count;i++)// normalized data store into normalized_array array
	{
       Normalized_array[i]=(Normalized_array[i]-dc_shift)*NORMALIZE/max*1.0;
	} 
}

void calculate_frames(int frames)// skip some initial frames and store all frame into frame_data array
{

 
  int pos=0,slide_window=0;
  // some starting frame skip
  pos=FRAMESIZE*SKIP_FRAME;
  
  int back_position=FRAMESIZE-slide_window;
  for(int i=0;i<T;i++)//store all usable frames into frame_data array
  {
   for(int j=0;j<FRAMESIZE;j++)
   {
     frame_data[i][j]=Normalized_array[pos++];
   }
  // pos=pos-back_position;
  }
}

// calculate cepstral coefficients 
void cepstralcoefficients()
{
	  q=P;
       for(int i=0;i<=P;i++)
	   {
	     C[i]=0;
	   }
	   double sigma=R[0];
	   int m=0;
	   C[0]=log10(sigma*sigma);
       for(m=1;m<=P;m++)
	    {
	       double  sum=0;
	       for(int k=1;k<=m-1;k++)
		       sum +=k*C[k]*A[m-k]/m;
	       C[m]=A[m]+sum;
	    }

	   if(m>P)  
	   {
		for(;m<=q;m++)
		{
			long double sum=0;
			for(int j=m-P;j<=m-1;j++)
				sum+=j*C[j]*A[m-j]/m;
			C[m]=sum;
		}
	}
	  // raised sine window
	  
	    for(int j=1; j<=P; j++)
		 {
			C[j] *= 1+(P*1.0/2)*sin(3.14*j/P);

		 }

	     for(int j=1;j<=q;j++)// store cp into cp.test file
		 {
			fprintf(cp,"%g ",C[j]);
		 }
		 fprintf(cp,"\n");

}

// calulate A's value
void durbin()
{
  
	double E_array[P+1],K_array[P+1],alpha_array[P+1][P+1]={{0}};
	         for(int i=0;i<=P;i++)
			 {
			   E_array[i]=0;
               K_array[i]=0;
			   A[i]=0;
			 }
		     E_array[0]=R[0];
		    for(int i=1;i<=P;i++)
		     {   
		         double sum=0;
			      for(int j=1;j<=i-1;j++)
			           sum+=alpha_array[i-1][j]* R[i-j];
		           K_array[i]=(R[i]-sum)/E_array[i-1];
 		           alpha_array[i][i]=K_array[i];
		           for(int j=1;j<=i-1;j++)
		           {
		             alpha_array[i][j]=alpha_array[i -1][j]-(K_array[i]*alpha_array[i-1][i-j]);
		  
		           }
		           E_array[i]=(1-K_array[i]*K_array[i])*E_array[i-1];
               } 

		      for(int i=1;i<=P;i++)
		       {
			      A[i]=alpha_array[P][i];
		       }
			 cepstralcoefficients();
}

// calulate R's value
void AutoCorrelation() //calculate the auto correlation
{        
	     
	     for(int i=0;i<=P;i++)
		 {
		   R[i]=0;
		 }
		  for(int i=0;i<=P;i++)
		  {
		     for(int j=0;j<FRAMESIZE-1-i;j++)
			 {
			   R[i]+= frame[j]*frame[j+i];
			  
			 }
		  }
 
        
	durbin();  
}

// calculate cofficient for each frame
void calculate_cofficient()
{

  for(int i=0;i<T;i++)
  { 
    for(int j=0;j<FRAMESIZE;j++)
	{
	  frame[j]=frame_data[i][j];
	}
	//printf("\n\n");
	AutoCorrelation();
	for(int k=0;k<FRAMESIZE;k++)
		frame[k]=0;
  }
}

// calculate observation sequence using cp.test file
void observation_sequnce()
{
   long double min=0;
   int index=0;
   long double dis=0;// store sum of distance
   for (int i= 0; i<T; i++)
	{
		min = 1999999999.0; //reset the minimum
		index=0;
		//find out the tokhura distances from each vector in the codebook
		for (int j = 0;j<32; j++) //for each vector in the codebook
		{
		    dis=0;	 
			for (int k = 0; k <P; k++) //for each p value
			{
				dis+= tokhuraWeight[k]*(cps[i][k]-LBG_codebook[j][k])*(cps[i][k]-LBG_codebook[j][k]); //find out the distance
			}
			if(dis<min)
			{
			  min=dis;
			  index=j;
			}
		}
      fprintf(ob_file,"%d ",index+1);// store observation sequence in a file
   }
   fprintf(ob_file,"\n");

}

// read codebook and cp file
void read_cp_file()
{
   FILE *cp,*codebook;
   cp=fopen(fp,"r");
   codebook=fopen("../input 2/codebook/codebook.txt","r+");
   // read cp file and store in a cps array
   if(cp==NULL)
		{
			printf("sorry  File not opened");
		}
		else
		{ 
           long double num=0;
		    for(int i=0;i<T;i++)
			{
			  for(int j=0;j<12;j++)
			  { 
				num=0;
                fscanf(cp,"%Lf",&num);
			    cps[i][j]=num;
			  }
			}
	    }

   // codebook read and store in a LBG_codebook array
	if(codebook==NULL)
		{
		  printf("sorry File not opened");
		}
		else
		{ 
           long double num=0;
		    for(int i=0;i<32;i++)
			{
			  for(int j=0;j<12;j++)
			  { 
                num=0;
                fscanf(codebook,"%Lf",&num);
			    LBG_codebook[i][j]=num;
			  }
			}
	    }
		fclose(cp);// close file
		fclose(codebook);//close file

}
// solution of problem no - 1 (Forword procedure)
void forword_probabiltiy(int ob,int number)// compute elpha array 
{   
	//initialization
	long double probability=0;
	long double sum=0;
	for(int i=1;i<=N;i++) 
	{
	  alpha_array[1][i]=pi_array[i]*b_array[i][observation_sequences_array[ob][1]];
	}
     
	//induction
    for(int t=1;t<=T-1;t++) 
    {
        for(int j=1;j<=N;j++)
        {
           sum=0;
		 
            for(int i=1;i<=N;i++) 
            {
                sum+=alpha_array[t][i]*a_array[i][j];
            }
			alpha_array[t+1][j]=sum*b_array[j][observation_sequences_array[ob][t+1]];
        }
    }

   for(int i=1;i<=N;i++)  //compute probability
	{
        probability+=alpha_array[T][i];
	}
     
     all_digit_prob[number]=probability;
 
}
// read file for training case
void read_files(char ch,int num)
{    
        FILE *a_file;
        FILE *b_file;
        FILE *pi_file;
        FILE *ob_file;
	 
       if(ch=='t')// testing file read
		{
	      a_file=fopen(a_test_path,"r+");
		  b_file=fopen(b_test_path,"r+"); 
		  pi_file=fopen(pi_test_path,"r+");
		}

		ob_file=fopen(ob_path,"r+");// observation file store
		 

		if(a_file==NULL && pi_file==NULL)
		{
			printf("sorry File not opened");
		}
		else
		{ 
          int value=0;
		  for(int i=1;i<=N;i++)
		  {
		    fscanf(pi_file,"%d",&value);
			pi_array[i]=value;
		  }
         // a_array filled by A_1 file
			long double num=0;
		    for(int i=1;i<=N;i++)
			{
			  for(int j=1;j<=N;j++)
			  { 
				num=0;
                fscanf(a_file,"%Lf",&num);
			    a_array[i][j]=num;
			  }
			}
		}
		 
		// B_1 file read and store into a b_array array
		if(b_file ==NULL)
		{
			printf("sorry File not opened");
		}
		else
		{
		   long double num=0;
		   for(int i=1;i<=N;i++)
			{
			  for(int j=1;j<=M;j++)
			  { 
				num=0;
                fscanf(b_file,"%Le",&num);
			    b_array[i][j]=num;
			  }
			}
		 }

		// observation file read and stor into a observation_sequences_array array
		if(ob_file==NULL)
		{
			printf("sorry File not opened");
		}
		else
		{
            int num=0;
		    for(int i=1;i<=1;i++)
			{
			  for(int j=1;j<=T;j++)
			  { 
				num=0;
                fscanf(ob_file,"%d",&num);
			    observation_sequences_array[i][j]=num;
			  }
			}
		  }
    
		  fclose(a_file);
		  fclose(b_file);
		  fclose(pi_file);
		  fclose(ob_file);
}

  int word_recognize()
   {
   
	 int index=-1;
	 int ob=1;

	  for(int k=0;k<14;k++)// inilization
		   all_digit_prob[k]=0;

	   sprintf(ob_path,"obs_seq.txt");

      for(int digit=0; digit <= 13; digit++)// 0-9 digit
	    {
          sprintf(a_test_path,"../input 2/Digit %d/A_%d.txt",digit,digit);
		  sprintf(b_test_path,"../input 2/Digit %d/B_%d.txt",digit,digit);
		  sprintf(pi_test_path,"../input 2/Digit %d/Pi_%d.txt",digit,digit);
          read_files('t',digit);
	      forword_probabiltiy(ob,digit);// forword procedure
	    }
	   long double max=0;

	   for(int i=0;i<=13;i++)//find maximun
	   { 
	     if(all_digit_prob[i]>max)
		 {
		    max=all_digit_prob[i];
			index=i;
		 }
	   }

 
	   return index;
 }


		int live_testing()
        { 
		   char fb[100];
	       int ch,num=0;
           system("C:\\Recording_Module.exe 3 live.wav live.txt"); 
			FILE *file;				
			sprintf(fp, "cp.txt");
			file=fopen("live.txt","r+");
			cp=fopen(fp,"w+");
			ob_file=fopen("obs_seq.txt","w+");
			if(file==NULL&&cp==NULL)
			{
				printf("sorry File not opened");
				return 0;
			}
			else//genrate observation sequence
			 {  
				 initilization_by_zero(); 
				 data_normalize(file);
				 calculate_frames(frame_count);
				 calculate_cofficient();
				 fclose(cp);
				 read_cp_file();
				 observation_sequnce();
				 fclose(ob_file);
				 fclose(file);
			 }
			return word_recognize();
			//return 1;
        }
#pragma endregion
 
   
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				 
                 if(recording==3)
				 {  
                    if(Fine->Checked==false)
					{
					   
					   first=live_testing();
				       Fnumber->Text=System::Convert::ToString(first);
					}
					else
					{
					   recording--;
					   	
					}
				}
				 if(recording==2)
				 {
					 if(checkop->Checked==false)
					{
						operations=live_testing();

						if(operations==10)
							 operation->Text=System::Convert::ToString("+");
						if(operations==11)
							  operation->Text=System::Convert::ToString("-");
						if(operations==12)
							  operation->Text=System::Convert::ToString("X");
						if(operations==13)
							  operation->Text=System::Convert::ToString("/");

					   
				 
					}
					else
					{
					   recording--;
					   	
					}
				 }
				  if(recording==1)
				 {
					 if(Scheck->Checked==false)
					{
					   second=live_testing();
				       Snumber->Text=System::Convert::ToString(second);
					}
					else
					{
					   recording=-1;
					   	
					}
				 }
				  
			 }
	 

private: System::Void label4_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
		 }
private: System::Void label5_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
		 }
private: System::Void checkBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) 
		 {

		 }
private: System::Void Scheck_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 if(Scheck->Checked==true)
			 {
			   
			            if(operations==10)
							results=first+second;
						if(operations==11)
							  results=first-second;
						if(operations==12)
							 results=first*second;
						if(operations==13)
							 results=first/second;
				       results=first+second;
			   result->Text=System::Convert::ToString(results);
			   results=0;
			   operations=0;
			 }
		 }
private: System::Void reset_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			   Scheck->Checked=false;
			   checkop->Checked=false;
			   Fine->Checked=false;
			   result->Text="0";
               Fnumber->Text="0";
			   Snumber->Text="0";
			   operation->Text="0";
			   recording=3;
		 }
};
}


