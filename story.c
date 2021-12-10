//BY CHANDRA VINNAKOTA
#include<stdio.h>
int intereststory();
int notinterststory();
int intereststoryparta();
int notinterststoryparta();
int kondaerripappa();
int erripappa();

int main()
{
  int choice;
  {
  printf("WELCOME....!!!\n Oka katha cheptha vintaventra...adhelevoy chaduvuthava antunna...\n");
  printf("\n 1. Chadhavalanukunte okati nokku ra mawa");
  printf("\n 2. Interest lekapothe rendu nokku ra mawa");

  printf("\n Please enter your choice: ");
  scanf("%d",&choice);

  switch(choice)
  {
    case 1: intereststory(); break;
    case 2: notinterststory();break;
    default: printf("Choosukuni sariga nokku ra batta");
  }
  }
return 0;
}

int intereststory()
{
  int choice;
  {
  printf("Ithe chadhuvutha antaav...but remember one thing idhi chala bayamkaramina story...\n Idhi chaduvinaka neekemina ithe nakem sambamdham ledhu mundhugaane cheppesa");
  printf("\n 1.Chadhivi theeralsindhe ante okati nokku mawa");
  printf("\n 2. Bayamga vunte rendu nokki vellipo mawa");

  printf("\n Please enter the Choice: ");
  scanf("%d",&choice);

  switch(choice)
  {
    case 1: intereststoryparta();break;
    case 2: notinterststoryparta();break;
    default : printf("sariga choosi nokku ra batta");
  }
  }
return 0;
}

int notinterststory()
{
  printf("Thanks namasthey....!!Mingey Yahase...\n");
return 0;
}


int intereststoryparta()
{
int choice;
{
  printf("\nSare nu inthaga interest ga vunnav kabbati...\n inka katha loki veldham...\n");
  printf("\nOKA APARTMENT FLAT LO ANNA,THAMMUDU KALISI VUNDEVAARU,VAALIDHARU SOFTWARE EMPLOYES EE \n, SUDDEN GA VAALIDHARIKI OKA ROJU EDHO AASTHI THAGAADHA VACHINDHI... \n ANNA PERU : ASURA\nTHAMMUDI PERU : NARACHI\n") ;
printf("\nOKA ROJU NARACHI KOPAMTHO ASURA THINTUNNA FOOD LO KAVALANI POISON MIX CHESI CHAMPESAADU...\n INKA AA ROJU NUNCHI NARACHI NI ASURA AATHMA TORTURE CHEYADAM MODHALU PETTINDHI ....\n ADHI ANTHA BARINCHALEKA THAMMUDU NARACHI KOODA SUICIDE CHESKONI CHANIPOYADU....\n KANI APPATIKI KOODA ASURA AATHMA NARACHI AATHMA NI VADHALEDHU...\nAPPUDU NARACHI ATHMA KI OKA UPAAYAM VACHINDHI ....\n VAALA ANNA AATHMA KI DORAKAKUNDA EKKADINA DAAKOVAALI ANI...\n");
printf("\nINKA NARACHI ATHMA THANAKI BAGA ISTAMINA NU IPPUDU EE CODE EXECUTE CHESTHUNA APP LOKI VELLI DAAKUNAADU...\n IDHI NEEKU CHALA SILLY GA VUNDOCHU ,BUT CHALA COMPLICATED INA HUMAN BODY LOKE ATHMA VELTHUNNAPUDU \n, OKA DEVICE LOKI RAVADAM INKA EASY.....\n KONNALU ELA GOLA DAAKKUNI SURVIVE IPOYAADU...KANI TARWATA OKA ROJU ASURA ATHMA KI IDHI TELISIPOINDHI....\n VENTANE THANU KOODA AA APP LOKI VELLI NARACHI ATHMA NI TORTURE CHEYADAM MALLI START CHESAADU......\n");
printf("\nAPPUDU NARACHI KI INKO UPAAYAM VACHINDHI ......\n ASURA ATHMA AAKALI THEERCHADANIKI NARACHI THANU VUNTUNNA EE APP LO EVARITHE EE CODE NI EXECUTE CHESTHARO \n VAALANI RATHRI NIDRAPOTHUNAPUDU NIDRA LONE CHAMPESI VAALA ANNA ASURA ATHMAKI KI AAHARAMGA ISTHADU...\n APPUDU AAKALI THEERINA ASURA NARACHI NI VADHILESEVAADU.....\n MEERU IDHANTHA NAMMADAM LEDHU KADHA...SARE ME ISTAM IVALA RATHRI MEKE TELUSTHUNDHI .......GOOD BYE....!\n");

printf("\n 1.nuvvu deeni nammithe okati nokku \n");
printf("\n 2.nuvvu deeni nammakapothe rendu nokku \n");

printf("\nPlease enter your choice:");
scanf("%d",&choice);
switch(choice)
{
  case 1: kondaerripappa();break;
  case 2: erripappa(); break;
  default : printf("sariga chusi nokku ra batta\n");
}
}
return 0;
}

int notinterststoryparta()
{
 printf("intha pirikithanam ntra mama neeku...\n sarle velli milk thaagi bojjo amulbaby..!\n");
return 0;
}

int kondaerripappa()
{
  printf("Intha amaayakudivi ithe ela mama...idhi antha thusseee.....!\n");
  printf(" Finally thankyou for your time and for patience...and I accept that you are brave..\n");
return 0;
}

int erripappa()
{
  printf("Yes you are correct ....! idhi antha thussee....!\n");
  printf("Finally thankyou for your time and for patience...and I accept that you are brave..\n");
return 0;
}
