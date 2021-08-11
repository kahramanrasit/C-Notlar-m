#ifndef DATE_H
#define DATE_H

typedef struct {
	int d; // member day
	int m; // member month
	int y; // member year
}Date;

//sett function / setters / mutators

Date* set_date(Date* p, int d, int m, int y); /*Bir tarih gönderilecek, gönderilen
											  tarih gönderilen yapı adresinden erişim
											  sağlanarak yapıya aktarılacak*/
Date* set_date_today(Date* p); /*fonksiyona gönderilen yapı adresine fonksiyonun
							   çağırıldığı tarih atanır.*/

Date* set_date_str(Date* p, const char* pstr); /*Bir yazı adresini alarak birinci
											parametrede gönderilen yapıya yazıdan 
											aldığı formatlı tarih bilgisini atıyor.*/

Date* set_date_random(Date* p); /*Rastgele bir tarih oluşturarak gönderilen yapıya 
								atanır.*/

Date* set_month(Date* p, int mon); /*Tarihin ayını set ediyor*/
Date* set_year(Date* p, int y); /*Tarihin yılını set ediyor*/
Date* set_month_day(Date* p, int mday); /*Tarihin ayın gününü set ediyor */

//get functions - getters - accessors 

int get_year(const Date* p); /*Yapıdaki yıl bilgisini geri döndürüyor*/
int get_month(const Date* p);/*Yapıdaki ay bilgisini geri döndürüyor*/
int get_month_day(const Date* p);/*Yapıdaki ayın günü bilgisini geri döndürüyor*/
int get_week_day(const Date* p);/*Yapıdaki haftanın günü bilgisini geri döndürüyor*/
int get_year_day(const Date* p);/*Yapıdaki yılın bilgisini geri döndürüyor*/


// input-output function

void print_date(const Date* p); /*gönderilen yapıdaki tarih değerini ekrana
								yazdıran fonksiyon.*/
Date* scan_date(Date* p); /*yapıya tarih bilgisi giriliyor*/


// Utility function

int cmp_date(const Date*, const Date*);  /*Verilen iki tarihin karşılaştırmasını yapsın*/
int date_diff(const Date* p, const Date*); /*Gönderilen iki tarih arasındaki günlerin
										   sayısını geri döndürsün*/

Date* ndays_date(Date* pdest, const Date* psource, int n); /* bir tarih gönderilecek
														   o tarihten n gün sonra hangi
														   tarihin olduğu bilgisi geri
														   gönderilecek.*/



  
#endif
