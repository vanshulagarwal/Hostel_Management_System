#include<stdio.h>
#include<string.h>

int hostelerCount=423; //to count total number of hostelers

//function to store data of new hosteler in Details.txt
int allotment()
{
    printf("********************************************************************\n");
    printf("***************************** ALLOTMENT ****************************\n");
    printf("********************************************************************\n");
    printf("\n");

    FILE *fp;
    char data[50],ch;
    fp=fopen("Details.txt","a"); //opening file in append mode
    
    //checking whether file has opened or not
    if(fp==NULL)
    {
        printf("Unable to open file.\n");
        return -1;
    }
    
    //asking user details of new hosteler
    printf("Hostel rooms alloted upto Room no:%d\n",hostelerCount);
    printf("Please enter room no. after %d\n",hostelerCount);
    printf("Enter ROOM NO(space)NAME of new hosteler\n");
    fflush(stdin);
    gets(data);
    fflush(stdin);
    fprintf(fp,"%s\n",data);
    hostelerCount++;

    printf("\n");
    printf("Do you want to enter more? (y/n)\n");
    scanf("%c",&ch);
    printf("\n");

    while(ch=='y')
    {
        printf("Hostel rooms alloted upto Room no:%d\n",hostelerCount);
        printf("Please enter room no. after %d\n",hostelerCount);
        printf("Enter ROOM NO(space)NAME of new hosteler\n");
        fflush(stdin);
        gets(data);
        fflush(stdin);
        fprintf(fp,"%s\n",data);
        hostelerCount++;

        printf("\n");
        printf("Do you want to enter more? (y/n)\n");
        scanf("%c",&ch);
    }
    
    printf("\n");
    printf("********************************************************************\n");
    printf("*************************** Rooms Alloted **************************\n");
    printf("***************************** Thank You ****************************\n");
    printf("********************************************************************\n");
    printf("\n");

    fclose(fp); //closing file
    return 0;
}

//function to register attendance of hostelers
int registerAttendance()
{
    printf("********************************************************************\n");
    printf("************************ Attendance Register ***********************\n");
    printf("********************************************************************\n");
    printf("\n");

    FILE *fp;
    char data[50],ch;
    fp=fopen("Attendance.txt","a"); //opening file in append mode
    
    //checking whether file has opened or not
    if(fp==NULL)
    {
        printf("Unable to open file.\n");
        return -1;
    }
    
    //asking user details of student whose attendance is to be marked
    printf("Enter your ROOM NO(space)NAME\n");
    fflush(stdin);
    gets(data);
    fflush(stdin);
    fprintf(fp,"%s\n",data);
    
    printf("\n");
    printf("Do you want to mark attendance of more hostelers? (y/n)\n");
    scanf("%c",&ch);
    printf("\n");

    while(ch=='y')
    {
        printf("Enter your ROOM NO(space)NAME\n");
        fflush(stdin);
        gets(data);
        fflush(stdin);
        fprintf(fp,"%s\n",data);
        printf("\n");
        printf("Do you want to enter more? (y/n)\n");
        scanf("%c",&ch);
    }
    
    printf("********************************************************************\n");
    printf("************************* Attendance Saved *************************\n");
    printf("********************************************************************\n");

    fclose(fp); //closing file
    return 0;
}

//function to view attendance of hostelers
int viewAttendance()
{
    printf("********************************************************************\n");
    printf("************************ Attendance Register ***********************\n");
    printf("********************************************************************\n");
    printf("\n");

    FILE *fp;
    char attendance[50];
    fp=fopen("Attendance.txt","r"); //opening file in read mode

    //checking whether file has opened or not
    if(fp==NULL)
    {
        printf("Unable to open file.\n");
        return -1;
    }
    
    //loop to read and print multiple lines in text file
    while (fgets(attendance,50,fp) != NULL)
    {
        printf ("%s\n",attendance);
    }

    printf("\n");
    printf("********************************************************************\n");
    printf("***************************** Thank You ****************************\n");
    printf("********************************************************************\n");
    printf("\n");

    fclose(fp); //closing file
    return 0;
}

