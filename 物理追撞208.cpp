#include <iostream>
#include <math.h>
#include <cmath>
#define PI 3.1415926
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void infrom_user(int *mode){
	cout<<"*************************"<<endl;
	cout<<"*                       *"<<endl;
	cout<<"**�w��Ө쪫�z���D�t��***"<<endl;
	cout<<"*                       *"<<endl;
	cout<<"*************************"<<endl;
	cout<<"�п�ܤU�C���D�Ҧ�:"<<endl;
	cout<<"<1>�l�����D	   <2>���߰��D	      <3>�ש߰��D"<<endl;
	cin>>*mode;
}
void chase_pro_unknown(float Xa0,float Va0,float Vb0,float a1,float a2){
	float Xat1,Xat2,Xat3,Xbt1,Xbt2,Xbt3,Vat1,Vat2,Vbt1,Vbt2,A,B,C,D,O,X1;
	
	Vat1=a1;             
	Vat2=Va0;
	Xat1=a1/2;
	Xat2=Va0;
	Xat3=Xa0;
	
	Vbt1=a2;
	Vbt2=Vb0;
	Xbt1=a2/2;
	Xbt2=Vb0;
	Xbt3=0;
	
	A=Xat1-Xbt1;   //��ۼ��� Xa(T)=Xb(T) �����G����Ƥ��Y�� abc
	B=Xat2-Xbt2;
	C=Xat3-Xbt3;
	if(A==0){
	X1=-C/B;
	cout<<"�ۼ��A��"<<X1<<"��"<<endl;
	}
	if(A<0){
	A=A*-1;
		B=B*-1;
			C=C*-1;
	O=-B*B/(4*A);
	
	cout<<"�w���Z���ܤ֭n�W�L"<<O<<"����"<<"�A�~���|�ۼ�"<<endl;

	
	
	}
	
	
}
void chase_pro_special(int Xa0,int Xb0,int Va0,int Vb0,int a1,int a2){
	float Xat1,Xat2,Xat3,Xbt1,Xbt2,Xbt3,Vat1,Vat2,Vbt1,Vbt2,A,B,C,D,SD,T1,T2,Z,d,W,O,Vl,S,s,total,count,Sa,X1;
	cout<<"�_�l�t��(m/s)"<<endl;
		cin>>Va0; 
		cout<<"�t�פW��:(m/s)"<<endl;
		cin>>Vl; 

	Vat1=a1;
	Vat2=Va0;
	Xat1=a1/2;
	Xat2=Va0;
	Xat3=Xa0;
	
	Vbt1=a2;
	Vbt2=Vb0;
	Xbt1=a2/2;
	Xbt2=Vb0;
	Xbt3=Xb0;
	
	A=Xat1-Xbt1;   //��ۼ��� Xa(T)=Xb(T) �����G����Ƥ��Y�� abc
	B=Xat2-Xbt2;
	C=Xat3-Xbt3;

		if(A==0){
	X1=-C/B;
	cout<<"�ۼ��A��"<<X1<<"��"<<endl;
	}
		if(A<0){
	A=A*-1;
		B=B*-1;
			C=C*-1;
	}
		
		S=Vl/a1;  
		
		d=A*S*S+B*S+C;
		if(d<0)
		d=-d;
		s=d/(Vl-Vb0);
		

		total=S+s;
		cout<<"�L�F"<<total<<"��i�H���W"<<endl;
		 
		count=1;

}
void chase_normal(int Xa0,int Xb0,int Va0,int Vb0,int a1,int a2){
	float Xat1,Xat2,Xat3,Xbt1,Xbt2,Xbt3,Vat1,Vat2,Vbt1,Vbt2,A,B,C,D,SD,T1,T2,Z,d,W,O,Vl,S,s,total,count,Sa,X1;
	Vat1=a1;
	Vat2=Va0;
	Xat1=a1/2;
	Xat2=Va0;
	Xat3=Xa0;
	
	Vbt1=a2;
	Vbt2=Vb0;
	Xbt1=a2/2;
	Xbt2=Vb0;
	Xbt3=Xb0;
	
	A=Xat1-Xbt1;   //��ۼ��� Xa(T)=Xb(T) �����G����Ƥ��Y�� abc
	B=Xat2-Xbt2;
	C=Xat3-Xbt3;
	if(A==0){
	X1=-C/B;
	cout<<"�ۼ��A��"<<X1<<"��"<<endl;
	}
	if(A<0){
	A=A*-1;
		B=B*-1;
			C=C*-1;
	}
	D=B*B-4*A*C;
	SD=sqrt(D);
if(D>=0){ 
	T1=(-B+SD)/(2*A);
	T2=(-B-SD)/(2*A);
		if(T1>0&&T2>0&&count!=1)
		cout<<"�ۼ��A��"<<T2<<"��"<<endl;
		else if(T1>0&&T2<0&&count!=1)
		cout<<"�ۼ��A��"<<T1<<"��"<<endl;
		else if(T1<0&&T2>0&&count!=1)
		cout<<"�ۼ��A��"<<T2<<"��"<<endl;
	} 
		else if(D<0){ 
	cout<<"���ۼ�"<<endl;	
		 W=2*A;
		  B=B;
		 Z=-B/W;
		 d=A*Z*Z+B*Z+C;
		 cout<<"��"<<Z<<"��Z���̪�A�Z��"<<d<<"����"<<endl; 
	
	} 
	 
}	
	

