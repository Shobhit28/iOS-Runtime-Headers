/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class CNContact, HKHealthStore, NSString, _HKMedicalIDData;

@interface ABMedicalIDAction : ABPropertyAction <HKMedicalIDViewControllerDelegate> {
    _HKMedicalIDData *_healthData;
    HKHealthStore *_healthStore;
    int _medicalIDActionType;
}

@property(retain) CNContact * contact;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(retain) _HKMedicalIDData * healthData;
@property(retain) HKHealthStore * healthStore;
@property int medicalIDActionType;
@property(readonly) Class superclass;

- (id)healthData;
- (id)healthStore;
- (int)medicalIDActionType;
- (void)medicalIDViewControllerDidCancel:(id)arg1;
- (void)medicalIDViewControllerDidDelete:(id)arg1;
- (void)medicalIDViewControllerDidFinish:(id)arg1;
- (void)medicalIDViewControllerDidSave:(id)arg1;
- (void)performActionWithSender:(id)arg1;
- (void)setHealthData:(id)arg1;
- (void)setHealthStore:(id)arg1;
- (void)setMedicalIDActionType:(int)arg1;

@end
