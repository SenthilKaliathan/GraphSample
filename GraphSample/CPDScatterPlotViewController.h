//
//  CPDScatterPlotViewController.h
//  GraphSample
//
//  Created by Senthil Kumar on 08/03/13.
//  Copyright (c) 2013 Senthil Kumar. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CPDScatterPlotViewController : UIViewController<CPTPlotDataSource>

@property (nonatomic, strong) CPTGraphHostingView *hostView;

// commit to trunk
@end
