//
//  GISPreparationMaterialCell.m
//  GIS_Scheduler
//
//  Created by Anand on 17/07/14.
//  Copyright (c) 2014 Paradigm. All rights reserved.
//

#import "GISPreparationMaterialCell.h"
#import "GISConstants.h"

@implementation GISPreparationMaterialCell

- (id)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString *)reuseIdentifier
{
    self = [super initWithStyle:style reuseIdentifier:reuseIdentifier];
    if (self) {
        // Initialization code
        
    }
    return self;
}

- (void)setSelected:(BOOL)selected animated:(BOOL)animated
{
    [super setSelected:selected animated:animated];

    // Configure the view for the selected state
    
     [_nextButton setBackgroundColor:UIColorFromRGB(0x00457c)];
}

@end
