#include "stdafx.h"
#include <stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
#include <math.h>
#include<conio.h>
#include<limits.h>
#define N 5// no of states
#define M 32// size of the codebook
#define T 85// size of the observation sequeneces
#define P 12 
#define FRAMESIZE 320// frame size
#define SKIP_FRAME 2// starting and ending 27 frame skip
#define NORMALIZE 5000 //normalize parameter
#define cbsize 32;// codebook size
#define cepsize 12;// cepestral cofficient size
int first=0;
int second=0;
double results=0;
int recording=3; 
int operations=0;
int pi_array[N+1];//Pi value store
int count;
int frame_count;
int q=0;
int observation_sequences_array[2][T+1];//all observation store 
long length=0;
double A[P+1],C[P+1],R[P+1];// 
long double Normalized_array[100000];//normalized data store
long double frame_data[T][FRAMESIZE];// store all frames 
long double frame[FRAMESIZE];//store one  frame samples at a time
long double cps[T][12];//
long double LBG_codebook[32][12];
long double a_array[N+1][N+1];
 long double b_array[N+1][M+1];
 long double alpha_array[T+1][N+1];
long double beta_array[T+1][N+1];
 
long double all_digit_prob[14];// store all digit probability for digit recognization
long double prob;
long double tokhuraWeight[12] = {1.0, 3.0, 7.0, 13.0, 19.0, 22.0, 25.0, 33.0, 42.0, 50.0, 56.0, 61.0}; //tokhura weights
char fp[100],f_path[100],a_file_path[100],b_file_path[100],final_output_path[100],f_b_path[100],a_avg_path[100],b_avg_path[100],pi_path[100],new_a_path[100],new_b_path[100],ob_path[100],a_test_path[100],b_test_path[100],pi_test_path[100];
FILE *f,*a_file,*b_file,*final_output,*f_b,*testing,*ob_file,*cp;
