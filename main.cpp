//
//  main.cpp
//  Quiz
//
//  Created by Maida Razic on 07/06/2020.
//  Copyright © 2020 Maida Razic. All rights reserved.
//

// This app choses randomly the entered number of questions and shows them to the user which helps students to practice questions without following the same order of questions every time. 


#include <iostream>
#include <stdlib.h>
#include <ctime>

using namespace std;

void questions(int question);

int main() {

    int numQ = 0, count = 0;
    
    cout<<"Enter the number of questions you want to be asked: "<<endl;
    
    cin>>numQ;
    
    srand((unsigned) time(0));
    
    while (count < numQ) {
        questions(1+(rand() % 96));
        count++;
    }
    
    return 0;
}

void questions (int question) {
    
    switch (question) {
        case 1:
            cout<<"1. Boş zamanlarında ne yapıyorsun? (2 aktivite)"<<endl;
            break;
            
        case 2:
            cout<<"2. Sporcu musun?"<<endl;
            break;
            
        case 3:
            cout<<"3. Boş zamanlarında spor yapıyor musun?"<<endl;
            break;
            
        case 4:
            cout<<"4. Okuldan sonra spor yapıyor musun? "<<endl;
            break;
            
        case 5:
            cout<<"5. Hangi spordan hoşlanıyorsun?"<<endl;
            break;
                                             
        case 6:
            cout<<"6. Grbavica’da her gün maç var mı?"<<endl;
            break;
            
        case 7:
            cout<<"7. Maçlara gidiyor musun?"<<endl;
            break;
            
        case 8:
            cout<<"8. Her gün dışarı çıkıyor musun?"<<endl;
            break;
            
        case 9:
            cout<<"9. Bir ayda kaç kitap okuyorsun?"<<endl;
            break;
            
        case 10:
            cout<<"10. Bu akşam evde kitap okumak istiyor musun?"<<endl;
            break;
                                                                         
        case 11:
            cout<<"11. Her gün dışarı çıkıyor musun?"<<endl;
            break;
            
        case 12:
            cout<<"12. Okuldan sonra kafeye gidiyor musun? "<<endl;
            break;
            
        case 13:
            cout<<"13. Genellikle hangi kafeye gidiyorsun?  "<<endl;
            break;
                       
        case 14:
            cout<<"14. Bu kafe nerede? (Uzak mı?)"<<endl;
            break;
                                                                     
        case 15:
            cout<<"15. Müzik dinliyor musun? "<<endl;
            break;
            
        case 16:
            cout<<"16. Hangi müzikten hoşlanıyorsun?"<<endl;
            break;
            
        case 17:
            cout<<"17. Konserlere gidiyor musun? "<<endl;
            break;
            
        case 18:
            cout<<"18. Saraybosna’da her akşam bir konser var mı?"<<endl;
            break;
            
        case 19:
            cout<<"19. Okuldan sonra genellikle ne yapıyorsun?"<<endl;
            break;
            
        case 20:
            cout<<"20. Evde her gün kaç saat ders çalışıyorsun? "<<endl;
            break;
            
        case 21:
            cout<<"21. Televizyonda genellikle ne izliyorsun? "<<endl;
            break;
                       
        case 22:
            cout<<"22. Bugün saat kaçta okuldan çıkıyorsun?"<<endl;
            break;
            
        case 23:
            cout<<"23. Okuldan sonra genellikle nereye gidiyorsun?"<<endl;
            break;
                   
        case 24:
            cout<<"24.Akşam evde genellikle ne yapıyorsun? "<<endl;
            break;
                       
        case 25:
            cout<<"25. Evde kaç saat internet kullanıyorsun?"<<endl;
            break;
            
        case 26:
            cout<<"26. İnternette genellikle hangi kanalları izliyorsun?"<<endl;
            break;
            
        case 27:
            cout<<"27. Yazın tatilde genellikle nereye gidiyorsun? "<<endl;
            break;
            
        case 28:
            cout<<"28. Bu yıl Hırvatistan'a gitmek istiyor musun? "<<endl;
            break;
                                                        
        case 29:
            cout<<"29. Yazın ne yapmak istiyorsun? (2 aktivite) "<<endl;
            break;
            
        case 30:
            cout<<"30. Kışın tatilde nereye gidiyorsun? "<<endl;
            break;
            
        case 31:
            cout<<"31. Bu kış İgman'a gitmek istiyor musun? "<<endl;
            break;
            
        case 32:
            cout<<"32. Saraybosna kışın soğuk mu? "<<endl;
            break;
            
        case 33:
            cout<<"33. İUS'ta kışın hangi ayda dersler yok? "<<endl;
            break;
                                                                                    
        case 34:
            cout<<"34. Kışın tatilde genellikle ne yapıyorsun?(2 aktivite)"<<endl;
            break;
            
        case 35:
            cout<<"35. İgman’a kışın turist geliyor mu?"<<endl;
            break;
            
        case 36:
            cout<<"36. İgman kışın soğuk mu?  "<<endl;
            break;
                                  
        case 37:
            cout<<"37. Cumartesi akşam genellikle ne yapıyorsun?  "<<endl;
            break;
                                                                                
        case 38:
            cout<<"38. Cumartesi akşamları dışarı çıkıyor musun? "<<endl;
            break;
                       
        case 39:
            cout<<"39. Cumartesi akşam nereye gidiyorsun? "<<endl;
            break;
            
        case 40:
            cout<<"40. Cumartesi akşamları Cinema City'de güzel filmler var mı?"<<endl;
            break;
                       
        case 41:
            cout<<"41. Cinema City hafta sonu kalabalık mı? "<<endl;
            break;
                       
        case 42:
            cout<<"42. Sen hafta sonları orada film izliyor musun?"<<endl;
            break;
                       
        case 43:
            cout<<"43. Cumartesi akşam Sloga’ya gidiyor musun? "<<endl;
            break;
                       
        case 44:
            cout<<"44. Pazar günü genellikle nereye gidiyorsun? "<<endl;
            break;
                                  
        case 45:
            cout<<"45. Pazar günü Bjelaşnitsa'ya gidiyor musun? "<<endl;
            break;
            
        case 46:
            cout<<"46. Pazar günü genellikle nerede yemek yiyorsun? "<<endl;
            break;
            
        case 47:
            cout<<"47. Hafta sonu genellikle ne yapıyorsun? (2 aktivite)"<<endl;
            break;
            
        case 48:
            cout<<"48. Hafta sonu IUS'a gidiyor musun?  "<<endl;
            break;
                                                            
        case 49:
            cout<<"49. Hafta sonu üniversitede dersler var mı?"<<endl;
            break;
            
        case 50:
            cout<<"50. Hafta sonları kitap okuyor musun? "<<endl;
            break;
            
        case 51:
            cout<<"51. Hafta sonu geç kalkıyor musun?  "<<endl;
            break;
        case 52:
            cout<<"52. Hafta sonu saat kaçta kalkıyorsun / uyanıyorsun?"<<endl;
            break;
            
        case 53:
            cout<<"53. Hafta sonu kahvaltıda ne yiyorsun?"<<endl;
            break;
                                                                                        
        case 54:
            cout<<"54. Hafta sonu ders çalışıyor musun?"<<endl;
            break;
            
        case 55:
            cout<<"55. Hafta sonu kaç saat ders çalışıyorsun?"<<endl;
            break;
            
        case 56:
            cout<<"56. Nerelisin? "<<endl;
            break;
                                      
        case 57:
            cout<<"57. Nerede yaşıyorsun? / Nerede oturuyorsun?"<<endl;
            break;
                                                                                    
        case 58:
            cout<<"58. Hangi şehirde oturuyorsun?"<<endl;
            break;
                           
        case 59:
            cout<<"59. Orada mağazalar ve marketler 24 saat açık mı? "<<endl;
            break;
            
        case 60:
            cout<<"60. İnsanlar genellikle ne zaman alışveriş yapıyorlar?"<<endl;
            break;
                           
        case 61:
            cout<<"61. Oraya çok turist geliyor mu?"<<endl;
            break;
                           
        case 62:
            cout<<"62. Turistler orada genellikle ne yapıyorlar? (2 aktivite)"<<endl;
            break;
                           
        case 63:
            cout<<"63. Orada kaç bin insan yaşıyor?"<<endl;
            break;
                           
        case 64:
            cout<<"64. Orası küçük bir şehir mi? "<<endl;
            break;
                                      
        case 65:
            cout<<"65. Orada büyük alışveriş merkezleri var mı?"<<endl;
            break;
            
        case 66:
            cout<<"66. Bu alışveriş merkezleri ucuz mu? "<<endl;
            break;
            
        case 67:
            cout<<"67. Orada kafelerde bir kahve kaç lira?"<<endl;
            break;
            
        case 68:
            cout<<"68. Bu alışveriş merkezlerinde insanlar genellikle ne yapıyorlar?(2 aktivite)"<<endl;
            break;
                                                                       
        case 69:
            cout<<"69. Nerede yaşamak istiyorsun?"<<endl;
            break;
            
        case 70:
            cout<<"70. Orası nasıl bir şehir? (Büyük mü?)"<<endl;
            break;
            
        case 71:
            cout<<"71. Oraya çok turist geliyor mu?"<<endl;
            break;
            
        case 72:
            cout<<"72. Orada insanlar hangi dili konuşuyorlar?"<<endl;
            break;
            
        case 73:
            cout<<"73. Orada insanlar hafta sonu genellikle ne yapıyorlar?  (2 aktivite) "<<endl;
            break;
                                                                                            
        case 74:
            cout<<"74. Nerede yaşamak istiyorsun?"<<endl;
            break;
            
        case 75:
            cout<<"75. Orası nasıl bir şehir? (Büyük mü?) "<<endl;
            break;
            
        case 76:
            cout<<"76. Çalışıyor musun?"<<endl;
            break;
                                                 
        case 77:
            cout<<"77. Ne iş yapıyorsun? "<<endl;
            break;
                                                                                            
        case 78:
            cout<<"78. Hangi üniversitede okuyorsun?  "<<endl;
            break;
                                      
        case 79:
            cout<<"79. Nerede okuyorsun?"<<endl;
            break;
            
        case 80:
            cout<<"80. Ne okuyorsun?"<<endl;
            break;
                                      
        case 81:
            cout<<"81. IUS öğrencilere burs veriyor mu?"<<endl;
            break;
                                      
        case 82:
            cout<<"82. IUS’ ta her gün dersler var mı?"<<endl;
            break;
                                      
        case 83:
            cout<<"83. Hangi üniversiteye gidiyorsun? "<<endl;
            break;
                                      
        case 84:
            cout<<"84. IUS‘ta Türk öğrenci var mı?"<<endl;
            break;
                                                 
        case 85:
            cout<<"85. IUS’ta kaç öğrenci okuyor?"<<endl;
            break;
            
        case 86:
            cout<<"86. IUS’ta hangi yabancı dilleri öğreniyorsun? "<<endl;
            break;
                           
        case 87:
            cout<<"87. Yazın İUS'ta dersler var mı?"<<endl;
            break;
            
        case 88:
            cout<<"88. İUS'ta tatil ne zaman?"<<endl;
            break;
                                                                           
        case 89:
            cout<<"89. Başarılı bir öğrenci misin? "<<endl;
            break;
            
        case 90:
            cout<<"90. IUS’tan burs alıyor musun? "<<endl;
            break;
            
        case 91:
            cout<<"91. IUS'a Türkiye'den öğrenci geliyor mu?"<<endl;
            break;
            
        case 92:
            cout<<"92. Öğretmen misin? "<<endl;
            break;
            
        case 93:
            cout<<"93. Kaç yabancı dil konuşuyorsun?  "<<endl;
            break;
                                                                        
        case 94:
            cout<<"94. Hangi yabancı dilleri konuşuyorsun? "<<endl;
            break;
            
        case 95:
            cout<<"95. Japonca biliyor musun? "<<endl;
            break;
            
        case 96:
            cout<<"96. Çalışkan bir öğrenci misin? "<<endl;
            break;
            
        default:
            break;
    }
    
}
