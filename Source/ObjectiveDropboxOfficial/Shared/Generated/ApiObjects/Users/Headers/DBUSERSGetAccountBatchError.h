///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBUSERSGetAccountBatchError;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `GetAccountBatchError` union.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBUSERSGetAccountBatchError : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The `DBUSERSGetAccountBatchErrorTag` enum type represents the possible tag
/// states with which the `DBUSERSGetAccountBatchError` union can exist.
typedef NS_ENUM(NSInteger, DBUSERSGetAccountBatchErrorTag) {
  /// The value is an account ID specified in `accountIds` in
  /// `DBUSERSGetAccountBatchArg` that does not exist.
  DBUSERSGetAccountBatchErrorNoAccount,

  /// (no description).
  DBUSERSGetAccountBatchErrorOther,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBUSERSGetAccountBatchErrorTag tag;

/// The value is an account ID specified in `accountIds` in
/// `DBUSERSGetAccountBatchArg` that does not exist. @note Ensure the
/// `isNoAccount` method returns true before accessing, otherwise a runtime
/// exception will be raised.
@property (nonatomic, readonly, copy) NSString *noAccount;

#pragma mark - Constructors

///
/// Initializes union class with tag state of "no_account".
///
/// Description of the "no_account" tag state: The value is an account ID
/// specified in `accountIds` in `DBUSERSGetAccountBatchArg` that does not
/// exist.
///
/// @param noAccount The value is an account ID specified in `accountIds` in
/// `DBUSERSGetAccountBatchArg` that does not exist.
///
/// @return An initialized instance.
///
- (instancetype)initWithNoAccount:(NSString *)noAccount;

///
/// Initializes union class with tag state of "other".
///
/// @return An initialized instance.
///
- (instancetype)initWithOther;

- (instancetype)init NS_UNAVAILABLE;

#pragma mark - Tag state methods

///
/// Retrieves whether the union's current tag state has value "no_account".
///
/// @note Call this method and ensure it returns true before accessing the
/// `noAccount` property, otherwise a runtime exception will be thrown.
///
/// @return Whether the union's current tag state has value "no_account".
///
- (BOOL)isNoAccount;

///
/// Retrieves whether the union's current tag state has value "other".
///
/// @return Whether the union's current tag state has value "other".
///
- (BOOL)isOther;

///
/// Retrieves string value of union's current tag state.
///
/// @return A human-readable string representing the union's current tag state.
///
- (NSString *)tagName;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `DBUSERSGetAccountBatchError` union.
///
@interface DBUSERSGetAccountBatchErrorSerializer : NSObject

///
/// Serializes `DBUSERSGetAccountBatchError` instances.
///
/// @param instance An instance of the `DBUSERSGetAccountBatchError` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBUSERSGetAccountBatchError` API object.
///
+ (NSDictionary *)serialize:(DBUSERSGetAccountBatchError *)instance;

///
/// Deserializes `DBUSERSGetAccountBatchError` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBUSERSGetAccountBatchError` API object.
///
/// @return An instantiation of the `DBUSERSGetAccountBatchError` object.
///
+ (DBUSERSGetAccountBatchError *)deserialize:(NSDictionary *)dict;

@end

NS_ASSUME_NONNULL_END