//function to register complaints in Complaints.txt
int registerComplaint()
{
    printf("********************************************************************\n");
    printf("************************ Complaint Register ************************\n");
    printf("********************************************************************\n");
    printf("\n");

    FILE *fp;
    char complaint[200],ch;
    fp=fopen("ComplaintRegister.txt","a");  //opening file in append mode

    //checking whether file has opened or not
    if(fp==NULL)
    {
        printf("Unable to open file.\n");
        return -1;
    }

    //asking user for complaint
    printf("Enter Your Complaint:\n");
    fflush(stdin);
    gets(complaint);
    fflush(stdin);
    fprintf(fp,"%s\n",complaint);

    printf("\n");
    printf("Do you want to enter more? (y/n)");
    printf("\n");
    scanf("%c",&ch);

    while(ch=='y')
    {
        printf("Enter Your Complaint:\n");
        fflush(stdin);
        gets(complaint);
        fflush(stdin);
        fprintf(fp,"%s\n",complaint);

        printf("\n");
        printf("Do you want to enter more? (y/n)\n");
        scanf("%c",&ch);
    }
    
    printf("\n");
    printf("********************************************************************\n");
    printf("************************** Complaint Saved *************************\n");
    printf("********************************************************************\n");
    printf("\n");

    fclose(fp); //closing file
    return 0;
}

//function to view complaints stored in Complaints.txt
int viewComplaint()
{
    printf("********************************************************************\n");
    printf("************************ Complaint Register ************************\n");
    printf("********************************************************************\n");
    printf("\n");

    FILE *fp;
    char complaint[200],ch;
    fp=fopen("ComplaintRegister.txt","r"); //opening file in read mode
    
    //checking whether file has opened or not
    if(fp==NULL)
    {
        printf("Unable to open file.\n");
        return -1;
    }

    //loop to read and display multiple complaints in text file
    while (fgets(complaint,200,fp) != NULL)
    {
        printf ("%s\n",complaint);
    }

    printf("********************************************************************\n");
    printf("***************************** Thank You ****************************\n");
    printf("********************************************************************\n");
    printf("\n");

    fclose(fp); //closing file
    return 0;
}

