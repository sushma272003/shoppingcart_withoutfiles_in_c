#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void ele_item();
void book();
void shoe();
void delete_elec();
void delete_books();
void delete_shoes();
void change();
void bill();
int i,n,eid,ei,ne,bid,bi,nb,sid,si,ns,delid,pos=0,chanid=0,j,id,total,totale,totalb,totals,hs_no;
long long int ph_no;
char ech,bch,sch,ch,name[50],adress_state[50],adress_district[50],adress_street[50],adress_city[50];
struct elctronic_items
{
	int id;
	char item_name[50];
	char cpny_name[50];
	int price;
	int rating;
};
struct elctronic_cart
{
	int id;
	char item_name[50];
	int price;
	int no_items;
}ec[10];
struct books_cart
{
	int id;
	char item_name[50];
	int price;
	int no_items;
}bc[10];
struct shoes_cart
{
	int id;
	char brand[50];
	int price;
	int no_items;
}sc[10];
struct books
{
	int id;
	char item_name[50];
	char author_name[50];
	int price;
	int rating;
};
struct shoes{
	int id;
	char brand[50];
	int price;
	int rating;
};
main()
{
	printf("-------------------------------*****Welcome to SR Online Shopping*****---------------------------------------------- ");
	int n,ch,ic,p;
	char c;
	do{
		printf("\n\n\n1.Display all kind of items available to buy\n2.Display the total no.of items added\n3.Delet any item selected\n4.Change the quantity of any item selected\n5.Bill the items selected\n");
		printf("\nenter yor choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:printf("\n1.Electronic Items\n");
			       printf("2.Books\n");
			       printf("3.Shoes\n");
			       printf("choose the kind of item you want to buy:");
			       scanf("%d",&ic);
			       switch(ic)
			       {
			       	case 1:printf("Id\tItem\t\tCompany\t\tPrice\t\tRating\n");
			       	       ele_item();
						   break;
                    case 2:printf("Id\tName\t\t\t\tAuthor Name\t\t\tPrice\t\t\tRating\n");
			       	       book();
			       	       break;
			       	case 3:printf("Id\tBrand\t\tPrice\tRating\n");
			       	       shoe();
				   }
				   break;
			case 2:if(ec[0].id!=0)
		        {
			        printf("---------------electronic items----------------------\n");
			        printf("Id\tName\t\tprice\tNo.of items\n");
			        displaye(ec,ei);
			    }
			    if(bc[0].id!=0)
			    {
			        printf("---------------Books----------------------\n");
			        printf("Id\tName\t\tprice\tNo.of items\n");
			        displayb(bc,bi);
			    }
			    if(sc[0].id!=0)
			    {
			        printf("---------------Shoes----------------------\n");
			        printf("Id\tName\t\tprice\tNo.of items\n");
			        displays(sc,si);
			   }
			        break;
			case 3:if(ec[0].id!=0)
		        {
			        printf("---------------electronic items----------------------\n");
			        printf("Id\tName\t\tprice\tNo.of items\n");
			        displaye(ec,ei);
			    }
			    if(bc[0].id!=0)
			    {
			        printf("---------------Books----------------------\n");
			        printf("Id\tName\t\tprice\tNo.of items\n");
			        displayb(bc,bi);
			    }
			    if(sc[0].id!=0)
			    {
			        printf("---------------Shoes----------------------\n");
			        printf("Id\tName\t\tprice\tNo.of items\n");
			        displays(sc,si);
			   }
			     do
				 {
			     printf("Enter the id of the prodect you wish to delete:");
				 scanf("%d",&delid);
				 id=delid/100;
				 switch(id)
				 {
				 	case 1:delete_elec(delid,ei);
				 	break;
				 	case 2:delete_books(delid,bi);
				 	break;
				 	case 3:delete_shoes(delid,si);
				 	break;
				 }
				 printf("\nEnter d to delete more item:");
				 scanf(" %c",&ch);
			}while(ch=='d');
			     break;
			case 4:if(ec[0].id!=0)
		        {
			        printf("---------------electronic items----------------------\n");
			        printf("Id\tName\t\tprice\tNo.of items\n");
			        displaye(ec,ei);
			    }
			    if(bc[0].id!=0)
			    {
			        printf("---------------Books----------------------\n");
			        printf("Id\tName\t\tprice\tNo.of items\n");
			        displayb(bc,bi);
			    }
			    if(sc[0].id!=0)
			    {
			        printf("---------------Shoes----------------------\n");
			        printf("Id\tName\t\tprice\tNo.of items\n");
			        displays(sc,si);
			   }
			    change();
			       break;
			case 5:bill();
			exit(0);
			break;  
	}
	printf("press y to display options:");
	scanf(" %c",&c);
}while(c=='y');
}
void ele_item()
{
	struct elctronic_items e1={101,"Laptop","HP",65990,8};
	struct elctronic_items e2={102,"Mobile","Samsung",20300,9};
	struct elctronic_items e3={103,"Oven","Philips",7999,10};
	struct elctronic_items e4={104,"Camera","Canon",75000,7};
	struct elctronic_items e5={105,"Airpods","Apple",29999,9};
	printf("%d\t%s\t\t%s\t\t%d\t\t%d\n",e1.id,e1.item_name,e1.cpny_name,e1.price,e1.rating);
	printf("%d\t%s\t\t%s\t\t%d\t\t%d\n",e2.id,e2.item_name,e2.cpny_name,e2.price,e2.rating);
	printf("%d\t%s\t\t%s\t\t%d\t\t%d\n",e3.id,e3.item_name,e3.cpny_name,e3.price,e3.rating);
	printf("%d\t%s\t\t%s\t\t%d\t\t%d\n",e4.id,e4.item_name,e4.cpny_name,e4.price,e4.rating);
	printf("%d\t%s\t\t%s\t\t%d\t\t%d\n",e5.id,e5.item_name,e5.cpny_name,e5.price,e5.rating);
	do{
	printf("Enter the Id of the product you want to add to cart:");
	scanf("%d",&eid);
	switch(eid)
	{
		case 101:printf("Enter The no.of %s you want to add:",e1.item_name);
		       scanf("%d",&ne);
		       ec[ei].id=e1.id;
		       strcpy(ec[ei].item_name,e1.item_name);
		       ec[ei].price=e1.price;
		       ec[ei].no_items=ne;
		       ei++;
	           break;
	    case 102:printf("Enter The no.of %s you want to add:",e2.item_name);
		       scanf("%d",&ne);
		       ec[ei].id=e2.id;
		       strcpy(ec[ei].item_name,e2.item_name);
		       ec[ei].price=e2.price;
		       ec[ei].no_items=ne;
		       ei++;
	           break;
	    case 103:printf("Enter The no.of %s you want to add:",e3.item_name);
		       scanf("%d",&ne);
		       ec[ei].id=e3.id;
		       strcpy(ec[ei].item_name,e3.item_name);
		       ec[ei].price=e3.price;
		       ec[ei].no_items=ne;
		       ei++;
	           break;
	    case 104:printf("Enter The no.of %s you want to add:",e4.item_name);
		       scanf("%d",&ne);
		       ec[ei].id=e4.id;
		       strcpy(ec[ei].item_name,e4.item_name);
		       ec[ei].price=e4.price;
		       ec[ei].no_items=ne;
		       ei++;
	           break;
	    case 105:printf("Enter The no.of %s you want to add:",e5.item_name);
		       scanf("%d",&ne);
		       ec[ei].id=e5.id;
		       strcpy(ec[ei].item_name,e5.item_name);
		       ec[ei].price=e5.price;
		       ec[ei].no_items=ne;
		       ei++;
	           break;	
	 }
	 printf("Press e if you want add anymore products from electronics:");
	 scanf(" %c",&ech);
}while(ech=='e');
}
void book()
{
	struct books b1={201,"Alchemist","Paulo Coelho",227,7};
    struct books b2={202,"Wings Of Fire","Abdul Kalam",400,9};
    struct books b3={203,"Ikigai   ","Hector Garciar",356,8};
    struct books b4={204,"You Can   ","George Adams",112,7};
    struct books b5={205,"Gone Girl","Gillian Flynn",189,9};
	printf("%d\t%s\t\t\t%s\t\t\t%d\t\t\t%d\n",b1.id,b1.item_name,b1.author_name,b1.price,b1.rating);
	printf("%d\t%s\t\t\t%s\t\t\t%d\t\t\t%d\n",b2.id,b2.item_name,b2.author_name,b2.price,b2.rating);
	printf("%d\t%s\t\t\t%s\t\t\t%d\t\t\t%d\n",b3.id,b3.item_name,b3.author_name,b3.price,b3.rating);
	printf("%d\t%s\t\t\t%s\t\t\t%d\t\t\t%d\n",b4.id,b4.item_name,b4.author_name,b4.price,b4.rating);
	printf("%d\t%s\t\t\t%s\t\t\t%d\t\t\t%d\n",b5.id,b5.item_name,b5.author_name,b5.price,b5.rating);	
	do{
	printf("Enter the Id of the product you want to add to cart:");
	scanf("%d",&bid);
	switch(bid)
	{
		case 201:printf("Enter The no.of %s you want to add:",b1.item_name);
		       scanf("%d",&nb);
		       bc[ei].id=b1.id;
		       strcpy(bc[bi].item_name,b1.item_name);
		       bc[bi].price=b1.price;
		       bc[bi].no_items=nb;
		       bi++;
	           break;
	    case 202:printf("Enter The no.of %s you want to add:",b2.item_name);
		       scanf("%d",&nb);
		       bc[bi].id=b2.id;
		       strcpy(bc[bi].item_name,b2.item_name);
		       bc[bi].price=b2.price;
		       bc[bi].no_items=nb;
		       bi++;
	           break;
	    case 203:printf("Enter The no.of %s you want to add:",b3.item_name);
		       scanf("%d",&nb);
		       bc[bi].id=b3.id;
		       strcpy(bc[bi].item_name,b3.item_name);
		       bc[bi].price=b3.price;
		       bc[bi].no_items=nb;
		       bi++;
	           break;
	    case 204:printf("Enter The no.of %s you want to add:",b4.item_name);
		       scanf("%d",&nb);
		       bc[bi].id=b4.id;
		       strcpy(bc[bi].item_name,b4.item_name);
		       bc[bi].price=b4.price;
		       bc[bi].no_items=nb;
		       bi++;
	           break;
	    case 205:printf("Enter The no.of %s you want to add:",b5.item_name);
		       scanf("%d",&nb);
		       bc[bi].id=b5.id;
		       strcpy(bc[bi].item_name,b5.item_name);
		       bc[bi].price=b5.price;
		       bc[bi].no_items=nb;
		       bi++;
	           break;	
	 }
	 printf("Press b if you want add anymore products from books:");
	 scanf(" %c",&bch);
}while(bch=='b');
}
void shoe()
{
   struct shoes s1={301,"Nike    ",5698,7};
   struct shoes s2={302,"Adidas  ",5999,8};
   struct shoes s3={303,"Puma    ",2999,9};
   struct shoes s4={304,"Reebok  ",3998,6};
   struct shoes s5={305,"SKECHERS",3985,9};	
   printf("%d\t%s\t%d\t%d\n",s1.id,s1.brand,s1.price,s1.rating);
   printf("%d\t%s\t%d\t%d\n",s2.id,s2.brand,s2.price,s2.rating);
   printf("%d\t%s\t%d\t%d\n",s3.id,s3.brand,s3.price,s3.rating);
   printf("%d\t%s\t%d\t%d\n",s4.id,s4.brand,s4.price,s4.rating);
   printf("%d\t%s\t%d\t%d\n",s5.id,s5.brand,s5.price,s5.rating);
   do{
   	printf("Enter the Id of the product you want to add to cart:");
	scanf("%d",&sid);
	switch(sid)
	{
		case 301:printf("Enter The no.of %s shoes you want to add:",s1.brand);
		       scanf("%d",&ns);
		       sc[si].id=s1.id;
		       strcpy(sc[si].brand,s1.brand);
		       sc[si].price=s1.price;
		       sc[si].no_items=ns;
		       si++;
	           break;
	    case 302:printf("Enter The no.of %s shoes you want to add:",s2.brand);
		       scanf("%d",&ns);
		       sc[si].id=s2.id;
		       strcpy(sc[si].brand,s2.brand);
		       sc[si].price=s2.price;
		       sc[si].no_items=ns;
		       si++;
	           break;
	    case 303:printf("Enter The no.of %s shoes you want to add:",s3.brand);
		       scanf("%d",&ns);
		       sc[si].id=s3.id;
		       strcpy(sc[si].brand,s3.brand);
		       sc[si].price=s3.price;
		       sc[si].no_items=ns;
		       si++;
	           break;
	    case 304:printf("Enter The no.of %s shoes you want to add:",s4.brand);
		       scanf("%d",&ns);
		       sc[si].id=s4.id;
		       strcpy(sc[si].brand,s4.brand);
		       sc[si].price=s4.price;
		       sc[si].no_items=ns;
		       si++;
	           break;
	    case 305:printf("Enter The no.of %s shoes you want to add:",s5.brand);
		       scanf("%d",&ns);
		       sc[si].id=s5.id;
		       strcpy(sc[si].brand,s5.brand);
		       sc[si].price=s5.price;
		       sc[si].no_items=ns;
		       si++;
	           break;	
	 }
	 printf("Press s if you want add anymore products from shoess:");
	 scanf(" %c",&sch);
}while(sch=='s');
}
displaye(struct elctronic_cart ec[],int(n))
{
	for(i=0;i<n;i++)
	printf("%d\t%s\t\t%d\t%d\n",ec[i].id,ec[i].item_name,ec[i].price,ec[i].no_items);
}
displayb(struct books_cart bc[],int(n))
{
	for(i=0;i<n;i++)
	printf("%d\t%s\t%d\t%d\n",bc[i].id,bc[i].item_name,bc[i].price,bc[i].no_items);
}
displays(struct shoes_cart sc[],int(n))
{
	for(i=0;i<n;i++)
	printf("%d\t%s\t%d\t%d\n",sc[i].id,sc[i].brand,sc[i].price,sc[i].no_items);
}
void change()
{
	do
	{
	printf("Enter the Id of the product you wish to change the quantity:");
	scanf("%d",&chanid);
	for(i=0;i<ei;i++)
	{
		if(chanid==ec[i].id)
		{
		printf("Enter the no.of quatities you want:");
		scanf("%d",&ec[i].no_items);
		break;
       	}
	}
	pos=0;
	for(i=0;i<bi;i++)
	{
	if(chanid==bc[i].id)
		{
		printf("Enter the no.of quatities you want:");
		scanf("%d",&bc[i].no_items);
		break;
       	}
  }
	pos=0;
	for(i=0;i<si;i++)
	{
	if(chanid==sc[i].id)
		{
		printf("Enter the no.of quatities you want:");
		scanf("%d",&sc[i].no_items);
		break;
       	}
	}
	printf("------------------------------Product Quantity changed Succesfully---------------------------------------\n\n");
	printf("Enter c to change the quantity of more items:");
	scanf(" %c",&ch);
}while(ch=='c');
}
void delete_elec(delid,n)
{
	pos=0;
	for(i=0;i<n;i++)
	{
		pos++;
		if(ec[i].id==delid)
		{
			for(j=pos-1;j<n;j++)
			ec[j]=ec[j+1];
			ei--;
		}
}
printf("-------------------------------------------Item deleted Sucessfully-----------------------------------------------");
}
void delete_books(delid,n)
{
	pos=0;
	for(i=0;i<n;i++)
	{
		pos++;
		if(bc[i].id==delid)
		{
			for(j=pos-1;j<n;j++)
			bc[j]=bc[j+1];
			bi--;
		}
}
printf("-------------------------------------------Item deleted Sucessfully-----------------------------------------------");
}
void delete_shoes(delid,n)
{
	pos=0;
	for(i=0;i<n;i++)
	{
		pos++;
		if(sc[i].id==delid)
		{
			for(j=pos-1;j<n;j++)
			sc[j]=sc[j+1];
			si--;
		}
}
printf("-------------------------------------------Item deleted Sucessfully-----------------------------------------------");
}
void bill()
{
    printf("Please Enter your Name:");
    scanf("%s",name);
    printf("Enter Phone Number:");
    scanf("%lld",&ph_no);
    printf("ENTER ADDRESS");
    printf("\nHouse Number:");
    scanf("%d",&hs_no);
    printf("Street:");
    scanf("%s",adress_street);
    printf("Town/City:");
    scanf("%s",adress_city);
    printf("District:");
    scanf("%s",adress_district);
    printf("State:");
    scanf("%s",adress_state);
    if(ec[0].id!=0)
    {
    printf("\n-------------------------------------Electronic Items------------------------------------\n");
    for(i=0;i<ei;i++)
	{
		printf("ID:%d\nItem_Name:%s\nPrice:%d\nNo_Items:%d\n",ec[i].id,ec[i].item_name,ec[i].price,ec[i].no_items);
		totale+=ec[i].price*ec[i].no_items;
	}
}
	if(totale!=0)
	{
	printf("---------------------------------------------------------------\n");
	printf("Total Electronics Bill=%d\n",totale);
	printf("---------------------------------------------------------------\n");
    }
	if(bc[0].id!=0)
    {
   	printf("---------------------------------Books----------------------------------------------------\n");
	for(i=0;i<bi;i++)
	{
		printf("ID:%d\nBook_Name:%s\nPrice:%d\nNo_Items:%d\n",bc[i].id,bc[i].item_name,bc[i].price,bc[i].no_items);
		totalb+=bc[i].price*bc[i].no_items;
	}
}
	if(totalb!=0)
	{
	printf("---------------------------------------------------------------\n");
	printf("Total Books Bill=%d\n",totalb);
	printf("---------------------------------------------------------------\n");
    }
	if(sc[0].id!=0)
    {
    printf("----------------------------------------Shoes----------------------------------------------\n");
	for(i=0;i<si;i++)
	{
		printf("ID:%d\nBrand_Name:%s\nPrice:%d\nNo_Items:%d\n",sc[i].id,sc[i].brand,sc[i].price,sc[i].no_items);
		totals+=sc[i].price*sc[i].no_items;
	}
}

	if(totals!=0)
	{
	printf("---------------------------------------------------------------\n");
	printf("Total Shoes Bill=%d\n",totals);
	printf("---------------------------------------------------------------\n");
    }
	total=totale+totalb+totals;
	printf("---------------------------------------------------------------\n");
	printf("TOTAL BILL=%d\n",total);
	printf("----------------------------------------------------------------\n");
	printf("------------------***Thank You For Buying %s***----------------",name);
}
