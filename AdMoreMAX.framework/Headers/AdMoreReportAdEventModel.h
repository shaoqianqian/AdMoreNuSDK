//
//  AdMoreReportAdEventModel.h
//  AdMoreSDK
//
//  Created by Aaron on 2023/3/12.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface AdMoreReportAdEventModel : NSObject

//__REQ_WIDTH__    请求时广告位宽度    广告位宽高
//__REQ_HEIGHT__    请求时广告位高度


//__DOWN_X__    点击时横坐标    相对坐标定义：以广告位左上角为原点
//__DOWN_Y__    点击时纵坐标
@property (nonatomic, assign)CGPoint beginPoint;

//__ABS_DOWN_X__    点击时横坐标    绝对坐标定义：以屏幕左上角坐标为原点
//__ABS_DOWN_Y__    点击时纵坐标
@property (nonatomic, assign)CGPoint absBeginPoint;

//__UP_X__    弹起时横坐标
//__UP_Y__    弹起时纵坐标
@property (nonatomic, assign)CGPoint endPoint;

//__ABS_UP_X__    弹起时横坐标
//__ABS_UP_Y__    弹起时纵坐标
@property (nonatomic, assign)CGPoint absEndPoint;

//__HEIGHT__    实际广告位高度，单位为像素
@property (nonatomic, assign)CGFloat height;

//__WIDTH__    实际广告位宽度，单位为像素
@property (nonatomic, assign)CGFloat width;

//__DISPLAY_LUX__    左上角横坐标    广告展示区域坐标（坐标定义：以屏幕左上角坐标为原点）
//__DISPLAY_LUY__    左上角纵坐标
@property (nonatomic, assign)CGPoint point;

//__DISPLAY_RDX__    右下角横坐标
//__DISPLAY_RDY__    右下角纵坐标
@property (nonatomic, assign)CGPoint bottom;

@end

NS_ASSUME_NONNULL_END
