/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

@interface ICAttachment : ICCloudSyncingObject <ICCloudObject, ICSearchIndexable> {
    NSURL * _URL;
    ICAttachmentModel * _attachmentModel;
    short  _attachmentType;
    /* Warning: unhandled struct encoding: '{AVAsset=#@}' */ struct AVAsset { Class x1; id x2; } * _movie;
    bool  isBeingEditedLocallyOnDevice;
    bool  previewImagesIntegrityChecked;
    bool  settingMergeableData;
}

@property (nonatomic, retain) NSURL *URL;
@property (nonatomic) bool checkedForLocation;
@property (nonatomic, retain) NSDate *creationDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) double duration;
@property (nonatomic) long long fileSize;
@property (nonatomic) bool hasMarkupData;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isBeingEditedLocallyOnDevice;
@property (nonatomic, retain) ICAttachmentLocation *location;
@property (nonatomic, retain) ICMedia *media;
@property (nonatomic, retain) NSData *mergeableData;
@property (nonatomic, retain) NSDate *modificationDate;
@property (nonatomic, retain) AVAsset *movie;
@property (nonatomic, retain) ICNote *note;
@property (nonatomic) short orientation;
@property (nonatomic) double originX;
@property (nonatomic) double originY;
@property (nonatomic, retain) NSSet *previewImages;
@property (nonatomic) bool previewImagesIntegrityChecked;
@property (nonatomic, retain) NSDate *previewUpdateDate;
@property (nonatomic, retain) NSURL *remoteFileURL;
@property (nonatomic) short section;
@property (getter=isSettingMergeableData, nonatomic) bool settingMergeableData;
@property (nonatomic) double sizeHeight;
@property (nonatomic) double sizeWidth;
@property (nonatomic, retain) NSString *summary;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *title;
@property (nonatomic, retain) NSString *typeUTI;
@property (nonatomic, retain) NSString *urlString;

+ (void)addPreviewImages:(id)arg1 toRecord:(id)arg2;
+ (id)allAttachmentsInContext:(id)arg1;
+ (id)allCloudObjectsInContext:(id)arg1;
+ (id)attachmentWithIdentifier:(id)arg1 context:(id)arg2;
+ (id)attachmentWithIdentifier:(id)arg1 includeDeleted:(bool)arg2 context:(id)arg3;
+ (id)attachmentsMatchingPredicate:(id)arg1 context:(id)arg2;
+ (void)deleteAttachment:(id)arg1;
+ (id)existingCloudObjectForRecordID:(id)arg1 context:(id)arg2;
+ (id)filenameExtensionForUTI:(id)arg1;
+ (id)filenameFromUTI:(id)arg1;
+ (id)imageCache;
+ (id)imageLoadingOperationQueue;
+ (void)initialize;
+ (bool)isPathExtensionSupportedForPasswordProtectedNotes:(id)arg1;
+ (bool)isTypeUTISupportedForPasswordProtectedNotes:(id)arg1;
+ (id)keyPathsForValuesAffectingParentCloudObject;
+ (id)newAttachmentWithIdentifier:(id)arg1 context:(id)arg2;
+ (id)newCloudObjectForRecord:(id)arg1 context:(id)arg2;
+ (id)newFetchRequestForAttachments;
+ (id)noteFromAttachmentRecord:(id)arg1 context:(id)arg2;
+ (id)predicateForAttachmentBrowser;
+ (id)predicateForSearchableAttachments;
+ (id)predicateForVisibleAttachments;
+ (void)purgeAllAttachmentsInContext:(id)arg1;
+ (void)purgeAttachment:(id)arg1;
+ (short)sectionFromTypeUTI:(id)arg1 url:(id)arg2;
+ (id)thumbnailOperationQueue;
+ (bool)typeUTIIsDrawing:(id)arg1;
+ (bool)typeUTIIsPlayableAudio:(id)arg1;
+ (bool)typeUTIIsPlayableMovie:(id)arg1;
+ (id)visibleAttachmentsInContext:(id)arg1;