void chase_problem( ){
	float Xa0,Xb0,Va0,Vb0,a1,a2,Xat1,Xat2,Xat3,Xbt1,Xbt2,Xbt3,Vat1,Vat2,Vbt1,Vbt2,A,B,C,D,SD,T1,T2,Z,d,W,O,Vl,S,s,total,count,Sa,X1;
	cout<<"�п�JXa(0),Xb(0)[���m](�����Х�00)"<<endl;
	cin>>Xa0>>Xb0;
	cout<<"�п�JVa(0),Vb(0)[��t m/s](�S���p�Х�00)"<<endl;      //�i���ϥΪ̦p���J 
	cin>>Va0>>Vb0;
	cout<<"�п�Ja1,a2[�[�t�� m/s*s]"<<endl;
	cin>>a1>>a2;

	if(Xb0==00){
	chase_pro_unknown(Xa0,Va0,Vb0,a1,a2);
	}  
	if(Va0==00){
	chase_pro_special(Xa0,Xb0,Va0,Vb0,a1,a2);
	}
	if(Xb0!=00&&Va0!=00){
	chase_normal(Xa0,Xb0,Va0,Vb0,a1,a2);	
	}
	}
void high_speed(){
	float H,T,V,R,S,G,V1;
	cout<<"�п�J���I����(m):"<<endl; 
	cin>>H;
	cout<<"�п�J��t(m/s):"<<endl; 
	cin>>V1; 
	cout<<"�п�J���O�[�t��(m/s*s):"<<endl;
	cin>>G; 
	S=2*H/G;
	T=sqrt(S);
	V=2*G*H;
	V=sqrt(V);
	R=V1*T;
	V=sqrt(V1*V1+V*V);
	cout<<"���a�ɶ�:"<<T<<"��"<<endl;
	cout<<"���a�t�v:"<<V<<"����/��"<<endl; 
	cout<<"�����g�{:"<<R<<"����"<<endl;  
}	
void high_R(){
	float H,T,V,R,S,G,V1;
	cout<<"�п�J���I����(m):"<<endl; 
	cin>>H;
	cout<<"�п�J�g�{(m):"<<endl; 
	cin>>R; 
	cout<<"�п�J���O�[�t��(m/s*s):"<<endl;
	cin>>G;
	S=2*H/G;
	T=sqrt(S); 
	V=2*G*H;
	V=sqrt(V);
	V1=R/T; 
	V=sqrt(V1*V1+V*V);
	cout<<"���a�ɶ�:"<<T<<"��"<<endl;
	cout<<"���a�t�v:"<<V<<"����/��"<<endl; 
	cout<<"��t:"<<V1<<"����/��"<<endl;  
}
void time_speed(){
	float H,T,V,R,S,G,V1;
	cout<<"�п�J���a�ɶ�(s):"<<endl; 
	cin>>T;
	cout<<"�п�J��t(m/s):"<<endl; 
	cin>>V1; 
	cout<<"�п�J���O�[�t��(m/s*s):"<<endl;
	cin>>G;
	H=T*T*G/2;
	V=2*G*H;
	V=sqrt(V);
	R=V1*T;
	V=sqrt(V1*V1+V*V);
	cout<<"���I����:"<<H<<"����"<<endl;
	cout<<"���a�t�v:"<<V<<"����/��"<<endl; 
	cout<<"�g�{:"<<R<<"����"<<endl;  
}
void time_R(){
	float H,T,V,R,S,G,V1;
	cout<<"�п�J���a�ɶ�(s):"<<endl; 
	cin>>T;
	cout<<"�п�J�g�{(m):"<<endl; 
	cin>>R; 
	cout<<"�п�J���O�[�t��(m/s*s):"<<endl;
	cin>>G;
	H=T*T*G/2;
	V=2*G*H;
	V=sqrt(V);
	V1=R/T;
	V=sqrt(V1*V1+V*V);
	cout<<"���I����:"<<H<<"����"<<endl;
	cout<<"���a�t�v:"<<V<<"����/��"<<endl; 
	cout<<"��t:"<<V1<<"����/��"<<endl;  
}
void speed_speed(){
	float H,T,V,R,S,G,V1;
	cout<<"�п�J���a�t�v(m/s):"<<endl; 
	cin>>V;
	cout<<"�п�J��t(m/s):"<<endl; 
	cin>>V1; 
	cout<<"�п�J���O�[�t��(m/s*s):"<<endl;
	cin>>G;
	V=sqrt(V*V-V1*V1);
	H=V*V/(2*G);
	S=2*H/G;
	T=sqrt(S);
	R=V1*T;
	cout<<"���I����:"<<H<<"����"<<endl;
	cout<<"���a�ɶ�:"<<T<<"��"<<endl; 
	cout<<"�g�{:"<<R<<"����"<<endl;  
}

		 	 
void flat_throw(){
	int flat_mode,flat_mode1;
	cout<<"�п�ܤw�����ƾ�:"<<endl;
	cout<<"<1>���I����	<2>���a�ɶ�	 <3>���a�t�v    <4>��t	   <5>�g�{"<<endl;
	cout<<"<1> <2> <3>��@��  <4> <5>��@��  �Ы��Ӷ��ǥH�Ů�j�}!  *<3> <5>���o�P�ɿ�A�L�k�o��"<<endl; 
	cin>>flat_mode;
	cin>>flat_mode1;
	if(flat_mode==1&&flat_mode1==4)
		high_speed();
	if(flat_mode==1&&flat_mode1==5)
		high_R();
	if(flat_mode==2&&flat_mode1==4)
		time_speed();
	if(flat_mode==2&&flat_mode1==5)
		time_R();	
	if(flat_mode==3&&flat_mode1==4)
		speed_speed();

		//case 2:time();
		//case 3:r();
		//case 4:speed();
		
	} 
void ob_throw(){
	float V1,sida,G,T,H,R;
	double Vx,Vy;
	cout<<"�п�J��t(m/s)"<<endl;
	cin>>V1;
	cout<<"�п�J�שߨ���(degree)"<<endl;
	cin>>sida;
	cout<<"�п�J���O�[�t��(m/s*s)"<<endl;
	cin>>G;
	Vx=V1*cos(sida*(PI/180));
	Vy=V1*sin(sida*(PI/180));
	T=2*Vy/G;
	H=Vy*Vy/(2*G);
	R=2*Vx*Vy/G;
	cout<<"�̰��I:"<<H <<"����"<<endl;
	cout<<"����ɶ�:"<<T<<"��"<<endl;
	cout<<"�g�{"<<R<<"����"<<endl; 
}		



int main(int argc, char** argv) {
	int mode,flat_mode;
	infrom_user(&mode);
	switch (mode){
		case 1:chase_problem();break;
		case 2:flat_throw();break;
		case 3:ob_throw();break;
	}
	
	
	
	
	
	return 0;
}
