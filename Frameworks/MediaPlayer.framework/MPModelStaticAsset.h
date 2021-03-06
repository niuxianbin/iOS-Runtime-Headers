/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPModelStaticAsset : MPModelObject {
    double  _duration;
    int  _flavorType;
    int  _mediaType;
    NSURL * _url;
}

@property (nonatomic) double duration;
@property (nonatomic) int flavorType;
@property (nonatomic) int mediaType;
@property (nonatomic, copy) NSURL *url;

+ (id)__MPModelPropertyStaticAssetDuration__PROPERTY;
+ (id)__MPModelPropertyStaticAssetFlavorType__PROPERTY;
+ (id)__MPModelPropertyStaticAssetMediaType__PROPERTY;
+ (id)__MPModelPropertyStaticAssetURL__PROPERTY;
+ (id)__duration__KEY;
+ (id)__flavorType__KEY;
+ (id)__mediaType__KEY;
+ (id)__url__KEY;

- (void).cxx_destruct;
- (double)duration;
- (int)flavorType;
- (int)mediaType;
- (void)setDuration:(double)arg1;
- (void)setFlavorType:(int)arg1;
- (void)setMediaType:(int)arg1;
- (void)setUrl:(id)arg1;
- (id)url;

@end
