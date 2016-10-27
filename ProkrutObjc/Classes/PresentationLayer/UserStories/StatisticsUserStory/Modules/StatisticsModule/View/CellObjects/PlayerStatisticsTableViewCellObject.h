//
//  PlayerStatisticsTableViewCellObject.h
//  ProkrutObjc
//
//  Created by Egor Tolstoy on 27/10/16.
//  Copyright © 2016 DevAlloy. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <Nimbus/NimbusModels.h>

@class AllUserStats;

@interface PlayerStatisticsTableViewCellObject : NSObject <NINibCellObject>

+ (instancetype)objectWithStatistics:(AllUserStats *)statistics
                      ratingPosition:(NSUInteger)ratingPosition;

@property (nonatomic, assign, readonly) NSUInteger ratingPosition;
@property (nonatomic, strong, readonly) NSString *name;
@property (nonatomic, strong, readonly) NSString *email;
@property (nonatomic, strong, readonly) NSURL *photoUrl;
@property (nonatomic, assign, readonly) CGFloat winrate;
@property (nonatomic, assign, readonly) NSUInteger score;
@property (nonatomic, assign, readonly) NSUInteger wins;
@property (nonatomic, assign, readonly) NSUInteger losses;

@end