//function to create and store details of hostelers in Details.txt
int details()
{

    FILE *fp;
    fp=fopen("Details.txt","w"); //opening file in write mode

    //checking whether file has opened or not
    if(fp==NULL)
    {
        printf("Unable to open file.");
        return -1;
    }

    //storing data of hostelers 
    fprintf(fp,"%s\n","301 Aman Kapoor");
    fprintf(fp,"%s\n","302 Ayush Singh");
    fprintf(fp,"%s\n","303 Rahul Kumar");
    fprintf(fp,"%s\n","304 Vanshul Agarwal");
    fprintf(fp,"%s\n","305 Yash Mittal");
    fprintf(fp,"%s\n","306 Vedant Sharan Raykwar");
    fprintf(fp,"%s\n","307 Himanshu Yadav");
    fprintf(fp,"%s\n","308 Saksham Singh Rawat");
    fprintf(fp,"%s\n","309 Asmit Tyagi");
    fprintf(fp,"%s\n","310 Aryan Agarwal");
    fprintf(fp,"%s\n","311 Yash Agarwal");
    fprintf(fp,"%s\n","312 Sai Raj Singh");
    fprintf(fp,"%s\n","313 Kartik Agarwal");
    fprintf(fp,"%s\n","314 Dhruv Garg");
    fprintf(fp,"%s\n","315 Rajat Bhati");
    fprintf(fp,"%s\n","316 Lakshay Sharma");
    fprintf(fp,"%s\n","317 Tejas Tyagi");
    fprintf(fp,"%s\n","318 Asmit Tyagi");
    fprintf(fp,"%s\n","319 Nikhil Nehra");
    fprintf(fp,"%s\n","320 Yashovardhan Rathore ");
    fprintf(fp,"%s\n","321 Harshal V Relan");
    fprintf(fp,"%s\n","322 Mayank Verma");
    fprintf(fp,"%s\n","323 Vedant Singh");
    fprintf(fp,"%s\n","324 Raj Kapoor");
    fprintf(fp,"%s\n","325 Sankalp goyal");
    fprintf(fp,"%s\n","326 Arpit Sharma");
    fprintf(fp,"%s\n","327 Saksham Agarwal");
    fprintf(fp,"%s\n","328 Vishal Rathore");
    fprintf(fp,"%s\n","329 Swayam Pathak");
    fprintf(fp,"%s\n","330 Aditya Sahu");
    fprintf(fp,"%s\n","331 Sachin Kumar");
    fprintf(fp,"%s\n","332 Utkarsh Kumar");
    fprintf(fp,"%s\n","333 Priyansh Agarwal");
    fprintf(fp,"%s\n","334 Sambhav Yadav");
    fprintf(fp,"%s\n","335 Sarthak Verma");
    fprintf(fp,"%s\n","336 Pratik Singh");
    fprintf(fp,"%s\n","337 Pratyush Singh");
    fprintf(fp,"%s\n","338 Aryan Agarwal");
    fprintf(fp,"%s\n","339 Siddharth Shukla");
    fprintf(fp,"%s\n","340 Aman Choudhary");
    fprintf(fp,"%s\n","350 Dinesh Kumar");
    fprintf(fp,"%s\n","351 Dushyant Kumar");
    fprintf(fp,"%s\n","352 Naman Sheoran");
    fprintf(fp,"%s\n","353 Aditya Gupta");
    fprintf(fp,"%s\n","354 Nishant Jindal");
    fprintf(fp,"%s\n","355 Abhinav Tyagi");
    fprintf(fp,"%s\n","356 Tushar Kapoor");
    fprintf(fp,"%s\n","357 Arjun Neekhra");
    fprintf(fp,"%s\n","358 Ranveer Singh");
    fprintf(fp,"%s\n","359 Sambhav Raykwar");
    fprintf(fp,"%s\n","360 Ashish Singh");
    fprintf(fp,"%s\n","361 Kartik Aggarwal");
    fprintf(fp,"%s\n","362 Avi Gupta");
    fprintf(fp,"%s\n","363 Sachin Jindal");
    fprintf(fp,"%s\n","364 Rowdy Khanna");
    fprintf(fp,"%s\n","365 Washington Sundar");
    fprintf(fp,"%s\n","366 Harry Potter");
    fprintf(fp,"%s\n","367 Vedant Rastogi");
    fprintf(fp,"%s\n","368 Ajeesh Rawal");
    fprintf(fp,"%s\n","369 Naman Sharma");
    fprintf(fp,"%s\n","370 Arnav Gupta");
    fprintf(fp,"%s\n","371 Vansh Mittal");
    fprintf(fp,"%s\n","372 Shaurya Khan");
    fprintf(fp,"%s\n","373 Sarthak Rao");
    fprintf(fp,"%s\n","374 Aryan Kapoor");
    fprintf(fp,"%s\n","375 Ram Kumar");
    fprintf(fp,"%s\n","376 Robert Sharma");
    fprintf(fp,"%s\n","377 Steve Smith");
    fprintf(fp,"%s\n","378 David Warner");
    fprintf(fp,"%s\n","379 Alex Hales");
    fprintf(fp,"%s\n","380 Perkinson Shah");
    fprintf(fp,"%s\n","381 Eoin Morgan");
    fprintf(fp,"%s\n","382 Honey Singh");
    fprintf(fp,"%s\n","383 Parikshit Khabra");
    fprintf(fp,"%s\n","384 Manan Jain");
    fprintf(fp,"%s\n","385 Harsh Singh");
    fprintf(fp,"%s\n","386 Naman Verma");
    fprintf(fp,"%s\n","387 Lavanya Jain");
    fprintf(fp,"%s\n","388 Anil Kumar");
    fprintf(fp,"%s\n","389 Diljit Dosanjh");
    fprintf(fp,"%s\n","390 Gajender Purohit");
    fprintf(fp,"%s\n","391 Shiva Singh");
    fprintf(fp,"%s\n","392 Ghanshyam Bhardwaj");
    fprintf(fp,"%s\n","393 Yash Atrey");
    fprintf(fp,"%s\n","394 Naman Jain");
    fprintf(fp,"%s\n","395 Rachit jain");
    fprintf(fp,"%s\n","396 Addy Sharma");
    fprintf(fp,"%s\n","397 Krish Sharma");
    fprintf(fp,"%s\n","398 Badal Tomar");
    fprintf(fp,"%s\n","399 Pratyush Anand");
    fprintf(fp,"%s\n","400 Arunav Gupta");
    fprintf(fp,"%s\n","401 Saksham Dixit");
    fprintf(fp,"%s\n","402 Daksh Verma");
    fprintf(fp,"%s\n","403 Harsh Agarwal");
    fprintf(fp,"%s\n","404 Lionel Messi");
    fprintf(fp,"%s\n","405 Cristano Ronaldo");
    fprintf(fp,"%s\n","406 Neymar Junior");
    fprintf(fp,"%s\n","407 Kyle Mbappe");
    fprintf(fp,"%s\n","408 Manoj Gupta");
    fprintf(fp,"%s\n","409 Lucky Jain");
    fprintf(fp,"%s\n","410 Kushagra Pant");
    fprintf(fp,"%s\n","411 Sanju Samson");
    fprintf(fp,"%s\n","412 Shobhit Tyagi");
    fprintf(fp,"%s\n","413 Piyush Verma");
    fprintf(fp,"%s\n","414 Om Dhanker");
    fprintf(fp,"%s\n","415 Rishabh Tomar");
    fprintf(fp,"%s\n","416 Lavanya Sharma");
    fprintf(fp,"%s\n","417 Misthi Jain");
    fprintf(fp,"%s\n","418 Shiva Sharma");
    fprintf(fp,"%s\n","419 Sandy Jain");
    fprintf(fp,"%s\n","420 Priyam Nandi");
    fprintf(fp,"%s\n","421 Mahendra Singh Dhoni");
    fprintf(fp,"%s\n","422 Arjun Singh");
    fprintf(fp,"%s\n","423 Chitransh Agarwal");

    fclose(fp); //closing file
    return 0;
}

