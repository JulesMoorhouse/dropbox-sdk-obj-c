///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMLOGLinkAudience;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `LinkAudience` union.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGLinkAudience : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The `DBTEAMLOGLinkAudienceTag` enum type represents the possible tag states
/// with which the `DBTEAMLOGLinkAudience` union can exist.
typedef NS_ENUM(NSInteger, DBTEAMLOGLinkAudienceTag) {
  /// (no description).
  DBTEAMLOGLinkAudiencePublic,

  /// (no description).
  DBTEAMLOGLinkAudienceTeam,

  /// (no description).
  DBTEAMLOGLinkAudienceMembers,

  /// (no description).
  DBTEAMLOGLinkAudienceOther,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBTEAMLOGLinkAudienceTag tag;

#pragma mark - Constructors

///
/// Initializes union class with tag state of "public".
///
/// @return An initialized instance.
///
- (instancetype)initWithPublic;

///
/// Initializes union class with tag state of "team".
///
/// @return An initialized instance.
///
- (instancetype)initWithTeam;

///
/// Initializes union class with tag state of "members".
///
/// @return An initialized instance.
///
- (instancetype)initWithMembers;

///
/// Initializes union class with tag state of "other".
///
/// @return An initialized instance.
///
- (instancetype)initWithOther;

- (instancetype)init NS_UNAVAILABLE;

#pragma mark - Tag state methods

///
/// Retrieves whether the union's current tag state has value "public".
///
/// @return Whether the union's current tag state has value "public".
///
- (BOOL)isPublic;

///
/// Retrieves whether the union's current tag state has value "team".
///
/// @return Whether the union's current tag state has value "team".
///
- (BOOL)isTeam;

///
/// Retrieves whether the union's current tag state has value "members".
///
/// @return Whether the union's current tag state has value "members".
///
- (BOOL)isMembers;

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
/// The serialization class for the `DBTEAMLOGLinkAudience` union.
///
@interface DBTEAMLOGLinkAudienceSerializer : NSObject

///
/// Serializes `DBTEAMLOGLinkAudience` instances.
///
/// @param instance An instance of the `DBTEAMLOGLinkAudience` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGLinkAudience` API object.
///
+ (NSDictionary *)serialize:(DBTEAMLOGLinkAudience *)instance;

///
/// Deserializes `DBTEAMLOGLinkAudience` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGLinkAudience` API object.
///
/// @return An instantiation of the `DBTEAMLOGLinkAudience` object.
///
+ (DBTEAMLOGLinkAudience *)deserialize:(NSDictionary *)dict;

@end

NS_ASSUME_NONNULL_END
