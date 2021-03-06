/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class <EKDayViewContentDelegate>, EKCalendarDate, EKDayGridView, EKDayViewContentGeometryDelegate, EKEvent, NSCalendar, NSMutableArray, NSString, NSTimeZone, UIColor, UIView;

@interface EKDayViewContent : UIView <CUIKSingleDayTimelineLayoutScreenUtils, UIGestureRecognizerDelegate> {
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    BOOL _allowsOccurrenceSelection;
    NSCalendar *_calendar;
    BOOL _darkensWeekends;
    NSMutableArray *_dayStarts;
    BOOL *_dayWasLaidOut;
    unsigned int _daysToDisplay;
    <EKDayViewContentDelegate> *_delegate;
    EKEvent *_dimmedOccurrence;
    EKCalendarDate *_endDate;
    BOOL _eventsFillGrid;
    float _fixedDayWidth;
    EKDayViewContentGeometryDelegate *_geometryDelegate;
    EKDayGridView *_grid;
    BOOL _hasCustomOccurrenceMargin;
    BOOL _hasCustomOccurrencePadding;
    NSMutableArray *_itemsByDay;
    NSMutableArray *_itemsByDayByEndDate;
    } _latestVisibleRect;
    BOOL _loadingOccurrences;
    int _occurrenceBackgroundStyle;
    UIColor *_occurrenceLocationColor;
    } _occurrenceMargin;
    } _occurrencePadding;
    UIColor *_occurrenceTextBackgroundColor;
    UIColor *_occurrenceTimeColor;
    UIColor *_occurrenceTitleColor;
    BOOL _putSelectionOnTop;
    BOOL _reduceLayoutProcessingForAnimation;
    UIView *_saturdayDarkeningView;
    EKEvent *_selectedEvent;
    EKCalendarDate *_startDate;
    UIView *_sundayDarkeningView;
    BOOL _usesSmallText;
    float *_visiblePinnedStackHeightAbove;
    float *_visiblePinnedStackHeightBelow;
}

@property BOOL allowsOccurrenceSelection;
@property(copy) NSCalendar * calendar;
@property BOOL darkensWeekends;
@property(copy,readonly) NSString * debugDescription;
@property <EKDayViewContentDelegate> * delegate;
@property(copy,readonly) NSString * description;
@property(retain) EKEvent * dimmedOccurrence;
@property(readonly) EKCalendarDate * endDate;
@property BOOL eventsFillGrid;
@property(readonly) double firstEventSecond;
@property float fixedDayWidth;
@property(readonly) unsigned int hash;
@property int occurrenceBackgroundStyle;
@property(retain) UIColor * occurrenceLocationColor;
@property struct UIEdgeInsets { float x1; float x2; float x3; float x4; } occurrenceMargin;
@property struct UIEdgeInsets { float x1; float x2; float x3; float x4; } occurrencePadding;
@property(retain) UIColor * occurrenceTextBackgroundColor;
@property(retain) UIColor * occurrenceTimeColor;
@property(retain) UIColor * occurrenceTitleColor;
@property BOOL reduceLayoutProcessingForAnimation;
@property(setter=selectEvent:,retain) EKEvent * selectedEvent;
@property BOOL showsLeftBorder;
@property(copy) EKCalendarDate * startDate;
@property(readonly) Class superclass;
@property(copy) NSTimeZone * timeZone;
@property BOOL usesSmallText;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })RoundRectToScreenScaleForRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (float)RoundToScreenScale:(float)arg1;
- (float)RoundToScreenScaleForFloat:(float)arg1;
- (void)_adjustViewsForPinning;
- (void)_computeDayStartsAndEnds;
- (void)_configureOccurrenceViewMarginAndPadding:(id)arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })_dayRangeForEvent:(id)arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })_dayRangeForEventWithStartDate:(id)arg1 endDate:(id)arg2;
- (id)_dayStarts;
- (float)_dayWidth;
- (BOOL)_doOffscreenOccurrences;
- (BOOL)_getBottomPinRegion:(float*)arg1 dayIndex:(unsigned int*)arg2 forPoint:(struct CGPoint { float x1; float x2; })arg3;
- (void)_layoutDay:(unsigned int)arg1;
- (void)_layoutDaysIfVisible;
- (void)_tapRecognized:(id)arg1;
- (BOOL)allowsOccurrenceSelection;
- (id)calendar;
- (void)configureOccurrenceViewForGestureController:(id)arg1;
- (BOOL)containsEvent:(id)arg1;
- (BOOL)darkensWeekends;
- (double)dateForPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)dayOccurrenceViewClicked:(id)arg1 atPoint:(struct CGPoint { float x1; float x2; })arg2;
- (void)dealloc;
- (id)delegate;
- (id)dimmedOccurrence;
- (id)endDate;
- (BOOL)eventsFillGrid;
- (BOOL)eventsIntersectRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (double)firstEventSecond;
- (float)fixedDayWidth;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (id)grid;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 orientation:(int)arg2 backgroundColor:(id)arg3 opaque:(BOOL)arg4 numberOfDaysToDisplay:(unsigned int)arg5;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 orientation:(int)arg2;
- (id)lastDisplayedSecond;
- (void)layoutSubviews;
- (int)occurrenceBackgroundStyle;
- (id)occurrenceLocationColor;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })occurrenceMargin;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })occurrencePadding;
- (id)occurrenceTextBackgroundColor;
- (id)occurrenceTimeColor;
- (id)occurrenceTitleColor;
- (id)occurrenceViewForEvent:(id)arg1 onDate:(double)arg2;
- (id)occurrenceViewForEvent:(id)arg1;
- (id)occurrenceViews;
- (struct CGPoint { float x1; float x2; })pointForDate:(double)arg1;
- (void)rectBecameVisible:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)reduceLayoutProcessingForAnimation;
- (void)selectEvent:(id)arg1;
- (id)selectedEvent;
- (void)setAllowsOccurrenceSelection:(BOOL)arg1;
- (void)setCalendar:(id)arg1;
- (void)setDarkensWeekends:(BOOL)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDimmedOccurrence:(id)arg1;
- (void)setEventsFillGrid:(BOOL)arg1;
- (void)setFixedDayWidth:(float)arg1;
- (void)setHoursToPadTop:(float)arg1;
- (void)setNeedsLayout;
- (void)setOccurrenceBackgroundStyle:(int)arg1;
- (void)setOccurrenceLocationColor:(id)arg1;
- (void)setOccurrenceMargin:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setOccurrencePadding:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setOccurrenceTextBackgroundColor:(id)arg1;
- (void)setOccurrenceTimeColor:(id)arg1;
- (void)setOccurrenceTitleColor:(id)arg1;
- (void)setOccurrences:(id)arg1;
- (void)setOrientation:(int)arg1;
- (void)setReduceLayoutProcessingForAnimation:(BOOL)arg1;
- (void)setShowsLeftBorder:(BOOL)arg1;
- (void)setStartDate:(id)arg1;
- (void)setStartDateWithDateComponents:(id)arg1;
- (void)setTimeZone:(id)arg1;
- (void)setUsesSmallText:(BOOL)arg1;
- (void)setViewsDimmed:(BOOL)arg1 forEvent:(id)arg2;
- (BOOL)showsLeftBorder;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (id)startDate;
- (id)timeZone;
- (BOOL)usesSmallText;

@end
