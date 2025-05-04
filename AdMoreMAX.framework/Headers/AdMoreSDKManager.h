//
//  AdMoreSDKManager.h
//  AdMoreSDK
//
//  Created by Aaron on 2025/4/25.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef void (^ADMCompletionHandler)(BOOL success, NSError * _Nullable error);

@interface AdMoreSDKManager : NSObject

/// SDK 注册接口 (注意: 请在 app 初始化时调用， 只调用一次）。
/// @param appkey key
+ (void)registerAppKey:(NSString *)appkey ;

+ (void)registerAppKey:(NSString *)appkey completionHandler:(ADMCompletionHandler)handler;
/// 获取SDK版本号
+ (NSString *)sdkVersion;

@end

NS_ASSUME_NONNULL_END
