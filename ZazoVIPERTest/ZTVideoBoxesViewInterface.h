//
//  ZTVideoBoxesViewInterface.h
//  ZazoVIPERTest
//
//  Created by AP on 11/13/15.
//  Copyright © 2015 RIT. All rights reserved.
//

@protocol ZTVideoBoxesViewInterface <NSObject>

- (void)configureVideoBoxesViews;
- (void)configurePreviewLayer;
- (void)showVideoItems:(NSArray *)videoItems;

@end