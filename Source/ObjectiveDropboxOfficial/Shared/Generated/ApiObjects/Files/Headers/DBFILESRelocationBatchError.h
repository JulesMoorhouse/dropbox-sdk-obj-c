///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBFILESLookupError;
@class DBFILESRelocationBatchError;
@class DBFILESWriteError;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `RelocationBatchError` union.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBFILESRelocationBatchError : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The `DBFILESRelocationBatchErrorTag` enum type represents the possible tag
/// states with which the `DBFILESRelocationBatchError` union can exist.
typedef NS_ENUM(NSInteger, DBFILESRelocationBatchErrorTag) {
  /// (no description).
  DBFILESRelocationBatchErrorFromLookup,

  /// (no description).
  DBFILESRelocationBatchErrorFromWrite,

  /// (no description).
  DBFILESRelocationBatchErrorTo,

  /// Shared folders can't be copied.
  DBFILESRelocationBatchErrorCantCopySharedFolder,

  /// Your move operation would result in nested shared folders.  This is not
  /// allowed.
  DBFILESRelocationBatchErrorCantNestSharedFolder,

  /// You cannot move a folder into itself.
  DBFILESRelocationBatchErrorCantMoveFolderIntoItself,

  /// The operation would involve more than 10,000 files and folders.
  DBFILESRelocationBatchErrorTooManyFiles,

  /// There are duplicated/nested paths among `fromPath` in
  /// `DBFILESRelocationArg` and `toPath` in `DBFILESRelocationArg`.
  DBFILESRelocationBatchErrorDuplicatedOrNestedPaths,

  /// (no description).
  DBFILESRelocationBatchErrorOther,

  /// There are too many write operations in user's Dropbox. Please retry this
  /// request.
  DBFILESRelocationBatchErrorTooManyWriteOperations,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBFILESRelocationBatchErrorTag tag;

/// (no description). @note Ensure the `isFromLookup` method returns true before
/// accessing, otherwise a runtime exception will be raised.
@property (nonatomic, readonly) DBFILESLookupError *fromLookup;

/// (no description). @note Ensure the `isFromWrite` method returns true before
/// accessing, otherwise a runtime exception will be raised.
@property (nonatomic, readonly) DBFILESWriteError *fromWrite;

/// (no description). @note Ensure the `isTo` method returns true before
/// accessing, otherwise a runtime exception will be raised.
@property (nonatomic, readonly) DBFILESWriteError *to;

#pragma mark - Constructors

///
/// Initializes union class with tag state of "from_lookup".
///
/// @param fromLookup (no description).
///
/// @return An initialized instance.
///
- (instancetype)initWithFromLookup:(DBFILESLookupError *)fromLookup;

///
/// Initializes union class with tag state of "from_write".
///
/// @param fromWrite (no description).
///
/// @return An initialized instance.
///
- (instancetype)initWithFromWrite:(DBFILESWriteError *)fromWrite;

///
/// Initializes union class with tag state of "to".
///
/// @param to (no description).
///
/// @return An initialized instance.
///
- (instancetype)initWithTo:(DBFILESWriteError *)to;

///
/// Initializes union class with tag state of "cant_copy_shared_folder".
///
/// Description of the "cant_copy_shared_folder" tag state: Shared folders can't
/// be copied.
///
/// @return An initialized instance.
///
- (instancetype)initWithCantCopySharedFolder;

///
/// Initializes union class with tag state of "cant_nest_shared_folder".
///
/// Description of the "cant_nest_shared_folder" tag state: Your move operation
/// would result in nested shared folders.  This is not allowed.
///
/// @return An initialized instance.
///
- (instancetype)initWithCantNestSharedFolder;

///
/// Initializes union class with tag state of "cant_move_folder_into_itself".
///
/// Description of the "cant_move_folder_into_itself" tag state: You cannot move
/// a folder into itself.
///
/// @return An initialized instance.
///
- (instancetype)initWithCantMoveFolderIntoItself;

///
/// Initializes union class with tag state of "too_many_files".
///
/// Description of the "too_many_files" tag state: The operation would involve
/// more than 10,000 files and folders.
///
/// @return An initialized instance.
///
- (instancetype)initWithTooManyFiles;

///
/// Initializes union class with tag state of "duplicated_or_nested_paths".
///
/// Description of the "duplicated_or_nested_paths" tag state: There are
/// duplicated/nested paths among `fromPath` in `DBFILESRelocationArg` and
/// `toPath` in `DBFILESRelocationArg`.
///
/// @return An initialized instance.
///
- (instancetype)initWithDuplicatedOrNestedPaths;

///
/// Initializes union class with tag state of "other".
///
/// @return An initialized instance.
///
- (instancetype)initWithOther;

///
/// Initializes union class with tag state of "too_many_write_operations".
///
/// Description of the "too_many_write_operations" tag state: There are too many
/// write operations in user's Dropbox. Please retry this request.
///
/// @return An initialized instance.
///
- (instancetype)initWithTooManyWriteOperations;

- (instancetype)init NS_UNAVAILABLE;

#pragma mark - Tag state methods

///
/// Retrieves whether the union's current tag state has value "from_lookup".
///
/// @note Call this method and ensure it returns true before accessing the
/// `fromLookup` property, otherwise a runtime exception will be thrown.
///
/// @return Whether the union's current tag state has value "from_lookup".
///
- (BOOL)isFromLookup;

///
/// Retrieves whether the union's current tag state has value "from_write".
///
/// @note Call this method and ensure it returns true before accessing the
/// `fromWrite` property, otherwise a runtime exception will be thrown.
///
/// @return Whether the union's current tag state has value "from_write".
///
- (BOOL)isFromWrite;

///
/// Retrieves whether the union's current tag state has value "to".
///
/// @note Call this method and ensure it returns true before accessing the `to`
/// property, otherwise a runtime exception will be thrown.
///
/// @return Whether the union's current tag state has value "to".
///
- (BOOL)isTo;

///
/// Retrieves whether the union's current tag state has value
/// "cant_copy_shared_folder".
///
/// @return Whether the union's current tag state has value
/// "cant_copy_shared_folder".
///
- (BOOL)isCantCopySharedFolder;

///
/// Retrieves whether the union's current tag state has value
/// "cant_nest_shared_folder".
///
/// @return Whether the union's current tag state has value
/// "cant_nest_shared_folder".
///
- (BOOL)isCantNestSharedFolder;

///
/// Retrieves whether the union's current tag state has value
/// "cant_move_folder_into_itself".
///
/// @return Whether the union's current tag state has value
/// "cant_move_folder_into_itself".
///
- (BOOL)isCantMoveFolderIntoItself;

///
/// Retrieves whether the union's current tag state has value "too_many_files".
///
/// @return Whether the union's current tag state has value "too_many_files".
///
- (BOOL)isTooManyFiles;

///
/// Retrieves whether the union's current tag state has value
/// "duplicated_or_nested_paths".
///
/// @return Whether the union's current tag state has value
/// "duplicated_or_nested_paths".
///
- (BOOL)isDuplicatedOrNestedPaths;

///
/// Retrieves whether the union's current tag state has value "other".
///
/// @return Whether the union's current tag state has value "other".
///
- (BOOL)isOther;

///
/// Retrieves whether the union's current tag state has value
/// "too_many_write_operations".
///
/// @return Whether the union's current tag state has value
/// "too_many_write_operations".
///
- (BOOL)isTooManyWriteOperations;

///
/// Retrieves string value of union's current tag state.
///
/// @return A human-readable string representing the union's current tag state.
///
- (NSString *)tagName;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `DBFILESRelocationBatchError` union.
///
@interface DBFILESRelocationBatchErrorSerializer : NSObject

///
/// Serializes `DBFILESRelocationBatchError` instances.
///
/// @param instance An instance of the `DBFILESRelocationBatchError` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBFILESRelocationBatchError` API object.
///
+ (NSDictionary *)serialize:(DBFILESRelocationBatchError *)instance;

///
/// Deserializes `DBFILESRelocationBatchError` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBFILESRelocationBatchError` API object.
///
/// @return An instantiation of the `DBFILESRelocationBatchError` object.
///
+ (DBFILESRelocationBatchError *)deserialize:(NSDictionary *)dict;

@end

NS_ASSUME_NONNULL_END
