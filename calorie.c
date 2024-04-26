// Author: Habib
// Name: calorie.c
// Purpose: Takes Height, Weight, Age, and Gender from user and provides their Basal Metabolic Rate based on their Gender

#include <stdio.h>
#include <string.h>

int main(void)
{
    float height, weight, age, BMR; // Intialise variables
    char gender[7]; // Intalise string, user should input either Male or Female
    
    printf("Enter Height(cm), Weight(kg), Age(yrs), and Gender (""Male or Female""): "); // Ask user for input
    scanf("%fcm%fkg%fyrs%s", &height, &weight, &age, &gender); // Store input in respective variables

    // printf("Height: %.0fcm\nWeight: %.0fkg\nAge: %.0f years old\nGender: %s\n", height, weight, age, gender); // Test to see if varibles are stored correctly

    if (strcmp(gender, "Male") == 0){
        BMR = (10.00f * weight) + (6.25f * height) - (5.00f * age) + 5.00f; // If user gender is "Male" then do male equation for BMR
        // printf("Your BMR IS: %.0f\n", BMR); // Print user BMR (Male)
    }else if (strcmp(gender, "Female") == 0){
        BMR = (10.00f * weight) + (6.25f * height) - (5.00f * age) - 166.00f; // Else if user gender is "Female" then do female equation for BMR
        // printf("Your BMR IS: %.0f\n", BMR); // Print user BMR (Female)
    }else if (strcmp(gender, "Female") != 0 || (strcmp(gender, "Male") != 0)){
        // If gender doesn't match either "Male" or "Female", print "Gender is wrong"
        printf("Gender is wrong\n");
    }

    int activityLevel;
    float TDEE;
    printf("How active are you (1. Not active, 2. Slightly Active, 3. Active, 4. Very Active, 5. Extra Active)?: "); // Ask for activity level
    scanf("%d", &activityLevel); // Store input in variable "activityLevel"
    // printf("%d", activityLevel); // Test to see if variable "activityLevel" is correct
    switch(activityLevel){
        case 1:
            TDEE = BMR * 1.2f;
            // printf("TDEE is %.0f\n", TDEE = BMR * 1.2f);
            break;
        case 2:
            // printf("TDEE  %.0f\n", TDEE = BMR * 1.3f);
            TDEE = BMR * 1.4f;
            break;
        case 3:
            TDEE = BMR * 1.6f;
            // printf("TDEE is %.0f\n", TDEE = BMR * 1.4f);
            break;
        case 4:
            TDEE = BMR * 1.8f;
            // printf("TDEE is %.0f\n", TDEE = BMR * 1.5f);
            break;
        case 5:
            TDEE = BMR * 2.0f;
            // printf("TDEE is %.0f\n", TDEE = BMR * 1.6f);
            break;
        default:
            printf("Activity level out of range\n");
    }
    printf("Your Height is %.0fcm\nYour Weight is: %.0fkg\nYour Age is: %.0f years old\nYour Gender is: %s\nYour BMR is: %.0f Calories\nYour TDEE is: %.0f Calories\n\a", height, weight, age, gender, BMR, TDEE);
    return 0;
}