//function to view Notices of Notice Board
int printNotices()
{
    printf("********************************************************************\n");
    printf("*************************** Notice Board ***************************\n");
    printf("********************************************************************\n");
    printf("\n");

    FILE *fp;
    char notices[200],ch;
    fp=fopen("Notices.txt","r"); //opening file in read mode
    
    //checking whether file has opened or not
    if(fp==NULL)
    {
        printf("Unable to open Notices file.");
        return -1;
    }
    
    //loop to read and print multiple notices in text file
    while (fgets(notices,200,fp) != NULL)
    {
        printf("%s\n",notices);
    }

    printf("\n");
    printf("********************************************************************\n");
    printf("***************************** Thank You ****************************\n");
    printf("********************************************************************\n");
    printf("\n");

    fclose(fp); //closing file
    return 0;
}

//function to add Notices in Notice Board
int addNotices()
{
    printf("********************************************************************\n");
    printf("*************************** Notice Board ***************************\n");
    printf("********************************************************************\n");
    printf("\n");

    FILE *fp;
    char notices[200],ch;
    fp=fopen("Notices.txt","a"); //opening file in append mode
    
    //checking whether file has opened or not
    if(fp==NULL)
    {
        printf("Unable to open file.\n");
        return -1;
    }

    printf("Enter Notice to be added:\n");
    fflush(stdin);
    gets(notices);
    fflush(stdin);
    fprintf(fp,"%s\n",notices);

    printf("\n");
    printf("Do you want to enter more? (y/n)");
    printf("\n");
    scanf("%c",&ch);

    while(ch=='y')
    {
        printf("Enter Notice to be added:\n");
        fflush(stdin);
        gets(notices);
        fflush(stdin);
        fprintf(fp,"%s\n",notices);

        printf("\n");
        printf("Do you want to enter more? (y/n)\n");
        scanf("%c",&ch);
    }

    printf("\n");
    printf("********************************************************************\n");
    printf("*************************** Notice Added ***************************\n");
    printf("********************************************************************\n");
    printf("\n");

    fclose(fp); //closing file
    return 0;
}

//function to display details of hostelers
int printDetails()
{
    printf("********************************************************************\n");
    printf("************************ Hosteler's Details ************************\n");
    printf("********************************************************************\n");
    printf("\n");

    FILE *fp;
    char str[50],ch;
    fp=fopen("Details.txt","r");  //opening file in read mode
    
    //checking whether file has opened or not
    if(fp==NULL)
    {
        printf("Unable to open file.");
        return -1;
    }
    
    //while loop to read and display multiple hostelers details in text file
    while (fgets(str,50,fp) != NULL)
    {
        printf ("%s\n",str);
    }
    
    printf("\n");
    printf("********************************************************************\n");
    printf("***************************** Thank You ****************************\n");
    printf("********************************************************************\n");
    printf("\n");

    fclose(fp); //closing file
    return 0;
}