- (void).cxx_destruct;
- (id)URL;
- (id)activityItems;
- (id)addLocationIfNeeded;
- (id)addLocationWithLatitude:(double)arg1 longitude:(double)arg2;
- (id)addMediaWithData:(id)arg1 filename:(id)arg2 forceWriteInBackground:(bool)arg3;
- (id)addMediaWithFileWrapper:(id)arg1;
- (id)addMediaWithURL:(id)arg1;
- (id)addMediaWithURL:(id)arg1 waitUntilDone:(bool)arg2;
- (unsigned long long)approximateArchiveSizeIncludingPreviews:(bool)arg1;
- (void)attachmentDidChange;
- (id)attachmentModel;
- (id)attachmentPreviewImageCreatingIfNecessaryWithWidth:(double)arg1 height:(double)arg2 scale:(double)arg3 scaleWhenDrawing:(bool)arg4 metadata:(id)arg5;
- (id)attachmentPreviewImageCreatingIfNecessaryWithWidth:(double)arg1 height:(double)arg2 scale:(double)arg3 scaleWhenDrawing:(bool)arg4 metadata:(id)arg5 save:(bool)arg6;
- (id)attachmentPreviewImageWithMinSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2;
- (id)attachmentPreviewImageWithMinSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2 matchScale:(bool)arg3;
- (short)attachmentType;
- (id)attributedString;
- (id)authorsExcludingCurrentUser;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (struct UIImage { Class x1; }*)cachedImage;
- (bool)checkPreviewImagesIntegrity;
- (id)childCloudObjects;
- (void)clearCachedImages;
- (void)deleteAttachmentPreviewImages;
- (void)deleteFromLocalDatabase;
- (void)deleteFromNoteContextUsingIndexerContext:(id)arg1;
- (void)didUpdateLocationPlace;
- (bool)fetchThumbnailImageWithMinSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2 cache:(id)arg3 cacheKey:(id)arg4 processingBlock:(id /* block */)arg5 completionBlock:(id /* block */)arg6 fallbackBlock:(id /* block */)arg7 aboutToLoadHandler:(id /* block */)arg8;
- (id)fileSizeString;
- (void)fixBrokenReferences;
- (id)generateSearchIndexStringsOperation;
- (bool)hasAllMandatoryFields;
- (id)ic_loggingValues;
- (bool)ignoreInSearchIndexer;
- (struct UIImage { Class x1; }*)image;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)invalidateAttachmentPreviewImages;
- (bool)isAppStore;
- (bool)isBeingEditedLocallyOnDevice;
- (bool)isEncryptableKeyBinaryData:(id)arg1;
- (bool)isFolder;
- (bool)isHiddenFromSearch;
- (bool)isInICloudAccount;
- (bool)isMap;
- (bool)isNews;
- (bool)isSettingMergeableData;
- (bool)isURL;
- (bool)isVisible;
- (bool)isiTunes;
- (void)loadFromArchive:(const struct Attachment { int (**x1)(); struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned long long x_1_5_3; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; struct { unsigned char x_2_6_1; } x_2_5_2; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_2_1_1; } x2; unsigned int x3[1]; int x4; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x5; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x6; float x7; float x8; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x9; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x10; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x11; }*)arg1 withIdentifierMap:(id)arg2;
- (id /* block */)loadImage:(id /* block */)arg1;
- (id /* block */)loadImage:(id /* block */)arg1 aboutToLoadHandler:(id /* block */)arg2;
- (void)loadPreviewArchive:(const struct PreviewImage { int (**x1)(); struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned long long x_1_5_3; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; struct { unsigned char x_2_6_1; } x_2_5_2; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_2_1_1; } x2; unsigned int x3[1]; int x4; float x5; bool x6; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x7; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x8; int x9; int x10; }*)arg1;
- (bool)locationNeedsUpdate;
- (void)markForDeletion;
- (void)mergeDataFromRecord:(id)arg1;
- (void)mergeDataFromRecord:(id)arg1 newAttachment:(bool)arg2;
- (id)mergeDecryptedValue:(id)arg1 withOldValue:(id)arg2 forKey:(id)arg3;
- (id)mergeableData;
- (id)modificationDateForSpeaking;
- (/* Warning: unhandled struct encoding: '{AVAsset=#@}' */ struct AVAsset { Class x1; id x2; }*)movie;
- (id)movieDurationForSpeaking;
- (bool)needsToBePushedToCloud;
- (bool)needsToBeRequested;
- (id)newlyCreatedRecord;
- (id)nonModelSearchIndexStrings;
- (id)objectIdentifier;
- (void)objectWasFetchedFromCloudWithRecord:(id)arg1;
- (id)objectsToBeDeletedBeforeThisObject;
- (id)parentCloudObject;
- (id)parentEncryptableObject;
- (id)pasteboardDataForAttributedString;
- (bool)preferLocalPreviewImages;
- (bool)previewImagesIntegrityChecked;
- (id)previewItemTitle;
- (id)previewItemURL;
- (void)purgeAttachmentPreviewImages;
- (id)recordType;
- (id)recordZoneName;
- (void)releaseMemoryForIndexing;
- (id)remoteFileURL;
- (void)resetUniqueIdentifier;
- (void)saveAndClearDecryptedData;
- (void)saveMergeableDataIfNeeded;
- (void)savePreview:(id)arg1 toArchive:(struct PreviewImage { int (**x1)(); struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned long long x_1_5_3; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; struct { unsigned char x_2_6_1; } x_2_5_2; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_2_1_1; } x2; unsigned int x3[1]; int x4; float x5; bool x6; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x7; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x8; int x9; int x10; }*)arg2;
- (void)saveToArchive:(struct Attachment { int (**x1)(); struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned long long x_1_5_3; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; struct { unsigned char x_2_6_1; } x_2_5_2; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_2_1_1; } x2; unsigned int x3[1]; int x4; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x5; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x6; float x7; float x8; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x9; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x10; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x11; }*)arg1 stripImageMarkupMetadata:(bool)arg2;
- (id)searchDomainIdentifier;
- (id)searchIndexStringsOutHasAdditionalStrings:(bool*)arg1;
- (id)searchIndexableTitleUsingContentTextIfNecessary:(id)arg1;
- (bool)searchResultCanBeDeletedFromNoteContext;
- (unsigned long long)searchResultsSection;
- (id)searchableItemAttributeSet;
- (id)searchableItemIdentifier;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setCachedImage:(struct UIImage { Class x1; }*)arg1;
- (void)setIsBeingEditedLocallyOnDevice:(bool)arg1;
- (void)setMergeableData:(id)arg1;
- (void)setMovie:(/* Warning: unhandled struct encoding: '{AVAsset=#@}' */ struct AVAsset { Class x1; id x2; }*)arg1;
- (void)setPreviewImagesIntegrityChecked:(bool)arg1;
- (void)setRemoteFileURL:(id)arg1;
- (void)setSettingMergeableData:(bool)arg1;
- (void)setSummary:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTypeUTI:(id)arg1;
- (void)setURL:(id)arg1;
- (void)setUrlString:(id)arg1;
- (bool)shouldUpdateIndexForChangedValues:(id)arg1;
- (id)summary;
- (bool)supportsDeletionByTTL;
- (bool)supportsSavingAttachmentToExternalFile;
- (bool)thumbnailImage:(struct UIImage { Class x1; }**)arg1 minSize:(struct CGSize { double x1; double x2; })arg2 scale:(double)arg3 imageScaling:(unsigned long long*)arg4 showAsFileIcon:(bool*)arg5 isMovie:(bool*)arg6 movieDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; }*)arg7;
- (id)title;
- (void)unmarkForDeletion;
- (void)updateAfterMediaChange;
- (id)updateAttachmentPreviewImageWithImage:(struct UIImage { Class x1; }*)arg1 scale:(double)arg2 scaleWhenDrawing:(bool)arg3 metadata:(id)arg4 sendNotification:(bool)arg5 completionHandler:(id /* block */)arg6;
- (id)updateAttachmentPreviewImageWithImageSrc:(struct CGImageSource { }*)arg1 maxDimension:(double)arg2 scale:(double)arg3 scaleWhenDrawing:(bool)arg4 metadata:(id)arg5 sendNotification:(bool)arg6;
- (void)updateParentReferenceIfNecessary;
- (void)updatePlaceInLocationIfNeededHandler:(id /* block */)arg1;
- (void)updatePreviewsFromRecord:(id)arg1;
- (id)urlString;
- (long long)visibilityTestingType;
- (void)willSave;

@end
