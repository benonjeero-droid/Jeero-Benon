#include <stdio.h>
#include <string.h>

// Data structure for rider information
struct Rider
{
    char name[50];
    char nin[20];
    char stage[30];
    float savings;
    float loan;
    float loan_interest;
};

int main()
{
    struct Rider r;
    int choice;
    FILE *fp;
    
    do
    {
        printf("\nBODA-BODA SACCO SYSTEM \n");
        printf("1. Register Rider & Record Activity\n");
        printf("2. Display All SACCO Records\n");
        printf("3. Exit Program\n");
        printf("Select option: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            // Opening file in Append mode to add data to the end
            fp = fopen("sacco_records.txt", "a");
            if (fp == NULL)
            {
                printf("Error opening file!\n");
                break;
            }

            printf("Enter Rider Name: ");
            scanf(" %[^\n]", r.name);
            printf("Enter NIN: ");
            scanf("%s", r.nin);
            printf("Enter Stage: ");
            scanf("%s", r.stage);
            printf("Enter Savings Amount: ");
            scanf("%f", &r.savings);
            printf("Enter Loan Amount: ");
            scanf("%f", &r.loan);

            // Simple interest calculation (10%)
            r.loan_interest = r.loan * 0.10;

            fprintf(fp, "%s %s %s %.2f %.2f %.2f\n",
                    r.name, r.nin, r.stage, r.savings, r.loan, r.loan_interest);
            fclose(fp);

            printf("\nRecord saved successfully with 10%% loan interest calculated.\n");
            break;

        case 2:
            // Opening file in Read mode
            fp = fopen("sacco_records.txt", "r");
            if (fp == NULL)
            {
                printf("\nNo records found yet.\n");
                break;
            }

            printf("\n%-15s %-15s %-15s %-10s %-10s %-10s\n",
                   "NAME", "NIN", "STAGE", "SAVINGS", "LOAN", "INTEREST");
            printf("--------------------------------------------------------------------------\n");

            while (fscanf(fp, "%s %s %s %f %f %f",
                          r.name, r.nin, r.stage, &r.savings, &r.loan, &r.loan_interest) != EOF)
            {
                printf("%-15s %-15s %-15s %-10.2f %-10.2f %-10.2f\n",
                       r.name, r.nin, r.stage, r.savings, r.loan, r.loan_interest);
            }
            fclose(fp);
            break;

        case 3:
            printf("==========================================\n");
            printf("DEVELOPED BY: JEERO BENON\n");
            printf("REG NO: 2025/DCS/DAY/0987/G\n");
            printf("=========================================\n");
            printf("\nExiting Program...\n");
            break;

        default:
            printf("Invalid selection. Please try again.\n");
        }
    } while (choice != 3);

    return 0;
}