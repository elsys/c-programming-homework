#include<stdio.h>
#include <stdlib.h>

int main()
{
   char iz[1000];
   fgets(iz,1000,stdin);	
   int q,w,e,r,t,y,u,i,o,p,a,s,d,f,g,h,j,k,l,z,x,c,v,b,n,m,mm;
   q=w=e=r=t=y=u=i=o=p=a=s=d=f=g=h=j=k=l=z=x=c=v=b=n=m=0;
   
  for(mm=0;iz[mm] != '\0';mm++){

	if(iz[mm]=='a' || iz[mm]=='A'){
            a++;
        }
        if(iz[mm]=='b' || iz[mm]=='B'){
            b++;
        }
        if(iz[mm]=='c' || iz[mm]=='C'){
            c++;
        }
        if(iz[mm]=='d' || iz[mm]=='D'){
            d++;
        }
        if(iz[mm]=='e' || iz[mm]=='E'){
            e++;
        }
        if(iz[mm]=='f' || iz[mm]=='F'){
            f++;
        }
        if(iz[mm]=='g' || iz[mm]=='G'){
            g++;
        }
        if(iz[mm]=='h' || iz[mm]=='H'){
            h++;
        }
        if(iz[mm]=='i' || iz[mm]=='I'){
            i++;
        }
        if(iz[mm]=='j' || iz[mm]=='J'){
            j++;
        }
        if(iz[mm]=='k' || iz[mm]=='K'){
            k++;
        }
        if(iz[mm]=='l' || iz[mm]=='L'){
            l++;
        }
        if(iz[mm]=='m' || iz[mm]=='M'){
            m++;
        }
        if(iz[mm]=='n' || iz[mm]=='N'){
            n++;
        }
        if(iz[mm]=='o' || iz[mm]=='O'){
            o++;
        }
        if(iz[mm]=='p' || iz[mm]=='P'){
            p++;
        }
        if(iz[mm]=='q' || iz[mm]=='Q'){
            q++;
        }
        if(iz[mm]=='r' || iz[mm]=='R'){
            r++;
        }
        if(iz[mm]=='s' || iz[mm]=='S'){
            s++;
        }
        if(iz[mm]=='t' || iz[mm]=='T'){
            t++;
        }
        if(iz[mm]=='u' || iz[mm]=='U'){
            u++;
        }
        if(iz[mm]=='v' || iz[mm]=='V'){
            v++;
        }
        if(iz[mm]=='w' || iz[mm]=='W'){
            w++;
        }
        if(iz[mm]=='x' || iz[mm]=='X'){
            x++;
        }
        if(iz[mm]=='y' || iz[mm]=='Y'){
            y++;
        }
        if(iz[mm]=='z' || iz[mm]=='Z'){
            z++;
        }

   }


    if(a>0){
        printf("\na - %d",a);
    };
    if(b>0){
        printf("\nb - %d",b);
    };
        if(c>0){
        printf("\nc - %d",c);
    };
    if(d>0){
        printf("\nd - %d",d);
    };
        if(e>0){
        printf("\ne - %d",e);
    };
        if(f>0){
        printf("\nf - %d",f);
    };
        if(g>0){
        printf("\ng - %d",g);
    };
        if(h>0){
        printf("\nh - %d",h);
    };
        if(i>0){
        printf("\ni - %d",i);
    };
        if(j>0){
        printf("\nj - %d",j);
    };
        if(k>0){
        printf("\nk - %d",k);
    };
        if(l>0){
         printf("\nl - %d",l);
    };
        if(m>0){
        printf("\nm - %d",m);
    };
        if(n>0){
        printf("\nn - %d",n);
    };
        if(o>0){
        printf("\no - %d",o);
    };
        if(q>0){
        printf("\nq - %d",q);
    };
        if(r>0){
        printf("\nr - %d",r);
    };
        if(s>0){
        printf("\ns - %d",s);
    };
        if(t>0){
        printf("\nt - %d",t);
    };
        if(u>0){
        printf("\nu - %d",u);
    };
        if(v>0){
        printf("\nv - %d",v);
    };
        if(w>0){
        printf("\nw - %d",w);
    };
        if(x>0){
        printf("\nx - %d",x);
    };
        if(y>0){
        printf("\ny - %d",y);
    };
        if(z>0){
        printf("\nz - %d",z);
    }

}
