/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIDebuggingInformationInspectorDetailViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {
    NSArray * _data;
    UIView * _inspectedView;
    UITableView * _tableView;
}

@property (nonatomic, retain) NSArray *data;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) UIView *inspectedView;
@property (readonly) Class superclass;
@property (nonatomic, retain) UITableView *tableView;

- (void).cxx_destruct;
- (void)_sliderValueChanged:(id)arg1;
- (void)_visibleSwitchValueChanged:(id)arg1;
- (void)createDataItems;
- (id)data;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)inspectView:(id)arg1;
- (id)inspectedView;
- (void)setData:(id)arg1;
- (void)setInspectedView:(id)arg1;
- (void)setTableView:(id)arg1;
- (id)tableView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)viewDidLoad;

@end
