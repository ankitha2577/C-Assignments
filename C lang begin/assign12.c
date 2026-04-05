#include <stdio.h>

int main() {
    int math, phy, chem, total, tmp;

    printf("Enter Marks in Mathematics: ");
    scanf("%d", &math);
    printf("Enter Marks in Physics: ");
    scanf("%d", &phy);
    printf("Enter Marks in Chemistry: ");
    scanf("%d", &chem);

    total = math + phy + chem;
    tmp = math + phy;

    
    
    if (math >= 60 && phy >= 50 && chem >= 40)
    {
        if (total >= 200 || tmp >= 150) 
        {
            printf("The candidate is ELIGIBLE for admission.\n");
        } 
        else 
        {
            printf("The candidate is NOT eligible (Total marks criteria not met).\n");
        }
    }
    else
    {
        printf("The candidate is NOT eligible (Subject minimums not met).\n");
    }

    return 0;
}