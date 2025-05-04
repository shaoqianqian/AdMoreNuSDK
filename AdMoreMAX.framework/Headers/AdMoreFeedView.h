//
//  AdMoreNativeExpressView.h
//  AdMoreSDK
//
//  Created by Aaron on 2023/3/11.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@class AdMoreFeedView,AdMoreReportAdEventModel;
@protocol FunUnifiedNativeAdViewDelegate ;

@protocol AdMoreFeedViewDelegate <NSObject>

@optional
/**
 信息流广告广告展示成功
 */
- (void)adMoreFeedShow:(AdMoreFeedView *)adMoreFeedView;

/**
 信息流广告广告展示失败
 */
- (void)adMoreFeedShowFail:(AdMoreFeedView *)native error:(NSError *)error;

/**
 广告点击回调
 */
- (void)adMoreFeedClick:(AdMoreFeedView *)adMoreFeedView;
/**
 点击关闭按钮
 */
- (void)adMoreFeedClose:(AdMoreFeedView *)adMoreFeedView;

/**
 信息流广告落地页关闭
 */
- (void)adMoreFeedDetailClose:(AdMoreFeedView *)adMoreFeedView;

/**
 信息流广告开始播放回调
 */
- (void)adMoreFeedStartPlay:(AdMoreFeedView *)adMoreFeedView;

/**
 信息流广告结束播放回调
 */
- (void)adMoreFeedFinishPlay:(AdMoreFeedView *)adMoreFeedView;



@end


@interface AdMoreFeedView : UIView

- (instancetype)initWithFrame:(CGRect)frame NS_UNAVAILABLE;

- (instancetype)initWithCoder:(NSCoder *)aDecoder NS_UNAVAILABLE;

/// 代理指针（返回广告操作状态）
@property (nonatomic, weak) id<AdMoreFeedViewDelegate> delegate;
/// 开发者需要传入用来弹出目标页的ViewController,一般为当前ViewController
@property (nonatomic, weak) UIViewController *viewController;

/// 返回视图高度
- (CGFloat)funOutPutAdViewHeight;


@end

NS_ASSUME_NONNULL_END




