//
//  CKCalendarGridViewDelegate.h
//  MBCalendarKit
//
//  Created by Moshe Berman on 8/10/17.
//  Copyright © 2017 Moshe Berman. All rights reserved.
//

@import UIKit;

@class CKCalendarGridView;

/**
 The `CKCalendarGridViewDelegate` protocol defines an interface for configuring cells for display.
 */
@protocol CKCalendarGridViewDelegate <NSObject>

/**
 Configures a calendar cell for appearance.

 @param gridView The grid view making the call.
 @param cell A cell dequeued by the grid view.
 @param date The date represented by the cell.
 @return After configuring the cell, return the same cell you received.
 */
- (nonnull UICollectionViewCell *)calendarGrid:(nonnull CKCalendarGridView *)gridView willDisplayCell:(nonnull UICollectionViewCell *)cell forDate:(nonnull NSDate *)date;

@end
