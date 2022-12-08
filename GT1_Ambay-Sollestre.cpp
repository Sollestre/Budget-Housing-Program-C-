#include <iostream>
#include <conio.h>
using namespace std;

int main ()
{
    //for house type
    int htype;

    //for loop
    int i, numh;
    int house [numh];
    int sum = 0;

    //for overall total cost
    double totalcost[100];

    //for the painting cost
    int bedpsqm, kitpsqm, batsqm;
    double bcost;
    double kcost, kcosttwo, kcostthree;
    double bacost;
    double totalpaintingcost;

    //for the flooring cost
    int linadditional_room, lanadditional_room;
    double linaddroom = 123450;
    double lanaddroom = 180500;
	double baroom, broom, addbroom, totalbroom;

	//for the labor cost
    double paintlabor, totalpaintlabor, floorlabor, totalfloorlabor;
    double paintlaborcost = 650;
    double floorlaborcost =  550;
    double pnumwork, pnumdays, fnumwork, fnumdays;
    double totallaborcost;

    char tryAgain;


    system ("cls");
    //user input number of houses
    cout << "Input Number of Houses:     ";
    cin >> numh;
    for(int i=1; i<numh+1; i++)
    {

    cout << "House Number:    " << i << endl;

    //housing type
    cout << "******************************************************************" << endl;
    cout <<"HOUSING TYPE" << endl;
    cout << "[1] Lin type House"<<endl;
    cout << "[2] Lan type House"<<endl;
    cout <<"" << endl;
    cout <<"Chosen House Type: ";
    cin >> htype;
    if (htype == 1)
    {

        cout << "Lin House: 180 sqm" << endl;
        cout << "It can accommodate 4 bedrooms and 2 bathrooms." << endl;
    }
    else
    {
        cout << "Lan House: 250 sqm" << endl;
        cout << "It can accommodate 5 bedrooms and 3 bathrooms." << endl;

    }

    //determining painting cost
    cout << "" << endl;
    cout << "******************************************************************" << endl;
    cout << "DETERMINING THE PAINTING COST" << endl;
    cout << "" << endl;
    cout << "Enter sqm of Bedroom:   " ;
    cin >> bedpsqm;

    //cost of bedroom paint per sqm
    switch(bedpsqm)
    {
    case 1 ... 29:
        bcost = bedpsqm * 125;
        cout << "Bedroom Painting Cost:  " << bcost << endl;
        break;
    case 30 ... 40:
        bcost = bedpsqm * 175.25;
        cout << "Bedroom Painting Cost:  " << bcost << endl;
        break;
    case 41 ... 1000:
        bcost = bedpsqm * 205.50;
        cout << "Bedroom Painting Cost:  " << bcost << endl;
        break;
    default:
        cout << "Invalid Input" << endl;

    }
    //cost of kitchen paint per sqm
    cout << "" << endl;
    cout << "Enter sqm of Kitchen:   ";
    cin >> kitpsqm;

    switch(kitpsqm)
    {
    case 1 ... 50:
        kcost = 12500;
        cout << "Kitchen Painting Cost:  " << kcost << endl;
        break;
    case 51 ... 1000:
        kcost = kitpsqm - 50;
        kcosttwo = kcost * 75.45;
        kcostthree = kcosttwo + 12500;
        cout << "Kitchen Painting Cost:  " << kcostthree << endl;
        break;
    default:
        cout << "Invalid Input" << endl;
    }
    //cost of bathroom paint per sqm
    cout << "" << endl;
    cout << "Enter sqm of Bathroom:  ";
    cin >> batsqm;

    switch(batsqm)
    {
    case 1 ... 1000:
        bacost = 6550;
        cout << "Bathroom Painting Cost: " << bacost << endl;
        break;
    default:
        cout << "Invalid Input" << endl;
    }
    totalpaintingcost = bcost + kcostthree + bacost;
    cout << "Total Paiting Cost:     " << totalpaintingcost << endl;
    cout << "******************************************************************" << endl;
    //Determining flooring cost
    cout <<"" << endl;
    cout << "DETERMINING THE FLOORING COST" << endl;
    cout <<"" << endl;


    if (htype == 1)//lin house additional room flooring cost
    {
    cout << "Lin House Flooring Cost: 123,450" << endl;
    cout << "" << endl;
    cout << "Any Additional Rooms?" << endl;
    cout << "[1] Bedroom" << endl;
    cout << "[2] Bathroom" << endl;
    cout << "[3] None" << endl;
    cout <<"" << endl;
    cout <<"Chosen Additional Room:  ";
    cin >> linadditional_room;

    switch(linadditional_room)
    {
    case 1:

        cout << "How many bedrooms:       ";
        cin >> broom;
        addbroom = 8500 * broom;
        totalbroom = addbroom + linaddroom;
        cout << "Total Flooring Cost:     " <<  totalbroom << endl;
        break;

    case 2:
        cout << "How many bathrooms:      ";
        cin >> baroom;
        addbroom = 4750 * broom;
        totalbroom = addbroom + linaddroom;
        cout << "Total Flooring Cost:     " <<  totalbroom << endl;
        break;

    case 3:
        cout << "Please Proceed" <<endl;
        break;

    default:
        cout << "Invalid Input" << endl;
    }

    }


    else//lan type house additional flooring cost
    {

    cout << "Lan House Flooring Cost: 180,500" << endl;
    cout << "" << endl;
    cout << "Any Additional Rooms?" << endl;
    cout << "[1] Bedroom" << endl;
    cout << "[2] Bathroom" << endl;
    cout << "[3] None" << endl;
    cout <<"" << endl;
    cout <<"Chosen Additional Room:  ";
    cin >> lanadditional_room;

    switch(lanadditional_room)
    {
    case 1:

        cout << "How many bedrooms:       ";
        cin >> broom;
        addbroom = 8500 * broom;
        totalbroom = addbroom + lanaddroom;
        cout << "Total Flooring Cost:     " <<  totalbroom << endl;
        break;

    case 2:
        cout << "How many bathrooms:      ";
        cin >> baroom;
        addbroom = 4750 * broom;
        totalbroom = addbroom + lanaddroom;
        cout << "Total Flooring Cost:     " <<  totalbroom << endl;
        break;

    case 3:
        cout << "Please Proceed" << endl;
        break;

    default:
        cout << "Invalid Input" << endl;
    }

    }
    cout << "******************************************************************" << endl;
    cout <<"" << endl;
    cout << "DETERMINING THE LABOR COST" << endl;
    cout <<"" << endl;


    if (htype == 1)//lin house labor cost
    {
    cout << "Labor Painting Cost:  650 per person" << endl;
    cout << "" << endl;
    cout << "Painting Scheduling Plan" << endl;
    cout << "Lin House (5-10 men for 5-10 days)" << endl;
    cout <<"" << endl;
    cout <<"Preffered Labor Force and Schedule:  "<< endl;

    cout << "Painting Job" << endl;
    cout <<"" << endl;
    cout << "Number of Workers:         ";
    cin >> pnumwork;
    cout << "Number of Days:            ";
    cin >> pnumdays;

    paintlabor = pnumwork * pnumdays;
    totalpaintlabor = paintlabor * paintlaborcost;

    cout << "Paint Labor Cost:          " << totalpaintlabor << endl;
    cout <<"" << endl;

    cout << "Labor Flooring Cost:  550 per person" << endl;
    cout << "" << endl;
    cout << "Flooring Scheduling Plan" << endl;
    cout << "Lin House (10-15 men for 7-15 days)" << endl;

    cout << "Flooring Job" << endl;
    cout <<"" << endl;
    cout << "Number of Workers:         ";
    cin >> fnumwork;
    cout << "Number of Days:            ";
    cin >> fnumdays;

    floorlabor = fnumwork * fnumdays;
    totalfloorlabor = floorlabor * floorlaborcost;

    cout << "Paint Labor Cost:          " << totalfloorlabor << endl;
    cout << "" << endl;

    totallaborcost = totalpaintlabor + totalfloorlabor;
    cout << "Total Labor Cost:          " <<  totallaborcost<< endl;

    }


    else//lan house labor cost
    {
    cout << "Labor Painting Cost:  650 per person" << endl;
    cout << "" << endl;
    cout << "Painting Scheduling Plan" << endl;
    cout << "Lan House (10-15 men for  7-14 days)" << endl;
    cout <<"" << endl;
    cout <<"Preffered Labor Force and Schedule:  " << endl;

    cout << "Painting Job" << endl;
    cout <<"" << endl;
    cout << "Number of Workers:         ";
    cin >> pnumwork;
    cout << "Number of Days:            ";
    cin >> pnumdays;

    paintlabor = pnumwork * pnumdays;
    totalpaintlabor = paintlabor * paintlaborcost;

    cout << "Paint Labor Cost:          " << totalpaintlabor << endl;
    cout <<"" << endl;

    cout << "Labor Flooring Cost:  550 per person" << endl;
    cout << "" << endl;
    cout << "Flooring Scheduling Plan" << endl;
    cout << "Lan House (10-15 men for 7-15 days)" << endl;

    cout << "Flooring Job" << endl;
    cout <<"" << endl;
    cout << "Number of Workers:         ";
    cin >> fnumwork;
    cout << "Number of Days:            ";
    cin >> fnumdays;

    floorlabor = fnumwork * fnumdays;
    totalfloorlabor = floorlabor * floorlaborcost;

    cout << "Paint Labor Cost:          " << totalfloorlabor << endl;
    cout << "" << endl;

    totallaborcost = totalpaintlabor + totalfloorlabor;
    cout << "Total Labor Cost:          " <<  totallaborcost<< endl;
    }
    cout << "******************************************************************" << endl;

    totalcost[i] = totalpaintingcost + totalbroom + totallaborcost;
    cout << "TOTAL COST OF HOUSE " << i << ":     " << totalcost[i] << endl;

    cout << "******************************************************************" << endl;

    }

    system ("cls");

    for (i=0; i<numh+1; i++)
    {
        sum = sum + totalcost[i];
    }

    cout << "******************************************************************" << endl;
    cout << "Number of houses:  " << numh << endl;
    cout << "******************************************************************" << endl;
    cout << "OVERALL TOTAL OF THE PROJECT:      " << sum << endl;
    cout << "******************************************************************" << endl;

    cout << "Try Another [Y/N]:  ";
    cin >> tryAgain;
    cout << "" << endl;

    if(tryAgain == 'Y' || tryAgain == 'y')
        return main();
    else if (tryAgain == 'N' || tryAgain == 'n')
        cout << "Thanks for using my program :)" << endl;
    else
        cout << "Invalid input from user";

return 0;
}