//function to view this week's mess menu
void mess_menu()
{

    printf("********************************************************************\n");
    printf("***************************** MESS MENU ****************************\n");
    printf("********************************************************************\n");
    printf("\n");

    int day,mt;

    //Day selection
    printf("1.Monday\n");
    printf("2.Tuesday\n");
    printf("3.Wednesday\n");
    printf("4.Thursday\n");
    printf("5.Friday\n");
    printf("6.Saturday\n");
    printf("7.Sunday\n");
    printf("Enter day:\n");
    scanf("%d",&day);
    printf("\n");
    
    //meal time selection
    printf("1.Breakfast\n");
    printf("2.Lunch\n");
    printf("3.Dinner\n");
    printf("Enter meal time:");
    scanf("%d",&mt);
    printf("\n");

    //nested switch to run through different cases
    switch(day)
    {

        case 1:
        switch(mt)
        {
            case 1:
            printf("Mix Veg Parantha,Dahi,Achar,Bread Jam,Tea,Fruit\n");
            break;

            case 2:
            printf("Cabbage Aloo Mutter,Rajma,Raita,Halwa,Roti,Rice\n");
            break;

            case 3:
            printf("Mix Dal,Rice,Roti,Salad,Boondi\n");
            break;

            default:
            printf("Wrong choice!");
        }
        break;

        case 2:
        switch(mt)
        {
            case 1:
            printf("Uttapam,Bread,Tea,Fruit\n");
            break;

            case 2:
            printf("Mix Veg Dal,Raita,Rice,Roti,Salad\n");
            break;

            case 3:
            printf("Choley,Puri,Aloo,Milk\n");
            break;

            default:
            printf("Wrong choice!");
        }
        break;

        case 3:
        switch(mt)
        {
            case 1:
            printf("Mix Veg Sandwich,Bread Jam,Tea,Fruit\n");
            break;

            case 2:
            printf("Palak Paneer,Dal Tadka,Raita,Roti,Salad,Achar\n");
            break;

            case 3:
            printf("Khoya Mutter Makhana,Arhar dal,Rice,Roti,Salad,Milk\n");
            break;

            default:
            printf("Wrong choice!");
        }
        break;

        case 4:
        switch(mt)
        {
            case 1:
            printf("Stuff Parantha,Dahi,Achar,Bread Jam,Tea,Fruit\n");
            break;

            case 2:
            printf("Aloo Pyaj,Kadhi Pakoda,Rice,Roti,Achar\n");
            break;

            case 3:
            printf("Palak Ka Kofta,Chana Dal,Rice,Roti,Salad,Milk\n");
            break;

            default:
            printf("Wrong choice!");
        }
        break;
        
        case 5:
        switch(mt)
        {
            case 1:
            printf("Coleslaw Sandwich,French Toast,Bread Jam,Tea\n");
            break;

            case 2:
            printf("Beans Aloo,Masoor Sabut Dal,Raita,Rice,Roti,Balu Shahi\n");
            break;

            case 3:
            printf("Sambar-Vada,CHutey,Aloo Tamatar,Lemon Rice,Roti,Achar,Milk\n");
            break;

            default:
            printf("Wrong choice!");
        }
        break;

        case 6:
        switch(mt)
        {
            case 1:
            printf("Poha,Bread Butter,Jam,Tea,Milk\n");
            break;

            case 2:
            printf("Choley,Dahi Vada,Veg Pulao,Halwa\n");
            break;

            case 3:
            printf("Gobhi Aloo,Masoor Dal,Rice,Roti,Salad\n");
            break;

            default:
            printf("Wrong choice!");
        }
        break;
        
        case 7:
        switch(mt)
        {
            case 1:
            printf("Pav-Bhaji,Bread Jam,Tea,Milk,Fruit\n");
            break;

            case 2:
            printf("Methi Malia Mutter,Dal Fry,Rice,Roti,Achar,Salad\n");
            break;

            case 3:
            printf("Paneer masala,Egg Curry,Rice,Roti,Achar,Salad,Milk\n");
            break;

            default:
            printf("Wrong choice!");
        }
        break;

        default:
        printf("Wrong choice!");
    }

    printf("\n");
    printf("********************************************************************\n");
    printf("***************************** Thank You ****************************\n");
    printf("********************************************************************\n");
    printf("\n");
}

