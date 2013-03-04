char*a="ecdfgdcebbbbbbbbaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabbbbbbbbecdfgdce",I,E,*r
="ABCDDBCA",w,t[9],*B="()++_)0(",R=4,z,O,*m[]={"PPPPPPPP","PPPPPPPP","/1>B^boq",
"?A_aPPPP","@OQ`PPPP","?@AOQ_`a","?@AOQ_`a"},*l="main(x)";K[99],Y[999],g[3],j,u,
n,i,f,q,b[128],_[128],y,k[32];Q(){for(g[1]=g[2]=i=0;i<128;i++)g[_[i]]+=(100+(r[i
&7]-66)*(r[i>>4]-65))*(B[b[i]]-40);return g[y]-g[y^3];}W(){for(z=O=i=0;i<128;i++
){_[i]=(b[i]=a[(i+(i&7))/2]-97)?i<50?2:(y=1):0;if((i&7)>6)i+=8;}}L(){if(z){w--;I
=K[--z]&127;y^=3;E=(65280&K[z])>>8;b[I]=(K[z]&128)?1:b[E];b[E]=K[z]>>16;_[I]=y;_
[E]=b[E]?y^3:0;}}D(P,N,U){int q=k[w],H,g=0;for(F();q<k[w+1];q++){if(g=J(Y[q])){H
=-((U<1)?Q():D(-N,-P,U-1));L();H>P?(w?0:(u=Y[q])),P=H:0;if(H>=N)break;}}return g
?P:s()?w-10000:0;}F(){k[w+1]=k[w++];for(i=128;i-->0;){if(_[i]==y){if(b[i]>1){for
(j=0;j<8;++j)for(n=i;;){n+=m[b[i]][j]-80;if(n&136||_[n]==y)break;Y[k[w]++]=n<<8|
i;if((l[b[i]]&1)||_[n])break;}}else{if(_[i]&1){if(_[i-17]>1)Y[k[w]++]=(i-17)<<8|
i;if(1<_[i-15])Y[k[w]++]=(i-15)<<8|i;if(!_[i-16]){Y[k[w]++]=(i-16)<<8|i;if(!_[i-
32]&&i>95)Y[k[w]++]=(i-32)<<8|i;}}else{if(!_[16+i]){if(i<33&&!_[i+32])Y[k[w]++]=
(i+32)<<8|i;Y[k[w]++]=(16+i)<<8|i;}if(_[i+15]&1)Y[k[w]++]=(i+15)<<8|i;if(_[i+17]
&1)Y[k[w]++]=(i+17)<<8|i;}}}}w--,i=0;}s(){for(q=i=-1;128>++i;)if(b[i]>5&&_[i]==y
)q=i;for(E=0;0<=i;i--){if(_[i]==(y^3)){if(b[i]<2){if(((i-17==q||i-15==q)&&_[i]&1
)||(_[i]>1&&(i+15==q||i+17==q)))E=1;}else{for(j=0;j<8;j++)for(n=i;;){n+=m[b[i]][
j]-80;if(q==n)E=1;if(n&136||_[n]||l[b[i]]&1)break;}}}}return E;}J(q){I=127&q;E=(
q&65280)>>8;K[z++]=q|b[E]<<16;b[E]=b[I];if(b[I]<2&&(E>111||E<9))b[E]=5,q&=128;b[
I]=_[I]=0;_[E]=y;++w;return s()?(y^=3)&&L()&&0:(y^=3);}main(){W();while(1){*k=w=
0;if(y&O){D(-9999,9999,R);u?J(u):exit(s()*y);}for(t[1]=u=w=0,F();i<128;*t=32*_[i
]+b[i]["-0.\"21+"],i+=(i&15)<8?write(1,t,1):8*write(1,"\n",1));if(O-3){read(0,t,
9);f=*t+799-t[1]*16|(799-t[3]*16+t[2])<<8;for(n=i=0;i<k[1];i++)f==Y[i]?n=f:0;n?J
(n):*t==85?O=0,L():*t==67?O=t[1]-48:*t==71?O=y:*t==78?W():*t==80?R=t[1]-48:0;}}}
