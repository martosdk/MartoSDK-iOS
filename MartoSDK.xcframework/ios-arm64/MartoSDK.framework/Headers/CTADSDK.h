//
//  CTExchange.h
//

#import <MartoSDK/CTBannerAd.h>
#import <MartoSDK/CTInterstitialAd.h>
#import <MartoSDK/CTRewardedVideoAd.h>
#import <MartoSDK/CTNativeAd.h>
#import <MartoSDK/CTAppOpenAd.h>
#import <MartoSDK/CTInteractiveAd.h>

typedef enum : NSUInteger {
    CTLogLevelAll        = 0,
    CTLogLevelTrace      = 10,
    CTLogLevelInfo       = 30,
    CTLogLevelOff        = 9999
} CTLogLevel;


NS_ASSUME_NONNULL_BEGIN

@interface CTADSDK : NSObject

+ (NSString *)sdkVersion;

+ (CTADSDK*)sharedInstance;

+ (void)setLogLevel:(CTLogLevel)level;

+ (NSString *)getBuyerUid;

- (void)start:(NSString *)appid completion:(void (^)(void))completion;

@property (nonatomic,strong)NSDictionary *globalCustomInfo;

- (void)setCustomInfo:(NSDictionary *)customInfo placementid:(NSString *)placementid;

- (void)setGDPRStatus:(BOOL)bo;

- (void)setDoNotSell:(BOOL)bo;

- (void)setCOPPAStatus:(BOOL)bo;

- (void)setLGPDStatus:(BOOL)bo;

@property (nonatomic,copy)NSString *userid;
@property (nonatomic,readonly)BOOL didStart;
@property (nonatomic,readonly)NSString *appid;
@property (nonatomic,copy)NSString *mediation;
@end

NS_ASSUME_NONNULL_END
