//
//  KMConfig.h
//  KMNetworking
//
//  Created by kevinma on 16/3/8.
//  Copyright © 2016年 com.kevinma. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

FOUNDATION_EXPORT NSString *KMDefaultGeneralErrorString;

@interface KMConfig : NSObject<NSCopying>

/**
 *  出现网络请求时，为了给用户比较好的用户体验，而使用的错误提示文字
 *  默认为：KMDefaultGeneralErrorString
 */
@property (nonatomic, copy) NSString *generalErrorTypeStr;

/**
 *  出现网络请求错误时，是否在请求错误的文字后加上(code)
 *  默认为：YES
 */
@property (nonatomic, assign) BOOL isErrorCodeDisplayEnabled;

/**
 *  修改的baseUrlStr
 */
@property (nonatomic, copy, nullable) NSString *baseUrlStr;

/**
 *  UserAgent
 */
@property (nonatomic, copy, nullable) NSString *userAgent;

/**
 *  每个Host的最大连接数
 *  默认为2
 */
@property (nonatomic, assign) NSUInteger maxHttpConnectionPerHost;

/**
 *  NetworkingActivityIndicator
 *  Default by YES
 */
@property (nonatomic, assign) BOOL isNetworkingActivityIndicatorEnabled;

@end
NS_ASSUME_NONNULL_END
