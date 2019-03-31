//
//  ZBDependencyResolver.h
//  Zebra
//
//  Created by Wilson Styres on 3/26/19.
//  Copyright © 2019 Wilson Styres. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <sqlite3.h>

@class ZBDatabaseManager;
@class ZBPackage;
@class ZBQueue;

NS_ASSUME_NONNULL_BEGIN

@interface ZBDependencyResolver : NSObject
@property (nonatomic, strong) ZBDatabaseManager *databaseManager;
@property (nonatomic, strong) ZBQueue *queue;
@property (nonatomic) sqlite3 *database;
- (void)addDependenciesForPackage:(ZBPackage *)package;
@end

NS_ASSUME_NONNULL_END
