/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@interface MFQuotedPrintableDecoder : MFBaseFilterDataConsumer  {
    unsigned char _lastEncoded;
    unsigned long _required;
    BOOL _forTextPart;
}

@property BOOL forTextPart;


- (BOOL)forTextPart;
- (int)appendData:(id)arg1;
- (void)done;
- (void)setForTextPart:(BOOL)arg1;

@end