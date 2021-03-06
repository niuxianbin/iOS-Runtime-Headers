/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLAdjustmentFingerprinting : NSObject {
    CPLResource * _baseImage;
    BOOL  _hasAutoEnhance;
    BOOL  _hasOtherAdjustments;
    BOOL  _hasRedEye;
    BOOL  _hasSimpleLightenDarken;
    CPLResource * _largeAdjustmentData;
    CPLAdjustments * _otherAdjustments;
    CPLResource * _secondaryAdjustmentData;
}

@property (nonatomic, retain) CPLResource *baseImage;
@property (nonatomic) BOOL hasAutoEnhance;
@property (nonatomic) BOOL hasOtherAdjustments;
@property (nonatomic) BOOL hasRedEye;
@property (nonatomic) BOOL hasSimpleLightenDarken;
@property (nonatomic, retain) CPLResource *largeAdjustmentData;
@property (nonatomic, retain) CPLAdjustments *otherAdjustments;
@property (nonatomic, retain) CPLResource *secondaryAdjustmentData;

- (void).cxx_destruct;
- (id)baseImage;
- (BOOL)hasAutoEnhance;
- (BOOL)hasOtherAdjustments;
- (BOOL)hasRedEye;
- (BOOL)hasSimpleLightenDarken;
- (id)largeAdjustmentData;
- (id)otherAdjustments;
- (id)otherAdjustmentsFingerprint;
- (id)secondaryAdjustmentData;
- (void)setBaseImage:(id)arg1;
- (void)setHasAutoEnhance:(BOOL)arg1;
- (void)setHasOtherAdjustments:(BOOL)arg1;
- (void)setHasRedEye:(BOOL)arg1;
- (void)setHasSimpleLightenDarken:(BOOL)arg1;
- (void)setLargeAdjustmentData:(id)arg1;
- (void)setOtherAdjustments:(id)arg1;
- (void)setSecondaryAdjustmentData:(id)arg1;
- (id)similarToOriginalAdjustmentsFingerprint;

@end
