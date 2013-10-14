// Copyright 2013 Google Inc. All Rights Reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.


#import <UIKit/UIKit.h>

#import <GCKFramework/GCKFramework.h>

extern NSString *const kReceiverAppName;

@class Media;
@class MediaList;

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property(nonatomic, strong) UIWindow *window;
@property(nonatomic, strong, readonly) GCKContext *context;
@property(nonatomic, strong, readonly) GCKDeviceManager *deviceManager;
@property(nonatomic, strong, readonly) MediaList *mediaList;

@end

#define appDelegate ((AppDelegate *) [UIApplication sharedApplication].delegate)
