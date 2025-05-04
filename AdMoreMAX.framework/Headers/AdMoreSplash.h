//
//  AdMoreSplashView.h
//  AdMoreSDK
//
//  Created by Aaron on 2025/4/25.
//  开屏

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@class AdMoreSplash;

NS_ASSUME_NONNULL_BEGIN


@protocol AdMoreSplashDelegate <NSObject>

@optional
/**
 *  开屏广告加载成功
 */
- (void)adMoreSplashLoad:(AdMoreSplash *)adMoreSplash;
/**
 开屏广告展示成功
 */
- (void)adMoreSplashShow:(AdMoreSplash *)adMoreSplash;

/**
 *  开屏广告展示失败
 */
- (void)adMoreSplashFail:(AdMoreSplash *)adMoreSplash withError:(NSError *)error;

/**
 *  开屏广告点击回调
 */
- (void)adMoreSplashClick:(AdMoreSplash *)adMoreSplash;


/**
 *  开屏广告关闭完成，可在此切换window
 */
- (void)adMoreSplashClose:(AdMoreSplash *)adMoreSplash;


/**
 *  开屏广告关闭详情页回调
 */

- (void)adMoreSplashCloseDetail:(AdMoreSplash *)adMoreSplash;


@end

//开屏
@interface AdMoreSplash : NSObject

- (instancetype)initWithPlaceId:(NSString *)placeId;
//如果需要设置bottomview，则传bottomView的高度 bottomHeight 最大不要超过屏幕高的25%
- (instancetype)initWithPlaceId:(NSString *)placeId bottomHeight:(CGFloat)bottomHeight;
//加载广告
- (void)loadAd;

/**
 *  详解：广告展示成功时会回调splashAdSuccessPresentScreen方法，展示失败时会回调splashAdFailToPresent方法
 */
- (void)showAdInWindow:(UIWindow *)window withBottomView:(UIView *_Nullable)bottomView;

- (void)showAdInWindow:(UIWindow *)window;

/**
 *  委托对象
 */
@property (nonatomic,weak)id<AdMoreSplashDelegate>delegate;


// 用来处理穿山甲广告的点击事件 必传
@property (nonatomic, strong) UIViewController *viewController ;

// 底部视图, 如有需要确定宽高, 开发者自定义（可选）
@property (nonatomic, strong)UIView *bottomView;
//价格
@property (nonatomic, assign)NSInteger eCPM;
//准备完毕
@property (nonatomic, assign)BOOL isReady;
//广告位
@property (nonatomic, copy)NSString *slotId;
@end

NS_ASSUME_NONNULL_END
