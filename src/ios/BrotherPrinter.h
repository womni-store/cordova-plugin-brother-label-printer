#import <ExternalAccessory/ExternalAccessory.h>
#import <Cordova/CDVPlugin.h>
#import "BRUserDefaults.h"
#import <BRPtouchPrinterKit/BRPtouchNetworkManager.h>
#import <BRPtouchPrinterKit/BRPtouchPrinterKit.h>
#import "BRBluetoothPrintOperation.h"
#import "BRWLANPrintOperation.h"
#define kPaperLabelName		@"paperLabelName"

static NSString *const IS_FINISHED_FOR_WLAN = @"isFinishedForWLAN";

static NSString *const COMMUNICATION_RESULT_FOR_WLAN = @"communicationResultForWLAN";


@interface BrotherPrinter : CDVPlugin<BRPtouchNetworkDelegate>
@property (retain, atomic) NSOperationQueue *operationQueue;

-(void)findNetworkPrinters:(CDVInvokedUrlCommand*)command;
-(void)findBluetoothPrinters:(CDVInvokedUrlCommand*)command;
-(void)findPrinters:(CDVInvokedUrlCommand*)command;
-(void)setPrinter:(CDVInvokedUrlCommand*)command;
-(void)printViaSDK:(CDVInvokedUrlCommand*)command;
@end