int helpline()
{
    FILE *fp;
    char str[200],ch;
    fp=fopen("Helpline.txt","a");
    
    //checking whether file has opened or not
    if(fp==NULL)
    {
        printf("Unable to open file.\n");
        return -1;
    }
    
    printf("\n");
    printf("Warden name\tFloor no.\tPhone number\n");
    printf("Anil Kumar\t3\t\t9876543210\n");
    printf("Diljit Singh\t4\t\t7891234560\n");
    printf("\n");
    printf("You may contact the warden personally in ABB-1 from 9:00 to 11:00\n");
    printf("\n");
    printf("You may call on 9595959595 or you may leave your message here.\n");
    printf("\n");
    //asking user to enter message
    printf("Enter your message:\n");
    fflush(stdin);
    gets(str);
    fflush(stdin);
    fprintf(fp,"%s\n",str); //saving the message in Helpline.txt file

    printf("\n");
    printf("Do you want to enter more? (y/n)");
    scanf("%c",&ch);
    printf("\n");

    while(ch=='y')
    {
        printf("Enter your message:\n");
        fflush(stdin);
        gets(str);
        fflush(stdin);
        fprintf(fp,"%s\n",str);

        printf("\n");
        printf("Do you want to enter more? (y/n)\n");
        scanf("%c",&ch);
    }
    printf("\n");
    
    fclose(fp);
    return 0;
}

void main()
{   
    char ch='y';
    int n,i,flag=1;
    char password[10],id[10],q[]="12345",p[]="admin";

    //asking user credentials
    while(flag==1)
    { 
        printf("\n");
        printf("Enter user ID and password:\n");  
        gets(id);
        gets(password);

        //condition to check credentials entered by user
        if(strcmp(password,q) || strcmp(id,p))  
        {  
            printf("\n");
            printf("Wrong id or Password. Please Try Again\n");
            flag=1;  
        }  
        else
        {
            flag=0;
        }
    }
    
    printf("\n");
    printf("********************************************************************\n");
    printf("************************** Access Granted! *************************\n");
    printf("********************************************************************\n");
    printf("\n");

    //calling function to create and store data of hostelers in Details.txt
    details();
    
    //loop to run the menu multiple times until the user asks to stop
    while(ch=='y')
    {
        //MENU
        printf("********************************************************************\n");
        printf("********************* HOSTEL MANAGEMENT SYSTEM *********************\n");
        printf("********************************************************************\n");
        printf("\n");
        printf("1.New Student Allotment\n");
        printf("2.Register Today's Attendance\n");
        printf("3.View Today's Attendance\n");
        printf("4.Display Details of Hostelers\n");
        printf("5.View Notice Board\n");
        printf("6.Add New Notice to Notice Board\n");
        printf("7.View Mess Menu\n");
        printf("8.Register Complaints\n");
        printf("9.View Complaints\n");
        printf("10.Helpline\n");
        printf("\n");
        printf("Enter any other number to exit menu\n");
        printf("\n");
        printf("Enter operation you want to perform:\n");
        scanf("%d",&n);
        printf("\n\n");

        //switch case to run through choice desired by user
        switch(n)
        {
            case 1:  //Alloting hostel room to a new student
            allotment();
            break;

            case 2: //register today's attendance
            registerAttendance();
            break;

            case 3: //view today's attendance
            viewAttendance();
            break;

            case 4: //Display details of hosteler
            printDetails();
            break;

            case 5: //Display Notice Board
            printNotices();
            break;

            case 6: //Add a new Notice to Hostel's Notice Board
            addNotices();
            break;

            case 7: //View this week's Mess Menu
            mess_menu();
            break;

            case 8: //Register a complaint
            registerComplaint();
            break;

            case 9: //View Registered Complaints
            viewComplaint();
            break;

            case 10: //Helpline 
            helpline();
            break;

            default:
            printf("Wrong choice!");

        }
        
        printf("\n");
        printf("Do you want any more operation to be performed?(y/n)\n");
        fflush(stdin);
        scanf("%c",&ch);
        fflush(stdin);
    }
    
    printf("\n");
    printf("********************************************************************\n");
    printf("******************* Hostel Management System Ended *****************\n");
    printf("***************************** Thank You ****************************\n");
    printf("********************************************************************\n");
    printf("\n\n");

}