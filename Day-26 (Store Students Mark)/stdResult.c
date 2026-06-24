// Students Marks Stored Project Finding Students Grade!

#include<stdio.h>
//Structure create for store student details
struct student{
    char name[20];
    int roll_no;
    float marks[4]; // array
    float total;
    float percentage;
};

//Taking input from student using user defined function()
void inputStudent(struct student *s){
    printf("\nEnter Student Name: ");
    scanf("%[^\n]", &s->name);
    // Notice Space before %[^\n] to avoid newline issue
    // Stucture object Name -> variable name => s->name
    printf("\nEnter Student Roll Number: ");
    scanf("%d", &s->roll_no);

    s->total = 0;
    //Getting Array Elements using loop
    printf("\nEnter Student marks of 4 Subjects: \n");
    for(int i = 0; i<4; i++){
        printf("Subject %d: ", i+1);
        scanf("%f", &s->marks[i]);
        s->total += s->marks[i];
    }
    //Percentage = (Total_obtained/Total_marks)*100;
    s->percentage = (s->total/400.0)*100;
}

//Display Student Details
void displayStudent(struct student s){
    printf("\n****-----Student Result Display-----****\n\n");
    printf("Student Name: %s\n\n", s.name);
    printf("Student Roll Number: %d\n\n", s.roll_no);

    for(int i = 0; i<4; i++){
        printf("Marks in Subject %d: %.2f\n", i+1, s.marks[i]);
    }

    printf("\nTotal Marks of Student: %.2f\n\n", s.total);
    printf("\nStudent Percentage: %.2f\n\n", s.percentage);

//Finding Student Grade based on Percentage using else if ladder
    if(s.percentage >= 85)
    printf("Grade A\n");
    else if(s.percentage >= 75)
    printf("Grade B\n");
    else if(s.percentage >= 60)
    printf("Grade C\n");
    else if(s.percentage >= 35)
    printf("Grade D\n");
    else
    printf("Student Failed\n");
}

int main(){

    struct student std;
    printf("\n****-----Student Result Display Project-----****\n");

    inputStudent(&std);
    displayStudent(std);


    return 0;
}