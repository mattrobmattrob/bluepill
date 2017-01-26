//  Copyright 2016 LinkedIn Corporation
//  Licensed under the BSD 2-Clause License (the "License");
//  you may not use this file except in compliance with the License.
//  You may obtain a copy of the License at https://opensource.org/licenses/BSD-2-Clause
//
//  Unless required by applicable law or agreed to in writing, software
//  distributed under the License is distributed on an "AS IS" BASIS,
//  WITHOUT WARRANTIES OF ANY KIND, either express or implied.  See the License for the specific language governing permissions and limitations under the License.

#import <Cocoa/Cocoa.h>

@protocol ConsoleOutputDelegate
- (void)onConsoleOutput:(NSString *)output;
@end

@class TestItem;

@interface ConfigView : NSView
@property (nonatomic, weak) id<ConsoleOutputDelegate> delegate;

- (NSArray<TestItem *> *)getTestList;

@end

@interface TestItem : NSObject
@property (nonatomic, assign) BOOL selected;
@property (nonatomic, strong) NSString *testClass;
@property (nonatomic, strong) NSString *testName;
@end
