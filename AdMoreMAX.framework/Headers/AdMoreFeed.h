//
//  AdMoreFeedAd.h
//  AdMoreSDK
//
//  Created by Aaron on 2023/3/11.
//  模板信息流

#import <Foundation/Foundation.h>
#import <AdMoreMAX/AdMoreFeedView.h>

@class AdMoreFeed;
NS_ASSUME_NONNULL_BEGIN

@protocol AdMoreFeedDelegate <NSObject>

@optional

/**
 信息流加载成功
 */
- (void)adMoreFeedLoad:(NSArray<AdMoreFeedView *> * _Nullable)unifieFeedAdViewArray;
/**
 信息流加载失败
 */
- (void)adMoreFeedFail:(AdMoreFeed *)adMoreFeed error:(NSError *)error;

@end


@interface AdMoreFeed : NSObject

/// 代理指针
@property (nonatomic, weak)id<AdMoreFeedDelegate,AdMoreFeedViewDelegate> delegate;

@property (nonatomic, weak) UIViewController *viewController;

@property (nonatomic, assign)NSInteger eCPM;

@property (nonatomic, assign)BOOL isReady;

@property (nonatomic, copy)NSString *slotId;


/// 初始化广告
- (instancetype)initWithPlaceId:(NSString *)placeId;

/// 获取广告
- (void)loadAdWithAdSize:(CGSize)adSize;

// 销毁广告
- (void)destroyAd;

@end

NS_ASSUME_NONNULL_END
