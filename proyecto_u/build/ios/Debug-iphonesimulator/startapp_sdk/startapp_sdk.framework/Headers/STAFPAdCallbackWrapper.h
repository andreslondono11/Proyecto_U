/**
 * Copyright 2022 Start.io Inc
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#import <Foundation/Foundation.h>
#import "STAFPCallbackWrapper.h"

NS_ASSUME_NONNULL_BEGIN

@interface STAFPAdCallbackWrapper : STAFPCallbackWrapper<STADelegateProtocol>

@property (nullable, nonatomic, copy) STAFPCallback didLoadAd;
@property (nullable, nonatomic, copy) STAFPErrorCallback failedLoadAd;

@property (nullable, nonatomic, copy) STAFPCallback didShowAd;
@property (nullable, nonatomic, copy) STAFPErrorCallback failedShowAd;

@property (nullable, nonatomic, copy) STAFPCallback didCloseAd;
@property (nullable, nonatomic, copy) STAFPCallback didClickAd;

@property (nullable, nonatomic, copy) STAFPCallback didClickNativeAd;
@property (nullable, nonatomic, copy) STAFPCallback didSendImpressionForNativeAd;

@property (nullable, nonatomic, copy) STAFPCallback didSendImpression;

@property (nullable, nonatomic, copy) STAFPCallback didCompleteVideo;
@end

NS_ASSUME_NONNULL_END
