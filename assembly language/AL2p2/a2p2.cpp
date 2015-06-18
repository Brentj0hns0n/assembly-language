#include <iostream>
using namespace std;

int  a1[12],
     a2[12],
     a3[12];
char reply;
int  used1,
     used2,
     used3,
     remCount,
     anchor;
int* hopPtr1;
int* hopPtr11;
int* hopPtr2;
int* hopPtr22;
int* hopPtr222;
int* hopPtr3;
int* endPtr1;
int* endPtr2;
int* endPtr3;

char begA1Str[] = "beginning a1: ";
char proA1Str[] = "processed a1: ";
char comA2Str[] = "          a2: ";
char comA3Str[] = "          a3: ";
char einStr[]   = "Enter integer #";
char moStr[]    = "Max of ";
char ieStr[]    = " ints entered...";
char emiStr[]   = "Enter more ints? (n or N = no, others = yes) ";
char dacStr[]   = "Do another case? (n or N = no, others = yes) ";
char dlStr[]    = "================================";
char byeStr[]   = "bye...";

int main()
{
           //  do
begDW1:    //         {
                used1 = 0;
                hopPtr1 = a1;
       //         do
begDW2:      //          {
                   cout << einStr;
                   cout << (used1 + 1);
                   cout << ':' << ' ';
                   cin >> *hopPtr1;
                   ++used1;
                   ++hopPtr1;
                   //if (used1 == 12)
                   if (used1 != 12) goto else1;
         //          {

                      cout << moStr;
                      cout << 12;
                      cout << ieStr;
                      cout << endl;
                      reply = 'n';
                      goto endif1;
         //          }
         //          else
else1://                   {
                      cout << emiStr;
                      cin >> reply;
        //           }
endif1:
endDW2://                }
                if (reply != 'n' && reply != 'N') goto begDW2;

                cout << begA1Str;
                endPtr1 = a1 + used1;
                hopPtr1 = a1;
                goto for1test;
begf1:
                //for (hopPtr1 = a1; hopPtr1 < endPtr1; ++hopPtr1)
          //      {
                   if (hopPtr1 != endPtr1 - 1) goto else2;
         //          {
                      cout << *hopPtr1 << endl;
                      goto endif2;
         //          }
else2:
         //          {
                      cout << *hopPtr1 << ' ';
         //          }
endif2:
   ;
               ++hopPtr1;
for1test:         if (hopPtr1 < endPtr1) goto begf1;
endf1:
   ;
             //   }

    //            for (hopPtr1 = a1, hopPtr2 = a2, used2 = 0; hopPtr1 < endPtr1; ++hopPtr1, ++hopPtr2, ++used2)
                  hopPtr1 = a1;
                  hopPtr2 = a2;
                  used2 = 0;
                  goto for2test;
begfor2:
        //        {
                   *hopPtr2 = *hopPtr1;
                   ++hopPtr1;
                   ++hopPtr2;
                   ++used2;
        //        }
for2test:        if (hopPtr1 < endPtr1) goto begfor2;

                endPtr2 = a2 + used2;
        //        for (hopPtr2 = a2; hopPtr2 < endPtr2; ++hopPtr2)
                hopPtr2 = a2;
                goto for3test;
begfor3:
           //     {
                   anchor = *hopPtr2;
                   //for (hopPtr22 = hopPtr2 + 1; hopPtr22 < endPtr2; ++hopPtr22)
                   hopPtr22 = hopPtr2 + 1;
                   goto for4test;
begfor4:
          //         {
                      if (*hopPtr22 != anchor) goto endif3;
                //      {
                         //for (hopPtr222 = hopPtr22 + 1; hopPtr222 < endPtr2; ++hopPtr222)
                         hopPtr222 = hopPtr22 + 1;
                         goto for5test;
begfor5:
          //               {
                            *(hopPtr222 - 1) = *hopPtr222;
                            ++hopPtr222;
          //               }
for5test:            if (hopPtr222 < endPtr2) goto begfor5;
                         --used2;
                         --endPtr2;
                         --hopPtr22;
                //      }
endif3:
                  ++hopPtr22;
     //              }
for4test:         if (hopPtr22 < endPtr2) goto begfor4;
               ++hopPtr2;
           //     }
for3test:         if (hopPtr2 < endPtr2) goto begfor3;
endfor3:
   ;
                used3 = 0;
                hopPtr3 = a3;
                hopPtr1 = a1;
          //      while (hopPtr1 < endPtr1)
               goto while2test;
begwhile2:
         //       {
                   *hopPtr3 = *hopPtr1;
                   ++used3;
                   ++hopPtr3;
                   anchor = *hopPtr1;
                   remCount = 0;
          //         for (hopPtr11 = hopPtr1 + 1; hopPtr11 < endPtr1; ++hopPtr11)
                  hopPtr11 = hopPtr1 + 1;
                  goto for6test;
begfor6:
       //            {
                      if (*hopPtr11 != anchor) goto else4;
       //               {
                         ++remCount;
                         goto endif4;
       //               }
                      //else
else4:
        //              {
                         *(hopPtr11 - remCount) = *hopPtr11;
          //            }
endif4:
                        ++hopPtr11;
             //      }
for6test:          if ( hopPtr11 < endPtr1) goto begfor6;
                   used1 -= remCount;
                   endPtr1 -= remCount;
                   ++hopPtr1;

           //     }
while2test:       if (hopPtr1 < endPtr1) goto begwhile2;
endwhile2:
   ;

                cout << proA1Str;
          //      for (hopPtr1 = a1; hopPtr1 < endPtr1; ++hopPtr1)
               hopPtr1 = a1;
               goto for7test;
begfor7:
         //       {
         //          if (hopPtr1 == endPtr1 - 1)
                  if (hopPtr1 != endPtr1 - 1) goto else5;
         //          {
                      cout << *hopPtr1 << endl;
                      goto endif5;
         //          }
         //          else
else5:
         //          {
                      cout << *hopPtr1 << ' ';
         //          }
endif5:
                   ++hopPtr1;
         //       }
for7test:      if (hopPtr1 < endPtr1) goto begfor7;

                cout << comA2Str;

            //    for (hopPtr2 = a2; hopPtr2 < endPtr2; ++hopPtr2)
               hopPtr2 = a2;
               goto for8test;
begfor8:
            //    {
             //      if (hopPtr2 == endPtr2 - 1)
                   if (hopPtr2 != endPtr2 - 1) goto else6;
              //     {
                      cout << *hopPtr2 << endl;
                      goto endif6;
              //     }
                 //  else
else6:
              //     {
                      cout << *hopPtr2 << ' ';
              //     }
endif6:
                   ++hopPtr2;
              //  }
for8test:      if (hopPtr2 < endPtr2) goto begfor8;

                cout << comA3Str;
                endPtr3 = a3 + used3;
            //    for (hopPtr3 = a3; hopPtr3 < endPtr3; ++hopPtr3)
               hopPtr3 = a3;
               goto for9test;
begfor9:
        //        {
              //     if (hopPtr3 == endPtr3 - 1)
                  if (hopPtr3 != endPtr3 - 1) goto else7;
         //          {
                      cout << *hopPtr3 << endl;
                      goto endif7;
         //          }
               //    else
else7:
         //          {
                      cout << *hopPtr3 << ' ';
         //          }
endif7:
                   ++hopPtr3;
       //         }
for9test:      if (hopPtr3 < endPtr3) goto begfor9;

                cout << endl;
                cout << dacStr;
                cin >> reply;
                cout << endl;
endDW1://             }
DW1Test:        if (reply != 'n' && reply != 'N') goto begDW1;

             cout << dlStr;
             cout << '\n';
             cout << byeStr;
             cout << '\n';
             cout << dlStr;
             cout << '\n';

             return 0;
}
