#include<stdio.h>

int main () 
  {
	int sum=0,n,add,posittionadd,choice,danhap=0,max=0,scmax=0,pos,dasapxep=0;
	int number[100];
	
	while(1){
		printf("\n MENU \n");
		printf("1.Nhap so phan tu va gia tri cho mang\n");
		printf("2.In ra gia tri cac phan tu trong mang\n");
		printf("3.Dem so luong cac so hoan hao trong mang\n");
		printf("4.Tim gia tri lon thu 2 trong mang,(mang chua duoc sap xep)\n");
		printf("5.Them 1 phan tu vao vi tri ngau nhien trong mang\n");
		printf("6.Xoa phan tu tai vi tri cu the\n");
		printf("7.Sap xep mang theo thu tu tang dan(insertion sort)\n");
		printf("8.Tim kiem phan tu ton tai trong mang\n");
		printf("9.Sap xep lai mang sao cho toan bo so chan dung truoc so le dung sau\n");
		printf("10.Dao nguoc thu tu cua cac phan tu co trong mang\n");
		printf("11.Thoat\n");
		printf("nhap lua chon cua ban\n");
		scanf("%d",&choice);
		switch (choice) {
			case 1: 
			        danhap=1;
			        printf("nhap so luong phan tu cua mang\n");
			        scanf("%d",&n);
			        number[n];
			        printf("nhap cac phan tu cho mang\n");
			        for(int i=0;i<n;i++){
			        	printf("nhap phan tu thu%d: ",i+1);
			        	scanf("%d",&number[i]);
			        	
					}
					break;
			case 2:     
			           if(danhap==0){ printf("So luong phan tu cua mang va gia tri cac phan tru trong mang chua duoc nhap"); 
				
			           }
			           else {
					   
						 printf("cac phan tu cua mang la:\n");
						for(int i=0;i<n;i++){
							printf(" phan tu thu arr[%d]= %d",i,number[i]);
						}
				   }  
					break;	
			case 3:      
			
			        if(danhap==0){ printf("So luong phan tu cua mang va gia tri cac phan tu trong mang chua duoc nhap"); 
				
			          }
			           else {
				
					    printf("Cac so hoan hao trong mang la:\n");
			            for(int i=0;i<n;i++){
				        sum=0;
				        for(int j=1;j<i;j++){
				        		if(number[i]%j==0){
				        			sum+=j;
								}
						if(sum==number[i]){
				        	printf("%d",number[i]);
						}		
						}
			    } }		break;
		 	case 4:      if(danhap==0){ printf("So luong phan tu cua mang va gia tri cac phan tu trong mang chua duoc nhap"); 
				
			          }
			           else {
			            max=number[0];
			            scmax=number[1];
			            for(int i=0;i<n;i++){
		 		            if (number[i>max]){
		 		          	max=number[i]; }
		 		        for(int i=0;i<n;i++){
		 		        	if(number[i]>scmax && number[i]<max){
		 		        		scmax=number[i];
							 }
						 } 	
		 		         
					    
	               }  printf("phan tu lon thu 2 trong mang la: %d",scmax);
				   }	 break;
			case 5:  if(danhap==0){ printf("So luong phan tu cua mang va gia tri cac phan tru trong mang chua duoc nhap"); 
				
			           }
			           else { 
					   if (posittionadd<0 || posittionadd >n ){printf("vi tri can nhap khong hop le");
					   } 
					   else  {
					   printf("nhap vi tri cua phan tu can them vao:\n ");
			           scanf("%d",&posittionadd);
			           printf("nhap gia tri cua phan tu can them vao:\n");
			           scanf("%d",&add);
			           for(int i=n;i>posittionadd;i--){
			           	     number[i]=number[i-1];
			           	     
					   }
					   number[posittionadd-1]=add;
					   n++;
					   printf("mang sau khi them phan tu la:");
					   for(int i=0;i<n;i++){
					   	printf("%d",number[i]);
					   }
		} }	break;
			                  
			case 6:  if(danhap==0){ printf("So luong phan tu cua mang va gia tri cac phan tru trong mang chua duoc nhap"); 
				
			           }
			           else { 
			        printf("nhap vi tri phan tu can xoa trong mang:1-%d\n",n);
			         scanf("%d",&pos);
			         if(0<pos|| pos>n){ printf("vi tri can xoa khong hop le");
					 }
					 else{
					 
			         for(int i=pos-1;i<n-1;i++){
			         	number[i]=number[i+1];
					 }
					 n--;
					 printf("mang sau khi xoa la:\n");
					 for(int i=0;i<n;i++){
					 	printf("phan tu thu %d cua mang la :%d\n",i+1,number[i]);
					 }
			      } }  break;   
		      case 7:
               if (danhap == 0) { 
                  printf("So luong phan tu cua mang va gia tri cac phan tu trong mang chua duoc nhap\n"); 
          } else {
                 dasapxep = 1; 
                 printf("Sap xep mang theo thu tu tang dan (Insertion Sort):\n");
                  for (int i = 1; i < n; i++) {
                 int key = number[i];
                    int j = i - 1;

          
                    while (j >= 0 && number[j] > key) {
                 number[j + 1] = number[j];
                   j--;
            }

            number[j + 1] = key;
        }

       
        printf("Mang sau khi sap xep: ");
        for (int i = 0; i < n; i++) {
            printf("%d ", number[i]);
        }
        printf("\n");
    }
    break;
			case 8:   if(danhap==0){ printf("So luong phan tu cua mang va gia tri cac phan tru trong mang chua duoc nhap"); 
				
			           }
			           else {  if(dasapxep==0){
			           	printf("Mang chua duoc sap xep hay thuc hien lai buoc 7");
					   }
					   else {
					    int	start=0;
					   	int end=sizeof(number)/sizeof(int);
					   	int mid=(start+end)/2;
					   	int found=0,c;
		                printf("nhap phan tu can tim kiem :\n");
		                scanf("%d",&c);
		                while(start<=end){
		                	 if(number[mid]==c){
		                	 	found=1;
		                	 	break;
							 }
							 if(number[mid]>c){
							 	end=mid-1;
							 }
							 if(number[mid]<c){
							 	start=mid+1;
							 }
						}
		                if (found==1){
		                	printf("phan tu ton tai trong mang va nam o vi tri %d",mid);
						}	
						else {
							printf("phan tu khong ton tai trong mang");
						}
					
					   }
					   break;
		  case 9: 	printf("thay bach dep trai");
		  break;
		  case 10: printf("quy dep trai ");
		  break;  
		  case 11:  printf("thoat khoi chuong trinh");
		           return 0;		   
					       
			default : printf("Yeu cau ko co trong Menu");		
 		}  
	}
	
}

}
