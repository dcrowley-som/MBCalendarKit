//
//  CKCakeCalendarView.h
//  MBChocolateCake
//
//  Created by Moshe Berman on 4/10/13.
//  Copyright (c) 2013 Moshe Berman. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "CKCakeViewModes.h"

@class CKCakeView;
@class CKCakeEvent;

@protocol CKCakeViewDataSource <NSObject>

- (NSArray *)cakeView:(CKCakeView *)cakeView eventsForDate:(NSDate *)date;

@end

@protocol CKCakeViewDelegate <NSObject>

// 
- (void)cakeView:(CKCakeView *)cakeView willSelectDate:(NSDate *)date;

//  When the date changes
- (void)cakeView:(CKCakeView *)cakeView didSelectDate:(NSDate *)date;

//  A row is selected in the events table.
- (void)cakeView:(CKCakeView *)cakeView didSelectEvent:(CKCakeEvent *)event;

@end

@interface CKCakeView : UIView

@property (nonatomic, assign) CKCakeDisplayMode displayMode;

@property(nonatomic, strong) NSLocale       *locale;            // default is [NSLocale currentLocale]. setting nil returns to default
@property(nonatomic, copy)   NSCalendar     *calendar;          // default is [NSCalendar currentCalendar]. setting nil returns to default
@property(nonatomic, strong) NSTimeZone     *timeZone;          // default is nil. use current time zone or time zone from calendar

@property (nonatomic, strong) NSDate *date;

- (id)initWithMode:(CKCakeDisplayMode)cakeDisplayMode;

- (void)setDisplayMode:(CKCakeDisplayMode)displayMode animated:(BOOL)animated;

@end
