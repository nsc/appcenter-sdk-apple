#import <Foundation/Foundation.h>

#import "MSHttpIngestion.h"
#import "MSIdentityConfig.h"

NS_ASSUME_NONNULL_BEGIN

@interface MSIdentityConfigIngestion : MSHttpIngestion

/**
 * AppSecret for the application.
 */
@property(nonatomic) NSString *appSecret;

/**
 * Initialize the Ingestion.
 *
 * @param baseURL Base URL.
 * @param appSecret A unique and secret key used to identify the application.
 *
 * @return An ingestion instance.
 */
- (id)initWithBaseURL:(nullable NSString *)baseURL appSecret:(NSString *)appSecret;

@end

NS_ASSUME_NONNULL_END
