///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DBSerializableProtocol.h"

@class DBSHARINGRevokeSharedLinkArg;

#pragma mark - API Object

/// 
/// The RevokeSharedLinkArg struct.
/// 
/// This class implements the DBSerializable protocol (serialize and deserialize
/// instance methods), which is required for all Obj-C SDK API route objects.
/// 
@interface DBSHARINGRevokeSharedLinkArg : NSObject <DBSerializable> 

#pragma mark - Instance fields

/// URL of the shared link.
@property (nonatomic, readonly, copy) NSString * _Nonnull url;

#pragma mark - Constructors

/// 
/// Full constructor for the DBSHARINGRevokeSharedLinkArg struct (exposes all
/// instance variables).
/// 
/// @param url URL of the shared link.
/// 
/// @return An initialized DBSHARINGRevokeSharedLinkArg instance.
/// 
- (nonnull instancetype)initWithUrl:(NSString * _Nonnull)url;

@end


#pragma mark - Serializer Object

/// 
/// The serialization class for the RevokeSharedLinkArg struct.
/// 
@interface DBSHARINGRevokeSharedLinkArgSerializer : NSObject 

/// 
/// Serializes DBSHARINGRevokeSharedLinkArg instances.
/// 
/// @param instance An instance of the DBSHARINGRevokeSharedLinkArg API object.
/// 
/// @return A json-compatible dictionary representation of the
/// DBSHARINGRevokeSharedLinkArg API object.
/// 
+ (NSDictionary * _Nonnull)serialize:(DBSHARINGRevokeSharedLinkArg * _Nonnull)instance;

/// 
/// Deserializes DBSHARINGRevokeSharedLinkArg instances.
/// 
/// @param dict A json-compatible dictionary representation of the
/// DBSHARINGRevokeSharedLinkArg API object.
/// 
/// @return An instantiation of the DBSHARINGRevokeSharedLinkArg object.
/// 
+ (DBSHARINGRevokeSharedLinkArg * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end