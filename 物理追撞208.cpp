#include <iostream>
#include <math.h>
#include <cmath>
#define PI 3.1415926
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void infrom_user(int *mode){
	cout<<"*************************"<<endl;
	cout<<"*                       *"<<endl;
	cout<<"**歡迎來到物理解題系統***"<<endl;
	cout<<"*                       *"<<endl;
	cout<<"*************************"<<endl;
	cout<<"請選擇下列解題模式:"<<endl;
	cout<<"<1>追撞問題	   <2>平拋問題	      <3>斜拋問題"<<endl;
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
	
	A=Xat1-Xbt1;   //當相撞時 Xa(T)=Xb(T) 此為二次函數之係數 abc
	B=Xat2-Xbt2;
	C=Xat3-Xbt3;
	if(A==0){
	X1=-C/B;
	cout<<"相撞，於"<<X1<<"秒"<<endl;
	}
	if(A<0){
	A=A*-1;
		B=B*-1;
			C=C*-1;
	O=-B*B/(4*A);
	
	cout<<"安全距離至少要超過"<<O<<"公尺"<<"，才不會相撞"<<endl;

	
	
	}
	
	
}
void chase_pro_special(int Xa0,int Xb0,int Va0,int Vb0,int a1,int a2){
	float Xat1,Xat2,Xat3,Xbt1,Xbt2,Xbt3,Vat1,Vat2,Vbt1,Vbt2,A,B,C,D,SD,T1,T2,Z,d,W,O,Vl,S,s,total,count,Sa,X1;
	cout<<"起始速度(m/s)"<<endl;
		cin>>Va0; 
		cout<<"速度上限:(m/s)"<<endl;
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
	
	A=Xat1-Xbt1;   //當相撞時 Xa(T)=Xb(T) 此為二次函數之係數 abc
	B=Xat2-Xbt2;
	C=Xat3-Xbt3;

		if(A==0){
	X1=-C/B;
	cout<<"相撞，於"<<X1<<"秒"<<endl;
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
		cout<<"過了"<<total<<"秒可以趕上"<<endl;
		 
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
	
	A=Xat1-Xbt1;   //當相撞時 Xa(T)=Xb(T) 此為二次函數之係數 abc
	B=Xat2-Xbt2;
	C=Xat3-Xbt3;
	if(A==0){
	X1=-C/B;
	cout<<"相撞，於"<<X1<<"秒"<<endl;
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
		cout<<"相撞，於"<<T2<<"秒"<<endl;
		else if(T1>0&&T2<0&&count!=1)
		cout<<"相撞，於"<<T1<<"秒"<<endl;
		else if(T1<0&&T2>0&&count!=1)
		cout<<"相撞，於"<<T2<<"秒"<<endl;
	} 
		else if(D<0){ 
	cout<<"不相撞"<<endl;	
		 W=2*A;
		  B=B;
		 Z=-B/W;
		 d=A*Z*Z+B*Z+C;
		 cout<<"於"<<Z<<"秒距離最近，距離"<<d<<"公尺"<<endl; 
	
	} 
	 
}	
	

void chase_problem( ){
	float Xa0,Xb0,Va0,Vb0,a1,a2,Xat1,Xat2,Xat3,Xbt1,Xbt2,Xbt3,Vat1,Vat2,Vbt1,Vbt2,A,B,C,D,SD,T1,T2,Z,d,W,O,Vl,S,s,total,count,Sa,X1;
	cout<<"請輸入Xa(0),Xb(0)[初位置](未知請打00)"<<endl;
	cin>>Xa0>>Xb0;
	cout<<"請輸入Va(0),Vb(0)[初速 m/s](特殊情況請打00)"<<endl;      //告知使用者如何輸入 
	cin>>Va0>>Vb0;
	cout<<"請輸入a1,a2[加速度 m/s*s]"<<endl;
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
	cout<<"請輸入拋點高度(m):"<<endl; 
	cin>>H;
	cout<<"請輸入初速(m/s):"<<endl; 
	cin>>V1; 
	cout<<"請輸入重力加速度(m/s*s):"<<endl;
	cin>>G; 
	S=2*H/G;
	T=sqrt(S);
	V=2*G*H;
	V=sqrt(V);
	R=V1*T;
	V=sqrt(V1*V1+V*V);
	cout<<"落地時間:"<<T<<"秒"<<endl;
	cout<<"落地速率:"<<V<<"公尺/秒"<<endl; 
	cout<<"水平射程:"<<R<<"公尺"<<endl;  
}	
void high_R(){
	float H,T,V,R,S,G,V1;
	cout<<"請輸入拋點高度(m):"<<endl; 
	cin>>H;
	cout<<"請輸入射程(m):"<<endl; 
	cin>>R; 
	cout<<"請輸入重力加速度(m/s*s):"<<endl;
	cin>>G;
	S=2*H/G;
	T=sqrt(S); 
	V=2*G*H;
	V=sqrt(V);
	V1=R/T; 
	V=sqrt(V1*V1+V*V);
	cout<<"落地時間:"<<T<<"秒"<<endl;
	cout<<"落地速率:"<<V<<"公尺/秒"<<endl; 
	cout<<"初速:"<<V1<<"公尺/秒"<<endl;  
}
void time_speed(){
	float H,T,V,R,S,G,V1;
	cout<<"請輸入落地時間(s):"<<endl; 
	cin>>T;
	cout<<"請輸入初速(m/s):"<<endl; 
	cin>>V1; 
	cout<<"請輸入重力加速度(m/s*s):"<<endl;
	cin>>G;
	H=T*T*G/2;
	V=2*G*H;
	V=sqrt(V);
	R=V1*T;
	V=sqrt(V1*V1+V*V);
	cout<<"拋點高度:"<<H<<"公尺"<<endl;
	cout<<"落地速率:"<<V<<"公尺/秒"<<endl; 
	cout<<"射程:"<<R<<"公尺"<<endl;  
}
void time_R(){
	float H,T,V,R,S,G,V1;
	cout<<"請輸入落地時間(s):"<<endl; 
	cin>>T;
	cout<<"請輸入射程(m):"<<endl; 
	cin>>R; 
	cout<<"請輸入重力加速度(m/s*s):"<<endl;
	cin>>G;
	H=T*T*G/2;
	V=2*G*H;
	V=sqrt(V);
	V1=R/T;
	V=sqrt(V1*V1+V*V);
	cout<<"拋點高度:"<<H<<"公尺"<<endl;
	cout<<"落地速率:"<<V<<"公尺/秒"<<endl; 
	cout<<"初速:"<<V1<<"公尺/秒"<<endl;  
}
void speed_speed(){
	float H,T,V,R,S,G,V1;
	cout<<"請輸入落地速率(m/s):"<<endl; 
	cin>>V;
	cout<<"請輸入初速(m/s):"<<endl; 
	cin>>V1; 
	cout<<"請輸入重力加速度(m/s*s):"<<endl;
	cin>>G;
	V=sqrt(V*V-V1*V1);
	H=V*V/(2*G);
	S=2*H/G;
	T=sqrt(S);
	R=V1*T;
	cout<<"拋點高度:"<<H<<"公尺"<<endl;
	cout<<"落地時間:"<<T<<"秒"<<endl; 
	cout<<"射程:"<<R<<"公尺"<<endl;  
}

		 	 
void flat_throw(){
	int flat_mode,flat_mode1;
	cout<<"請選擇已知之數據:"<<endl;
	cout<<"<1>拋點高度	<2>落地時間	 <3>落地速率    <4>初速	   <5>射程"<<endl;
	cout<<"<1> <2> <3>選一項  <4> <5>選一項  請按照順序以空格隔開!  *<3> <5>不得同時選，無法得知"<<endl; 
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
	cout<<"請輸入初速(m/s)"<<endl;
	cin>>V1;
	cout<<"請輸入斜拋角度(degree)"<<endl;
	cin>>sida;
	cout<<"請輸入重力加速度(m/s*s)"<<endl;
	cin>>G;
	Vx=V1*cos(sida*(PI/180));
	Vy=V1*sin(sida*(PI/180));
	T=2*Vy/G;
	H=Vy*Vy/(2*G);
	R=2*Vx*Vy/G;
	cout<<"最高點:"<<H <<"公尺"<<endl;
	cout<<"飛行時間:"<<T<<"秒"<<endl;
	cout<<"射程"<<R<<"公尺"<<endl; 
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
