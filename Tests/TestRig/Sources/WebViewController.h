//
// Copyright 2017 Google Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
// TODO: Perform a scan of UIWebView usage and deprecate if possible. // NOLINT

#import <UIKit/UIKit.h>

// View controller for the UIWebView section of the TestApp.
@interface WebViewController : UIViewController <UIWebViewDelegate> {
  IBOutlet UIActivityIndicatorView *_activityIndicator;
  IBOutlet UIWebView *_webView;
  IBOutlet UISwitch *_webViewBounceSwitch;
}

@property(nonatomic, strong) UIActivityIndicatorView *activityIndicator;

@property(nonatomic, strong) UIWebView *webView;

@end

#pragma clang diagnostic pop