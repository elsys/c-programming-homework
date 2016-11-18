#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch[1000];
   fgets(ch,1000,stdin);
    int i=0;
    int a,b,c,d,e,f,g,h,iq,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z;
   a=b=c=d=e=f=g=h=iq=j=k=l=m=n=o=p=q=r=s=t=u=v=w=x=y=z=0;
    do{
        if(ch[i]=='a' || ch[i]=='A'){
            a++;
        }
        if(ch[i]=='b' || ch[i]=='B'){
            b++;
        }
        if(ch[i]=='c' || ch[i]=='C'){
            c++;
        }
        if(ch[i]=='d' || ch[i]=='D'){
            d++;
        }
        if(ch[i]=='e' || ch[i]=='E'){
            e++;
        }
        if(ch[i]=='f' || ch[i]=='F'){
            f++;
        }
        if(ch[i]=='g' || ch[i]=='G'){
            g++;
        }
        if(ch[i]=='h' || ch[i]=='H'){
            h++;
        }
        if(ch[i]=='i' || ch[i]=='I'){
            iq++;
        }
        if(ch[i]=='j' || ch[i]=='J'){
            j++;
        }
        if(ch[i]=='k' || ch[i]=='K'){
            k++;
        }
        if(ch[i]=='l' || ch[i]=='L'){
            l++;
        }
        if(ch[i]=='m' || ch[i]=='M'){
            m++;
        }
        if(ch[i]=='n' || ch[i]=='N'){
            n++;
        }
        if(ch[i]=='o' || ch[i]=='O'){
            o++;
        }
        if(ch[i]=='p' || ch[i]=='P'){
            p++;
        }
        if(ch[i]=='q' || ch[i]=='Q'){
            q++;
        }
        if(ch[i]=='r' || ch[i]=='R'){
            r++;
        }
        if(ch[i]=='s' || ch[i]=='S'){
            s++;
        }
        if(ch[i]=='t' || ch[i]=='T'){
            t++;
        }
        if(ch[i]=='u' || ch[i]=='U'){
            u++;
        }
        if(ch[i]=='v' || ch[i]=='V'){
            v++;
        }
        if(ch[i]=='w' || ch[i]=='W'){
            w++;
        }
        if(ch[i]=='x' || ch[i]=='X'){
            x++;
        }
        if(ch[i]=='y' || ch[i]=='Y'){
            y++;
        }
        if(ch[i]=='z' || ch[i]=='Z'){
            z++;
        }
        i++;
    }while(ch[i] != '\0');

    if(a>0){
        printf("a - %d",a);
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
        if(iq>0){
        printf("\ni - %d",iq);
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
        if(p>0){
        printf("\np - %d",p);
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
    };
}
