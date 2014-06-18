
#import <UIKit/UIKit.h>

@interface ViewViewController : UIViewController <UIGestureRecognizerDelegate>
{
    IBOutlet UIButton *btn0,*btn1,*btn2,*btn3,*btn4,*btn5,*btn6,*btn7,*btn8,*btn9,*btn10,*btn11,*btn12,*btn13,*btn14,*btn15,*btn16,*btn17;
	IBOutlet UIButton *btn18,*btn19,*btn20,*btn21,*btn22,*btn23,*btn24,*btn25,*btn26,*btn27,*btn28,*btn29,*btn30,*btn31,*btn32,*btn33,*btn34;
	
	IBOutlet UIButton *btn35,*btn36,*btn37,*btn38,*btn39,*btn40,*btn41;
    IBOutlet UILabel *lblMonth;

	NSDate *today;
	NSDateComponents *currentMonth;
	NSCalendar *calendar;
	NSMutableArray *btnDayArray;
	NSMutableArray *MyDayMonthNames;

    IBOutlet UIView *viewCalendar;
    int day;
    int month;
    int year;
    UIImage *first;
}
@end
