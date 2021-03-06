/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class <TSKCompatibilityDelegate>, NSString;

@interface TSKApplicationDelegate : NSObject <TSKApplicationDelegate> {
    <TSKCompatibilityDelegate> *_compatibilityDelegate;
}

@property(getter=isActivating,readonly) BOOL activating;
@property(readonly) NSString * applicationName;
@property(readonly) BOOL centerOnInitialSelection;
@property(retain) <TSKCompatibilityDelegate> * compatibilityDelegate;
@property(readonly) BOOL designModeEnabled;
@property(readonly) NSString * documentTypeDisplayName;
@property(getter=isInBackground,readonly) BOOL inBackground;
@property(readonly) BOOL isCanvasFullScreen;
@property(readonly) BOOL performanceModeEnabled;
@property(readonly) BOOL tableCellInspectorShowsNaturalAlignment;
@property(readonly) BOOL tableHeaderInspectorShowsFreezeHeaderColumnsSwitch;
@property(readonly) BOOL tableHeaderInspectorShowsFreezeHeaderRowsSwitch;
@property(readonly) BOOL tableHeaderInspectorShowsRepeatHeaderRowsSwitch;
@property(readonly) NSString * templateTypeDisplayName;
@property(readonly) BOOL textInspectorShowsMoreSubpane;

+ (id)documentDirectoryPath;
+ (id)platform_sharedDelegate;
+ (void)setDelegate:(id)arg1;
+ (id)sharedDelegate;

- (id)appChartPropertyOverrides;
- (id)applicationName;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })applicationToolbarFrame;
- (BOOL)centerOnInitialSelection;
- (id)compatibilityDelegate;
- (id)createCompatibilityDelegate;
- (id)defaultHyperlinkURL;
- (BOOL)designModeEnabled;
- (id)documentTypeDisplayName;
- (id)init;
- (id)invalidURLSchemes;
- (BOOL)isActivating;
- (BOOL)isCanvasFullScreen;
- (BOOL)isInBackground;
- (BOOL)openURL:(id)arg1;
- (BOOL)performanceModeEnabled;
- (id)previewImageForType:(id)arg1;
- (void)setCompatibilityDelegate:(id)arg1;
- (BOOL)shouldGenerateGuidesForOffscreenLayouts;
- (BOOL)shouldRenderContactShadow;
- (BOOL)shouldRenderCurvedShadow;
- (BOOL)shouldValidateMasterLayoutWhileInsertingRows;
- (BOOL)supportsRTL;
- (BOOL)supportsScrollingInPhoneCommentUI;
- (BOOL)tableCellInspectorShowsNaturalAlignment;
- (BOOL)tableHeaderInspectorShowsFreezeHeaderColumnsSwitch;
- (BOOL)tableHeaderInspectorShowsFreezeHeaderRowsSwitch;
- (BOOL)tableHeaderInspectorShowsRepeatHeaderRowsSwitch;
- (id)templateTypeDisplayName;
- (BOOL)textInspectorShowsMoreSubpane;

@end
