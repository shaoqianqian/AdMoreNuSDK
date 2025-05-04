//
//  AdMoreBanner.h
//  AdMoreSDK
//
//  Created by Aaron on 2021/5/18.
//  Banner

#import <UIKit/UIKit.h>

@class AdMoreBanner;

NS_ASSUME_NONNULL_BEGIN

@protocol AdMoreBannerDelegate <NSObject>

@optional


/// 广告加载成功
- (void)adMoreBannerLoad:(AdMoreBanner *)adMoreBanner;

/// 广告加载失败
- (void)adMoreBannerFail:(AdMoreBanner *)adMoreBanner error:(NSError *)error;

/// 广告展示成功
- (void)adMoreBannerShow:(AdMoreBanner *)adMoreBanner;

/// 广告被点击
- (void)adMoreBannerClick:(AdMoreBanner *)adMoreBanner;

/// 广告被用户主动关闭
- (void)adMoreBannerClose:(AdMoreBanner *)adMoreBanner;

@end

@interface AdMoreBanner : UIView

/// 实例化方法
/// @param frame 广告位置和大小
/// @param placementId 广告位Id
/// @param viewController 视图控制器
+ (instancetype)initWithFrame:(CGRect)frame
                  placementId:(NSString *)placementId
               viewController:(UIViewController *)viewController;

@property (nonatomic,weak)id<AdMoreBannerDelegate>delegate;

@property (nonatomic, assign)NSInteger eCPM;

@property (nonatomic, assign)BOOL isReady;

@property (nonatomic, copy)NSString *slotId;

/// 请求并展示广告
- (void)loadAd;

@end

NS_ASSUME_NONNULL_END
