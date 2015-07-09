//
//  ViewController.h
//  Score
//
//  Created by Jon Howell on 06/07/2015.
//  Copyright (c) 2015 Manchester Metropolitan University - ESS - essmobile. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MessageUI/MFMailComposeViewController.h>

@interface ViewController : UIViewController <MFMailComposeViewControllerDelegate>
{
    
    IBOutlet UITextView    * resultsTxtView;
    //text views for text displays ie results or help screens
    
    // for file manager
    NSFileManager   * fileMgr;
    NSString        * homeDir;
    NSString        * filename;
    NSString        * filepath;
    
    // for calculations and functions
    NSDate          * startDate;
    NSDate          * testDate;
    NSDate          * testTime;
    UILabel         * datelbl;
    UILabel         * timelbl;
    UIButton        * emailBTN;
    UILabel         * subjectlbl;
    
    NSString * beepEffect;//from plist
    NSString * oldSubjectName;
    NSString * subjectName;
    NSString * testerName;
    NSString * email;
    NSString * resultStrings;
    NSString * displayStrings;
    NSString * displayStringsTitle;
    
    int   start;
    int   finish;
    
    NSMutableArray * resultStringRows;//for Excel and data csv format
    NSMutableArray * displayStringRows;//for screen display formatted to look nice
    NSMutableArray * displayStringTitles;
}

//file ops stuff
@property(nonatomic,retain) NSFileManager * fileMgr;
@property(nonatomic,retain) NSString      * homeDir;
@property(nonatomic,retain) NSString      * filename;
@property(nonatomic,retain) NSString      * filepath;

//dates
@property (nonatomic, copy) NSDate        * startDate;
@property (nonatomic, copy) NSDate        * testDate;
@property (nonatomic, copy) NSDate        * testTime;


@property (nonatomic, strong) IBOutlet UIButton    * emailBTN;
@property (nonatomic, strong) UITextView           * resultsTxtView;
@property (strong, nonatomic) IBOutlet UITableView * tableView;
@property (strong, nonatomic) IBOutlet UILabel     * heading;

//array for table - test only
@property (nonatomic,strong) NSMutableArray *arrItems;

-(IBAction)showEmail:(id)sender;

-(NSString *) GetDocumentDirectory;
-(NSString *) setFilename;
-(void) WriteToStringFile:(NSMutableString *)textToWrite;

@end

