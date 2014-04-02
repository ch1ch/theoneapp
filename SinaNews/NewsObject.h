//
//  newsObject.h
//  SinaNews
//
//  Created by coly on 13-7-18.
//  Copyright (c) 2013年 coly. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NewsObject : NSObject

@property (assign, nonatomic) int id;//id
@property (strong, nonatomic) NSString *title;//标题
@property (strong, nonatomic) NSString *addTime;//发表时间
@property (strong, nonatomic) NSString *thumb;//缩略图地址

- (NewsObject *)initWithDictionary:(NSDictionary *)news;
@end
