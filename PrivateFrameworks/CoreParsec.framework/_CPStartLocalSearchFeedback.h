/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

@interface _CPStartLocalSearchFeedback : PBCodable <NSCopying> {
    struct { 
        unsigned int queryId : 1; 
        unsigned int indexType : 1; 
        unsigned int triggerEvent : 1; 
    }  _has;
    int  _indexType;
    NSString * _input;
    unsigned long long  _queryId;
    unsigned long long  _timestamp;
    int  _triggerEvent;
    NSString * _uuid;
}

@property (nonatomic) BOOL hasIndexType;
@property (nonatomic, readonly) BOOL hasInput;
@property (nonatomic) BOOL hasQueryId;
@property (nonatomic) BOOL hasTriggerEvent;
@property (nonatomic, readonly) BOOL hasUuid;
@property (nonatomic) int indexType;
@property (nonatomic, retain) NSString *input;
@property (nonatomic) unsigned long long queryId;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) int triggerEvent;
@property (nonatomic, retain) NSString *uuid;

- (void).cxx_destruct;
- (int)StringAsIndexType:(id)arg1;
- (int)StringAsTriggerEvent:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasIndexType;
- (BOOL)hasInput;
- (BOOL)hasQueryId;
- (BOOL)hasTriggerEvent;
- (BOOL)hasUuid;
- (unsigned int)hash;
- (int)indexType;
- (id)indexTypeAsString:(int)arg1;
- (id)input;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)queryId;
- (BOOL)readFrom:(id)arg1;
- (void)setHasIndexType:(BOOL)arg1;
- (void)setHasQueryId:(BOOL)arg1;
- (void)setHasTriggerEvent:(BOOL)arg1;
- (void)setIndexType:(int)arg1;
- (void)setInput:(id)arg1;
- (void)setQueryId:(unsigned long long)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setTriggerEvent:(int)arg1;
- (void)setUuid:(id)arg1;
- (unsigned long long)timestamp;
- (int)triggerEvent;
- (id)triggerEventAsString:(int)arg1;
- (id)uuid;
- (void)writeTo:(id)arg1;

@end
