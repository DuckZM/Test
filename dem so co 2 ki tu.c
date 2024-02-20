#include<stdio.h>
int  main(){
 int i,n,a[1000];
 scanf("%d",&n);
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);
 int dem[100]={0};
 for(i=0;i<n;i++){
  dem[a[i]]++;
 }
 int max=9;
 for(i=10;i<100;i++){
  if(dem[i]>=dem[max]) max=i;
  
 }
 if(max<=9) printf("ko phai so co 2 kitu");
 else{
 
 for(i=9;i<max;i++){
  if(dem[max]==dem[i]) printf("%d ",i);
  }
 printf("%d ",max);
 }
}
// jhfdjdfh