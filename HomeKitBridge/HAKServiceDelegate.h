//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@class HAKCharacteristic, HAKService;

@protocol HAKServiceDelegate <NSObject>

@optional
- (void)service:(HAKService *)arg1 didRemoveCharacteristic:(HAKCharacteristic *)arg2;
- (void)service:(HAKService *)arg1 didAddCharacteristic:(HAKCharacteristic *)arg2;
@end

