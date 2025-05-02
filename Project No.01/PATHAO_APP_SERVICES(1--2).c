
                                        //PATHAO APP SERVICES
                                        
#include <stdio.h>
#include<stdlib.h>
#include <string.h>

int main() {
    // 1. Variables for storing single user data
    int userId = 0;
    char userName[100];
    char userPhone[100];
    int count=0;
    char userEmail[100];
    int i=0,check=0;
    char userGender[20];
    char userPassword[20];
 
    // 2. Variables for storing single driver data
    int driverId = 0;
    char driverName[100];
    char driverPhone[100];
    char driverEmail[100];
    int j=0,drivercheck=0;
    char driverGender[20];
    char driverPassword[20];
    char driverVehicle[20];
    float driverRating;

    // 3. Variables for storing single food order data
    int foodOrderId = 0;
    char foodRestaurant[100];
    char foodItem[100];
    char foodLocation[100];
    float foodPrice;

    // 4. Variables for storing single ride data
    int rideId = 0;
    int rideUserId = 0;
    int rideDriverId = 0;
    char ridePickup[100];
    char rideDropoff[100];
    int foodorderId;
    float rideDistance;
    float rideFare;

    // 5. Variables for storing single delivery data
    int deliveryId = 0;
    char deliverySender[100];
    char deliveryReceiver[100];
    char deliveryPackage[200];
    char deliveryLocation[100];
    int deliveryorderId;
    float deliveryCharge;

    int choice;

    printf("\n\nWELCOME TO 'PATHAO APP SERVICES'.\n\n");
    printf("IF YOU WANT TO GET SERVICES YOU MUST REGISTER FIRST, WHETHER YOU ARE A USER OR DRIVER.\n\n");



    while (1) {

    printf("\n--- SERVICES ---\n");
    printf("1. Register User\n");
    printf("2. Register Driver\n");
    printf("3. Booking Ride\n");
    printf("4. Place Food Order\n");
    printf("5. Place Delivery\n");
    printf("6. Exit\n");

    printf("\nEnter your choice: ");
    scanf("%d", &choice);

       // 1. Register User
        if (choice == 1)
         {  
            
            printf("\nGive your information for SignUp as a User:\n");
            printf("Enter Name: ");
            fflush(stdin);
            gets(userName);
            
            printf("Enter Phone: ");
            gets(userPhone);

            // phone Number must be 11 digits
             int i=0;
             count=0;
             while(userPhone[i]!='\0'){
             count++;
             i++;
             }

             //printf("%d digits\n",count);
             if(count==11)
             printf("Number is Valid.\n");
             else  {
             printf("Invalid Number.Run again!\n");
             exit(1); //terminate the program
             }
            

            // Checking Mail.Mail must have @ sign.
            printf("Enter Email: ");
            gets(userEmail);
            int k=0;
            while(userEmail[k]!='\0'){
                if(userEmail[k]=='@')
                check++;
                k++;
            }
            if(check!=0){
                printf("Valid Email!\n");
            }
            else {
                printf("\nInvalid Email.Must be encluded @ sign.\n");
                printf("Rnu the code again!\n");
                exit(1); //terminate the program
            }

            printf("Enter Gender: ");
            scanf("%s", userGender);
            printf("Enter Password: ");
            scanf("%s", userPassword);
            userId = userId+1;
            printf("User Registration ID is: 000%d\n", userId);
            printf("\nCONGRATULATIONS! REGISTRATION HAS BEEN COMPLETED AS A USER.\n");

        }
        // 2. Register Driver
         else if (choice == 2) 
         {
            printf("\nGive your information for SignUp as a Driver:\n");
            printf("Enter Name: ");
            fflush(stdin);
            gets(driverName);
            printf("Enter Phone: ");
            gets(driverPhone);

           // Phone Number must be 11 digits
             int i=0;
             count=0;
             while(driverPhone[i]!='\0'){
             count++;
             i++;
             }

             //printf("%d digits\n",count);
             if(count==11)
             printf("Number is Valid.\n");
             else  {
             printf("Invalid Number.Run again!");
             exit(1); //terminate the program
             }

           // Checking Mail.Mail must have @ sign.
          
            printf("Enter Email: ");
            gets(driverEmail);
            int j=0;
            while(driverEmail[j]!='\0'){
                if(driverEmail[j]=='@')
                drivercheck++;
            j++;
            }
            if(drivercheck!=0){
                printf("Valid Email.\n");
            }
            else {
                printf("\nInvalid Email.Must be encluded @ sign.\n");
                 printf("Rnu the code again!\n");
                exit(1); //terminate the program
            }

            printf("Enter Gender: ");
            scanf("%s", driverGender);
            printf("Enter Password: ");
            scanf("%s", driverPassword);
            printf("Enter Vehicle Type: ");
            scanf("%s", driverVehicle);
            //printf("Enter Driver rating: ");
            //scanf("%f", &driverRating);
            driverId = driverId+1;
            printf("DRIVER REGISTRATION ID is: 000%d\n", driverId);
            printf("\nCONGRATULATIONS! REGISTRATION HAS BEEN COMPLETED AS A DRIVER.\n");

        } 
        // 3. Booking Ride
        else if (choice == 3)
         {
            printf("\nGive the information for Booking Ride:\n");
            printf("Enter User Registration ID: ");
            scanf("%d", &rideUserId);
           if(rideUserId!=userId){
            printf("Invalid User ID.Run Again!\n");
            exit(1);
           }

            printf("Enter Driver ID: ");
            scanf("%d", &rideDriverId);

             if(rideDriverId!=driverId){
            printf("Invalid Driver ID.Run Again!\n");
            exit(1);
           }

            printf("Enter Pickup Location: ");
            scanf("%s", ridePickup);
            printf("Enter Drop-off Location: ");
            scanf("%s", rideDropoff);
            printf("Enter Distance (KM): ");
            scanf("%f", &rideDistance);
            printf("Enter Fare (TK): ");
            scanf("%f", &rideFare);

            rideId = rideId+1;
            printf("Ride booked with ID No: 000%d\n", rideId);
            printf("\nThank you for booking the ride.\n");

        } 
        // 4. Place Food Order
        else if (choice == 4) 
        {
            printf("\nGive the information for Ordering Food:\n");


         printf("Enter User Registration ID: ");
            scanf("%d", &foodorderId);
           if(foodorderId!=userId){
            printf("Invalid User ID.Run Again!\n");
            exit(1);
           }



            printf("Enter Restaurant Name: ");
            scanf("%s", foodRestaurant);
            printf("Enter Food Item: ");
            scanf("%s", foodItem);
            printf("Enter Price (TK): ");
            scanf("%f", &foodPrice);
            printf("Enter Location: ");
            scanf("%s", foodLocation);

            foodOrderId = foodOrderId+1;
            printf("Food order Confirmed with ID No: 000%d\n", foodOrderId);
            printf("\nThank you for confirming your order.\n");

        } 
         // 5. Delivery Services
         else if (choice == 5) 
         {          
            printf("\nGive the information for Delivery Order:\n");


             printf("Enter User Registration ID: ");
            scanf("%d", &deliveryorderId);
           if(deliveryorderId!=userId){
            printf("Invalid User ID.Run Again!\n");
            exit(1);
           }
            printf("Enter Sender Name: ");
            scanf("%s", deliverySender);
            printf("Enter Receiver Name: ");
            scanf("%s", deliveryReceiver);
            printf("Enter Package Details: ");
            scanf("%s", deliveryPackage);
            printf("Enter delivery charge (TK): ");
            scanf("%f", &deliveryCharge);
            printf("Enter Location: ");
            scanf("%s", deliveryLocation);

            deliveryId = deliveryId+1;
            printf("Delivery Confirmed with ID No: 000%d\n", deliveryId);
            printf("\nThank you for confirming your delivery.\n");

        } 
        else if (choice == 6)
         {
            printf("Exiting...\n");
            break;
        }
         else {
            printf("Invalid choice!\n");
        }
    }

    return 0;
}