/////////////////////////////////////////////////////////////////////////
///@system ÐÂÒ»´ú½»Ò×ËùÏµÍ³
///@company ÉÏº£ÆÚ»õÐÅÏ¢¼¼ÊõÓÐÏÞ¹«Ë¾
///@file ThostFtdcUserApiStruct.h
///@brief ¶¨ÒåÁË¿Í»§¶Ë½Ó¿ÚÊ¹ÓÃµÄÒµÎñÊý¾Ý½á¹¹
///@history 
///20060106	ÕÔºèê»		´´½¨¸ÃÎÄ¼þ
/////////////////////////////////////////////////////////////////////////

#if !defined(THOST_FTDCSTRUCT_H)
#define THOST_FTDCSTRUCT_H

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


#include "ThostFtdcUserApiDataType.h"

///ÐÅÏ¢·Ö·¢
struct CThostFtdcDisseminationField
{
	///ÐòÁÐÏµÁÐºÅ
	TThostFtdcSequenceSeriesType	SequenceSeries;
	///ÐòÁÐºÅ
	TThostFtdcSequenceNoType	SequenceNo;
};

///ÓÃ»§µÇÂ¼ÇëÇó
struct CThostFtdcReqUserLoginField
{
	///½»Ò×ÈÕ
	TThostFtdcDateType	TradingDay;
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///ÓÃ»§´úÂë
	TThostFtdcUserIDType	UserID;
	///ÃÜÂë
	TThostFtdcPasswordType	Password;
	///ÓÃ»§¶Ë²úÆ·ÐÅÏ¢
	TThostFtdcProductInfoType	UserProductInfo;
	///½Ó¿Ú¶Ë²úÆ·ÐÅÏ¢
	TThostFtdcProductInfoType	InterfaceProductInfo;
	///Ð­ÒéÐÅÏ¢
	TThostFtdcProtocolInfoType	ProtocolInfo;
	///MacµØÖ·
	TThostFtdcMacAddressType	MacAddress;
	///¶¯Ì¬ÃÜÂë
	TThostFtdcPasswordType	OneTimePassword;
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldIPAddressType	reserve1;
	///µÇÂ¼±¸×¢
	TThostFtdcLoginRemarkType	LoginRemark;
	///ÖÕ¶ËIP¶Ë¿Ú
	TThostFtdcIPPortType	ClientIPPort;
	///ÖÕ¶ËIPµØÖ·
	TThostFtdcIPAddressType	ClientIPAddress;
};

///ÓÃ»§µÇÂ¼Ó¦´ð
struct CThostFtdcRspUserLoginField
{
	///½»Ò×ÈÕ
	TThostFtdcDateType	TradingDay;
	///µÇÂ¼³É¹¦Ê±¼ä
	TThostFtdcTimeType	LoginTime;
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///ÓÃ»§´úÂë
	TThostFtdcUserIDType	UserID;
	///½»Ò×ÏµÍ³Ãû³Æ
	TThostFtdcSystemNameType	SystemName;
	///Ç°ÖÃ±àºÅ
	TThostFtdcFrontIDType	FrontID;
	///»á»°±àºÅ
	TThostFtdcSessionIDType	SessionID;
	///×î´ó±¨µ¥ÒýÓÃ
	TThostFtdcOrderRefType	MaxOrderRef;
	///ÉÏÆÚËùÊ±¼ä
	TThostFtdcTimeType	SHFETime;
	///´óÉÌËùÊ±¼ä
	TThostFtdcTimeType	DCETime;
	///Ö£ÉÌËùÊ±¼ä
	TThostFtdcTimeType	CZCETime;
	///ÖÐ½ðËùÊ±¼ä
	TThostFtdcTimeType	FFEXTime;
	///ÄÜÔ´ÖÐÐÄÊ±¼ä
	TThostFtdcTimeType	INETime;
	///ºóÌ¨°æ±¾ÐÅÏ¢
	TThostFtdcSysVersionType	SysVersion;
	///¹ãÆÚËùÊ±¼ä
	TThostFtdcTimeType	GFEXTime;
	///µ±Ç°µÇÂ¼ÖÐÐÄºÅ
	TThostFtdcDRIdentityIDType	LoginDRIdentityID;
	///ÓÃ»§ËùÊôÖÐÐÄºÅ
	TThostFtdcDRIdentityIDType	UserDRIdentityID;
};

///ÓÃ»§µÇ³öÇëÇó
struct CThostFtdcUserLogoutField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///ÓÃ»§´úÂë
	TThostFtdcUserIDType	UserID;
};

///Ç¿ÖÆ½»Ò×Ô±ÍË³ö
struct CThostFtdcForceUserLogoutField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///ÓÃ»§´úÂë
	TThostFtdcUserIDType	UserID;
};

///¿Í»§¶ËÈÏÖ¤ÇëÇó
struct CThostFtdcReqAuthenticateField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///ÓÃ»§´úÂë
	TThostFtdcUserIDType	UserID;
	///ÓÃ»§¶Ë²úÆ·ÐÅÏ¢
	TThostFtdcProductInfoType	UserProductInfo;
	///ÈÏÖ¤Âë
	TThostFtdcAuthCodeType	AuthCode;
	///App´úÂë
	TThostFtdcAppIDType	AppID;
};

///¿Í»§¶ËÈÏÖ¤ÏìÓ¦
struct CThostFtdcRspAuthenticateField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///ÓÃ»§´úÂë
	TThostFtdcUserIDType	UserID;
	///ÓÃ»§¶Ë²úÆ·ÐÅÏ¢
	TThostFtdcProductInfoType	UserProductInfo;
	///App´úÂë
	TThostFtdcAppIDType	AppID;
	///AppÀàÐÍ
	TThostFtdcAppTypeType	AppType;
};

///¿Í»§¶ËÈÏÖ¤ÐÅÏ¢
struct CThostFtdcAuthenticationInfoField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///ÓÃ»§´úÂë
	TThostFtdcUserIDType	UserID;
	///ÓÃ»§¶Ë²úÆ·ÐÅÏ¢
	TThostFtdcProductInfoType	UserProductInfo;
	///ÈÏÖ¤ÐÅÏ¢
	TThostFtdcAuthInfoType	AuthInfo;
	///ÊÇ·ñÎªÈÏÖ¤½á¹û
	TThostFtdcBoolType	IsResult;
	///App´úÂë
	TThostFtdcAppIDType	AppID;
	///AppÀàÐÍ
	TThostFtdcAppTypeType	AppType;
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldIPAddressType	reserve1;
	///ÖÕ¶ËIPµØÖ·
	TThostFtdcIPAddressType	ClientIPAddress;
};

///ÓÃ»§µÇÂ¼Ó¦´ð2
struct CThostFtdcRspUserLogin2Field
{
	///½»Ò×ÈÕ
	TThostFtdcDateType	TradingDay;
	///µÇÂ¼³É¹¦Ê±¼ä
	TThostFtdcTimeType	LoginTime;
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///ÓÃ»§´úÂë
	TThostFtdcUserIDType	UserID;
	///½»Ò×ÏµÍ³Ãû³Æ
	TThostFtdcSystemNameType	SystemName;
	///Ç°ÖÃ±àºÅ
	TThostFtdcFrontIDType	FrontID;
	///»á»°±àºÅ
	TThostFtdcSessionIDType	SessionID;
	///×î´ó±¨µ¥ÒýÓÃ
	TThostFtdcOrderRefType	MaxOrderRef;
	///ÉÏÆÚËùÊ±¼ä
	TThostFtdcTimeType	SHFETime;
	///´óÉÌËùÊ±¼ä
	TThostFtdcTimeType	DCETime;
	///Ö£ÉÌËùÊ±¼ä
	TThostFtdcTimeType	CZCETime;
	///ÖÐ½ðËùÊ±¼ä
	TThostFtdcTimeType	FFEXTime;
	///ÄÜÔ´ÖÐÐÄÊ±¼ä
	TThostFtdcTimeType	INETime;
	///Ëæ»ú´®
	TThostFtdcRandomStringType	RandomString;
};

///ÒøÆÚ×ªÕÊ±¨ÎÄÍ·
struct CThostFtdcTransferHeaderField
{
	///°æ±¾ºÅ£¬³£Á¿£¬1.0
	TThostFtdcVersionType	Version;
	///½»Ò×´úÂë£¬±ØÌî
	TThostFtdcTradeCodeType	TradeCode;
	///½»Ò×ÈÕÆÚ£¬±ØÌî£¬¸ñÊ½£ºyyyymmdd
	TThostFtdcTradeDateType	TradeDate;
	///½»Ò×Ê±¼ä£¬±ØÌî£¬¸ñÊ½£ºhhmmss
	TThostFtdcTradeTimeType	TradeTime;
	///·¢Æð·½Á÷Ë®ºÅ£¬N/A
	TThostFtdcTradeSerialType	TradeSerial;
	///ÆÚ»õ¹«Ë¾´úÂë£¬±ØÌî
	TThostFtdcFutureIDType	FutureID;
	///ÒøÐÐ´úÂë£¬¸ù¾Ý²éÑ¯ÒøÐÐµÃµ½£¬±ØÌî
	TThostFtdcBankIDType	BankID;
	///ÒøÐÐ·ÖÖÐÐÄ´úÂë£¬¸ù¾Ý²éÑ¯ÒøÐÐµÃµ½£¬±ØÌî
	TThostFtdcBankBrchIDType	BankBrchID;
	///²Ù×÷Ô±£¬N/A
	TThostFtdcOperNoType	OperNo;
	///½»Ò×Éè±¸ÀàÐÍ£¬N/A
	TThostFtdcDeviceIDType	DeviceID;
	///¼ÇÂ¼Êý£¬N/A
	TThostFtdcRecordNumType	RecordNum;
	///»á»°±àºÅ£¬N/A
	TThostFtdcSessionIDType	SessionID;
	///ÇëÇó±àºÅ£¬N/A
	TThostFtdcRequestIDType	RequestID;
};

///ÒøÐÐ×Ê½ð×ªÆÚ»õÇëÇó£¬TradeCode=202001
struct CThostFtdcTransferBankToFutureReqField
{
	///ÆÚ»õ×Ê½ðÕË»§
	TThostFtdcAccountIDType	FutureAccount;
	///ÃÜÂë±êÖ¾
	TThostFtdcFuturePwdFlagType	FuturePwdFlag;
	///ÃÜÂë
	TThostFtdcFutureAccPwdType	FutureAccPwd;
	///×ªÕË½ð¶î
	TThostFtdcMoneyType	TradeAmt;
	///¿Í»§ÊÖÐø·Ñ
	TThostFtdcMoneyType	CustFee;
	///±ÒÖÖ£ºRMB-ÈËÃñ±Ò USD-ÃÀÔ² HKD-¸ÛÔª
	TThostFtdcCurrencyCodeType	CurrencyCode;
};

///ÒøÐÐ×Ê½ð×ªÆÚ»õÇëÇóÏìÓ¦
struct CThostFtdcTransferBankToFutureRspField
{
	///ÏìÓ¦´úÂë
	TThostFtdcRetCodeType	RetCode;
	///ÏìÓ¦ÐÅÏ¢
	TThostFtdcRetInfoType	RetInfo;
	///×Ê½ðÕË»§
	TThostFtdcAccountIDType	FutureAccount;
	///×ªÕÊ½ð¶î
	TThostFtdcMoneyType	TradeAmt;
	///Ó¦ÊÕ¿Í»§ÊÖÐø·Ñ
	TThostFtdcMoneyType	CustFee;
	///±ÒÖÖ
	TThostFtdcCurrencyCodeType	CurrencyCode;
};

///ÆÚ»õ×Ê½ð×ªÒøÐÐÇëÇó£¬TradeCode=202002
struct CThostFtdcTransferFutureToBankReqField
{
	///ÆÚ»õ×Ê½ðÕË»§
	TThostFtdcAccountIDType	FutureAccount;
	///ÃÜÂë±êÖ¾
	TThostFtdcFuturePwdFlagType	FuturePwdFlag;
	///ÃÜÂë
	TThostFtdcFutureAccPwdType	FutureAccPwd;
	///×ªÕË½ð¶î
	TThostFtdcMoneyType	TradeAmt;
	///¿Í»§ÊÖÐø·Ñ
	TThostFtdcMoneyType	CustFee;
	///±ÒÖÖ£ºRMB-ÈËÃñ±Ò USD-ÃÀÔ² HKD-¸ÛÔª
	TThostFtdcCurrencyCodeType	CurrencyCode;
};

///ÆÚ»õ×Ê½ð×ªÒøÐÐÇëÇóÏìÓ¦
struct CThostFtdcTransferFutureToBankRspField
{
	///ÏìÓ¦´úÂë
	TThostFtdcRetCodeType	RetCode;
	///ÏìÓ¦ÐÅÏ¢
	TThostFtdcRetInfoType	RetInfo;
	///×Ê½ðÕË»§
	TThostFtdcAccountIDType	FutureAccount;
	///×ªÕÊ½ð¶î
	TThostFtdcMoneyType	TradeAmt;
	///Ó¦ÊÕ¿Í»§ÊÖÐø·Ñ
	TThostFtdcMoneyType	CustFee;
	///±ÒÖÖ
	TThostFtdcCurrencyCodeType	CurrencyCode;
};

///²éÑ¯ÒøÐÐ×Ê½ðÇëÇó£¬TradeCode=204002
struct CThostFtdcTransferQryBankReqField
{
	///ÆÚ»õ×Ê½ðÕË»§
	TThostFtdcAccountIDType	FutureAccount;
	///ÃÜÂë±êÖ¾
	TThostFtdcFuturePwdFlagType	FuturePwdFlag;
	///ÃÜÂë
	TThostFtdcFutureAccPwdType	FutureAccPwd;
	///±ÒÖÖ£ºRMB-ÈËÃñ±Ò USD-ÃÀÔ² HKD-¸ÛÔª
	TThostFtdcCurrencyCodeType	CurrencyCode;
};

///²éÑ¯ÒøÐÐ×Ê½ðÇëÇóÏìÓ¦
struct CThostFtdcTransferQryBankRspField
{
	///ÏìÓ¦´úÂë
	TThostFtdcRetCodeType	RetCode;
	///ÏìÓ¦ÐÅÏ¢
	TThostFtdcRetInfoType	RetInfo;
	///×Ê½ðÕË»§
	TThostFtdcAccountIDType	FutureAccount;
	///ÒøÐÐÓà¶î
	TThostFtdcMoneyType	TradeAmt;
	///ÒøÐÐ¿ÉÓÃÓà¶î
	TThostFtdcMoneyType	UseAmt;
	///ÒøÐÐ¿ÉÈ¡Óà¶î
	TThostFtdcMoneyType	FetchAmt;
	///±ÒÖÖ
	TThostFtdcCurrencyCodeType	CurrencyCode;
};

///²éÑ¯ÒøÐÐ½»Ò×Ã÷Ï¸ÇëÇó£¬TradeCode=204999
struct CThostFtdcTransferQryDetailReqField
{
	///ÆÚ»õ×Ê½ðÕË»§
	TThostFtdcAccountIDType	FutureAccount;
};

///²éÑ¯ÒøÐÐ½»Ò×Ã÷Ï¸ÇëÇóÏìÓ¦
struct CThostFtdcTransferQryDetailRspField
{
	///½»Ò×ÈÕÆÚ
	TThostFtdcDateType	TradeDate;
	///½»Ò×Ê±¼ä
	TThostFtdcTradeTimeType	TradeTime;
	///½»Ò×´úÂë
	TThostFtdcTradeCodeType	TradeCode;
	///ÆÚ»õÁ÷Ë®ºÅ
	TThostFtdcTradeSerialNoType	FutureSerial;
	///ÆÚ»õ¹«Ë¾´úÂë
	TThostFtdcFutureIDType	FutureID;
	///×Ê½ðÕÊºÅ
	TThostFtdcFutureAccountType	FutureAccount;
	///ÒøÐÐÁ÷Ë®ºÅ
	TThostFtdcTradeSerialNoType	BankSerial;
	///ÒøÐÐ´úÂë
	TThostFtdcBankIDType	BankID;
	///ÒøÐÐ·ÖÖÐÐÄ´úÂë
	TThostFtdcBankBrchIDType	BankBrchID;
	///ÒøÐÐÕËºÅ
	TThostFtdcBankAccountType	BankAccount;
	///Ö¤¼þºÅÂë
	TThostFtdcCertCodeType	CertCode;
	///»õ±Ò´úÂë
	TThostFtdcCurrencyCodeType	CurrencyCode;
	///·¢Éú½ð¶î
	TThostFtdcMoneyType	TxAmount;
	///ÓÐÐ§±êÖ¾
	TThostFtdcTransferValidFlagType	Flag;
};

///ÏìÓ¦ÐÅÏ¢
struct CThostFtdcRspInfoField
{
	///´íÎó´úÂë
	TThostFtdcErrorIDType	ErrorID;
	///´íÎóÐÅÏ¢
	TThostFtdcErrorMsgType	ErrorMsg;
};

///½»Ò×Ëù
struct CThostFtdcExchangeField
{
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///½»Ò×ËùÃû³Æ
	TThostFtdcExchangeNameType	ExchangeName;
	///½»Ò×ËùÊôÐÔ
	TThostFtdcExchangePropertyType	ExchangeProperty;
};

///²úÆ·
struct CThostFtdcProductField
{
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldInstrumentIDType	reserve1;
	///²úÆ·Ãû³Æ
	TThostFtdcProductNameType	ProductName;
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///²úÆ·ÀàÐÍ
	TThostFtdcProductClassType	ProductClass;
	///ºÏÔ¼ÊýÁ¿³ËÊý
	TThostFtdcVolumeMultipleType	VolumeMultiple;
	///×îÐ¡±ä¶¯¼ÛÎ»
	TThostFtdcPriceType	PriceTick;
	///ÊÐ¼Ûµ¥×î´óÏÂµ¥Á¿
	TThostFtdcVolumeType	MaxMarketOrderVolume;
	///ÊÐ¼Ûµ¥×îÐ¡ÏÂµ¥Á¿
	TThostFtdcVolumeType	MinMarketOrderVolume;
	///ÏÞ¼Ûµ¥×î´óÏÂµ¥Á¿
	TThostFtdcVolumeType	MaxLimitOrderVolume;
	///ÏÞ¼Ûµ¥×îÐ¡ÏÂµ¥Á¿
	TThostFtdcVolumeType	MinLimitOrderVolume;
	///³Ö²ÖÀàÐÍ
	TThostFtdcPositionTypeType	PositionType;
	///³Ö²ÖÈÕÆÚÀàÐÍ
	TThostFtdcPositionDateTypeType	PositionDateType;
	///Æ½²Ö´¦ÀíÀàÐÍ
	TThostFtdcCloseDealTypeType	CloseDealType;
	///½»Ò×±ÒÖÖÀàÐÍ
	TThostFtdcCurrencyIDType	TradeCurrencyID;
	///ÖÊÑº×Ê½ð¿ÉÓÃ·¶Î§
	TThostFtdcMortgageFundUseRangeType	MortgageFundUseRange;
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldInstrumentIDType	reserve2;
	///ºÏÔ¼»ù´¡ÉÌÆ·³ËÊý
	TThostFtdcUnderlyingMultipleType	UnderlyingMultiple;
	///²úÆ·´úÂë
	TThostFtdcInstrumentIDType	ProductID;
	///½»Ò×Ëù²úÆ·´úÂë
	TThostFtdcInstrumentIDType	ExchangeProductID;
	///¿ª²ÖÁ¿ÏÞÖÆÁ£¶È
	TThostFtdcOpenLimitControlLevelType	OpenLimitControlLevel;
	///±¨µ¥ÆµÂÊ¿ØÖÆÁ£¶È
	TThostFtdcOrderFreqControlLevelType	OrderFreqControlLevel;
};

///ºÏÔ¼
struct CThostFtdcInstrumentField
{
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldInstrumentIDType	reserve1;
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///ºÏÔ¼Ãû³Æ
	TThostFtdcInstrumentNameType	InstrumentName;
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldExchangeInstIDType	reserve2;
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldInstrumentIDType	reserve3;
	///²úÆ·ÀàÐÍ
	TThostFtdcProductClassType	ProductClass;
	///½»¸îÄê·Ý
	TThostFtdcYearType	DeliveryYear;
	///½»¸îÔÂ
	TThostFtdcMonthType	DeliveryMonth;
	///ÊÐ¼Ûµ¥×î´óÏÂµ¥Á¿
	TThostFtdcVolumeType	MaxMarketOrderVolume;
	///ÊÐ¼Ûµ¥×îÐ¡ÏÂµ¥Á¿
	TThostFtdcVolumeType	MinMarketOrderVolume;
	///ÏÞ¼Ûµ¥×î´óÏÂµ¥Á¿
	TThostFtdcVolumeType	MaxLimitOrderVolume;
	///ÏÞ¼Ûµ¥×îÐ¡ÏÂµ¥Á¿
	TThostFtdcVolumeType	MinLimitOrderVolume;
	///ºÏÔ¼ÊýÁ¿³ËÊý
	TThostFtdcVolumeMultipleType	VolumeMultiple;
	///×îÐ¡±ä¶¯¼ÛÎ»
	TThostFtdcPriceType	PriceTick;
	///´´½¨ÈÕ
	TThostFtdcDateType	CreateDate;
	///ÉÏÊÐÈÕ
	TThostFtdcDateType	OpenDate;
	///µ½ÆÚÈÕ
	TThostFtdcDateType	ExpireDate;
	///¿ªÊ¼½»¸îÈÕ
	TThostFtdcDateType	StartDelivDate;
	///½áÊø½»¸îÈÕ
	TThostFtdcDateType	EndDelivDate;
	///ºÏÔ¼ÉúÃüÖÜÆÚ×´Ì¬
	TThostFtdcInstLifePhaseType	InstLifePhase;
	///µ±Ç°ÊÇ·ñ½»Ò×
	TThostFtdcBoolType	IsTrading;
	///³Ö²ÖÀàÐÍ
	TThostFtdcPositionTypeType	PositionType;
	///³Ö²ÖÈÕÆÚÀàÐÍ
	TThostFtdcPositionDateTypeType	PositionDateType;
	///¶àÍ·±£Ö¤½ðÂÊ
	TThostFtdcRatioType	LongMarginRatio;
	///¿ÕÍ·±£Ö¤½ðÂÊ
	TThostFtdcRatioType	ShortMarginRatio;
	///ÊÇ·ñÊ¹ÓÃ´ó¶îµ¥±ß±£Ö¤½ðËã·¨
	TThostFtdcMaxMarginSideAlgorithmType	MaxMarginSideAlgorithm;
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldInstrumentIDType	reserve4;
	///Ö´ÐÐ¼Û
	TThostFtdcPriceType	StrikePrice;
	///ÆÚÈ¨ÀàÐÍ
	TThostFtdcOptionsTypeType	OptionsType;
	///ºÏÔ¼»ù´¡ÉÌÆ·³ËÊý
	TThostFtdcUnderlyingMultipleType	UnderlyingMultiple;
	///×éºÏÀàÐÍ
	TThostFtdcCombinationTypeType	CombinationType;
	///ºÏÔ¼´úÂë
	TThostFtdcInstrumentIDType	InstrumentID;
	///ºÏÔ¼ÔÚ½»Ò×ËùµÄ´úÂë
	TThostFtdcExchangeInstIDType	ExchangeInstID;
	///²úÆ·´úÂë
	TThostFtdcInstrumentIDType	ProductID;
	///»ù´¡ÉÌÆ·´úÂë
	TThostFtdcInstrumentIDType	UnderlyingInstrID;
};

///¾­¼Í¹«Ë¾
struct CThostFtdcBrokerField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///¾­¼Í¹«Ë¾¼ò³Æ
	TThostFtdcBrokerAbbrType	BrokerAbbr;
	///¾­¼Í¹«Ë¾Ãû³Æ
	TThostFtdcBrokerNameType	BrokerName;
	///ÊÇ·ñ»îÔ¾
	TThostFtdcBoolType	IsActive;
};

///½»Ò×Ëù½»Ò×Ô±
struct CThostFtdcTraderField
{
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///½»Ò×Ëù½»Ò×Ô±´úÂë
	TThostFtdcTraderIDType	TraderID;
	///»áÔ±´úÂë
	TThostFtdcParticipantIDType	ParticipantID;
	///ÃÜÂë
	TThostFtdcPasswordType	Password;
	///°²×°ÊýÁ¿
	TThostFtdcInstallCountType	InstallCount;
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///³·µ¥Ê±Ñ¡ÔñÏ¯Î»Ëã·¨
	TThostFtdcOrderCancelAlgType	OrderCancelAlg;
	///½»Ò×±¨ÅÌ°²×°ÊýÁ¿
	TThostFtdcInstallCountType	TradeInstallCount;
	///ÐÐÇé±¨ÅÌ°²×°ÊýÁ¿
	TThostFtdcInstallCountType	MDInstallCount;
};

///Í¶×ÊÕß
struct CThostFtdcInvestorField
{
	///Í¶×ÊÕß´úÂë
	TThostFtdcInvestorIDType	InvestorID;
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///Í¶×ÊÕß·Ö×é´úÂë
	TThostFtdcInvestorIDType	InvestorGroupID;
	///Í¶×ÊÕßÃû³Æ
	TThostFtdcPartyNameType	InvestorName;
	///Ö¤¼þÀàÐÍ
	TThostFtdcIdCardTypeType	IdentifiedCardType;
	///Ö¤¼þºÅÂë
	TThostFtdcIdentifiedCardNoType	IdentifiedCardNo;
	///ÊÇ·ñ»îÔ¾
	TThostFtdcBoolType	IsActive;
	///ÁªÏµµç»°
	TThostFtdcTelephoneType	Telephone;
	///Í¨Ñ¶µØÖ·
	TThostFtdcAddressType	Address;
	///¿ª»§ÈÕÆÚ
	TThostFtdcDateType	OpenDate;
	///ÊÖ»ú
	TThostFtdcMobileType	Mobile;
	///ÊÖÐø·ÑÂÊÄ£°å´úÂë
	TThostFtdcInvestorIDType	CommModelID;
	///±£Ö¤½ðÂÊÄ£°å´úÂë
	TThostFtdcInvestorIDType	MarginModelID;
	///ÊÇ·ñÆµÂÊ¿ØÖÆ
	TThostFtdcEnumBoolType	IsOrderFreq;
	///ÊÇ·ñ¿ª²ÖÏÞÖÆ
	TThostFtdcEnumBoolType	IsOpenVolLimit;
};

///½»Ò×±àÂë
struct CThostFtdcTradingCodeField
{
	///Í¶×ÊÕß´úÂë
	TThostFtdcInvestorIDType	InvestorID;
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///¿Í»§´úÂë
	TThostFtdcClientIDType	ClientID;
	///ÊÇ·ñ»îÔ¾
	TThostFtdcBoolType	IsActive;
	///½»Ò×±àÂëÀàÐÍ
	TThostFtdcClientIDTypeType	ClientIDType;
	///ÓªÒµ²¿±àºÅ
	TThostFtdcBranchIDType	BranchID;
	///ÒµÎñÀàÐÍ
	TThostFtdcBizTypeType	BizType;
	///Í¶×Êµ¥Ôª´úÂë
	TThostFtdcInvestUnitIDType	InvestUnitID;
};

///»áÔ±±àÂëºÍ¾­¼Í¹«Ë¾±àÂë¶ÔÕÕ±í
struct CThostFtdcPartBrokerField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///»áÔ±´úÂë
	TThostFtdcParticipantIDType	ParticipantID;
	///ÊÇ·ñ»îÔ¾
	TThostFtdcBoolType	IsActive;
};

///¹ÜÀíÓÃ»§
struct CThostFtdcSuperUserField
{
	///ÓÃ»§´úÂë
	TThostFtdcUserIDType	UserID;
	///ÓÃ»§Ãû³Æ
	TThostFtdcUserNameType	UserName;
	///ÃÜÂë
	TThostFtdcPasswordType	Password;
	///ÊÇ·ñ»îÔ¾
	TThostFtdcBoolType	IsActive;
};

///¹ÜÀíÓÃ»§¹¦ÄÜÈ¨ÏÞ
struct CThostFtdcSuperUserFunctionField
{
	///ÓÃ»§´úÂë
	TThostFtdcUserIDType	UserID;
	///¹¦ÄÜ´úÂë
	TThostFtdcFunctionCodeType	FunctionCode;
};

///Í¶×ÊÕß×é
struct CThostFtdcInvestorGroupField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///Í¶×ÊÕß·Ö×é´úÂë
	TThostFtdcInvestorIDType	InvestorGroupID;
	///Í¶×ÊÕß·Ö×éÃû³Æ
	TThostFtdcInvestorGroupNameType	InvestorGroupName;
};

///×Ê½ðÕË»§
struct CThostFtdcTradingAccountField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///Í¶×ÊÕßÕÊºÅ
	TThostFtdcAccountIDType	AccountID;
	///ÉÏ´ÎÖÊÑº½ð¶î
	TThostFtdcMoneyType	PreMortgage;
	///ÉÏ´ÎÐÅÓÃ¶î¶È
	TThostFtdcMoneyType	PreCredit;
	///ÉÏ´Î´æ¿î¶î
	TThostFtdcMoneyType	PreDeposit;
	///ÉÏ´Î½áËã×¼±¸½ð
	TThostFtdcMoneyType	PreBalance;
	///ÉÏ´ÎÕ¼ÓÃµÄ±£Ö¤½ð
	TThostFtdcMoneyType	PreMargin;
	///ÀûÏ¢»ùÊý
	TThostFtdcMoneyType	InterestBase;
	///ÀûÏ¢ÊÕÈë
	TThostFtdcMoneyType	Interest;
	///Èë½ð½ð¶î
	TThostFtdcMoneyType	Deposit;
	///³ö½ð½ð¶î
	TThostFtdcMoneyType	Withdraw;
	///¶³½áµÄ±£Ö¤½ð
	TThostFtdcMoneyType	FrozenMargin;
	///¶³½áµÄ×Ê½ð
	TThostFtdcMoneyType	FrozenCash;
	///¶³½áµÄÊÖÐø·Ñ
	TThostFtdcMoneyType	FrozenCommission;
	///µ±Ç°±£Ö¤½ð×Ü¶î
	TThostFtdcMoneyType	CurrMargin;
	///×Ê½ð²î¶î
	TThostFtdcMoneyType	CashIn;
	///ÊÖÐø·Ñ
	TThostFtdcMoneyType	Commission;
	///Æ½²ÖÓ¯¿÷
	TThostFtdcMoneyType	CloseProfit;
	///³Ö²ÖÓ¯¿÷
	TThostFtdcMoneyType	PositionProfit;
	///ÆÚ»õ½áËã×¼±¸½ð
	TThostFtdcMoneyType	Balance;
	///¿ÉÓÃ×Ê½ð
	TThostFtdcMoneyType	Available;
	///¿ÉÈ¡×Ê½ð
	TThostFtdcMoneyType	WithdrawQuota;
	///»ù±¾×¼±¸½ð
	TThostFtdcMoneyType	Reserve;
	///½»Ò×ÈÕ
	TThostFtdcDateType	TradingDay;
	///½áËã±àºÅ
	TThostFtdcSettlementIDType	SettlementID;
	///ÐÅÓÃ¶î¶È
	TThostFtdcMoneyType	Credit;
	///ÖÊÑº½ð¶î
	TThostFtdcMoneyType	Mortgage;
	///½»Ò×Ëù±£Ö¤½ð
	TThostFtdcMoneyType	ExchangeMargin;
	///Í¶×ÊÕß½»¸î±£Ö¤½ð
	TThostFtdcMoneyType	DeliveryMargin;
	///½»Ò×Ëù½»¸î±£Ö¤½ð
	TThostFtdcMoneyType	ExchangeDeliveryMargin;
	///±£µ×ÆÚ»õ½áËã×¼±¸½ð
	TThostFtdcMoneyType	ReserveBalance;
	///±ÒÖÖ´úÂë
	TThostFtdcCurrencyIDType	CurrencyID;
	///ÉÏ´Î»õ±ÒÖÊÈë½ð¶î
	TThostFtdcMoneyType	PreFundMortgageIn;
	///ÉÏ´Î»õ±ÒÖÊ³ö½ð¶î
	TThostFtdcMoneyType	PreFundMortgageOut;
	///»õ±ÒÖÊÈë½ð¶î
	TThostFtdcMoneyType	FundMortgageIn;
	///»õ±ÒÖÊ³ö½ð¶î
	TThostFtdcMoneyType	FundMortgageOut;
	///»õ±ÒÖÊÑºÓà¶î
	TThostFtdcMoneyType	FundMortgageAvailable;
	///¿ÉÖÊÑº»õ±Ò½ð¶î
	TThostFtdcMoneyType	MortgageableFund;
	///ÌØÊâ²úÆ·Õ¼ÓÃ±£Ö¤½ð
	TThostFtdcMoneyType	SpecProductMargin;
	///ÌØÊâ²úÆ·¶³½á±£Ö¤½ð
	TThostFtdcMoneyType	SpecProductFrozenMargin;
	///ÌØÊâ²úÆ·ÊÖÐø·Ñ
	TThostFtdcMoneyType	SpecProductCommission;
	///ÌØÊâ²úÆ·¶³½áÊÖÐø·Ñ
	TThostFtdcMoneyType	SpecProductFrozenCommission;
	///ÌØÊâ²úÆ·³Ö²ÖÓ¯¿÷
	TThostFtdcMoneyType	SpecProductPositionProfit;
	///ÌØÊâ²úÆ·Æ½²ÖÓ¯¿÷
	TThostFtdcMoneyType	SpecProductCloseProfit;
	///¸ù¾Ý³Ö²ÖÓ¯¿÷Ëã·¨¼ÆËãµÄÌØÊâ²úÆ·³Ö²ÖÓ¯¿÷
	TThostFtdcMoneyType	SpecProductPositionProfitByAlg;
	///ÌØÊâ²úÆ·½»Ò×Ëù±£Ö¤½ð
	TThostFtdcMoneyType	SpecProductExchangeMargin;
	///ÒµÎñÀàÐÍ
	TThostFtdcBizTypeType	BizType;
	///ÑÓÊ±»»»ã¶³½á½ð¶î
	TThostFtdcMoneyType	FrozenSwap;
	///Ê£Óà»»»ã¶î¶È
	TThostFtdcMoneyType	RemainSwap;
	///ÆÚÈ¨ÊÐÖµ
	TThostFtdcMoneyType	OptionValue;
};

///Í¶×ÊÕß³Ö²Ö
struct CThostFtdcInvestorPositionField
{
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldInstrumentIDType	reserve1;
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///Í¶×ÊÕß´úÂë
	TThostFtdcInvestorIDType	InvestorID;
	///³Ö²Ö¶à¿Õ·½Ïò
	TThostFtdcPosiDirectionType	PosiDirection;
	///Í¶»úÌ×±£±êÖ¾
	TThostFtdcHedgeFlagType	HedgeFlag;
	///³Ö²ÖÈÕÆÚ
	TThostFtdcPositionDateType	PositionDate;
	///ÉÏÈÕ³Ö²Ö
	TThostFtdcVolumeType	YdPosition;
	///½ñÈÕ³Ö²Ö
	TThostFtdcVolumeType	Position;
	///¶àÍ·¶³½á
	TThostFtdcVolumeType	LongFrozen;
	///¿ÕÍ·¶³½á
	TThostFtdcVolumeType	ShortFrozen;
	///¿ª²Ö¶³½á½ð¶î
	TThostFtdcMoneyType	LongFrozenAmount;
	///¿ª²Ö¶³½á½ð¶î
	TThostFtdcMoneyType	ShortFrozenAmount;
	///¿ª²ÖÁ¿
	TThostFtdcVolumeType	OpenVolume;
	///Æ½²ÖÁ¿
	TThostFtdcVolumeType	CloseVolume;
	///¿ª²Ö½ð¶î
	TThostFtdcMoneyType	OpenAmount;
	///Æ½²Ö½ð¶î
	TThostFtdcMoneyType	CloseAmount;
	///³Ö²Ö³É±¾
	TThostFtdcMoneyType	PositionCost;
	///ÉÏ´ÎÕ¼ÓÃµÄ±£Ö¤½ð
	TThostFtdcMoneyType	PreMargin;
	///Õ¼ÓÃµÄ±£Ö¤½ð
	TThostFtdcMoneyType	UseMargin;
	///¶³½áµÄ±£Ö¤½ð
	TThostFtdcMoneyType	FrozenMargin;
	///¶³½áµÄ×Ê½ð
	TThostFtdcMoneyType	FrozenCash;
	///¶³½áµÄÊÖÐø·Ñ
	TThostFtdcMoneyType	FrozenCommission;
	///×Ê½ð²î¶î
	TThostFtdcMoneyType	CashIn;
	///ÊÖÐø·Ñ
	TThostFtdcMoneyType	Commission;
	///Æ½²ÖÓ¯¿÷
	TThostFtdcMoneyType	CloseProfit;
	///³Ö²ÖÓ¯¿÷
	TThostFtdcMoneyType	PositionProfit;
	///ÉÏ´Î½áËã¼Û
	TThostFtdcPriceType	PreSettlementPrice;
	///±¾´Î½áËã¼Û
	TThostFtdcPriceType	SettlementPrice;
	///½»Ò×ÈÕ
	TThostFtdcDateType	TradingDay;
	///½áËã±àºÅ
	TThostFtdcSettlementIDType	SettlementID;
	///¿ª²Ö³É±¾
	TThostFtdcMoneyType	OpenCost;
	///½»Ò×Ëù±£Ö¤½ð
	TThostFtdcMoneyType	ExchangeMargin;
	///×éºÏ³É½»ÐÎ³ÉµÄ³Ö²Ö
	TThostFtdcVolumeType	CombPosition;
	///×éºÏ¶àÍ·¶³½á
	TThostFtdcVolumeType	CombLongFrozen;
	///×éºÏ¿ÕÍ·¶³½á
	TThostFtdcVolumeType	CombShortFrozen;
	///ÖðÈÕ¶¢ÊÐÆ½²ÖÓ¯¿÷
	TThostFtdcMoneyType	CloseProfitByDate;
	///Öð±Ê¶Ô³åÆ½²ÖÓ¯¿÷
	TThostFtdcMoneyType	CloseProfitByTrade;
	///½ñÈÕ³Ö²Ö
	TThostFtdcVolumeType	TodayPosition;
	///±£Ö¤½ðÂÊ
	TThostFtdcRatioType	MarginRateByMoney;
	///±£Ö¤½ðÂÊ(°´ÊÖÊý)
	TThostFtdcRatioType	MarginRateByVolume;
	///Ö´ÐÐ¶³½á
	TThostFtdcVolumeType	StrikeFrozen;
	///Ö´ÐÐ¶³½á½ð¶î
	TThostFtdcMoneyType	StrikeFrozenAmount;
	///·ÅÆúÖ´ÐÐ¶³½á
	TThostFtdcVolumeType	AbandonFrozen;
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///Ö´ÐÐ¶³½áµÄ×ò²Ö
	TThostFtdcVolumeType	YdStrikeFrozen;
	///Í¶×Êµ¥Ôª´úÂë
	TThostFtdcInvestUnitIDType	InvestUnitID;
	///³Ö²Ö³É±¾²îÖµ
	TThostFtdcMoneyType	PositionCostOffset;
	///tas³Ö²ÖÊÖÊý
	TThostFtdcVolumeType	TasPosition;
	///tas³Ö²Ö³É±¾
	TThostFtdcMoneyType	TasPositionCost;
	///ºÏÔ¼´úÂë
	TThostFtdcInstrumentIDType	InstrumentID;
	///ÆÚÈ¨ÊÐÖµ
	TThostFtdcMoneyType	OptionValue;
};

///ºÏÔ¼±£Ö¤½ðÂÊ
struct CThostFtdcInstrumentMarginRateField
{
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldInstrumentIDType	reserve1;
	///Í¶×ÊÕß·¶Î§
	TThostFtdcInvestorRangeType	InvestorRange;
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///Í¶×ÊÕß´úÂë
	TThostFtdcInvestorIDType	InvestorID;
	///Í¶»úÌ×±£±êÖ¾
	TThostFtdcHedgeFlagType	HedgeFlag;
	///¶àÍ·±£Ö¤½ðÂÊ
	TThostFtdcRatioType	LongMarginRatioByMoney;
	///¶àÍ·±£Ö¤½ð·Ñ
	TThostFtdcMoneyType	LongMarginRatioByVolume;
	///¿ÕÍ·±£Ö¤½ðÂÊ
	TThostFtdcRatioType	ShortMarginRatioByMoney;
	///¿ÕÍ·±£Ö¤½ð·Ñ
	TThostFtdcMoneyType	ShortMarginRatioByVolume;
	///ÊÇ·ñÏà¶Ô½»Ò×ËùÊÕÈ¡
	TThostFtdcBoolType	IsRelative;
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///Í¶×Êµ¥Ôª´úÂë
	TThostFtdcInvestUnitIDType	InvestUnitID;
	///ºÏÔ¼´úÂë
	TThostFtdcInstrumentIDType	InstrumentID;
};

///ºÏÔ¼ÊÖÐø·ÑÂÊ
struct CThostFtdcInstrumentCommissionRateField
{
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldInstrumentIDType	reserve1;
	///Í¶×ÊÕß·¶Î§
	TThostFtdcInvestorRangeType	InvestorRange;
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///Í¶×ÊÕß´úÂë
	TThostFtdcInvestorIDType	InvestorID;
	///¿ª²ÖÊÖÐø·ÑÂÊ
	TThostFtdcRatioType	OpenRatioByMoney;
	///¿ª²ÖÊÖÐø·Ñ
	TThostFtdcRatioType	OpenRatioByVolume;
	///Æ½²ÖÊÖÐø·ÑÂÊ
	TThostFtdcRatioType	CloseRatioByMoney;
	///Æ½²ÖÊÖÐø·Ñ
	TThostFtdcRatioType	CloseRatioByVolume;
	///Æ½½ñÊÖÐø·ÑÂÊ
	TThostFtdcRatioType	CloseTodayRatioByMoney;
	///Æ½½ñÊÖÐø·Ñ
	TThostFtdcRatioType	CloseTodayRatioByVolume;
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///ÒµÎñÀàÐÍ
	TThostFtdcBizTypeType	BizType;
	///Í¶×Êµ¥Ôª´úÂë
	TThostFtdcInvestUnitIDType	InvestUnitID;
	///ºÏÔ¼´úÂë
	TThostFtdcInstrumentIDType	InstrumentID;
};

///Éî¶ÈÐÐÇé
struct CThostFtdcDepthMarketDataField
{
	///½»Ò×ÈÕ
	TThostFtdcDateType	TradingDay;
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldInstrumentIDType	reserve1;
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldExchangeInstIDType	reserve2;
	///×îÐÂ¼Û
	TThostFtdcPriceType	LastPrice;
	///ÉÏ´Î½áËã¼Û
	TThostFtdcPriceType	PreSettlementPrice;
	///×òÊÕÅÌ
	TThostFtdcPriceType	PreClosePrice;
	///×ò³Ö²ÖÁ¿
	TThostFtdcLargeVolumeType	PreOpenInterest;
	///½ñ¿ªÅÌ
	TThostFtdcPriceType	OpenPrice;
	///×î¸ß¼Û
	TThostFtdcPriceType	HighestPrice;
	///×îµÍ¼Û
	TThostFtdcPriceType	LowestPrice;
	///ÊýÁ¿
	TThostFtdcVolumeType	Volume;
	///³É½»½ð¶î
	TThostFtdcMoneyType	Turnover;
	///³Ö²ÖÁ¿
	TThostFtdcLargeVolumeType	OpenInterest;
	///½ñÊÕÅÌ
	TThostFtdcPriceType	ClosePrice;
	///±¾´Î½áËã¼Û
	TThostFtdcPriceType	SettlementPrice;
	///ÕÇÍ£°å¼Û
	TThostFtdcPriceType	UpperLimitPrice;
	///µøÍ£°å¼Û
	TThostFtdcPriceType	LowerLimitPrice;
	///×òÐéÊµ¶È
	TThostFtdcRatioType	PreDelta;
	///½ñÐéÊµ¶È
	TThostFtdcRatioType	CurrDelta;
	///×îºóÐÞ¸ÄÊ±¼ä
	TThostFtdcTimeType	UpdateTime;
	///×îºóÐÞ¸ÄºÁÃë
	TThostFtdcMillisecType	UpdateMillisec;
	///ÉêÂò¼ÛÒ»
	TThostFtdcPriceType	BidPrice1;
	///ÉêÂòÁ¿Ò»
	TThostFtdcVolumeType	BidVolume1;
	///ÉêÂô¼ÛÒ»
	TThostFtdcPriceType	AskPrice1;
	///ÉêÂôÁ¿Ò»
	TThostFtdcVolumeType	AskVolume1;
	///ÉêÂò¼Û¶þ
	TThostFtdcPriceType	BidPrice2;
	///ÉêÂòÁ¿¶þ
	TThostFtdcVolumeType	BidVolume2;
	///ÉêÂô¼Û¶þ
	TThostFtdcPriceType	AskPrice2;
	///ÉêÂôÁ¿¶þ
	TThostFtdcVolumeType	AskVolume2;
	///ÉêÂò¼ÛÈý
	TThostFtdcPriceType	BidPrice3;
	///ÉêÂòÁ¿Èý
	TThostFtdcVolumeType	BidVolume3;
	///ÉêÂô¼ÛÈý
	TThostFtdcPriceType	AskPrice3;
	///ÉêÂôÁ¿Èý
	TThostFtdcVolumeType	AskVolume3;
	///ÉêÂò¼ÛËÄ
	TThostFtdcPriceType	BidPrice4;
	///ÉêÂòÁ¿ËÄ
	TThostFtdcVolumeType	BidVolume4;
	///ÉêÂô¼ÛËÄ
	TThostFtdcPriceType	AskPrice4;
	///ÉêÂôÁ¿ËÄ
	TThostFtdcVolumeType	AskVolume4;
	///ÉêÂò¼ÛÎå
	TThostFtdcPriceType	BidPrice5;
	///ÉêÂòÁ¿Îå
	TThostFtdcVolumeType	BidVolume5;
	///ÉêÂô¼ÛÎå
	TThostFtdcPriceType	AskPrice5;
	///ÉêÂôÁ¿Îå
	TThostFtdcVolumeType	AskVolume5;
	///µ±ÈÕ¾ù¼Û
	TThostFtdcPriceType	AveragePrice;
	///ÒµÎñÈÕÆÚ
	TThostFtdcDateType	ActionDay;
	///ºÏÔ¼´úÂë
	TThostFtdcInstrumentIDType	InstrumentID;
	///ºÏÔ¼ÔÚ½»Ò×ËùµÄ´úÂë
	TThostFtdcExchangeInstIDType	ExchangeInstID;
	///ÉÏ´ø¼Û
	TThostFtdcPriceType	BandingUpperPrice;
	///ÏÂ´ø¼Û
	TThostFtdcPriceType	BandingLowerPrice;
};

///Í¶×ÊÕßºÏÔ¼½»Ò×È¨ÏÞ
struct CThostFtdcInstrumentTradingRightField
{
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldInstrumentIDType	reserve1;
	///Í¶×ÊÕß·¶Î§
	TThostFtdcInvestorRangeType	InvestorRange;
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///Í¶×ÊÕß´úÂë
	TThostFtdcInvestorIDType	InvestorID;
	///½»Ò×È¨ÏÞ
	TThostFtdcTradingRightType	TradingRight;
	///ºÏÔ¼´úÂë
	TThostFtdcInstrumentIDType	InstrumentID;
};

///¾­¼Í¹«Ë¾ÓÃ»§
struct CThostFtdcBrokerUserField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///ÓÃ»§´úÂë
	TThostFtdcUserIDType	UserID;
	///ÓÃ»§Ãû³Æ
	TThostFtdcUserNameType	UserName;
	///ÓÃ»§ÀàÐÍ
	TThostFtdcUserTypeType	UserType;
	///ÊÇ·ñ»îÔ¾
	TThostFtdcBoolType	IsActive;
	///ÊÇ·ñÊ¹ÓÃÁîÅÆ
	TThostFtdcBoolType	IsUsingOTP;
	///ÊÇ·ñÇ¿ÖÆÖÕ¶ËÈÏÖ¤
	TThostFtdcBoolType	IsAuthForce;
};

///¾­¼Í¹«Ë¾ÓÃ»§¿ÚÁî
struct CThostFtdcBrokerUserPasswordField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///ÓÃ»§´úÂë
	TThostFtdcUserIDType	UserID;
	///ÃÜÂë
	TThostFtdcPasswordType	Password;
	///ÉÏ´ÎÐÞ¸ÄÊ±¼ä
	TThostFtdcDateTimeType	LastUpdateTime;
	///ÉÏ´ÎµÇÂ½Ê±¼ä
	TThostFtdcDateTimeType	LastLoginTime;
	///ÃÜÂë¹ýÆÚÊ±¼ä
	TThostFtdcDateType	ExpireDate;
	///ÈõÃÜÂë¹ýÆÚÊ±¼ä
	TThostFtdcDateType	WeakExpireDate;
};

///¾­¼Í¹«Ë¾ÓÃ»§¹¦ÄÜÈ¨ÏÞ
struct CThostFtdcBrokerUserFunctionField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///ÓÃ»§´úÂë
	TThostFtdcUserIDType	UserID;
	///¾­¼Í¹«Ë¾¹¦ÄÜ´úÂë
	TThostFtdcBrokerFunctionCodeType	BrokerFunctionCode;
};

///½»Ò×Ëù½»Ò×Ô±±¨ÅÌ»ú
struct CThostFtdcTraderOfferField
{
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///½»Ò×Ëù½»Ò×Ô±´úÂë
	TThostFtdcTraderIDType	TraderID;
	///»áÔ±´úÂë
	TThostFtdcParticipantIDType	ParticipantID;
	///ÃÜÂë
	TThostFtdcPasswordType	Password;
	///°²×°±àºÅ
	TThostFtdcInstallIDType	InstallID;
	///±¾µØ±¨µ¥±àºÅ
	TThostFtdcOrderLocalIDType	OrderLocalID;
	///½»Ò×Ëù½»Ò×Ô±Á¬½Ó×´Ì¬
	TThostFtdcTraderConnectStatusType	TraderConnectStatus;
	///·¢³öÁ¬½ÓÇëÇóµÄÈÕÆÚ
	TThostFtdcDateType	ConnectRequestDate;
	///·¢³öÁ¬½ÓÇëÇóµÄÊ±¼ä
	TThostFtdcTimeType	ConnectRequestTime;
	///ÉÏ´Î±¨¸æÈÕÆÚ
	TThostFtdcDateType	LastReportDate;
	///ÉÏ´Î±¨¸æÊ±¼ä
	TThostFtdcTimeType	LastReportTime;
	///Íê³ÉÁ¬½ÓÈÕÆÚ
	TThostFtdcDateType	ConnectDate;
	///Íê³ÉÁ¬½ÓÊ±¼ä
	TThostFtdcTimeType	ConnectTime;
	///Æô¶¯ÈÕÆÚ
	TThostFtdcDateType	StartDate;
	///Æô¶¯Ê±¼ä
	TThostFtdcTimeType	StartTime;
	///½»Ò×ÈÕ
	TThostFtdcDateType	TradingDay;
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///±¾Ï¯Î»×î´ó³É½»±àºÅ
	TThostFtdcTradeIDType	MaxTradeID;
	///±¾Ï¯Î»×î´ó±¨µ¥±¸¿½
	TThostFtdcReturnCodeType	MaxOrderMessageReference;
	///³·µ¥Ê±Ñ¡ÔñÏ¯Î»Ëã·¨
	TThostFtdcOrderCancelAlgType	OrderCancelAlg;
};

///Í¶×ÊÕß½áËã½á¹û
struct CThostFtdcSettlementInfoField
{
	///½»Ò×ÈÕ
	TThostFtdcDateType	TradingDay;
	///½áËã±àºÅ
	TThostFtdcSettlementIDType	SettlementID;
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///Í¶×ÊÕß´úÂë
	TThostFtdcInvestorIDType	InvestorID;
	///ÐòºÅ
	TThostFtdcSequenceNoType	SequenceNo;
	///ÏûÏ¢ÕýÎÄ
	TThostFtdcContentType	Content;
	///Í¶×ÊÕßÕÊºÅ
	TThostFtdcAccountIDType	AccountID;
	///±ÒÖÖ´úÂë
	TThostFtdcCurrencyIDType	CurrencyID;
};

///ºÏÔ¼±£Ö¤½ðÂÊµ÷Õû
struct CThostFtdcInstrumentMarginRateAdjustField
{
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldInstrumentIDType	reserve1;
	///Í¶×ÊÕß·¶Î§
	TThostFtdcInvestorRangeType	InvestorRange;
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///Í¶×ÊÕß´úÂë
	TThostFtdcInvestorIDType	InvestorID;
	///Í¶»úÌ×±£±êÖ¾
	TThostFtdcHedgeFlagType	HedgeFlag;
	///¶àÍ·±£Ö¤½ðÂÊ
	TThostFtdcRatioType	LongMarginRatioByMoney;
	///¶àÍ·±£Ö¤½ð·Ñ
	TThostFtdcMoneyType	LongMarginRatioByVolume;
	///¿ÕÍ·±£Ö¤½ðÂÊ
	TThostFtdcRatioType	ShortMarginRatioByMoney;
	///¿ÕÍ·±£Ö¤½ð·Ñ
	TThostFtdcMoneyType	ShortMarginRatioByVolume;
	///ÊÇ·ñÏà¶Ô½»Ò×ËùÊÕÈ¡
	TThostFtdcBoolType	IsRelative;
	///ºÏÔ¼´úÂë
	TThostFtdcInstrumentIDType	InstrumentID;
};

///½»Ò×Ëù±£Ö¤½ðÂÊ
struct CThostFtdcExchangeMarginRateField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldInstrumentIDType	reserve1;
	///Í¶»úÌ×±£±êÖ¾
	TThostFtdcHedgeFlagType	HedgeFlag;
	///¶àÍ·±£Ö¤½ðÂÊ
	TThostFtdcRatioType	LongMarginRatioByMoney;
	///¶àÍ·±£Ö¤½ð·Ñ
	TThostFtdcMoneyType	LongMarginRatioByVolume;
	///¿ÕÍ·±£Ö¤½ðÂÊ
	TThostFtdcRatioType	ShortMarginRatioByMoney;
	///¿ÕÍ·±£Ö¤½ð·Ñ
	TThostFtdcMoneyType	ShortMarginRatioByVolume;
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///ºÏÔ¼´úÂë
	TThostFtdcInstrumentIDType	InstrumentID;
};

///½»Ò×Ëù±£Ö¤½ðÂÊµ÷Õû
struct CThostFtdcExchangeMarginRateAdjustField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldInstrumentIDType	reserve1;
	///Í¶»úÌ×±£±êÖ¾
	TThostFtdcHedgeFlagType	HedgeFlag;
	///¸úËæ½»Ò×ËùÍ¶×ÊÕß¶àÍ·±£Ö¤½ðÂÊ
	TThostFtdcRatioType	LongMarginRatioByMoney;
	///¸úËæ½»Ò×ËùÍ¶×ÊÕß¶àÍ·±£Ö¤½ð·Ñ
	TThostFtdcMoneyType	LongMarginRatioByVolume;
	///¸úËæ½»Ò×ËùÍ¶×ÊÕß¿ÕÍ·±£Ö¤½ðÂÊ
	TThostFtdcRatioType	ShortMarginRatioByMoney;
	///¸úËæ½»Ò×ËùÍ¶×ÊÕß¿ÕÍ·±£Ö¤½ð·Ñ
	TThostFtdcMoneyType	ShortMarginRatioByVolume;
	///½»Ò×Ëù¶àÍ·±£Ö¤½ðÂÊ
	TThostFtdcRatioType	ExchLongMarginRatioByMoney;
	///½»Ò×Ëù¶àÍ·±£Ö¤½ð·Ñ
	TThostFtdcMoneyType	ExchLongMarginRatioByVolume;
	///½»Ò×Ëù¿ÕÍ·±£Ö¤½ðÂÊ
	TThostFtdcRatioType	ExchShortMarginRatioByMoney;
	///½»Ò×Ëù¿ÕÍ·±£Ö¤½ð·Ñ
	TThostFtdcMoneyType	ExchShortMarginRatioByVolume;
	///²»¸úËæ½»Ò×ËùÍ¶×ÊÕß¶àÍ·±£Ö¤½ðÂÊ
	TThostFtdcRatioType	NoLongMarginRatioByMoney;
	///²»¸úËæ½»Ò×ËùÍ¶×ÊÕß¶àÍ·±£Ö¤½ð·Ñ
	TThostFtdcMoneyType	NoLongMarginRatioByVolume;
	///²»¸úËæ½»Ò×ËùÍ¶×ÊÕß¿ÕÍ·±£Ö¤½ðÂÊ
	TThostFtdcRatioType	NoShortMarginRatioByMoney;
	///²»¸úËæ½»Ò×ËùÍ¶×ÊÕß¿ÕÍ·±£Ö¤½ð·Ñ
	TThostFtdcMoneyType	NoShortMarginRatioByVolume;
	///ºÏÔ¼´úÂë
	TThostFtdcInstrumentIDType	InstrumentID;
};

///»ãÂÊ
struct CThostFtdcExchangeRateField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///Ô´±ÒÖÖ
	TThostFtdcCurrencyIDType	FromCurrencyID;
	///Ô´±ÒÖÖµ¥Î»ÊýÁ¿
	TThostFtdcCurrencyUnitType	FromCurrencyUnit;
	///Ä¿±ê±ÒÖÖ
	TThostFtdcCurrencyIDType	ToCurrencyID;
	///»ãÂÊ
	TThostFtdcExchangeRateType	ExchangeRate;
};

///½áËãÒýÓÃ
struct CThostFtdcSettlementRefField
{
	///½»Ò×ÈÕ
	TThostFtdcDateType	TradingDay;
	///½áËã±àºÅ
	TThostFtdcSettlementIDType	SettlementID;
};

///µ±Ç°Ê±¼ä
struct CThostFtdcCurrentTimeField
{
	///µ±Ç°½»Ò×ÈÕ
	TThostFtdcDateType	CurrDate;
	///µ±Ç°Ê±¼ä
	TThostFtdcTimeType	CurrTime;
	///µ±Ç°Ê±¼ä£¨ºÁÃë£©
	TThostFtdcMillisecType	CurrMillisec;
	///×ÔÈ»ÈÕÆÚ
	TThostFtdcDateType	ActionDay;
};

///Í¨Ñ¶½×¶Î
struct CThostFtdcCommPhaseField
{
	///½»Ò×ÈÕ
	TThostFtdcDateType	TradingDay;
	///Í¨Ñ¶Ê±¶Î±àºÅ
	TThostFtdcCommPhaseNoType	CommPhaseNo;
	///ÏµÍ³±àºÅ
	TThostFtdcSystemIDType	SystemID;
};

///µÇÂ¼ÐÅÏ¢
struct CThostFtdcLoginInfoField
{
	///Ç°ÖÃ±àºÅ
	TThostFtdcFrontIDType	FrontID;
	///»á»°±àºÅ
	TThostFtdcSessionIDType	SessionID;
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///ÓÃ»§´úÂë
	TThostFtdcUserIDType	UserID;
	///µÇÂ¼ÈÕÆÚ
	TThostFtdcDateType	LoginDate;
	///µÇÂ¼Ê±¼ä
	TThostFtdcTimeType	LoginTime;
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldIPAddressType	reserve1;
	///ÓÃ»§¶Ë²úÆ·ÐÅÏ¢
	TThostFtdcProductInfoType	UserProductInfo;
	///½Ó¿Ú¶Ë²úÆ·ÐÅÏ¢
	TThostFtdcProductInfoType	InterfaceProductInfo;
	///Ð­ÒéÐÅÏ¢
	TThostFtdcProtocolInfoType	ProtocolInfo;
	///ÏµÍ³Ãû³Æ
	TThostFtdcSystemNameType	SystemName;
	///ÃÜÂë,ÒÑÆúÓÃ
	TThostFtdcPasswordType	PasswordDeprecated;
	///×î´ó±¨µ¥ÒýÓÃ
	TThostFtdcOrderRefType	MaxOrderRef;
	///ÉÏÆÚËùÊ±¼ä
	TThostFtdcTimeType	SHFETime;
	///´óÉÌËùÊ±¼ä
	TThostFtdcTimeType	DCETime;
	///Ö£ÉÌËùÊ±¼ä
	TThostFtdcTimeType	CZCETime;
	///ÖÐ½ðËùÊ±¼ä
	TThostFtdcTimeType	FFEXTime;
	///MacµØÖ·
	TThostFtdcMacAddressType	MacAddress;
	///¶¯Ì¬ÃÜÂë
	TThostFtdcPasswordType	OneTimePassword;
	///ÄÜÔ´ÖÐÐÄÊ±¼ä
	TThostFtdcTimeType	INETime;
	///²éÑ¯Ê±ÊÇ·ñÐèÒªÁ÷¿Ø
	TThostFtdcBoolType	IsQryControl;
	///µÇÂ¼±¸×¢
	TThostFtdcLoginRemarkType	LoginRemark;
	///ÃÜÂë
	TThostFtdcPasswordType	Password;
	///IPµØÖ·
	TThostFtdcIPAddressType	IPAddress;
};

///µÇÂ¼ÐÅÏ¢
struct CThostFtdcLogoutAllField
{
	///Ç°ÖÃ±àºÅ
	TThostFtdcFrontIDType	FrontID;
	///»á»°±àºÅ
	TThostFtdcSessionIDType	SessionID;
	///ÏµÍ³Ãû³Æ
	TThostFtdcSystemNameType	SystemName;
};

///Ç°ÖÃ×´Ì¬
struct CThostFtdcFrontStatusField
{
	///Ç°ÖÃ±àºÅ
	TThostFtdcFrontIDType	FrontID;
	///ÉÏ´Î±¨¸æÈÕÆÚ
	TThostFtdcDateType	LastReportDate;
	///ÉÏ´Î±¨¸æÊ±¼ä
	TThostFtdcTimeType	LastReportTime;
	///ÊÇ·ñ»îÔ¾
	TThostFtdcBoolType	IsActive;
};

///ÓÃ»§¿ÚÁî±ä¸ü
struct CThostFtdcUserPasswordUpdateField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///ÓÃ»§´úÂë
	TThostFtdcUserIDType	UserID;
	///Ô­À´µÄ¿ÚÁî
	TThostFtdcPasswordType	OldPassword;
	///ÐÂµÄ¿ÚÁî
	TThostFtdcPasswordType	NewPassword;
};

///ÊäÈë±¨µ¥
struct CThostFtdcInputOrderField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///Í¶×ÊÕß´úÂë
	TThostFtdcInvestorIDType	InvestorID;
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldInstrumentIDType	reserve1;
	///±¨µ¥ÒýÓÃ
	TThostFtdcOrderRefType	OrderRef;
	///ÓÃ»§´úÂë
	TThostFtdcUserIDType	UserID;
	///±¨µ¥¼Û¸ñÌõ¼þ
	TThostFtdcOrderPriceTypeType	OrderPriceType;
	///ÂòÂô·½Ïò
	TThostFtdcDirectionType	Direction;
	///×éºÏ¿ªÆ½±êÖ¾
	TThostFtdcCombOffsetFlagType	CombOffsetFlag;
	///×éºÏÍ¶»úÌ×±£±êÖ¾
	TThostFtdcCombHedgeFlagType	CombHedgeFlag;
	///¼Û¸ñ
	TThostFtdcPriceType	LimitPrice;
	///ÊýÁ¿
	TThostFtdcVolumeType	VolumeTotalOriginal;
	///ÓÐÐ§ÆÚÀàÐÍ
	TThostFtdcTimeConditionType	TimeCondition;
	///GTDÈÕÆÚ
	TThostFtdcDateType	GTDDate;
	///³É½»Á¿ÀàÐÍ
	TThostFtdcVolumeConditionType	VolumeCondition;
	///×îÐ¡³É½»Á¿
	TThostFtdcVolumeType	MinVolume;
	///´¥·¢Ìõ¼þ
	TThostFtdcContingentConditionType	ContingentCondition;
	///Ö¹Ëð¼Û
	TThostFtdcPriceType	StopPrice;
	///Ç¿Æ½Ô­Òò
	TThostFtdcForceCloseReasonType	ForceCloseReason;
	///×Ô¶¯¹ÒÆð±êÖ¾
	TThostFtdcBoolType	IsAutoSuspend;
	///ÒµÎñµ¥Ôª
	TThostFtdcBusinessUnitType	BusinessUnit;
	///ÇëÇó±àºÅ
	TThostFtdcRequestIDType	RequestID;
	///ÓÃ»§Ç¿Æ½±êÖ¾
	TThostFtdcBoolType	UserForceClose;
	///»¥»»µ¥±êÖ¾
	TThostFtdcBoolType	IsSwapOrder;
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///Í¶×Êµ¥Ôª´úÂë
	TThostFtdcInvestUnitIDType	InvestUnitID;
	///×Ê½ðÕËºÅ
	TThostFtdcAccountIDType	AccountID;
	///±ÒÖÖ´úÂë
	TThostFtdcCurrencyIDType	CurrencyID;
	///½»Ò×±àÂë
	TThostFtdcClientIDType	ClientID;
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldIPAddressType	reserve2;
	///MacµØÖ·
	TThostFtdcMacAddressType	MacAddress;
	///ºÏÔ¼´úÂë
	TThostFtdcInstrumentIDType	InstrumentID;
	///IPµØÖ·
	TThostFtdcIPAddressType	IPAddress;
	///±¨µ¥»ØÏÔ×Ö¶Î
	TThostFtdcOrderMemoType	OrderMemo;
	///sessionÉÏÇëÇó¼ÆÊý api×Ô¶¯Î¬»¤
	TThostFtdcSequenceNo12Type	SessionReqSeq;
};

///±¨µ¥
struct CThostFtdcOrderField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///Í¶×ÊÕß´úÂë
	TThostFtdcInvestorIDType	InvestorID;
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldInstrumentIDType	reserve1;
	///±¨µ¥ÒýÓÃ
	TThostFtdcOrderRefType	OrderRef;
	///ÓÃ»§´úÂë
	TThostFtdcUserIDType	UserID;
	///±¨µ¥¼Û¸ñÌõ¼þ
	TThostFtdcOrderPriceTypeType	OrderPriceType;
	///ÂòÂô·½Ïò
	TThostFtdcDirectionType	Direction;
	///×éºÏ¿ªÆ½±êÖ¾
	TThostFtdcCombOffsetFlagType	CombOffsetFlag;
	///×éºÏÍ¶»úÌ×±£±êÖ¾
	TThostFtdcCombHedgeFlagType	CombHedgeFlag;
	///¼Û¸ñ
	TThostFtdcPriceType	LimitPrice;
	///ÊýÁ¿
	TThostFtdcVolumeType	VolumeTotalOriginal;
	///ÓÐÐ§ÆÚÀàÐÍ
	TThostFtdcTimeConditionType	TimeCondition;
	///GTDÈÕÆÚ
	TThostFtdcDateType	GTDDate;
	///³É½»Á¿ÀàÐÍ
	TThostFtdcVolumeConditionType	VolumeCondition;
	///×îÐ¡³É½»Á¿
	TThostFtdcVolumeType	MinVolume;
	///´¥·¢Ìõ¼þ
	TThostFtdcContingentConditionType	ContingentCondition;
	///Ö¹Ëð¼Û
	TThostFtdcPriceType	StopPrice;
	///Ç¿Æ½Ô­Òò
	TThostFtdcForceCloseReasonType	ForceCloseReason;
	///×Ô¶¯¹ÒÆð±êÖ¾
	TThostFtdcBoolType	IsAutoSuspend;
	///ÒµÎñµ¥Ôª
	TThostFtdcBusinessUnitType	BusinessUnit;
	///ÇëÇó±àºÅ
	TThostFtdcRequestIDType	RequestID;
	///±¾µØ±¨µ¥±àºÅ
	TThostFtdcOrderLocalIDType	OrderLocalID;
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///»áÔ±´úÂë
	TThostFtdcParticipantIDType	ParticipantID;
	///¿Í»§´úÂë
	TThostFtdcClientIDType	ClientID;
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldExchangeInstIDType	reserve2;
	///½»Ò×Ëù½»Ò×Ô±´úÂë
	TThostFtdcTraderIDType	TraderID;
	///°²×°±àºÅ
	TThostFtdcInstallIDType	InstallID;
	///±¨µ¥Ìá½»×´Ì¬
	TThostFtdcOrderSubmitStatusType	OrderSubmitStatus;
	///±¨µ¥ÌáÊ¾ÐòºÅ
	TThostFtdcSequenceNoType	NotifySequence;
	///½»Ò×ÈÕ
	TThostFtdcDateType	TradingDay;
	///½áËã±àºÅ
	TThostFtdcSettlementIDType	SettlementID;
	///±¨µ¥±àºÅ
	TThostFtdcOrderSysIDType	OrderSysID;
	///±¨µ¥À´Ô´
	TThostFtdcOrderSourceType	OrderSource;
	///±¨µ¥×´Ì¬
	TThostFtdcOrderStatusType	OrderStatus;
	///±¨µ¥ÀàÐÍ
	TThostFtdcOrderTypeType	OrderType;
	///½ñ³É½»ÊýÁ¿
	TThostFtdcVolumeType	VolumeTraded;
	///Ê£ÓàÊýÁ¿
	TThostFtdcVolumeType	VolumeTotal;
	///±¨µ¥ÈÕÆÚ
	TThostFtdcDateType	InsertDate;
	///Î¯ÍÐÊ±¼ä
	TThostFtdcTimeType	InsertTime;
	///¼¤»îÊ±¼ä
	TThostFtdcTimeType	ActiveTime;
	///¹ÒÆðÊ±¼ä
	TThostFtdcTimeType	SuspendTime;
	///×îºóÐÞ¸ÄÊ±¼ä
	TThostFtdcTimeType	UpdateTime;
	///³·ÏúÊ±¼ä
	TThostFtdcTimeType	CancelTime;
	///×îºóÐÞ¸Ä½»Ò×Ëù½»Ò×Ô±´úÂë
	TThostFtdcTraderIDType	ActiveTraderID;
	///½áËã»áÔ±±àºÅ
	TThostFtdcParticipantIDType	ClearingPartID;
	///ÐòºÅ
	TThostFtdcSequenceNoType	SequenceNo;
	///Ç°ÖÃ±àºÅ
	TThostFtdcFrontIDType	FrontID;
	///»á»°±àºÅ
	TThostFtdcSessionIDType	SessionID;
	///ÓÃ»§¶Ë²úÆ·ÐÅÏ¢
	TThostFtdcProductInfoType	UserProductInfo;
	///×´Ì¬ÐÅÏ¢
	TThostFtdcErrorMsgType	StatusMsg;
	///ÓÃ»§Ç¿Æ½±êÖ¾
	TThostFtdcBoolType	UserForceClose;
	///²Ù×÷ÓÃ»§´úÂë
	TThostFtdcUserIDType	ActiveUserID;
	///¾­¼Í¹«Ë¾±¨µ¥±àºÅ
	TThostFtdcSequenceNoType	BrokerOrderSeq;
	///Ïà¹Ø±¨µ¥
	TThostFtdcOrderSysIDType	RelativeOrderSysID;
	///Ö£ÉÌËù³É½»ÊýÁ¿
	TThostFtdcVolumeType	ZCETotalTradedVolume;
	///»¥»»µ¥±êÖ¾
	TThostFtdcBoolType	IsSwapOrder;
	///ÓªÒµ²¿±àºÅ
	TThostFtdcBranchIDType	BranchID;
	///Í¶×Êµ¥Ôª´úÂë
	TThostFtdcInvestUnitIDType	InvestUnitID;
	///×Ê½ðÕËºÅ
	TThostFtdcAccountIDType	AccountID;
	///±ÒÖÖ´úÂë
	TThostFtdcCurrencyIDType	CurrencyID;
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldIPAddressType	reserve3;
	///MacµØÖ·
	TThostFtdcMacAddressType	MacAddress;
	///ºÏÔ¼´úÂë
	TThostFtdcInstrumentIDType	InstrumentID;
	///ºÏÔ¼ÔÚ½»Ò×ËùµÄ´úÂë
	TThostFtdcExchangeInstIDType	ExchangeInstID;
	///IPµØÖ·
	TThostFtdcIPAddressType	IPAddress;
	///±¨µ¥»ØÏÔ×Ö¶Î
	TThostFtdcOrderMemoType	OrderMemo;
	///sessionÉÏÇëÇó¼ÆÊý api×Ô¶¯Î¬»¤
	TThostFtdcSequenceNo12Type	SessionReqSeq;
};

///½»Ò×Ëù±¨µ¥
struct CThostFtdcExchangeOrderField
{
	///±¨µ¥¼Û¸ñÌõ¼þ
	TThostFtdcOrderPriceTypeType	OrderPriceType;
	///ÂòÂô·½Ïò
	TThostFtdcDirectionType	Direction;
	///×éºÏ¿ªÆ½±êÖ¾
	TThostFtdcCombOffsetFlagType	CombOffsetFlag;
	///×éºÏÍ¶»úÌ×±£±êÖ¾
	TThostFtdcCombHedgeFlagType	CombHedgeFlag;
	///¼Û¸ñ
	TThostFtdcPriceType	LimitPrice;
	///ÊýÁ¿
	TThostFtdcVolumeType	VolumeTotalOriginal;
	///ÓÐÐ§ÆÚÀàÐÍ
	TThostFtdcTimeConditionType	TimeCondition;
	///GTDÈÕÆÚ
	TThostFtdcDateType	GTDDate;
	///³É½»Á¿ÀàÐÍ
	TThostFtdcVolumeConditionType	VolumeCondition;
	///×îÐ¡³É½»Á¿
	TThostFtdcVolumeType	MinVolume;
	///´¥·¢Ìõ¼þ
	TThostFtdcContingentConditionType	ContingentCondition;
	///Ö¹Ëð¼Û
	TThostFtdcPriceType	StopPrice;
	///Ç¿Æ½Ô­Òò
	TThostFtdcForceCloseReasonType	ForceCloseReason;
	///×Ô¶¯¹ÒÆð±êÖ¾
	TThostFtdcBoolType	IsAutoSuspend;
	///ÒµÎñµ¥Ôª
	TThostFtdcBusinessUnitType	BusinessUnit;
	///ÇëÇó±àºÅ
	TThostFtdcRequestIDType	RequestID;
	///±¾µØ±¨µ¥±àºÅ
	TThostFtdcOrderLocalIDType	OrderLocalID;
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///»áÔ±´úÂë
	TThostFtdcParticipantIDType	ParticipantID;
	///¿Í»§´úÂë
	TThostFtdcClientIDType	ClientID;
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldExchangeInstIDType	reserve1;
	///½»Ò×Ëù½»Ò×Ô±´úÂë
	TThostFtdcTraderIDType	TraderID;
	///°²×°±àºÅ
	TThostFtdcInstallIDType	InstallID;
	///±¨µ¥Ìá½»×´Ì¬
	TThostFtdcOrderSubmitStatusType	OrderSubmitStatus;
	///±¨µ¥ÌáÊ¾ÐòºÅ
	TThostFtdcSequenceNoType	NotifySequence;
	///½»Ò×ÈÕ
	TThostFtdcDateType	TradingDay;
	///½áËã±àºÅ
	TThostFtdcSettlementIDType	SettlementID;
	///±¨µ¥±àºÅ
	TThostFtdcOrderSysIDType	OrderSysID;
	///±¨µ¥À´Ô´
	TThostFtdcOrderSourceType	OrderSource;
	///±¨µ¥×´Ì¬
	TThostFtdcOrderStatusType	OrderStatus;
	///±¨µ¥ÀàÐÍ
	TThostFtdcOrderTypeType	OrderType;
	///½ñ³É½»ÊýÁ¿
	TThostFtdcVolumeType	VolumeTraded;
	///Ê£ÓàÊýÁ¿
	TThostFtdcVolumeType	VolumeTotal;
	///±¨µ¥ÈÕÆÚ
	TThostFtdcDateType	InsertDate;
	///Î¯ÍÐÊ±¼ä
	TThostFtdcTimeType	InsertTime;
	///¼¤»îÊ±¼ä
	TThostFtdcTimeType	ActiveTime;
	///¹ÒÆðÊ±¼ä
	TThostFtdcTimeType	SuspendTime;
	///×îºóÐÞ¸ÄÊ±¼ä
	TThostFtdcTimeType	UpdateTime;
	///³·ÏúÊ±¼ä
	TThostFtdcTimeType	CancelTime;
	///×îºóÐÞ¸Ä½»Ò×Ëù½»Ò×Ô±´úÂë
	TThostFtdcTraderIDType	ActiveTraderID;
	///½áËã»áÔ±±àºÅ
	TThostFtdcParticipantIDType	ClearingPartID;
	///ÐòºÅ
	TThostFtdcSequenceNoType	SequenceNo;
	///ÓªÒµ²¿±àºÅ
	TThostFtdcBranchIDType	BranchID;
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldIPAddressType	reserve2;
	///MacµØÖ·
	TThostFtdcMacAddressType	MacAddress;
	///ºÏÔ¼ÔÚ½»Ò×ËùµÄ´úÂë
	TThostFtdcExchangeInstIDType	ExchangeInstID;
	///IPµØÖ·
	TThostFtdcIPAddressType	IPAddress;
};

///½»Ò×Ëù±¨µ¥²åÈëÊ§°Ü
struct CThostFtdcExchangeOrderInsertErrorField
{
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///»áÔ±´úÂë
	TThostFtdcParticipantIDType	ParticipantID;
	///½»Ò×Ëù½»Ò×Ô±´úÂë
	TThostFtdcTraderIDType	TraderID;
	///°²×°±àºÅ
	TThostFtdcInstallIDType	InstallID;
	///±¾µØ±¨µ¥±àºÅ
	TThostFtdcOrderLocalIDType	OrderLocalID;
	///´íÎó´úÂë
	TThostFtdcErrorIDType	ErrorID;
	///´íÎóÐÅÏ¢
	TThostFtdcErrorMsgType	ErrorMsg;
};

///ÊäÈë±¨µ¥²Ù×÷
struct CThostFtdcInputOrderActionField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///Í¶×ÊÕß´úÂë
	TThostFtdcInvestorIDType	InvestorID;
	///±¨µ¥²Ù×÷ÒýÓÃ
	TThostFtdcOrderActionRefType	OrderActionRef;
	///±¨µ¥ÒýÓÃ
	TThostFtdcOrderRefType	OrderRef;
	///ÇëÇó±àºÅ
	TThostFtdcRequestIDType	RequestID;
	///Ç°ÖÃ±àºÅ
	TThostFtdcFrontIDType	FrontID;
	///»á»°±àºÅ
	TThostFtdcSessionIDType	SessionID;
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///±¨µ¥±àºÅ
	TThostFtdcOrderSysIDType	OrderSysID;
	///²Ù×÷±êÖ¾
	TThostFtdcActionFlagType	ActionFlag;
	///¼Û¸ñ
	TThostFtdcPriceType	LimitPrice;
	///ÊýÁ¿±ä»¯
	TThostFtdcVolumeType	VolumeChange;
	///ÓÃ»§´úÂë
	TThostFtdcUserIDType	UserID;
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldInstrumentIDType	reserve1;
	///Í¶×Êµ¥Ôª´úÂë
	TThostFtdcInvestUnitIDType	InvestUnitID;
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldIPAddressType	reserve2;
	///MacµØÖ·
	TThostFtdcMacAddressType	MacAddress;
	///ºÏÔ¼´úÂë
	TThostFtdcInstrumentIDType	InstrumentID;
	///IPµØÖ·
	TThostFtdcIPAddressType	IPAddress;
	///±¨µ¥»ØÏÔ×Ö¶Î
	TThostFtdcOrderMemoType	OrderMemo;
	///sessionÉÏÇëÇó¼ÆÊý api×Ô¶¯Î¬»¤
	TThostFtdcSequenceNo12Type	SessionReqSeq;
};

///±¨µ¥²Ù×÷
struct CThostFtdcOrderActionField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///Í¶×ÊÕß´úÂë
	TThostFtdcInvestorIDType	InvestorID;
	///±¨µ¥²Ù×÷ÒýÓÃ
	TThostFtdcOrderActionRefType	OrderActionRef;
	///±¨µ¥ÒýÓÃ
	TThostFtdcOrderRefType	OrderRef;
	///ÇëÇó±àºÅ
	TThostFtdcRequestIDType	RequestID;
	///Ç°ÖÃ±àºÅ
	TThostFtdcFrontIDType	FrontID;
	///»á»°±àºÅ
	TThostFtdcSessionIDType	SessionID;
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///±¨µ¥±àºÅ
	TThostFtdcOrderSysIDType	OrderSysID;
	///²Ù×÷±êÖ¾
	TThostFtdcActionFlagType	ActionFlag;
	///¼Û¸ñ
	TThostFtdcPriceType	LimitPrice;
	///ÊýÁ¿±ä»¯
	TThostFtdcVolumeType	VolumeChange;
	///²Ù×÷ÈÕÆÚ
	TThostFtdcDateType	ActionDate;
	///²Ù×÷Ê±¼ä
	TThostFtdcTimeType	ActionTime;
	///½»Ò×Ëù½»Ò×Ô±´úÂë
	TThostFtdcTraderIDType	TraderID;
	///°²×°±àºÅ
	TThostFtdcInstallIDType	InstallID;
	///±¾µØ±¨µ¥±àºÅ
	TThostFtdcOrderLocalIDType	OrderLocalID;
	///²Ù×÷±¾µØ±àºÅ
	TThostFtdcOrderLocalIDType	ActionLocalID;
	///»áÔ±´úÂë
	TThostFtdcParticipantIDType	ParticipantID;
	///¿Í»§´úÂë
	TThostFtdcClientIDType	ClientID;
	///ÒµÎñµ¥Ôª
	TThostFtdcBusinessUnitType	BusinessUnit;
	///±¨µ¥²Ù×÷×´Ì¬
	TThostFtdcOrderActionStatusType	OrderActionStatus;
	///ÓÃ»§´úÂë
	TThostFtdcUserIDType	UserID;
	///×´Ì¬ÐÅÏ¢
	TThostFtdcErrorMsgType	StatusMsg;
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldInstrumentIDType	reserve1;
	///ÓªÒµ²¿±àºÅ
	TThostFtdcBranchIDType	BranchID;
	///Í¶×Êµ¥Ôª´úÂë
	TThostFtdcInvestUnitIDType	InvestUnitID;
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldIPAddressType	reserve2;
	///MacµØÖ·
	TThostFtdcMacAddressType	MacAddress;
	///ºÏÔ¼´úÂë
	TThostFtdcInstrumentIDType	InstrumentID;
	///IPµØÖ·
	TThostFtdcIPAddressType	IPAddress;
	///±¨µ¥»ØÏÔ×Ö¶Î
	TThostFtdcOrderMemoType	OrderMemo;
	///sessionÉÏÇëÇó¼ÆÊý api×Ô¶¯Î¬»¤
	TThostFtdcSequenceNo12Type	SessionReqSeq;
};

///½»Ò×Ëù±¨µ¥²Ù×÷
struct CThostFtdcExchangeOrderActionField
{
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///±¨µ¥±àºÅ
	TThostFtdcOrderSysIDType	OrderSysID;
	///²Ù×÷±êÖ¾
	TThostFtdcActionFlagType	ActionFlag;
	///¼Û¸ñ
	TThostFtdcPriceType	LimitPrice;
	///ÊýÁ¿±ä»¯
	TThostFtdcVolumeType	VolumeChange;
	///²Ù×÷ÈÕÆÚ
	TThostFtdcDateType	ActionDate;
	///²Ù×÷Ê±¼ä
	TThostFtdcTimeType	ActionTime;
	///½»Ò×Ëù½»Ò×Ô±´úÂë
	TThostFtdcTraderIDType	TraderID;
	///°²×°±àºÅ
	TThostFtdcInstallIDType	InstallID;
	///±¾µØ±¨µ¥±àºÅ
	TThostFtdcOrderLocalIDType	OrderLocalID;
	///²Ù×÷±¾µØ±àºÅ
	TThostFtdcOrderLocalIDType	ActionLocalID;
	///»áÔ±´úÂë
	TThostFtdcParticipantIDType	ParticipantID;
	///¿Í»§´úÂë
	TThostFtdcClientIDType	ClientID;
	///ÒµÎñµ¥Ôª
	TThostFtdcBusinessUnitType	BusinessUnit;
	///±¨µ¥²Ù×÷×´Ì¬
	TThostFtdcOrderActionStatusType	OrderActionStatus;
	///ÓÃ»§´úÂë
	TThostFtdcUserIDType	UserID;
	///ÓªÒµ²¿±àºÅ
	TThostFtdcBranchIDType	BranchID;
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldIPAddressType	reserve1;
	///MacµØÖ·
	TThostFtdcMacAddressType	MacAddress;
	///IPµØÖ·
	TThostFtdcIPAddressType	IPAddress;
};

///½»Ò×Ëù±¨µ¥²Ù×÷Ê§°Ü
struct CThostFtdcExchangeOrderActionErrorField
{
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///±¨µ¥±àºÅ
	TThostFtdcOrderSysIDType	OrderSysID;
	///½»Ò×Ëù½»Ò×Ô±´úÂë
	TThostFtdcTraderIDType	TraderID;
	///°²×°±àºÅ
	TThostFtdcInstallIDType	InstallID;
	///±¾µØ±¨µ¥±àºÅ
	TThostFtdcOrderLocalIDType	OrderLocalID;
	///²Ù×÷±¾µØ±àºÅ
	TThostFtdcOrderLocalIDType	ActionLocalID;
	///´íÎó´úÂë
	TThostFtdcErrorIDType	ErrorID;
	///´íÎóÐÅÏ¢
	TThostFtdcErrorMsgType	ErrorMsg;
};

///½»Ò×Ëù³É½»
struct CThostFtdcExchangeTradeField
{
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///³É½»±àºÅ
	TThostFtdcTradeIDType	TradeID;
	///ÂòÂô·½Ïò
	TThostFtdcDirectionType	Direction;
	///±¨µ¥±àºÅ
	TThostFtdcOrderSysIDType	OrderSysID;
	///»áÔ±´úÂë
	TThostFtdcParticipantIDType	ParticipantID;
	///¿Í»§´úÂë
	TThostFtdcClientIDType	ClientID;
	///½»Ò×½ÇÉ«
	TThostFtdcTradingRoleType	TradingRole;
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldExchangeInstIDType	reserve1;
	///¿ªÆ½±êÖ¾
	TThostFtdcOffsetFlagType	OffsetFlag;
	///Í¶»úÌ×±£±êÖ¾
	TThostFtdcHedgeFlagType	HedgeFlag;
	///¼Û¸ñ
	TThostFtdcPriceType	Price;
	///ÊýÁ¿
	TThostFtdcVolumeType	Volume;
	///³É½»Ê±ÆÚ
	TThostFtdcDateType	TradeDate;
	///³É½»Ê±¼ä
	TThostFtdcTimeType	TradeTime;
	///³É½»ÀàÐÍ
	TThostFtdcTradeTypeType	TradeType;
	///³É½»¼ÛÀ´Ô´
	TThostFtdcPriceSourceType	PriceSource;
	///½»Ò×Ëù½»Ò×Ô±´úÂë
	TThostFtdcTraderIDType	TraderID;
	///±¾µØ±¨µ¥±àºÅ
	TThostFtdcOrderLocalIDType	OrderLocalID;
	///½áËã»áÔ±±àºÅ
	TThostFtdcParticipantIDType	ClearingPartID;
	///ÒµÎñµ¥Ôª
	TThostFtdcBusinessUnitType	BusinessUnit;
	///ÐòºÅ
	TThostFtdcSequenceNoType	SequenceNo;
	///³É½»À´Ô´
	TThostFtdcTradeSourceType	TradeSource;
	///ºÏÔ¼ÔÚ½»Ò×ËùµÄ´úÂë
	TThostFtdcExchangeInstIDType	ExchangeInstID;
};

///³É½»
struct CThostFtdcTradeField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///Í¶×ÊÕß´úÂë
	TThostFtdcInvestorIDType	InvestorID;
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldInstrumentIDType	reserve1;
	///±¨µ¥ÒýÓÃ
	TThostFtdcOrderRefType	OrderRef;
	///ÓÃ»§´úÂë
	TThostFtdcUserIDType	UserID;
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///³É½»±àºÅ
	TThostFtdcTradeIDType	TradeID;
	///ÂòÂô·½Ïò
	TThostFtdcDirectionType	Direction;
	///±¨µ¥±àºÅ
	TThostFtdcOrderSysIDType	OrderSysID;
	///»áÔ±´úÂë
	TThostFtdcParticipantIDType	ParticipantID;
	///¿Í»§´úÂë
	TThostFtdcClientIDType	ClientID;
	///½»Ò×½ÇÉ«
	TThostFtdcTradingRoleType	TradingRole;
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldExchangeInstIDType	reserve2;
	///¿ªÆ½±êÖ¾
	TThostFtdcOffsetFlagType	OffsetFlag;
	///Í¶»úÌ×±£±êÖ¾
	TThostFtdcHedgeFlagType	HedgeFlag;
	///¼Û¸ñ
	TThostFtdcPriceType	Price;
	///ÊýÁ¿
	TThostFtdcVolumeType	Volume;
	///³É½»Ê±ÆÚ
	TThostFtdcDateType	TradeDate;
	///³É½»Ê±¼ä
	TThostFtdcTimeType	TradeTime;
	///³É½»ÀàÐÍ
	TThostFtdcTradeTypeType	TradeType;
	///³É½»¼ÛÀ´Ô´
	TThostFtdcPriceSourceType	PriceSource;
	///½»Ò×Ëù½»Ò×Ô±´úÂë
	TThostFtdcTraderIDType	TraderID;
	///±¾µØ±¨µ¥±àºÅ
	TThostFtdcOrderLocalIDType	OrderLocalID;
	///½áËã»áÔ±±àºÅ
	TThostFtdcParticipantIDType	ClearingPartID;
	///ÒµÎñµ¥Ôª
	TThostFtdcBusinessUnitType	BusinessUnit;
	///ÐòºÅ
	TThostFtdcSequenceNoType	SequenceNo;
	///½»Ò×ÈÕ
	TThostFtdcDateType	TradingDay;
	///½áËã±àºÅ
	TThostFtdcSettlementIDType	SettlementID;
	///¾­¼Í¹«Ë¾±¨µ¥±àºÅ
	TThostFtdcSequenceNoType	BrokerOrderSeq;
	///³É½»À´Ô´
	TThostFtdcTradeSourceType	TradeSource;
	///Í¶×Êµ¥Ôª´úÂë
	TThostFtdcInvestUnitIDType	InvestUnitID;
	///ºÏÔ¼´úÂë
	TThostFtdcInstrumentIDType	InstrumentID;
	///ºÏÔ¼ÔÚ½»Ò×ËùµÄ´úÂë
	TThostFtdcExchangeInstIDType	ExchangeInstID;
};

///ÓÃ»§»á»°
struct CThostFtdcUserSessionField
{
	///Ç°ÖÃ±àºÅ
	TThostFtdcFrontIDType	FrontID;
	///»á»°±àºÅ
	TThostFtdcSessionIDType	SessionID;
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///ÓÃ»§´úÂë
	TThostFtdcUserIDType	UserID;
	///µÇÂ¼ÈÕÆÚ
	TThostFtdcDateType	LoginDate;
	///µÇÂ¼Ê±¼ä
	TThostFtdcTimeType	LoginTime;
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldIPAddressType	reserve1;
	///ÓÃ»§¶Ë²úÆ·ÐÅÏ¢
	TThostFtdcProductInfoType	UserProductInfo;
	///½Ó¿Ú¶Ë²úÆ·ÐÅÏ¢
	TThostFtdcProductInfoType	InterfaceProductInfo;
	///Ð­ÒéÐÅÏ¢
	TThostFtdcProtocolInfoType	ProtocolInfo;
	///MacµØÖ·
	TThostFtdcMacAddressType	MacAddress;
	///µÇÂ¼±¸×¢
	TThostFtdcLoginRemarkType	LoginRemark;
	///IPµØÖ·
	TThostFtdcIPAddressType	IPAddress;
};

///²éÑ¯×î´ó±¨µ¥ÊýÁ¿
struct CThostFtdcQryMaxOrderVolumeField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///Í¶×ÊÕß´úÂë
	TThostFtdcInvestorIDType	InvestorID;
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldInstrumentIDType	reserve1;
	///ÂòÂô·½Ïò
	TThostFtdcDirectionType	Direction;
	///¿ªÆ½±êÖ¾
	TThostFtdcOffsetFlagType	OffsetFlag;
	///Í¶»úÌ×±£±êÖ¾
	TThostFtdcHedgeFlagType	HedgeFlag;
	///×î´óÔÊÐí±¨µ¥ÊýÁ¿
	TThostFtdcVolumeType	MaxVolume;
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///Í¶×Êµ¥Ôª´úÂë
	TThostFtdcInvestUnitIDType	InvestUnitID;
	///ºÏÔ¼´úÂë
	TThostFtdcInstrumentIDType	InstrumentID;
};

///Í¶×ÊÕß½áËã½á¹ûÈ·ÈÏÐÅÏ¢
struct CThostFtdcSettlementInfoConfirmField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///Í¶×ÊÕß´úÂë
	TThostFtdcInvestorIDType	InvestorID;
	///È·ÈÏÈÕÆÚ
	TThostFtdcDateType	ConfirmDate;
	///È·ÈÏÊ±¼ä
	TThostFtdcTimeType	ConfirmTime;
	///½áËã±àºÅ
	TThostFtdcSettlementIDType	SettlementID;
	///Í¶×ÊÕßÕÊºÅ
	TThostFtdcAccountIDType	AccountID;
	///±ÒÖÖ´úÂë
	TThostFtdcCurrencyIDType	CurrencyID;
};

///³öÈë½ðÍ¬²½
struct CThostFtdcSyncDepositField
{
	///³öÈë½ðÁ÷Ë®ºÅ
	TThostFtdcDepositSeqNoType	DepositSeqNo;
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///Í¶×ÊÕß´úÂë
	TThostFtdcInvestorIDType	InvestorID;
	///Èë½ð½ð¶î
	TThostFtdcMoneyType	Deposit;
	///ÊÇ·ñÇ¿ÖÆ½øÐÐ
	TThostFtdcBoolType	IsForce;
	///±ÒÖÖ´úÂë
	TThostFtdcCurrencyIDType	CurrencyID;
	///ÊÇ·ñÊÇ¸ö¹ÉÆÚÈ¨ÄÚ×ª
	TThostFtdcBoolType	IsFromSopt;
	///×Ê½ðÃÜÂë
	TThostFtdcPasswordType	TradingPassword;
	///ÊÇ·ñ¶þ¼¶´úÀíÉÌµÄÄÚ×ª
	TThostFtdcBoolType	IsSecAgentTranfer;
};

///»õ±ÒÖÊÑºÍ¬²½
struct CThostFtdcSyncFundMortgageField
{
	///»õ±ÒÖÊÑºÁ÷Ë®ºÅ
	TThostFtdcDepositSeqNoType	MortgageSeqNo;
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///Í¶×ÊÕß´úÂë
	TThostFtdcInvestorIDType	InvestorID;
	///Ô´±ÒÖÖ
	TThostFtdcCurrencyIDType	FromCurrencyID;
	///ÖÊÑº½ð¶î
	TThostFtdcMoneyType	MortgageAmount;
	///Ä¿±ê±ÒÖÖ
	TThostFtdcCurrencyIDType	ToCurrencyID;
};

///¾­¼Í¹«Ë¾Í¬²½
struct CThostFtdcBrokerSyncField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
};

///ÕýÔÚÍ¬²½ÖÐµÄÍ¶×ÊÕß
struct CThostFtdcSyncingInvestorField
{
	///Í¶×ÊÕß´úÂë
	TThostFtdcInvestorIDType	InvestorID;
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///Í¶×ÊÕß·Ö×é´úÂë
	TThostFtdcInvestorIDType	InvestorGroupID;
	///Í¶×ÊÕßÃû³Æ
	TThostFtdcPartyNameType	InvestorName;
	///Ö¤¼þÀàÐÍ
	TThostFtdcIdCardTypeType	IdentifiedCardType;
	///Ö¤¼þºÅÂë
	TThostFtdcIdentifiedCardNoType	IdentifiedCardNo;
	///ÊÇ·ñ»îÔ¾
	TThostFtdcBoolType	IsActive;
	///ÁªÏµµç»°
	TThostFtdcTelephoneType	Telephone;
	///Í¨Ñ¶µØÖ·
	TThostFtdcAddressType	Address;
	///¿ª»§ÈÕÆÚ
	TThostFtdcDateType	OpenDate;
	///ÊÖ»ú
	TThostFtdcMobileType	Mobile;
	///ÊÖÐø·ÑÂÊÄ£°å´úÂë
	TThostFtdcInvestorIDType	CommModelID;
	///±£Ö¤½ðÂÊÄ£°å´úÂë
	TThostFtdcInvestorIDType	MarginModelID;
	///ÊÇ·ñÆµÂÊ¿ØÖÆ
	TThostFtdcEnumBoolType	IsOrderFreq;
	///ÊÇ·ñ¿ª²ÖÏÞÖÆ
	TThostFtdcEnumBoolType	IsOpenVolLimit;
};

///ÕýÔÚÍ¬²½ÖÐµÄ½»Ò×´úÂë
struct CThostFtdcSyncingTradingCodeField
{
	///Í¶×ÊÕß´úÂë
	TThostFtdcInvestorIDType	InvestorID;
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///¿Í»§´úÂë
	TThostFtdcClientIDType	ClientID;
	///ÊÇ·ñ»îÔ¾
	TThostFtdcBoolType	IsActive;
	///½»Ò×±àÂëÀàÐÍ
	TThostFtdcClientIDTypeType	ClientIDType;
};

///ÕýÔÚÍ¬²½ÖÐµÄÍ¶×ÊÕß·Ö×é
struct CThostFtdcSyncingInvestorGroupField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///Í¶×ÊÕß·Ö×é´úÂë
	TThostFtdcInvestorIDType	InvestorGroupID;
	///Í¶×ÊÕß·Ö×éÃû³Æ
	TThostFtdcInvestorGroupNameType	InvestorGroupName;
};

///ÕýÔÚÍ¬²½ÖÐµÄ½»Ò×ÕËºÅ
struct CThostFtdcSyncingTradingAccountField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///Í¶×ÊÕßÕÊºÅ
	TThostFtdcAccountIDType	AccountID;
	///ÉÏ´ÎÖÊÑº½ð¶î
	TThostFtdcMoneyType	PreMortgage;
	///ÉÏ´ÎÐÅÓÃ¶î¶È
	TThostFtdcMoneyType	PreCredit;
	///ÉÏ´Î´æ¿î¶î
	TThostFtdcMoneyType	PreDeposit;
	///ÉÏ´Î½áËã×¼±¸½ð
	TThostFtdcMoneyType	PreBalance;
	///ÉÏ´ÎÕ¼ÓÃµÄ±£Ö¤½ð
	TThostFtdcMoneyType	PreMargin;
	///ÀûÏ¢»ùÊý
	TThostFtdcMoneyType	InterestBase;
	///ÀûÏ¢ÊÕÈë
	TThostFtdcMoneyType	Interest;
	///Èë½ð½ð¶î
	TThostFtdcMoneyType	Deposit;
	///³ö½ð½ð¶î
	TThostFtdcMoneyType	Withdraw;
	///¶³½áµÄ±£Ö¤½ð
	TThostFtdcMoneyType	FrozenMargin;
	///¶³½áµÄ×Ê½ð
	TThostFtdcMoneyType	FrozenCash;
	///¶³½áµÄÊÖÐø·Ñ
	TThostFtdcMoneyType	FrozenCommission;
	///µ±Ç°±£Ö¤½ð×Ü¶î
	TThostFtdcMoneyType	CurrMargin;
	///×Ê½ð²î¶î
	TThostFtdcMoneyType	CashIn;
	///ÊÖÐø·Ñ
	TThostFtdcMoneyType	Commission;
	///Æ½²ÖÓ¯¿÷
	TThostFtdcMoneyType	CloseProfit;
	///³Ö²ÖÓ¯¿÷
	TThostFtdcMoneyType	PositionProfit;
	///ÆÚ»õ½áËã×¼±¸½ð
	TThostFtdcMoneyType	Balance;
	///¿ÉÓÃ×Ê½ð
	TThostFtdcMoneyType	Available;
	///¿ÉÈ¡×Ê½ð
	TThostFtdcMoneyType	WithdrawQuota;
	///»ù±¾×¼±¸½ð
	TThostFtdcMoneyType	Reserve;
	///½»Ò×ÈÕ
	TThostFtdcDateType	TradingDay;
	///½áËã±àºÅ
	TThostFtdcSettlementIDType	SettlementID;
	///ÐÅÓÃ¶î¶È
	TThostFtdcMoneyType	Credit;
	///ÖÊÑº½ð¶î
	TThostFtdcMoneyType	Mortgage;
	///½»Ò×Ëù±£Ö¤½ð
	TThostFtdcMoneyType	ExchangeMargin;
	///Í¶×ÊÕß½»¸î±£Ö¤½ð
	TThostFtdcMoneyType	DeliveryMargin;
	///½»Ò×Ëù½»¸î±£Ö¤½ð
	TThostFtdcMoneyType	ExchangeDeliveryMargin;
	///±£µ×ÆÚ»õ½áËã×¼±¸½ð
	TThostFtdcMoneyType	ReserveBalance;
	///±ÒÖÖ´úÂë
	TThostFtdcCurrencyIDType	CurrencyID;
	///ÉÏ´Î»õ±ÒÖÊÈë½ð¶î
	TThostFtdcMoneyType	PreFundMortgageIn;
	///ÉÏ´Î»õ±ÒÖÊ³ö½ð¶î
	TThostFtdcMoneyType	PreFundMortgageOut;
	///»õ±ÒÖÊÈë½ð¶î
	TThostFtdcMoneyType	FundMortgageIn;
	///»õ±ÒÖÊ³ö½ð¶î
	TThostFtdcMoneyType	FundMortgageOut;
	///»õ±ÒÖÊÑºÓà¶î
	TThostFtdcMoneyType	FundMortgageAvailable;
	///¿ÉÖÊÑº»õ±Ò½ð¶î
	TThostFtdcMoneyType	MortgageableFund;
	///ÌØÊâ²úÆ·Õ¼ÓÃ±£Ö¤½ð
	TThostFtdcMoneyType	SpecProductMargin;
	///ÌØÊâ²úÆ·¶³½á±£Ö¤½ð
	TThostFtdcMoneyType	SpecProductFrozenMargin;
	///ÌØÊâ²úÆ·ÊÖÐø·Ñ
	TThostFtdcMoneyType	SpecProductCommission;
	///ÌØÊâ²úÆ·¶³½áÊÖÐø·Ñ
	TThostFtdcMoneyType	SpecProductFrozenCommission;
	///ÌØÊâ²úÆ·³Ö²ÖÓ¯¿÷
	TThostFtdcMoneyType	SpecProductPositionProfit;
	///ÌØÊâ²úÆ·Æ½²ÖÓ¯¿÷
	TThostFtdcMoneyType	SpecProductCloseProfit;
	///¸ù¾Ý³Ö²ÖÓ¯¿÷Ëã·¨¼ÆËãµÄÌØÊâ²úÆ·³Ö²ÖÓ¯¿÷
	TThostFtdcMoneyType	SpecProductPositionProfitByAlg;
	///ÌØÊâ²úÆ·½»Ò×Ëù±£Ö¤½ð
	TThostFtdcMoneyType	SpecProductExchangeMargin;
	///ÑÓÊ±»»»ã¶³½á½ð¶î
	TThostFtdcMoneyType	FrozenSwap;
	///Ê£Óà»»»ã¶î¶È
	TThostFtdcMoneyType	RemainSwap;
	///ÆÚÈ¨ÊÐÖµ
	TThostFtdcMoneyType	OptionValue;
};

///ÕýÔÚÍ¬²½ÖÐµÄÍ¶×ÊÕß³Ö²Ö
struct CThostFtdcSyncingInvestorPositionField
{
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldInstrumentIDType	reserve1;
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///Í¶×ÊÕß´úÂë
	TThostFtdcInvestorIDType	InvestorID;
	///³Ö²Ö¶à¿Õ·½Ïò
	TThostFtdcPosiDirectionType	PosiDirection;
	///Í¶»úÌ×±£±êÖ¾
	TThostFtdcHedgeFlagType	HedgeFlag;
	///³Ö²ÖÈÕÆÚ
	TThostFtdcPositionDateType	PositionDate;
	///ÉÏÈÕ³Ö²Ö
	TThostFtdcVolumeType	YdPosition;
	///½ñÈÕ³Ö²Ö
	TThostFtdcVolumeType	Position;
	///¶àÍ·¶³½á
	TThostFtdcVolumeType	LongFrozen;
	///¿ÕÍ·¶³½á
	TThostFtdcVolumeType	ShortFrozen;
	///¿ª²Ö¶³½á½ð¶î
	TThostFtdcMoneyType	LongFrozenAmount;
	///¿ª²Ö¶³½á½ð¶î
	TThostFtdcMoneyType	ShortFrozenAmount;
	///¿ª²ÖÁ¿
	TThostFtdcVolumeType	OpenVolume;
	///Æ½²ÖÁ¿
	TThostFtdcVolumeType	CloseVolume;
	///¿ª²Ö½ð¶î
	TThostFtdcMoneyType	OpenAmount;
	///Æ½²Ö½ð¶î
	TThostFtdcMoneyType	CloseAmount;
	///³Ö²Ö³É±¾
	TThostFtdcMoneyType	PositionCost;
	///ÉÏ´ÎÕ¼ÓÃµÄ±£Ö¤½ð
	TThostFtdcMoneyType	PreMargin;
	///Õ¼ÓÃµÄ±£Ö¤½ð
	TThostFtdcMoneyType	UseMargin;
	///¶³½áµÄ±£Ö¤½ð
	TThostFtdcMoneyType	FrozenMargin;
	///¶³½áµÄ×Ê½ð
	TThostFtdcMoneyType	FrozenCash;
	///¶³½áµÄÊÖÐø·Ñ
	TThostFtdcMoneyType	FrozenCommission;
	///×Ê½ð²î¶î
	TThostFtdcMoneyType	CashIn;
	///ÊÖÐø·Ñ
	TThostFtdcMoneyType	Commission;
	///Æ½²ÖÓ¯¿÷
	TThostFtdcMoneyType	CloseProfit;
	///³Ö²ÖÓ¯¿÷
	TThostFtdcMoneyType	PositionProfit;
	///ÉÏ´Î½áËã¼Û
	TThostFtdcPriceType	PreSettlementPrice;
	///±¾´Î½áËã¼Û
	TThostFtdcPriceType	SettlementPrice;
	///½»Ò×ÈÕ
	TThostFtdcDateType	TradingDay;
	///½áËã±àºÅ
	TThostFtdcSettlementIDType	SettlementID;
	///¿ª²Ö³É±¾
	TThostFtdcMoneyType	OpenCost;
	///½»Ò×Ëù±£Ö¤½ð
	TThostFtdcMoneyType	ExchangeMargin;
	///×éºÏ³É½»ÐÎ³ÉµÄ³Ö²Ö
	TThostFtdcVolumeType	CombPosition;
	///×éºÏ¶àÍ·¶³½á
	TThostFtdcVolumeType	CombLongFrozen;
	///×éºÏ¿ÕÍ·¶³½á
	TThostFtdcVolumeType	CombShortFrozen;
	///ÖðÈÕ¶¢ÊÐÆ½²ÖÓ¯¿÷
	TThostFtdcMoneyType	CloseProfitByDate;
	///Öð±Ê¶Ô³åÆ½²ÖÓ¯¿÷
	TThostFtdcMoneyType	CloseProfitByTrade;
	///½ñÈÕ³Ö²Ö
	TThostFtdcVolumeType	TodayPosition;
	///±£Ö¤½ðÂÊ
	TThostFtdcRatioType	MarginRateByMoney;
	///±£Ö¤½ðÂÊ(°´ÊÖÊý)
	TThostFtdcRatioType	MarginRateByVolume;
	///Ö´ÐÐ¶³½á
	TThostFtdcVolumeType	StrikeFrozen;
	///Ö´ÐÐ¶³½á½ð¶î
	TThostFtdcMoneyType	StrikeFrozenAmount;
	///·ÅÆúÖ´ÐÐ¶³½á
	TThostFtdcVolumeType	AbandonFrozen;
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///Ö´ÐÐ¶³½áµÄ×ò²Ö
	TThostFtdcVolumeType	YdStrikeFrozen;
	///Í¶×Êµ¥Ôª´úÂë
	TThostFtdcInvestUnitIDType	InvestUnitID;
	///³Ö²Ö³É±¾²îÖµ
	TThostFtdcMoneyType	PositionCostOffset;
	///tas³Ö²ÖÊÖÊý
	TThostFtdcVolumeType	TasPosition;
	///tas³Ö²Ö³É±¾
	TThostFtdcMoneyType	TasPositionCost;
	///ºÏÔ¼´úÂë
	TThostFtdcInstrumentIDType	InstrumentID;
};

///ÕýÔÚÍ¬²½ÖÐµÄºÏÔ¼±£Ö¤½ðÂÊ
struct CThostFtdcSyncingInstrumentMarginRateField
{
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldInstrumentIDType	reserve1;
	///Í¶×ÊÕß·¶Î§
	TThostFtdcInvestorRangeType	InvestorRange;
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///Í¶×ÊÕß´úÂë
	TThostFtdcInvestorIDType	InvestorID;
	///Í¶»úÌ×±£±êÖ¾
	TThostFtdcHedgeFlagType	HedgeFlag;
	///¶àÍ·±£Ö¤½ðÂÊ
	TThostFtdcRatioType	LongMarginRatioByMoney;
	///¶àÍ·±£Ö¤½ð·Ñ
	TThostFtdcMoneyType	LongMarginRatioByVolume;
	///¿ÕÍ·±£Ö¤½ðÂÊ
	TThostFtdcRatioType	ShortMarginRatioByMoney;
	///¿ÕÍ·±£Ö¤½ð·Ñ
	TThostFtdcMoneyType	ShortMarginRatioByVolume;
	///ÊÇ·ñÏà¶Ô½»Ò×ËùÊÕÈ¡
	TThostFtdcBoolType	IsRelative;
	///ºÏÔ¼´úÂë
	TThostFtdcInstrumentIDType	InstrumentID;
};

///ÕýÔÚÍ¬²½ÖÐµÄºÏÔ¼ÊÖÐø·ÑÂÊ
struct CThostFtdcSyncingInstrumentCommissionRateField
{
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldInstrumentIDType	reserve1;
	///Í¶×ÊÕß·¶Î§
	TThostFtdcInvestorRangeType	InvestorRange;
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///Í¶×ÊÕß´úÂë
	TThostFtdcInvestorIDType	InvestorID;
	///¿ª²ÖÊÖÐø·ÑÂÊ
	TThostFtdcRatioType	OpenRatioByMoney;
	///¿ª²ÖÊÖÐø·Ñ
	TThostFtdcRatioType	OpenRatioByVolume;
	///Æ½²ÖÊÖÐø·ÑÂÊ
	TThostFtdcRatioType	CloseRatioByMoney;
	///Æ½²ÖÊÖÐø·Ñ
	TThostFtdcRatioType	CloseRatioByVolume;
	///Æ½½ñÊÖÐø·ÑÂÊ
	TThostFtdcRatioType	CloseTodayRatioByMoney;
	///Æ½½ñÊÖÐø·Ñ
	TThostFtdcRatioType	CloseTodayRatioByVolume;
	///ºÏÔ¼´úÂë
	TThostFtdcInstrumentIDType	InstrumentID;
};

///ÕýÔÚÍ¬²½ÖÐµÄºÏÔ¼½»Ò×È¨ÏÞ
struct CThostFtdcSyncingInstrumentTradingRightField
{
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldInstrumentIDType	reserve1;
	///Í¶×ÊÕß·¶Î§
	TThostFtdcInvestorRangeType	InvestorRange;
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///Í¶×ÊÕß´úÂë
	TThostFtdcInvestorIDType	InvestorID;
	///½»Ò×È¨ÏÞ
	TThostFtdcTradingRightType	TradingRight;
	///ºÏÔ¼´úÂë
	TThostFtdcInstrumentIDType	InstrumentID;
};

///²éÑ¯±¨µ¥
struct CThostFtdcQryOrderField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///Í¶×ÊÕß´úÂë
	TThostFtdcInvestorIDType	InvestorID;
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldInstrumentIDType	reserve1;
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///±¨µ¥±àºÅ
	TThostFtdcOrderSysIDType	OrderSysID;
	///¿ªÊ¼Ê±¼ä
	TThostFtdcTimeType	InsertTimeStart;
	///½áÊøÊ±¼ä
	TThostFtdcTimeType	InsertTimeEnd;
	///Í¶×Êµ¥Ôª´úÂë
	TThostFtdcInvestUnitIDType	InvestUnitID;
	///ºÏÔ¼´úÂë
	TThostFtdcInstrumentIDType	InstrumentID;
};

///²éÑ¯³É½»
struct CThostFtdcQryTradeField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///Í¶×ÊÕß´úÂë
	TThostFtdcInvestorIDType	InvestorID;
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldInstrumentIDType	reserve1;
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///³É½»±àºÅ
	TThostFtdcTradeIDType	TradeID;
	///¿ªÊ¼Ê±¼ä
	TThostFtdcTimeType	TradeTimeStart;
	///½áÊøÊ±¼ä
	TThostFtdcTimeType	TradeTimeEnd;
	///Í¶×Êµ¥Ôª´úÂë
	TThostFtdcInvestUnitIDType	InvestUnitID;
	///ºÏÔ¼´úÂë
	TThostFtdcInstrumentIDType	InstrumentID;
};

///²éÑ¯Í¶×ÊÕß³Ö²Ö
struct CThostFtdcQryInvestorPositionField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///Í¶×ÊÕß´úÂë
	TThostFtdcInvestorIDType	InvestorID;
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldInstrumentIDType	reserve1;
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///Í¶×Êµ¥Ôª´úÂë
	TThostFtdcInvestUnitIDType	InvestUnitID;
	///ºÏÔ¼´úÂë
	TThostFtdcInstrumentIDType	InstrumentID;
};

///²éÑ¯×Ê½ðÕË»§
struct CThostFtdcQryTradingAccountField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///Í¶×ÊÕß´úÂë
	TThostFtdcInvestorIDType	InvestorID;
	///±ÒÖÖ´úÂë
	TThostFtdcCurrencyIDType	CurrencyID;
	///ÒµÎñÀàÐÍ
	TThostFtdcBizTypeType	BizType;
	///Í¶×ÊÕßÕÊºÅ
	TThostFtdcAccountIDType	AccountID;
};

///²éÑ¯Í¶×ÊÕß
struct CThostFtdcQryInvestorField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///Í¶×ÊÕß´úÂë
	TThostFtdcInvestorIDType	InvestorID;
};

///²éÑ¯½»Ò×±àÂë
struct CThostFtdcQryTradingCodeField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///Í¶×ÊÕß´úÂë
	TThostFtdcInvestorIDType	InvestorID;
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///¿Í»§´úÂë
	TThostFtdcClientIDType	ClientID;
	///½»Ò×±àÂëÀàÐÍ
	TThostFtdcClientIDTypeType	ClientIDType;
	///Í¶×Êµ¥Ôª´úÂë
	TThostFtdcInvestUnitIDType	InvestUnitID;
};

///²éÑ¯Í¶×ÊÕß×é
struct CThostFtdcQryInvestorGroupField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
};

///²éÑ¯ºÏÔ¼±£Ö¤½ðÂÊ
struct CThostFtdcQryInstrumentMarginRateField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///Í¶×ÊÕß´úÂë
	TThostFtdcInvestorIDType	InvestorID;
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldInstrumentIDType	reserve1;
	///Í¶»úÌ×±£±êÖ¾
	TThostFtdcHedgeFlagType	HedgeFlag;
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///Í¶×Êµ¥Ôª´úÂë
	TThostFtdcInvestUnitIDType	InvestUnitID;
	///ºÏÔ¼´úÂë
	TThostFtdcInstrumentIDType	InstrumentID;
};

///²éÑ¯ÊÖÐø·ÑÂÊ
struct CThostFtdcQryInstrumentCommissionRateField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///Í¶×ÊÕß´úÂë
	TThostFtdcInvestorIDType	InvestorID;
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldInstrumentIDType	reserve1;
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///Í¶×Êµ¥Ôª´úÂë
	TThostFtdcInvestUnitIDType	InvestUnitID;
	///ºÏÔ¼´úÂë
	TThostFtdcInstrumentIDType	InstrumentID;
};

///²éÑ¯ºÏÔ¼½»Ò×È¨ÏÞ
struct CThostFtdcQryInstrumentTradingRightField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///Í¶×ÊÕß´úÂë
	TThostFtdcInvestorIDType	InvestorID;
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldInstrumentIDType	reserve1;
	///ºÏÔ¼´úÂë
	TThostFtdcInstrumentIDType	InstrumentID;
};

///²éÑ¯¾­¼Í¹«Ë¾
struct CThostFtdcQryBrokerField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
};

///²éÑ¯½»Ò×Ô±
struct CThostFtdcQryTraderField
{
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///»áÔ±´úÂë
	TThostFtdcParticipantIDType	ParticipantID;
	///½»Ò×Ëù½»Ò×Ô±´úÂë
	TThostFtdcTraderIDType	TraderID;
};

///²éÑ¯¹ÜÀíÓÃ»§¹¦ÄÜÈ¨ÏÞ
struct CThostFtdcQrySuperUserFunctionField
{
	///ÓÃ»§´úÂë
	TThostFtdcUserIDType	UserID;
};

///²éÑ¯ÓÃ»§»á»°
struct CThostFtdcQryUserSessionField
{
	///Ç°ÖÃ±àºÅ
	TThostFtdcFrontIDType	FrontID;
	///»á»°±àºÅ
	TThostFtdcSessionIDType	SessionID;
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///ÓÃ»§´úÂë
	TThostFtdcUserIDType	UserID;
};

///²éÑ¯¾­¼Í¹«Ë¾»áÔ±´úÂë
struct CThostFtdcQryPartBrokerField
{
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///»áÔ±´úÂë
	TThostFtdcParticipantIDType	ParticipantID;
};

///²éÑ¯Ç°ÖÃ×´Ì¬
struct CThostFtdcQryFrontStatusField
{
	///Ç°ÖÃ±àºÅ
	TThostFtdcFrontIDType	FrontID;
};

///²éÑ¯½»Ò×Ëù±¨µ¥
struct CThostFtdcQryExchangeOrderField
{
	///»áÔ±´úÂë
	TThostFtdcParticipantIDType	ParticipantID;
	///¿Í»§´úÂë
	TThostFtdcClientIDType	ClientID;
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldExchangeInstIDType	reserve1;
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///½»Ò×Ëù½»Ò×Ô±´úÂë
	TThostFtdcTraderIDType	TraderID;
	///ºÏÔ¼ÔÚ½»Ò×ËùµÄ´úÂë
	TThostFtdcExchangeInstIDType	ExchangeInstID;
};

///²éÑ¯±¨µ¥²Ù×÷
struct CThostFtdcQryOrderActionField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///Í¶×ÊÕß´úÂë
	TThostFtdcInvestorIDType	InvestorID;
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
};

///²éÑ¯½»Ò×Ëù±¨µ¥²Ù×÷
struct CThostFtdcQryExchangeOrderActionField
{
	///»áÔ±´úÂë
	TThostFtdcParticipantIDType	ParticipantID;
	///¿Í»§´úÂë
	TThostFtdcClientIDType	ClientID;
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///½»Ò×Ëù½»Ò×Ô±´úÂë
	TThostFtdcTraderIDType	TraderID;
};

///²éÑ¯¹ÜÀíÓÃ»§
struct CThostFtdcQrySuperUserField
{
	///ÓÃ»§´úÂë
	TThostFtdcUserIDType	UserID;
};

///²éÑ¯½»Ò×Ëù
struct CThostFtdcQryExchangeField
{
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
};

///²éÑ¯²úÆ·
struct CThostFtdcQryProductField
{
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldInstrumentIDType	reserve1;
	///²úÆ·ÀàÐÍ
	TThostFtdcProductClassType	ProductClass;
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///²úÆ·´úÂë
	TThostFtdcInstrumentIDType	ProductID;
};

///²éÑ¯ºÏÔ¼
struct CThostFtdcQryInstrumentField
{
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldInstrumentIDType	reserve1;
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldExchangeInstIDType	reserve2;
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldInstrumentIDType	reserve3;
	///ºÏÔ¼´úÂë
	TThostFtdcInstrumentIDType	InstrumentID;
	///ºÏÔ¼ÔÚ½»Ò×ËùµÄ´úÂë
	TThostFtdcExchangeInstIDType	ExchangeInstID;
	///²úÆ·´úÂë
	TThostFtdcInstrumentIDType	ProductID;
};

///²éÑ¯ÐÐÇé
struct CThostFtdcQryDepthMarketDataField
{
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldInstrumentIDType	reserve1;
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///ºÏÔ¼´úÂë
	TThostFtdcInstrumentIDType	InstrumentID;
	///²úÆ·ÀàÐÍ
	TThostFtdcProductClassType	ProductClass;
};

///²éÑ¯¾­¼Í¹«Ë¾ÓÃ»§
struct CThostFtdcQryBrokerUserField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///ÓÃ»§´úÂë
	TThostFtdcUserIDType	UserID;
};

///²éÑ¯¾­¼Í¹«Ë¾ÓÃ»§È¨ÏÞ
struct CThostFtdcQryBrokerUserFunctionField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///ÓÃ»§´úÂë
	TThostFtdcUserIDType	UserID;
};

///²éÑ¯½»Ò×Ô±±¨ÅÌ»ú
struct CThostFtdcQryTraderOfferField
{
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///»áÔ±´úÂë
	TThostFtdcParticipantIDType	ParticipantID;
	///½»Ò×Ëù½»Ò×Ô±´úÂë
	TThostFtdcTraderIDType	TraderID;
};

///²éÑ¯³öÈë½ðÁ÷Ë®
struct CThostFtdcQrySyncDepositField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///³öÈë½ðÁ÷Ë®ºÅ
	TThostFtdcDepositSeqNoType	DepositSeqNo;
};

///²éÑ¯Í¶×ÊÕß½áËã½á¹û
struct CThostFtdcQrySettlementInfoField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///Í¶×ÊÕß´úÂë
	TThostFtdcInvestorIDType	InvestorID;
	///½»Ò×ÈÕ
	TThostFtdcDateType	TradingDay;
	///Í¶×ÊÕßÕÊºÅ
	TThostFtdcAccountIDType	AccountID;
	///±ÒÖÖ´úÂë
	TThostFtdcCurrencyIDType	CurrencyID;
};

///²éÑ¯½»Ò×Ëù±£Ö¤½ðÂÊ
struct CThostFtdcQryExchangeMarginRateField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldInstrumentIDType	reserve1;
	///Í¶»úÌ×±£±êÖ¾
	TThostFtdcHedgeFlagType	HedgeFlag;
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///ºÏÔ¼´úÂë
	TThostFtdcInstrumentIDType	InstrumentID;
};

///²éÑ¯½»Ò×Ëùµ÷Õû±£Ö¤½ðÂÊ
struct CThostFtdcQryExchangeMarginRateAdjustField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldInstrumentIDType	reserve1;
	///Í¶»úÌ×±£±êÖ¾
	TThostFtdcHedgeFlagType	HedgeFlag;
	///ºÏÔ¼´úÂë
	TThostFtdcInstrumentIDType	InstrumentID;
};

///²éÑ¯»ãÂÊ
struct CThostFtdcQryExchangeRateField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///Ô´±ÒÖÖ
	TThostFtdcCurrencyIDType	FromCurrencyID;
	///Ä¿±ê±ÒÖÖ
	TThostFtdcCurrencyIDType	ToCurrencyID;
};

///²éÑ¯»õ±ÒÖÊÑºÁ÷Ë®
struct CThostFtdcQrySyncFundMortgageField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///»õ±ÒÖÊÑºÁ÷Ë®ºÅ
	TThostFtdcDepositSeqNoType	MortgageSeqNo;
};

///²éÑ¯±¨µ¥
struct CThostFtdcQryHisOrderField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///Í¶×ÊÕß´úÂë
	TThostFtdcInvestorIDType	InvestorID;
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldInstrumentIDType	reserve1;
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///±¨µ¥±àºÅ
	TThostFtdcOrderSysIDType	OrderSysID;
	///¿ªÊ¼Ê±¼ä
	TThostFtdcTimeType	InsertTimeStart;
	///½áÊøÊ±¼ä
	TThostFtdcTimeType	InsertTimeEnd;
	///½»Ò×ÈÕ
	TThostFtdcDateType	TradingDay;
	///½áËã±àºÅ
	TThostFtdcSettlementIDType	SettlementID;
	///ºÏÔ¼´úÂë
	TThostFtdcInstrumentIDType	InstrumentID;
};

///µ±Ç°ÆÚÈ¨ºÏÔ¼×îÐ¡±£Ö¤½ð
struct CThostFtdcOptionInstrMiniMarginField
{
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldInstrumentIDType	reserve1;
	///Í¶×ÊÕß·¶Î§
	TThostFtdcInvestorRangeType	InvestorRange;
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///Í¶×ÊÕß´úÂë
	TThostFtdcInvestorIDType	InvestorID;
	///µ¥Î»£¨ÊÖ£©ÆÚÈ¨ºÏÔ¼×îÐ¡±£Ö¤½ð
	TThostFtdcMoneyType	MinMargin;
	///È¡Öµ·½Ê½
	TThostFtdcValueMethodType	ValueMethod;
	///ÊÇ·ñ¸úËæ½»Ò×ËùÊÕÈ¡
	TThostFtdcBoolType	IsRelative;
	///ºÏÔ¼´úÂë
	TThostFtdcInstrumentIDType	InstrumentID;
};

///µ±Ç°ÆÚÈ¨ºÏÔ¼±£Ö¤½ðµ÷ÕûÏµÊý
struct CThostFtdcOptionInstrMarginAdjustField
{
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldInstrumentIDType	reserve1;
	///Í¶×ÊÕß·¶Î§
	TThostFtdcInvestorRangeType	InvestorRange;
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///Í¶×ÊÕß´úÂë
	TThostFtdcInvestorIDType	InvestorID;
	///Í¶»ú¿ÕÍ·±£Ö¤½ðµ÷ÕûÏµÊý
	TThostFtdcRatioType	SShortMarginRatioByMoney;
	///Í¶»ú¿ÕÍ·±£Ö¤½ðµ÷ÕûÏµÊý
	TThostFtdcMoneyType	SShortMarginRatioByVolume;
	///±£Öµ¿ÕÍ·±£Ö¤½ðµ÷ÕûÏµÊý
	TThostFtdcRatioType	HShortMarginRatioByMoney;
	///±£Öµ¿ÕÍ·±£Ö¤½ðµ÷ÕûÏµÊý
	TThostFtdcMoneyType	HShortMarginRatioByVolume;
	///Ì×Àû¿ÕÍ·±£Ö¤½ðµ÷ÕûÏµÊý
	TThostFtdcRatioType	AShortMarginRatioByMoney;
	///Ì×Àû¿ÕÍ·±£Ö¤½ðµ÷ÕûÏµÊý
	TThostFtdcMoneyType	AShortMarginRatioByVolume;
	///ÊÇ·ñ¸úËæ½»Ò×ËùÊÕÈ¡
	TThostFtdcBoolType	IsRelative;
	///×öÊÐÉÌ¿ÕÍ·±£Ö¤½ðµ÷ÕûÏµÊý
	TThostFtdcRatioType	MShortMarginRatioByMoney;
	///×öÊÐÉÌ¿ÕÍ·±£Ö¤½ðµ÷ÕûÏµÊý
	TThostFtdcMoneyType	MShortMarginRatioByVolume;
	///ºÏÔ¼´úÂë
	TThostFtdcInstrumentIDType	InstrumentID;
};

///µ±Ç°ÆÚÈ¨ºÏÔ¼ÊÖÐø·ÑµÄÏêÏ¸ÄÚÈÝ
struct CThostFtdcOptionInstrCommRateField
{
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldInstrumentIDType	reserve1;
	///Í¶×ÊÕß·¶Î§
	TThostFtdcInvestorRangeType	InvestorRange;
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///Í¶×ÊÕß´úÂë
	TThostFtdcInvestorIDType	InvestorID;
	///¿ª²ÖÊÖÐø·ÑÂÊ
	TThostFtdcRatioType	OpenRatioByMoney;
	///¿ª²ÖÊÖÐø·Ñ
	TThostFtdcRatioType	OpenRatioByVolume;
	///Æ½²ÖÊÖÐø·ÑÂÊ
	TThostFtdcRatioType	CloseRatioByMoney;
	///Æ½²ÖÊÖÐø·Ñ
	TThostFtdcRatioType	CloseRatioByVolume;
	///Æ½½ñÊÖÐø·ÑÂÊ
	TThostFtdcRatioType	CloseTodayRatioByMoney;
	///Æ½½ñÊÖÐø·Ñ
	TThostFtdcRatioType	CloseTodayRatioByVolume;
	///Ö´ÐÐÊÖÐø·ÑÂÊ
	TThostFtdcRatioType	StrikeRatioByMoney;
	///Ö´ÐÐÊÖÐø·Ñ
	TThostFtdcRatioType	StrikeRatioByVolume;
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///Í¶×Êµ¥Ôª´úÂë
	TThostFtdcInvestUnitIDType	InvestUnitID;
	///ºÏÔ¼´úÂë
	TThostFtdcInstrumentIDType	InstrumentID;
};

///ÆÚÈ¨½»Ò×³É±¾
struct CThostFtdcOptionInstrTradeCostField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///Í¶×ÊÕß´úÂë
	TThostFtdcInvestorIDType	InvestorID;
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldInstrumentIDType	reserve1;
	///Í¶»úÌ×±£±êÖ¾
	TThostFtdcHedgeFlagType	HedgeFlag;
	///ÆÚÈ¨ºÏÔ¼±£Ö¤½ð²»±ä²¿·Ö
	TThostFtdcMoneyType	FixedMargin;
	///ÆÚÈ¨ºÏÔ¼×îÐ¡±£Ö¤½ð
	TThostFtdcMoneyType	MiniMargin;
	///ÆÚÈ¨ºÏÔ¼È¨Àû½ð
	TThostFtdcMoneyType	Royalty;
	///½»Ò×ËùÆÚÈ¨ºÏÔ¼±£Ö¤½ð²»±ä²¿·Ö
	TThostFtdcMoneyType	ExchFixedMargin;
	///½»Ò×ËùÆÚÈ¨ºÏÔ¼×îÐ¡±£Ö¤½ð
	TThostFtdcMoneyType	ExchMiniMargin;
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///Í¶×Êµ¥Ôª´úÂë
	TThostFtdcInvestUnitIDType	InvestUnitID;
	///ºÏÔ¼´úÂë
	TThostFtdcInstrumentIDType	InstrumentID;
};

///ÆÚÈ¨½»Ò×³É±¾²éÑ¯
struct CThostFtdcQryOptionInstrTradeCostField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///Í¶×ÊÕß´úÂë
	TThostFtdcInvestorIDType	InvestorID;
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldInstrumentIDType	reserve1;
	///Í¶»úÌ×±£±êÖ¾
	TThostFtdcHedgeFlagType	HedgeFlag;
	///ÆÚÈ¨ºÏÔ¼±¨¼Û
	TThostFtdcPriceType	InputPrice;
	///±êµÄ¼Û¸ñ,Ìî0ÔòÓÃ×ò½áËã¼Û
	TThostFtdcPriceType	UnderlyingPrice;
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///Í¶×Êµ¥Ôª´úÂë
	TThostFtdcInvestUnitIDType	InvestUnitID;
	///ºÏÔ¼´úÂë
	TThostFtdcInstrumentIDType	InstrumentID;
};

///ÆÚÈ¨ÊÖÐø·ÑÂÊ²éÑ¯
struct CThostFtdcQryOptionInstrCommRateField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///Í¶×ÊÕß´úÂë
	TThostFtdcInvestorIDType	InvestorID;
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldInstrumentIDType	reserve1;
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///Í¶×Êµ¥Ôª´úÂë
	TThostFtdcInvestUnitIDType	InvestUnitID;
	///ºÏÔ¼´úÂë
	TThostFtdcInstrumentIDType	InstrumentID;
};

///¹ÉÖ¸ÏÖ»õÖ¸Êý
struct CThostFtdcIndexPriceField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldInstrumentIDType	reserve1;
	///Ö¸ÊýÏÖ»õÊÕÅÌ¼Û
	TThostFtdcPriceType	ClosePrice;
	///ºÏÔ¼´úÂë
	TThostFtdcInstrumentIDType	InstrumentID;
};

///ÊäÈëµÄÖ´ÐÐÐû¸æ
struct CThostFtdcInputExecOrderField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///Í¶×ÊÕß´úÂë
	TThostFtdcInvestorIDType	InvestorID;
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldInstrumentIDType	reserve1;
	///Ö´ÐÐÐû¸æÒýÓÃ
	TThostFtdcOrderRefType	ExecOrderRef;
	///ÓÃ»§´úÂë
	TThostFtdcUserIDType	UserID;
	///ÊýÁ¿
	TThostFtdcVolumeType	Volume;
	///ÇëÇó±àºÅ
	TThostFtdcRequestIDType	RequestID;
	///ÒµÎñµ¥Ôª
	TThostFtdcBusinessUnitType	BusinessUnit;
	///¿ªÆ½±êÖ¾
	TThostFtdcOffsetFlagType	OffsetFlag;
	///Í¶»úÌ×±£±êÖ¾
	TThostFtdcHedgeFlagType	HedgeFlag;
	///Ö´ÐÐÀàÐÍ
	TThostFtdcActionTypeType	ActionType;
	///±£ÁôÍ·´çÉêÇëµÄ³Ö²Ö·½Ïò
	TThostFtdcPosiDirectionType	PosiDirection;
	///ÆÚÈ¨ÐÐÈ¨ºóÊÇ·ñ±£ÁôÆÚ»õÍ·´çµÄ±ê¼Ç,¸Ã×Ö¶ÎÒÑ·ÏÆú
	TThostFtdcExecOrderPositionFlagType	ReservePositionFlag;
	///ÆÚÈ¨ÐÐÈ¨ºóÉú³ÉµÄÍ·´çÊÇ·ñ×Ô¶¯Æ½²Ö
	TThostFtdcExecOrderCloseFlagType	CloseFlag;
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///Í¶×Êµ¥Ôª´úÂë
	TThostFtdcInvestUnitIDType	InvestUnitID;
	///×Ê½ðÕËºÅ
	TThostFtdcAccountIDType	AccountID;
	///±ÒÖÖ´úÂë
	TThostFtdcCurrencyIDType	CurrencyID;
	///½»Ò×±àÂë
	TThostFtdcClientIDType	ClientID;
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldIPAddressType	reserve2;
	///MacµØÖ·
	TThostFtdcMacAddressType	MacAddress;
	///ºÏÔ¼´úÂë
	TThostFtdcInstrumentIDType	InstrumentID;
	///IPµØÖ·
	TThostFtdcIPAddressType	IPAddress;
};

///ÊäÈëÖ´ÐÐÐû¸æ²Ù×÷
struct CThostFtdcInputExecOrderActionField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///Í¶×ÊÕß´úÂë
	TThostFtdcInvestorIDType	InvestorID;
	///Ö´ÐÐÐû¸æ²Ù×÷ÒýÓÃ
	TThostFtdcOrderActionRefType	ExecOrderActionRef;
	///Ö´ÐÐÐû¸æÒýÓÃ
	TThostFtdcOrderRefType	ExecOrderRef;
	///ÇëÇó±àºÅ
	TThostFtdcRequestIDType	RequestID;
	///Ç°ÖÃ±àºÅ
	TThostFtdcFrontIDType	FrontID;
	///»á»°±àºÅ
	TThostFtdcSessionIDType	SessionID;
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///Ö´ÐÐÐû¸æ²Ù×÷±àºÅ
	TThostFtdcExecOrderSysIDType	ExecOrderSysID;
	///²Ù×÷±êÖ¾
	TThostFtdcActionFlagType	ActionFlag;
	///ÓÃ»§´úÂë
	TThostFtdcUserIDType	UserID;
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldInstrumentIDType	reserve1;
	///Í¶×Êµ¥Ôª´úÂë
	TThostFtdcInvestUnitIDType	InvestUnitID;
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldIPAddressType	reserve2;
	///MacµØÖ·
	TThostFtdcMacAddressType	MacAddress;
	///ºÏÔ¼´úÂë
	TThostFtdcInstrumentIDType	InstrumentID;
	///IPµØÖ·
	TThostFtdcIPAddressType	IPAddress;
};

///Ö´ÐÐÐû¸æ
struct CThostFtdcExecOrderField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///Í¶×ÊÕß´úÂë
	TThostFtdcInvestorIDType	InvestorID;
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldInstrumentIDType	reserve1;
	///Ö´ÐÐÐû¸æÒýÓÃ
	TThostFtdcOrderRefType	ExecOrderRef;
	///ÓÃ»§´úÂë
	TThostFtdcUserIDType	UserID;
	///ÊýÁ¿
	TThostFtdcVolumeType	Volume;
	///ÇëÇó±àºÅ
	TThostFtdcRequestIDType	RequestID;
	///ÒµÎñµ¥Ôª
	TThostFtdcBusinessUnitType	BusinessUnit;
	///¿ªÆ½±êÖ¾
	TThostFtdcOffsetFlagType	OffsetFlag;
	///Í¶»úÌ×±£±êÖ¾
	TThostFtdcHedgeFlagType	HedgeFlag;
	///Ö´ÐÐÀàÐÍ
	TThostFtdcActionTypeType	ActionType;
	///±£ÁôÍ·´çÉêÇëµÄ³Ö²Ö·½Ïò
	TThostFtdcPosiDirectionType	PosiDirection;
	///ÆÚÈ¨ÐÐÈ¨ºóÊÇ·ñ±£ÁôÆÚ»õÍ·´çµÄ±ê¼Ç,¸Ã×Ö¶ÎÒÑ·ÏÆú
	TThostFtdcExecOrderPositionFlagType	ReservePositionFlag;
	///ÆÚÈ¨ÐÐÈ¨ºóÉú³ÉµÄÍ·´çÊÇ·ñ×Ô¶¯Æ½²Ö
	TThostFtdcExecOrderCloseFlagType	CloseFlag;
	///±¾µØÖ´ÐÐÐû¸æ±àºÅ
	TThostFtdcOrderLocalIDType	ExecOrderLocalID;
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///»áÔ±´úÂë
	TThostFtdcParticipantIDType	ParticipantID;
	///¿Í»§´úÂë
	TThostFtdcClientIDType	ClientID;
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldExchangeInstIDType	reserve2;
	///½»Ò×Ëù½»Ò×Ô±´úÂë
	TThostFtdcTraderIDType	TraderID;
	///°²×°±àºÅ
	TThostFtdcInstallIDType	InstallID;
	///Ö´ÐÐÐû¸æÌá½»×´Ì¬
	TThostFtdcOrderSubmitStatusType	OrderSubmitStatus;
	///±¨µ¥ÌáÊ¾ÐòºÅ
	TThostFtdcSequenceNoType	NotifySequence;
	///½»Ò×ÈÕ
	TThostFtdcDateType	TradingDay;
	///½áËã±àºÅ
	TThostFtdcSettlementIDType	SettlementID;
	///Ö´ÐÐÐû¸æ±àºÅ
	TThostFtdcExecOrderSysIDType	ExecOrderSysID;
	///±¨µ¥ÈÕÆÚ
	TThostFtdcDateType	InsertDate;
	///²åÈëÊ±¼ä
	TThostFtdcTimeType	InsertTime;
	///³·ÏúÊ±¼ä
	TThostFtdcTimeType	CancelTime;
	///Ö´ÐÐ½á¹û
	TThostFtdcExecResultType	ExecResult;
	///½áËã»áÔ±±àºÅ
	TThostFtdcParticipantIDType	ClearingPartID;
	///ÐòºÅ
	TThostFtdcSequenceNoType	SequenceNo;
	///Ç°ÖÃ±àºÅ
	TThostFtdcFrontIDType	FrontID;
	///»á»°±àºÅ
	TThostFtdcSessionIDType	SessionID;
	///ÓÃ»§¶Ë²úÆ·ÐÅÏ¢
	TThostFtdcProductInfoType	UserProductInfo;
	///×´Ì¬ÐÅÏ¢
	TThostFtdcErrorMsgType	StatusMsg;
	///²Ù×÷ÓÃ»§´úÂë
	TThostFtdcUserIDType	ActiveUserID;
	///¾­¼Í¹«Ë¾±¨µ¥±àºÅ
	TThostFtdcSequenceNoType	BrokerExecOrderSeq;
	///ÓªÒµ²¿±àºÅ
	TThostFtdcBranchIDType	BranchID;
	///Í¶×Êµ¥Ôª´úÂë
	TThostFtdcInvestUnitIDType	InvestUnitID;
	///×Ê½ðÕËºÅ
	TThostFtdcAccountIDType	AccountID;
	///±ÒÖÖ´úÂë
	TThostFtdcCurrencyIDType	CurrencyID;
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldIPAddressType	reserve3;
	///MacµØÖ·
	TThostFtdcMacAddressType	MacAddress;
	///ºÏÔ¼´úÂë
	TThostFtdcInstrumentIDType	InstrumentID;
	///ºÏÔ¼ÔÚ½»Ò×ËùµÄ´úÂë
	TThostFtdcExchangeInstIDType	ExchangeInstID;
	///IPµØÖ·
	TThostFtdcIPAddressType	IPAddress;
};

///Ö´ÐÐÐû¸æ²Ù×÷
struct CThostFtdcExecOrderActionField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///Í¶×ÊÕß´úÂë
	TThostFtdcInvestorIDType	InvestorID;
	///Ö´ÐÐÐû¸æ²Ù×÷ÒýÓÃ
	TThostFtdcOrderActionRefType	ExecOrderActionRef;
	///Ö´ÐÐÐû¸æÒýÓÃ
	TThostFtdcOrderRefType	ExecOrderRef;
	///ÇëÇó±àºÅ
	TThostFtdcRequestIDType	RequestID;
	///Ç°ÖÃ±àºÅ
	TThostFtdcFrontIDType	FrontID;
	///»á»°±àºÅ
	TThostFtdcSessionIDType	SessionID;
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///Ö´ÐÐÐû¸æ²Ù×÷±àºÅ
	TThostFtdcExecOrderSysIDType	ExecOrderSysID;
	///²Ù×÷±êÖ¾
	TThostFtdcActionFlagType	ActionFlag;
	///²Ù×÷ÈÕÆÚ
	TThostFtdcDateType	ActionDate;
	///²Ù×÷Ê±¼ä
	TThostFtdcTimeType	ActionTime;
	///½»Ò×Ëù½»Ò×Ô±´úÂë
	TThostFtdcTraderIDType	TraderID;
	///°²×°±àºÅ
	TThostFtdcInstallIDType	InstallID;
	///±¾µØÖ´ÐÐÐû¸æ±àºÅ
	TThostFtdcOrderLocalIDType	ExecOrderLocalID;
	///²Ù×÷±¾µØ±àºÅ
	TThostFtdcOrderLocalIDType	ActionLocalID;
	///»áÔ±´úÂë
	TThostFtdcParticipantIDType	ParticipantID;
	///¿Í»§´úÂë
	TThostFtdcClientIDType	ClientID;
	///ÒµÎñµ¥Ôª
	TThostFtdcBusinessUnitType	BusinessUnit;
	///±¨µ¥²Ù×÷×´Ì¬
	TThostFtdcOrderActionStatusType	OrderActionStatus;
	///ÓÃ»§´úÂë
	TThostFtdcUserIDType	UserID;
	///Ö´ÐÐÀàÐÍ
	TThostFtdcActionTypeType	ActionType;
	///×´Ì¬ÐÅÏ¢
	TThostFtdcErrorMsgType	StatusMsg;
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldInstrumentIDType	reserve1;
	///ÓªÒµ²¿±àºÅ
	TThostFtdcBranchIDType	BranchID;
	///Í¶×Êµ¥Ôª´úÂë
	TThostFtdcInvestUnitIDType	InvestUnitID;
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldIPAddressType	reserve2;
	///MacµØÖ·
	TThostFtdcMacAddressType	MacAddress;
	///ºÏÔ¼´úÂë
	TThostFtdcInstrumentIDType	InstrumentID;
	///IPµØÖ·
	TThostFtdcIPAddressType	IPAddress;
};

///Ö´ÐÐÐû¸æ²éÑ¯
struct CThostFtdcQryExecOrderField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///Í¶×ÊÕß´úÂë
	TThostFtdcInvestorIDType	InvestorID;
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldInstrumentIDType	reserve1;
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///Ö´ÐÐÐû¸æ±àºÅ
	TThostFtdcExecOrderSysIDType	ExecOrderSysID;
	///¿ªÊ¼Ê±¼ä
	TThostFtdcTimeType	InsertTimeStart;
	///½áÊøÊ±¼ä
	TThostFtdcTimeType	InsertTimeEnd;
	///ºÏÔ¼´úÂë
	TThostFtdcInstrumentIDType	InstrumentID;
};

///½»Ò×ËùÖ´ÐÐÐû¸æÐÅÏ¢
struct CThostFtdcExchangeExecOrderField
{
	///ÊýÁ¿
	TThostFtdcVolumeType	Volume;
	///ÇëÇó±àºÅ
	TThostFtdcRequestIDType	RequestID;
	///ÒµÎñµ¥Ôª
	TThostFtdcBusinessUnitType	BusinessUnit;
	///¿ªÆ½±êÖ¾
	TThostFtdcOffsetFlagType	OffsetFlag;
	///Í¶»úÌ×±£±êÖ¾
	TThostFtdcHedgeFlagType	HedgeFlag;
	///Ö´ÐÐÀàÐÍ
	TThostFtdcActionTypeType	ActionType;
	///±£ÁôÍ·´çÉêÇëµÄ³Ö²Ö·½Ïò
	TThostFtdcPosiDirectionType	PosiDirection;
	///ÆÚÈ¨ÐÐÈ¨ºóÊÇ·ñ±£ÁôÆÚ»õÍ·´çµÄ±ê¼Ç,¸Ã×Ö¶ÎÒÑ·ÏÆú
	TThostFtdcExecOrderPositionFlagType	ReservePositionFlag;
	///ÆÚÈ¨ÐÐÈ¨ºóÉú³ÉµÄÍ·´çÊÇ·ñ×Ô¶¯Æ½²Ö
	TThostFtdcExecOrderCloseFlagType	CloseFlag;
	///±¾µØÖ´ÐÐÐû¸æ±àºÅ
	TThostFtdcOrderLocalIDType	ExecOrderLocalID;
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///»áÔ±´úÂë
	TThostFtdcParticipantIDType	ParticipantID;
	///¿Í»§´úÂë
	TThostFtdcClientIDType	ClientID;
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldExchangeInstIDType	reserve1;
	///½»Ò×Ëù½»Ò×Ô±´úÂë
	TThostFtdcTraderIDType	TraderID;
	///°²×°±àºÅ
	TThostFtdcInstallIDType	InstallID;
	///Ö´ÐÐÐû¸æÌá½»×´Ì¬
	TThostFtdcOrderSubmitStatusType	OrderSubmitStatus;
	///±¨µ¥ÌáÊ¾ÐòºÅ
	TThostFtdcSequenceNoType	NotifySequence;
	///½»Ò×ÈÕ
	TThostFtdcDateType	TradingDay;
	///½áËã±àºÅ
	TThostFtdcSettlementIDType	SettlementID;
	///Ö´ÐÐÐû¸æ±àºÅ
	TThostFtdcExecOrderSysIDType	ExecOrderSysID;
	///±¨µ¥ÈÕÆÚ
	TThostFtdcDateType	InsertDate;
	///²åÈëÊ±¼ä
	TThostFtdcTimeType	InsertTime;
	///³·ÏúÊ±¼ä
	TThostFtdcTimeType	CancelTime;
	///Ö´ÐÐ½á¹û
	TThostFtdcExecResultType	ExecResult;
	///½áËã»áÔ±±àºÅ
	TThostFtdcParticipantIDType	ClearingPartID;
	///ÐòºÅ
	TThostFtdcSequenceNoType	SequenceNo;
	///ÓªÒµ²¿±àºÅ
	TThostFtdcBranchIDType	BranchID;
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldIPAddressType	reserve2;
	///MacµØÖ·
	TThostFtdcMacAddressType	MacAddress;
	///ºÏÔ¼ÔÚ½»Ò×ËùµÄ´úÂë
	TThostFtdcExchangeInstIDType	ExchangeInstID;
	///IPµØÖ·
	TThostFtdcIPAddressType	IPAddress;
};

///½»Ò×ËùÖ´ÐÐÐû¸æ²éÑ¯
struct CThostFtdcQryExchangeExecOrderField
{
	///»áÔ±´úÂë
	TThostFtdcParticipantIDType	ParticipantID;
	///¿Í»§´úÂë
	TThostFtdcClientIDType	ClientID;
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldExchangeInstIDType	reserve1;
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///½»Ò×Ëù½»Ò×Ô±´úÂë
	TThostFtdcTraderIDType	TraderID;
	///ºÏÔ¼ÔÚ½»Ò×ËùµÄ´úÂë
	TThostFtdcExchangeInstIDType	ExchangeInstID;
};

///Ö´ÐÐÐû¸æ²Ù×÷²éÑ¯
struct CThostFtdcQryExecOrderActionField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///Í¶×ÊÕß´úÂë
	TThostFtdcInvestorIDType	InvestorID;
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
};

///½»Ò×ËùÖ´ÐÐÐû¸æ²Ù×÷
struct CThostFtdcExchangeExecOrderActionField
{
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///Ö´ÐÐÐû¸æ²Ù×÷±àºÅ
	TThostFtdcExecOrderSysIDType	ExecOrderSysID;
	///²Ù×÷±êÖ¾
	TThostFtdcActionFlagType	ActionFlag;
	///²Ù×÷ÈÕÆÚ
	TThostFtdcDateType	ActionDate;
	///²Ù×÷Ê±¼ä
	TThostFtdcTimeType	ActionTime;
	///½»Ò×Ëù½»Ò×Ô±´úÂë
	TThostFtdcTraderIDType	TraderID;
	///°²×°±àºÅ
	TThostFtdcInstallIDType	InstallID;
	///±¾µØÖ´ÐÐÐû¸æ±àºÅ
	TThostFtdcOrderLocalIDType	ExecOrderLocalID;
	///²Ù×÷±¾µØ±àºÅ
	TThostFtdcOrderLocalIDType	ActionLocalID;
	///»áÔ±´úÂë
	TThostFtdcParticipantIDType	ParticipantID;
	///¿Í»§´úÂë
	TThostFtdcClientIDType	ClientID;
	///ÒµÎñµ¥Ôª
	TThostFtdcBusinessUnitType	BusinessUnit;
	///±¨µ¥²Ù×÷×´Ì¬
	TThostFtdcOrderActionStatusType	OrderActionStatus;
	///ÓÃ»§´úÂë
	TThostFtdcUserIDType	UserID;
	///Ö´ÐÐÀàÐÍ
	TThostFtdcActionTypeType	ActionType;
	///ÓªÒµ²¿±àºÅ
	TThostFtdcBranchIDType	BranchID;
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldIPAddressType	reserve1;
	///MacµØÖ·
	TThostFtdcMacAddressType	MacAddress;
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldExchangeInstIDType	reserve2;
	///ÊýÁ¿
	TThostFtdcVolumeType	Volume;
	///IPµØÖ·
	TThostFtdcIPAddressType	IPAddress;
	///ºÏÔ¼ÔÚ½»Ò×ËùµÄ´úÂë
	TThostFtdcExchangeInstIDType	ExchangeInstID;
};

///½»Ò×ËùÖ´ÐÐÐû¸æ²Ù×÷²éÑ¯
struct CThostFtdcQryExchangeExecOrderActionField
{
	///»áÔ±´úÂë
	TThostFtdcParticipantIDType	ParticipantID;
	///¿Í»§´úÂë
	TThostFtdcClientIDType	ClientID;
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///½»Ò×Ëù½»Ò×Ô±´úÂë
	TThostFtdcTraderIDType	TraderID;
};

///´íÎóÖ´ÐÐÐû¸æ
struct CThostFtdcErrExecOrderField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///Í¶×ÊÕß´úÂë
	TThostFtdcInvestorIDType	InvestorID;
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldInstrumentIDType	reserve1;
	///Ö´ÐÐÐû¸æÒýÓÃ
	TThostFtdcOrderRefType	ExecOrderRef;
	///ÓÃ»§´úÂë
	TThostFtdcUserIDType	UserID;
	///ÊýÁ¿
	TThostFtdcVolumeType	Volume;
	///ÇëÇó±àºÅ
	TThostFtdcRequestIDType	RequestID;
	///ÒµÎñµ¥Ôª
	TThostFtdcBusinessUnitType	BusinessUnit;
	///¿ªÆ½±êÖ¾
	TThostFtdcOffsetFlagType	OffsetFlag;
	///Í¶»úÌ×±£±êÖ¾
	TThostFtdcHedgeFlagType	HedgeFlag;
	///Ö´ÐÐÀàÐÍ
	TThostFtdcActionTypeType	ActionType;
	///±£ÁôÍ·´çÉêÇëµÄ³Ö²Ö·½Ïò
	TThostFtdcPosiDirectionType	PosiDirection;
	///ÆÚÈ¨ÐÐÈ¨ºóÊÇ·ñ±£ÁôÆÚ»õÍ·´çµÄ±ê¼Ç,¸Ã×Ö¶ÎÒÑ·ÏÆú
	TThostFtdcExecOrderPositionFlagType	ReservePositionFlag;
	///ÆÚÈ¨ÐÐÈ¨ºóÉú³ÉµÄÍ·´çÊÇ·ñ×Ô¶¯Æ½²Ö
	TThostFtdcExecOrderCloseFlagType	CloseFlag;
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///Í¶×Êµ¥Ôª´úÂë
	TThostFtdcInvestUnitIDType	InvestUnitID;
	///×Ê½ðÕËºÅ
	TThostFtdcAccountIDType	AccountID;
	///±ÒÖÖ´úÂë
	TThostFtdcCurrencyIDType	CurrencyID;
	///½»Ò×±àÂë
	TThostFtdcClientIDType	ClientID;
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldIPAddressType	reserve2;
	///MacµØÖ·
	TThostFtdcMacAddressType	MacAddress;
	///´íÎó´úÂë
	TThostFtdcErrorIDType	ErrorID;
	///´íÎóÐÅÏ¢
	TThostFtdcErrorMsgType	ErrorMsg;
	///ºÏÔ¼´úÂë
	TThostFtdcInstrumentIDType	InstrumentID;
	///IPµØÖ·
	TThostFtdcIPAddressType	IPAddress;
};

///²éÑ¯´íÎóÖ´ÐÐÐû¸æ
struct CThostFtdcQryErrExecOrderField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///Í¶×ÊÕß´úÂë
	TThostFtdcInvestorIDType	InvestorID;
};

///´íÎóÖ´ÐÐÐû¸æ²Ù×÷
struct CThostFtdcErrExecOrderActionField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///Í¶×ÊÕß´úÂë
	TThostFtdcInvestorIDType	InvestorID;
	///Ö´ÐÐÐû¸æ²Ù×÷ÒýÓÃ
	TThostFtdcOrderActionRefType	ExecOrderActionRef;
	///Ö´ÐÐÐû¸æÒýÓÃ
	TThostFtdcOrderRefType	ExecOrderRef;
	///ÇëÇó±àºÅ
	TThostFtdcRequestIDType	RequestID;
	///Ç°ÖÃ±àºÅ
	TThostFtdcFrontIDType	FrontID;
	///»á»°±àºÅ
	TThostFtdcSessionIDType	SessionID;
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///Ö´ÐÐÐû¸æ²Ù×÷±àºÅ
	TThostFtdcExecOrderSysIDType	ExecOrderSysID;
	///²Ù×÷±êÖ¾
	TThostFtdcActionFlagType	ActionFlag;
	///ÓÃ»§´úÂë
	TThostFtdcUserIDType	UserID;
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldInstrumentIDType	reserve1;
	///Í¶×Êµ¥Ôª´úÂë
	TThostFtdcInvestUnitIDType	InvestUnitID;
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldIPAddressType	reserve2;
	///MacµØÖ·
	TThostFtdcMacAddressType	MacAddress;
	///´íÎó´úÂë
	TThostFtdcErrorIDType	ErrorID;
	///´íÎóÐÅÏ¢
	TThostFtdcErrorMsgType	ErrorMsg;
	///ºÏÔ¼´úÂë
	TThostFtdcInstrumentIDType	InstrumentID;
	///IPµØÖ·
	TThostFtdcIPAddressType	IPAddress;
};

///²éÑ¯´íÎóÖ´ÐÐÐû¸æ²Ù×÷
struct CThostFtdcQryErrExecOrderActionField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///Í¶×ÊÕß´úÂë
	TThostFtdcInvestorIDType	InvestorID;
};

///Í¶×ÊÕßÆÚÈ¨ºÏÔ¼½»Ò×È¨ÏÞ
struct CThostFtdcOptionInstrTradingRightField
{
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldInstrumentIDType	reserve1;
	///Í¶×ÊÕß·¶Î§
	TThostFtdcInvestorRangeType	InvestorRange;
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///Í¶×ÊÕß´úÂë
	TThostFtdcInvestorIDType	InvestorID;
	///ÂòÂô·½Ïò
	TThostFtdcDirectionType	Direction;
	///½»Ò×È¨ÏÞ
	TThostFtdcTradingRightType	TradingRight;
	///ºÏÔ¼´úÂë
	TThostFtdcInstrumentIDType	InstrumentID;
};

///²éÑ¯ÆÚÈ¨ºÏÔ¼½»Ò×È¨ÏÞ
struct CThostFtdcQryOptionInstrTradingRightField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///Í¶×ÊÕß´úÂë
	TThostFtdcInvestorIDType	InvestorID;
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldInstrumentIDType	reserve1;
	///ÂòÂô·½Ïò
	TThostFtdcDirectionType	Direction;
	///ºÏÔ¼´úÂë
	TThostFtdcInstrumentIDType	InstrumentID;
};

///ÊäÈëµÄÑ¯¼Û
struct CThostFtdcInputForQuoteField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///Í¶×ÊÕß´úÂë
	TThostFtdcInvestorIDType	InvestorID;
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldInstrumentIDType	reserve1;
	///Ñ¯¼ÛÒýÓÃ
	TThostFtdcOrderRefType	ForQuoteRef;
	///ÓÃ»§´úÂë
	TThostFtdcUserIDType	UserID;
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///Í¶×Êµ¥Ôª´úÂë
	TThostFtdcInvestUnitIDType	InvestUnitID;
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldIPAddressType	reserve2;
	///MacµØÖ·
	TThostFtdcMacAddressType	MacAddress;
	///ºÏÔ¼´úÂë
	TThostFtdcInstrumentIDType	InstrumentID;
	///IPµØÖ·
	TThostFtdcIPAddressType	IPAddress;
};

///Ñ¯¼Û
struct CThostFtdcForQuoteField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///Í¶×ÊÕß´úÂë
	TThostFtdcInvestorIDType	InvestorID;
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldInstrumentIDType	reserve1;
	///Ñ¯¼ÛÒýÓÃ
	TThostFtdcOrderRefType	ForQuoteRef;
	///ÓÃ»§´úÂë
	TThostFtdcUserIDType	UserID;
	///±¾µØÑ¯¼Û±àºÅ
	TThostFtdcOrderLocalIDType	ForQuoteLocalID;
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///»áÔ±´úÂë
	TThostFtdcParticipantIDType	ParticipantID;
	///¿Í»§´úÂë
	TThostFtdcClientIDType	ClientID;
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldExchangeInstIDType	reserve2;
	///½»Ò×Ëù½»Ò×Ô±´úÂë
	TThostFtdcTraderIDType	TraderID;
	///°²×°±àºÅ
	TThostFtdcInstallIDType	InstallID;
	///±¨µ¥ÈÕÆÚ
	TThostFtdcDateType	InsertDate;
	///²åÈëÊ±¼ä
	TThostFtdcTimeType	InsertTime;
	///Ñ¯¼Û×´Ì¬
	TThostFtdcForQuoteStatusType	ForQuoteStatus;
	///Ç°ÖÃ±àºÅ
	TThostFtdcFrontIDType	FrontID;
	///»á»°±àºÅ
	TThostFtdcSessionIDType	SessionID;
	///×´Ì¬ÐÅÏ¢
	TThostFtdcErrorMsgType	StatusMsg;
	///²Ù×÷ÓÃ»§´úÂë
	TThostFtdcUserIDType	ActiveUserID;
	///¾­¼Í¹«Ë¾Ñ¯¼Û±àºÅ
	TThostFtdcSequenceNoType	BrokerForQutoSeq;
	///Í¶×Êµ¥Ôª´úÂë
	TThostFtdcInvestUnitIDType	InvestUnitID;
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldIPAddressType	reserve3;
	///MacµØÖ·
	TThostFtdcMacAddressType	MacAddress;
	///ºÏÔ¼´úÂë
	TThostFtdcInstrumentIDType	InstrumentID;
	///ºÏÔ¼ÔÚ½»Ò×ËùµÄ´úÂë
	TThostFtdcExchangeInstIDType	ExchangeInstID;
	///IPµØÖ·
	TThostFtdcIPAddressType	IPAddress;
};

///Ñ¯¼Û²éÑ¯
struct CThostFtdcQryForQuoteField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///Í¶×ÊÕß´úÂë
	TThostFtdcInvestorIDType	InvestorID;
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldInstrumentIDType	reserve1;
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///¿ªÊ¼Ê±¼ä
	TThostFtdcTimeType	InsertTimeStart;
	///½áÊøÊ±¼ä
	TThostFtdcTimeType	InsertTimeEnd;
	///Í¶×Êµ¥Ôª´úÂë
	TThostFtdcInvestUnitIDType	InvestUnitID;
	///ºÏÔ¼´úÂë
	TThostFtdcInstrumentIDType	InstrumentID;
};

///½»Ò×ËùÑ¯¼ÛÐÅÏ¢
struct CThostFtdcExchangeForQuoteField
{
	///±¾µØÑ¯¼Û±àºÅ
	TThostFtdcOrderLocalIDType	ForQuoteLocalID;
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///»áÔ±´úÂë
	TThostFtdcParticipantIDType	ParticipantID;
	///¿Í»§´úÂë
	TThostFtdcClientIDType	ClientID;
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldExchangeInstIDType	reserve1;
	///½»Ò×Ëù½»Ò×Ô±´úÂë
	TThostFtdcTraderIDType	TraderID;
	///°²×°±àºÅ
	TThostFtdcInstallIDType	InstallID;
	///±¨µ¥ÈÕÆÚ
	TThostFtdcDateType	InsertDate;
	///²åÈëÊ±¼ä
	TThostFtdcTimeType	InsertTime;
	///Ñ¯¼Û×´Ì¬
	TThostFtdcForQuoteStatusType	ForQuoteStatus;
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldIPAddressType	reserve2;
	///MacµØÖ·
	TThostFtdcMacAddressType	MacAddress;
	///ºÏÔ¼ÔÚ½»Ò×ËùµÄ´úÂë
	TThostFtdcExchangeInstIDType	ExchangeInstID;
	///IPµØÖ·
	TThostFtdcIPAddressType	IPAddress;
};

///½»Ò×ËùÑ¯¼Û²éÑ¯
struct CThostFtdcQryExchangeForQuoteField
{
	///»áÔ±´úÂë
	TThostFtdcParticipantIDType	ParticipantID;
	///¿Í»§´úÂë
	TThostFtdcClientIDType	ClientID;
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldExchangeInstIDType	reserve1;
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///½»Ò×Ëù½»Ò×Ô±´úÂë
	TThostFtdcTraderIDType	TraderID;
	///ºÏÔ¼ÔÚ½»Ò×ËùµÄ´úÂë
	TThostFtdcExchangeInstIDType	ExchangeInstID;
};

///ÊäÈëµÄ±¨¼Û
struct CThostFtdcInputQuoteField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///Í¶×ÊÕß´úÂë
	TThostFtdcInvestorIDType	InvestorID;
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldInstrumentIDType	reserve1;
	///±¨¼ÛÒýÓÃ
	TThostFtdcOrderRefType	QuoteRef;
	///ÓÃ»§´úÂë
	TThostFtdcUserIDType	UserID;
	///Âô¼Û¸ñ
	TThostFtdcPriceType	AskPrice;
	///Âò¼Û¸ñ
	TThostFtdcPriceType	BidPrice;
	///ÂôÊýÁ¿
	TThostFtdcVolumeType	AskVolume;
	///ÂòÊýÁ¿
	TThostFtdcVolumeType	BidVolume;
	///ÇëÇó±àºÅ
	TThostFtdcRequestIDType	RequestID;
	///ÒµÎñµ¥Ôª
	TThostFtdcBusinessUnitType	BusinessUnit;
	///Âô¿ªÆ½±êÖ¾
	TThostFtdcOffsetFlagType	AskOffsetFlag;
	///Âò¿ªÆ½±êÖ¾
	TThostFtdcOffsetFlagType	BidOffsetFlag;
	///ÂôÍ¶»úÌ×±£±êÖ¾
	TThostFtdcHedgeFlagType	AskHedgeFlag;
	///ÂòÍ¶»úÌ×±£±êÖ¾
	TThostFtdcHedgeFlagType	BidHedgeFlag;
	///ÑÜÉúÂô±¨µ¥ÒýÓÃ
	TThostFtdcOrderRefType	AskOrderRef;
	///ÑÜÉúÂò±¨µ¥ÒýÓÃ
	TThostFtdcOrderRefType	BidOrderRef;
	///Ó¦¼Û±àºÅ
	TThostFtdcOrderSysIDType	ForQuoteSysID;
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///Í¶×Êµ¥Ôª´úÂë
	TThostFtdcInvestUnitIDType	InvestUnitID;
	///½»Ò×±àÂë
	TThostFtdcClientIDType	ClientID;
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldIPAddressType	reserve2;
	///MacµØÖ·
	TThostFtdcMacAddressType	MacAddress;
	///ºÏÔ¼´úÂë
	TThostFtdcInstrumentIDType	InstrumentID;
	///IPµØÖ·
	TThostFtdcIPAddressType	IPAddress;
	///±»¶¥µ¥±àºÅ
	TThostFtdcOrderSysIDType	ReplaceSysID;
	///ÓÐÐ§ÆÚÀàÐÍ
	TThostFtdcTimeConditionType	TimeCondition;
	///±¨µ¥»ØÏÔ×Ö¶Î
	TThostFtdcOrderMemoType	OrderMemo;
	///sessionÉÏÇëÇó¼ÆÊý api×Ô¶¯Î¬»¤
	TThostFtdcSequenceNo12Type	SessionReqSeq;
};

///ÊäÈë±¨¼Û²Ù×÷
struct CThostFtdcInputQuoteActionField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///Í¶×ÊÕß´úÂë
	TThostFtdcInvestorIDType	InvestorID;
	///±¨¼Û²Ù×÷ÒýÓÃ
	TThostFtdcOrderActionRefType	QuoteActionRef;
	///±¨¼ÛÒýÓÃ
	TThostFtdcOrderRefType	QuoteRef;
	///ÇëÇó±àºÅ
	TThostFtdcRequestIDType	RequestID;
	///Ç°ÖÃ±àºÅ
	TThostFtdcFrontIDType	FrontID;
	///»á»°±àºÅ
	TThostFtdcSessionIDType	SessionID;
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///±¨¼Û²Ù×÷±àºÅ
	TThostFtdcOrderSysIDType	QuoteSysID;
	///²Ù×÷±êÖ¾
	TThostFtdcActionFlagType	ActionFlag;
	///ÓÃ»§´úÂë
	TThostFtdcUserIDType	UserID;
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldInstrumentIDType	reserve1;
	///Í¶×Êµ¥Ôª´úÂë
	TThostFtdcInvestUnitIDType	InvestUnitID;
	///½»Ò×±àÂë
	TThostFtdcClientIDType	ClientID;
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldIPAddressType	reserve2;
	///MacµØÖ·
	TThostFtdcMacAddressType	MacAddress;
	///ºÏÔ¼´úÂë
	TThostFtdcInstrumentIDType	InstrumentID;
	///IPµØÖ·
	TThostFtdcIPAddressType	IPAddress;
	///±¨µ¥»ØÏÔ×Ö¶Î
	TThostFtdcOrderMemoType	OrderMemo;
	///sessionÉÏÇëÇó¼ÆÊý api×Ô¶¯Î¬»¤
	TThostFtdcSequenceNo12Type	SessionReqSeq;
};

///±¨¼Û
struct CThostFtdcQuoteField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///Í¶×ÊÕß´úÂë
	TThostFtdcInvestorIDType	InvestorID;
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldInstrumentIDType	reserve1;
	///±¨¼ÛÒýÓÃ
	TThostFtdcOrderRefType	QuoteRef;
	///ÓÃ»§´úÂë
	TThostFtdcUserIDType	UserID;
	///Âô¼Û¸ñ
	TThostFtdcPriceType	AskPrice;
	///Âò¼Û¸ñ
	TThostFtdcPriceType	BidPrice;
	///ÂôÊýÁ¿
	TThostFtdcVolumeType	AskVolume;
	///ÂòÊýÁ¿
	TThostFtdcVolumeType	BidVolume;
	///ÇëÇó±àºÅ
	TThostFtdcRequestIDType	RequestID;
	///ÒµÎñµ¥Ôª
	TThostFtdcBusinessUnitType	BusinessUnit;
	///Âô¿ªÆ½±êÖ¾
	TThostFtdcOffsetFlagType	AskOffsetFlag;
	///Âò¿ªÆ½±êÖ¾
	TThostFtdcOffsetFlagType	BidOffsetFlag;
	///ÂôÍ¶»úÌ×±£±êÖ¾
	TThostFtdcHedgeFlagType	AskHedgeFlag;
	///ÂòÍ¶»úÌ×±£±êÖ¾
	TThostFtdcHedgeFlagType	BidHedgeFlag;
	///±¾µØ±¨¼Û±àºÅ
	TThostFtdcOrderLocalIDType	QuoteLocalID;
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///»áÔ±´úÂë
	TThostFtdcParticipantIDType	ParticipantID;
	///¿Í»§´úÂë
	TThostFtdcClientIDType	ClientID;
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldExchangeInstIDType	reserve2;
	///½»Ò×Ëù½»Ò×Ô±´úÂë
	TThostFtdcTraderIDType	TraderID;
	///°²×°±àºÅ
	TThostFtdcInstallIDType	InstallID;
	///±¨¼ÛÌáÊ¾ÐòºÅ
	TThostFtdcSequenceNoType	NotifySequence;
	///±¨¼ÛÌá½»×´Ì¬
	TThostFtdcOrderSubmitStatusType	OrderSubmitStatus;
	///½»Ò×ÈÕ
	TThostFtdcDateType	TradingDay;
	///½áËã±àºÅ
	TThostFtdcSettlementIDType	SettlementID;
	///±¨¼Û±àºÅ
	TThostFtdcOrderSysIDType	QuoteSysID;
	///±¨µ¥ÈÕÆÚ
	TThostFtdcDateType	InsertDate;
	///²åÈëÊ±¼ä
	TThostFtdcTimeType	InsertTime;
	///³·ÏúÊ±¼ä
	TThostFtdcTimeType	CancelTime;
	///±¨¼Û×´Ì¬
	TThostFtdcOrderStatusType	QuoteStatus;
	///½áËã»áÔ±±àºÅ
	TThostFtdcParticipantIDType	ClearingPartID;
	///ÐòºÅ
	TThostFtdcSequenceNoType	SequenceNo;
	///Âô·½±¨µ¥±àºÅ
	TThostFtdcOrderSysIDType	AskOrderSysID;
	///Âò·½±¨µ¥±àºÅ
	TThostFtdcOrderSysIDType	BidOrderSysID;
	///Ç°ÖÃ±àºÅ
	TThostFtdcFrontIDType	FrontID;
	///»á»°±àºÅ
	TThostFtdcSessionIDType	SessionID;
	///ÓÃ»§¶Ë²úÆ·ÐÅÏ¢
	TThostFtdcProductInfoType	UserProductInfo;
	///×´Ì¬ÐÅÏ¢
	TThostFtdcErrorMsgType	StatusMsg;
	///²Ù×÷ÓÃ»§´úÂë
	TThostFtdcUserIDType	ActiveUserID;
	///¾­¼Í¹«Ë¾±¨¼Û±àºÅ
	TThostFtdcSequenceNoType	BrokerQuoteSeq;
	///ÑÜÉúÂô±¨µ¥ÒýÓÃ
	TThostFtdcOrderRefType	AskOrderRef;
	///ÑÜÉúÂò±¨µ¥ÒýÓÃ
	TThostFtdcOrderRefType	BidOrderRef;
	///Ó¦¼Û±àºÅ
	TThostFtdcOrderSysIDType	ForQuoteSysID;
	///ÓªÒµ²¿±àºÅ
	TThostFtdcBranchIDType	BranchID;
	///Í¶×Êµ¥Ôª´úÂë
	TThostFtdcInvestUnitIDType	InvestUnitID;
	///×Ê½ðÕËºÅ
	TThostFtdcAccountIDType	AccountID;
	///±ÒÖÖ´úÂë
	TThostFtdcCurrencyIDType	CurrencyID;
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldIPAddressType	reserve3;
	///MacµØÖ·
	TThostFtdcMacAddressType	MacAddress;
	///ºÏÔ¼´úÂë
	TThostFtdcInstrumentIDType	InstrumentID;
	///ºÏÔ¼ÔÚ½»Ò×ËùµÄ´úÂë
	TThostFtdcExchangeInstIDType	ExchangeInstID;
	///IPµØÖ·
	TThostFtdcIPAddressType	IPAddress;
	///±»¶¥µ¥±àºÅ
	TThostFtdcOrderSysIDType	ReplaceSysID;
	///ÓÐÐ§ÆÚÀàÐÍ
	TThostFtdcTimeConditionType	TimeCondition;
	///±¨µ¥»ØÏÔ×Ö¶Î
	TThostFtdcOrderMemoType	OrderMemo;
	///sessionÉÏÇëÇó¼ÆÊý api×Ô¶¯Î¬»¤
	TThostFtdcSequenceNo12Type	SessionReqSeq;
};

///±¨¼Û²Ù×÷
struct CThostFtdcQuoteActionField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///Í¶×ÊÕß´úÂë
	TThostFtdcInvestorIDType	InvestorID;
	///±¨¼Û²Ù×÷ÒýÓÃ
	TThostFtdcOrderActionRefType	QuoteActionRef;
	///±¨¼ÛÒýÓÃ
	TThostFtdcOrderRefType	QuoteRef;
	///ÇëÇó±àºÅ
	TThostFtdcRequestIDType	RequestID;
	///Ç°ÖÃ±àºÅ
	TThostFtdcFrontIDType	FrontID;
	///»á»°±àºÅ
	TThostFtdcSessionIDType	SessionID;
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///±¨¼Û²Ù×÷±àºÅ
	TThostFtdcOrderSysIDType	QuoteSysID;
	///²Ù×÷±êÖ¾
	TThostFtdcActionFlagType	ActionFlag;
	///²Ù×÷ÈÕÆÚ
	TThostFtdcDateType	ActionDate;
	///²Ù×÷Ê±¼ä
	TThostFtdcTimeType	ActionTime;
	///½»Ò×Ëù½»Ò×Ô±´úÂë
	TThostFtdcTraderIDType	TraderID;
	///°²×°±àºÅ
	TThostFtdcInstallIDType	InstallID;
	///±¾µØ±¨¼Û±àºÅ
	TThostFtdcOrderLocalIDType	QuoteLocalID;
	///²Ù×÷±¾µØ±àºÅ
	TThostFtdcOrderLocalIDType	ActionLocalID;
	///»áÔ±´úÂë
	TThostFtdcParticipantIDType	ParticipantID;
	///¿Í»§´úÂë
	TThostFtdcClientIDType	ClientID;
	///ÒµÎñµ¥Ôª
	TThostFtdcBusinessUnitType	BusinessUnit;
	///±¨µ¥²Ù×÷×´Ì¬
	TThostFtdcOrderActionStatusType	OrderActionStatus;
	///ÓÃ»§´úÂë
	TThostFtdcUserIDType	UserID;
	///×´Ì¬ÐÅÏ¢
	TThostFtdcErrorMsgType	StatusMsg;
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldInstrumentIDType	reserve1;
	///ÓªÒµ²¿±àºÅ
	TThostFtdcBranchIDType	BranchID;
	///Í¶×Êµ¥Ôª´úÂë
	TThostFtdcInvestUnitIDType	InvestUnitID;
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldIPAddressType	reserve2;
	///MacµØÖ·
	TThostFtdcMacAddressType	MacAddress;
	///ºÏÔ¼´úÂë
	TThostFtdcInstrumentIDType	InstrumentID;
	///IPµØÖ·
	TThostFtdcIPAddressType	IPAddress;
	///±¨µ¥»ØÏÔ×Ö¶Î
	TThostFtdcOrderMemoType	OrderMemo;
	///sessionÉÏÇëÇó¼ÆÊý api×Ô¶¯Î¬»¤
	TThostFtdcSequenceNo12Type	SessionReqSeq;
};

///±¨¼Û²éÑ¯
struct CThostFtdcQryQuoteField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///Í¶×ÊÕß´úÂë
	TThostFtdcInvestorIDType	InvestorID;
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldInstrumentIDType	reserve1;
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///±¨¼Û±àºÅ
	TThostFtdcOrderSysIDType	QuoteSysID;
	///¿ªÊ¼Ê±¼ä
	TThostFtdcTimeType	InsertTimeStart;
	///½áÊøÊ±¼ä
	TThostFtdcTimeType	InsertTimeEnd;
	///Í¶×Êµ¥Ôª´úÂë
	TThostFtdcInvestUnitIDType	InvestUnitID;
	///ºÏÔ¼´úÂë
	TThostFtdcInstrumentIDType	InstrumentID;
};

///½»Ò×Ëù±¨¼ÛÐÅÏ¢
struct CThostFtdcExchangeQuoteField
{
	///Âô¼Û¸ñ
	TThostFtdcPriceType	AskPrice;
	///Âò¼Û¸ñ
	TThostFtdcPriceType	BidPrice;
	///ÂôÊýÁ¿
	TThostFtdcVolumeType	AskVolume;
	///ÂòÊýÁ¿
	TThostFtdcVolumeType	BidVolume;
	///ÇëÇó±àºÅ
	TThostFtdcRequestIDType	RequestID;
	///ÒµÎñµ¥Ôª
	TThostFtdcBusinessUnitType	BusinessUnit;
	///Âô¿ªÆ½±êÖ¾
	TThostFtdcOffsetFlagType	AskOffsetFlag;
	///Âò¿ªÆ½±êÖ¾
	TThostFtdcOffsetFlagType	BidOffsetFlag;
	///ÂôÍ¶»úÌ×±£±êÖ¾
	TThostFtdcHedgeFlagType	AskHedgeFlag;
	///ÂòÍ¶»úÌ×±£±êÖ¾
	TThostFtdcHedgeFlagType	BidHedgeFlag;
	///±¾µØ±¨¼Û±àºÅ
	TThostFtdcOrderLocalIDType	QuoteLocalID;
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///»áÔ±´úÂë
	TThostFtdcParticipantIDType	ParticipantID;
	///¿Í»§´úÂë
	TThostFtdcClientIDType	ClientID;
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldExchangeInstIDType	reserve1;
	///½»Ò×Ëù½»Ò×Ô±´úÂë
	TThostFtdcTraderIDType	TraderID;
	///°²×°±àºÅ
	TThostFtdcInstallIDType	InstallID;
	///±¨¼ÛÌáÊ¾ÐòºÅ
	TThostFtdcSequenceNoType	NotifySequence;
	///±¨¼ÛÌá½»×´Ì¬
	TThostFtdcOrderSubmitStatusType	OrderSubmitStatus;
	///½»Ò×ÈÕ
	TThostFtdcDateType	TradingDay;
	///½áËã±àºÅ
	TThostFtdcSettlementIDType	SettlementID;
	///±¨¼Û±àºÅ
	TThostFtdcOrderSysIDType	QuoteSysID;
	///±¨µ¥ÈÕÆÚ
	TThostFtdcDateType	InsertDate;
	///²åÈëÊ±¼ä
	TThostFtdcTimeType	InsertTime;
	///³·ÏúÊ±¼ä
	TThostFtdcTimeType	CancelTime;
	///±¨¼Û×´Ì¬
	TThostFtdcOrderStatusType	QuoteStatus;
	///½áËã»áÔ±±àºÅ
	TThostFtdcParticipantIDType	ClearingPartID;
	///ÐòºÅ
	TThostFtdcSequenceNoType	SequenceNo;
	///Âô·½±¨µ¥±àºÅ
	TThostFtdcOrderSysIDType	AskOrderSysID;
	///Âò·½±¨µ¥±àºÅ
	TThostFtdcOrderSysIDType	BidOrderSysID;
	///Ó¦¼Û±àºÅ
	TThostFtdcOrderSysIDType	ForQuoteSysID;
	///ÓªÒµ²¿±àºÅ
	TThostFtdcBranchIDType	BranchID;
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldIPAddressType	reserve2;
	///MacµØÖ·
	TThostFtdcMacAddressType	MacAddress;
	///ºÏÔ¼ÔÚ½»Ò×ËùµÄ´úÂë
	TThostFtdcExchangeInstIDType	ExchangeInstID;
	///IPµØÖ·
	TThostFtdcIPAddressType	IPAddress;
	///ÓÐÐ§ÆÚÀàÐÍ
	TThostFtdcTimeConditionType	TimeCondition;
};

///½»Ò×Ëù±¨¼Û²éÑ¯
struct CThostFtdcQryExchangeQuoteField
{
	///»áÔ±´úÂë
	TThostFtdcParticipantIDType	ParticipantID;
	///¿Í»§´úÂë
	TThostFtdcClientIDType	ClientID;
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldExchangeInstIDType	reserve1;
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///½»Ò×Ëù½»Ò×Ô±´úÂë
	TThostFtdcTraderIDType	TraderID;
	///ºÏÔ¼ÔÚ½»Ò×ËùµÄ´úÂë
	TThostFtdcExchangeInstIDType	ExchangeInstID;
};

///±¨¼Û²Ù×÷²éÑ¯
struct CThostFtdcQryQuoteActionField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///Í¶×ÊÕß´úÂë
	TThostFtdcInvestorIDType	InvestorID;
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
};

///½»Ò×Ëù±¨¼Û²Ù×÷
struct CThostFtdcExchangeQuoteActionField
{
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///±¨¼Û²Ù×÷±àºÅ
	TThostFtdcOrderSysIDType	QuoteSysID;
	///²Ù×÷±êÖ¾
	TThostFtdcActionFlagType	ActionFlag;
	///²Ù×÷ÈÕÆÚ
	TThostFtdcDateType	ActionDate;
	///²Ù×÷Ê±¼ä
	TThostFtdcTimeType	ActionTime;
	///½»Ò×Ëù½»Ò×Ô±´úÂë
	TThostFtdcTraderIDType	TraderID;
	///°²×°±àºÅ
	TThostFtdcInstallIDType	InstallID;
	///±¾µØ±¨¼Û±àºÅ
	TThostFtdcOrderLocalIDType	QuoteLocalID;
	///²Ù×÷±¾µØ±àºÅ
	TThostFtdcOrderLocalIDType	ActionLocalID;
	///»áÔ±´úÂë
	TThostFtdcParticipantIDType	ParticipantID;
	///¿Í»§´úÂë
	TThostFtdcClientIDType	ClientID;
	///ÒµÎñµ¥Ôª
	TThostFtdcBusinessUnitType	BusinessUnit;
	///±¨µ¥²Ù×÷×´Ì¬
	TThostFtdcOrderActionStatusType	OrderActionStatus;
	///ÓÃ»§´úÂë
	TThostFtdcUserIDType	UserID;
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldIPAddressType	reserve1;
	///MacµØÖ·
	TThostFtdcMacAddressType	MacAddress;
	///IPµØÖ·
	TThostFtdcIPAddressType	IPAddress;
};

///½»Ò×Ëù±¨¼Û²Ù×÷²éÑ¯
struct CThostFtdcQryExchangeQuoteActionField
{
	///»áÔ±´úÂë
	TThostFtdcParticipantIDType	ParticipantID;
	///¿Í»§´úÂë
	TThostFtdcClientIDType	ClientID;
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///½»Ò×Ëù½»Ò×Ô±´úÂë
	TThostFtdcTraderIDType	TraderID;
};

///ÆÚÈ¨ºÏÔ¼deltaÖµ
struct CThostFtdcOptionInstrDeltaField
{
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldInstrumentIDType	reserve1;
	///Í¶×ÊÕß·¶Î§
	TThostFtdcInvestorRangeType	InvestorRange;
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///Í¶×ÊÕß´úÂë
	TThostFtdcInvestorIDType	InvestorID;
	///DeltaÖµ
	TThostFtdcRatioType	Delta;
	///ºÏÔ¼´úÂë
	TThostFtdcInstrumentIDType	InstrumentID;
};

///·¢¸ø×öÊÐÉÌµÄÑ¯¼ÛÇëÇó
struct CThostFtdcForQuoteRspField
{
	///½»Ò×ÈÕ
	TThostFtdcDateType	TradingDay;
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldInstrumentIDType	reserve1;
	///Ñ¯¼Û±àºÅ
	TThostFtdcOrderSysIDType	ForQuoteSysID;
	///Ñ¯¼ÛÊ±¼ä
	TThostFtdcTimeType	ForQuoteTime;
	///ÒµÎñÈÕÆÚ
	TThostFtdcDateType	ActionDay;
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///ºÏÔ¼´úÂë
	TThostFtdcInstrumentIDType	InstrumentID;
};

///µ±Ç°ÆÚÈ¨ºÏÔ¼Ö´ÐÐÆ«ÒÆÖµµÄÏêÏ¸ÄÚÈÝ
struct CThostFtdcStrikeOffsetField
{
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldInstrumentIDType	reserve1;
	///Í¶×ÊÕß·¶Î§
	TThostFtdcInvestorRangeType	InvestorRange;
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///Í¶×ÊÕß´úÂë
	TThostFtdcInvestorIDType	InvestorID;
	///Ö´ÐÐÆ«ÒÆÖµ
	TThostFtdcMoneyType	Offset;
	///Ö´ÐÐÆ«ÒÆÀàÐÍ
	TThostFtdcStrikeOffsetTypeType	OffsetType;
	///ºÏÔ¼´úÂë
	TThostFtdcInstrumentIDType	InstrumentID;
};

///ÆÚÈ¨Ö´ÐÐÆ«ÒÆÖµ²éÑ¯
struct CThostFtdcQryStrikeOffsetField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///Í¶×ÊÕß´úÂë
	TThostFtdcInvestorIDType	InvestorID;
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldInstrumentIDType	reserve1;
	///ºÏÔ¼´úÂë
	TThostFtdcInstrumentIDType	InstrumentID;
};

///ÊäÈëÅúÁ¿±¨µ¥²Ù×÷
struct CThostFtdcInputBatchOrderActionField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///Í¶×ÊÕß´úÂë
	TThostFtdcInvestorIDType	InvestorID;
	///±¨µ¥²Ù×÷ÒýÓÃ
	TThostFtdcOrderActionRefType	OrderActionRef;
	///ÇëÇó±àºÅ
	TThostFtdcRequestIDType	RequestID;
	///Ç°ÖÃ±àºÅ
	TThostFtdcFrontIDType	FrontID;
	///»á»°±àºÅ
	TThostFtdcSessionIDType	SessionID;
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///ÓÃ»§´úÂë
	TThostFtdcUserIDType	UserID;
	///Í¶×Êµ¥Ôª´úÂë
	TThostFtdcInvestUnitIDType	InvestUnitID;
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldIPAddressType	reserve1;
	///MacµØÖ·
	TThostFtdcMacAddressType	MacAddress;
	///IPµØÖ·
	TThostFtdcIPAddressType	IPAddress;
};

///ÅúÁ¿±¨µ¥²Ù×÷
struct CThostFtdcBatchOrderActionField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///Í¶×ÊÕß´úÂë
	TThostFtdcInvestorIDType	InvestorID;
	///±¨µ¥²Ù×÷ÒýÓÃ
	TThostFtdcOrderActionRefType	OrderActionRef;
	///ÇëÇó±àºÅ
	TThostFtdcRequestIDType	RequestID;
	///Ç°ÖÃ±àºÅ
	TThostFtdcFrontIDType	FrontID;
	///»á»°±àºÅ
	TThostFtdcSessionIDType	SessionID;
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///²Ù×÷ÈÕÆÚ
	TThostFtdcDateType	ActionDate;
	///²Ù×÷Ê±¼ä
	TThostFtdcTimeType	ActionTime;
	///½»Ò×Ëù½»Ò×Ô±´úÂë
	TThostFtdcTraderIDType	TraderID;
	///°²×°±àºÅ
	TThostFtdcInstallIDType	InstallID;
	///²Ù×÷±¾µØ±àºÅ
	TThostFtdcOrderLocalIDType	ActionLocalID;
	///»áÔ±´úÂë
	TThostFtdcParticipantIDType	ParticipantID;
	///¿Í»§´úÂë
	TThostFtdcClientIDType	ClientID;
	///ÒµÎñµ¥Ôª
	TThostFtdcBusinessUnitType	BusinessUnit;
	///±¨µ¥²Ù×÷×´Ì¬
	TThostFtdcOrderActionStatusType	OrderActionStatus;
	///ÓÃ»§´úÂë
	TThostFtdcUserIDType	UserID;
	///×´Ì¬ÐÅÏ¢
	TThostFtdcErrorMsgType	StatusMsg;
	///Í¶×Êµ¥Ôª´úÂë
	TThostFtdcInvestUnitIDType	InvestUnitID;
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldIPAddressType	reserve1;
	///MacµØÖ·
	TThostFtdcMacAddressType	MacAddress;
	///IPµØÖ·
	TThostFtdcIPAddressType	IPAddress;
};

///½»Ò×ËùÅúÁ¿±¨µ¥²Ù×÷
struct CThostFtdcExchangeBatchOrderActionField
{
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///²Ù×÷ÈÕÆÚ
	TThostFtdcDateType	ActionDate;
	///²Ù×÷Ê±¼ä
	TThostFtdcTimeType	ActionTime;
	///½»Ò×Ëù½»Ò×Ô±´úÂë
	TThostFtdcTraderIDType	TraderID;
	///°²×°±àºÅ
	TThostFtdcInstallIDType	InstallID;
	///²Ù×÷±¾µØ±àºÅ
	TThostFtdcOrderLocalIDType	ActionLocalID;
	///»áÔ±´úÂë
	TThostFtdcParticipantIDType	ParticipantID;
	///¿Í»§´úÂë
	TThostFtdcClientIDType	ClientID;
	///ÒµÎñµ¥Ôª
	TThostFtdcBusinessUnitType	BusinessUnit;
	///±¨µ¥²Ù×÷×´Ì¬
	TThostFtdcOrderActionStatusType	OrderActionStatus;
	///ÓÃ»§´úÂë
	TThostFtdcUserIDType	UserID;
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldIPAddressType	reserve1;
	///MacµØÖ·
	TThostFtdcMacAddressType	MacAddress;
	///IPµØÖ·
	TThostFtdcIPAddressType	IPAddress;
};

///²éÑ¯ÅúÁ¿±¨µ¥²Ù×÷
struct CThostFtdcQryBatchOrderActionField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///Í¶×ÊÕß´úÂë
	TThostFtdcInvestorIDType	InvestorID;
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
};

///×éºÏºÏÔ¼°²È«ÏµÊý
struct CThostFtdcCombInstrumentGuardField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldInstrumentIDType	reserve1;
	///
	TThostFtdcRatioType	GuarantRatio;
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///ºÏÔ¼´úÂë
	TThostFtdcInstrumentIDType	InstrumentID;
};

///×éºÏºÏÔ¼°²È«ÏµÊý²éÑ¯
struct CThostFtdcQryCombInstrumentGuardField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldInstrumentIDType	reserve1;
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///ºÏÔ¼´úÂë
	TThostFtdcInstrumentIDType	InstrumentID;
};

///ÊäÈëµÄÉêÇë×éºÏ
struct CThostFtdcInputCombActionField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///Í¶×ÊÕß´úÂë
	TThostFtdcInvestorIDType	InvestorID;
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldInstrumentIDType	reserve1;
	///×éºÏÒýÓÃ
	TThostFtdcOrderRefType	CombActionRef;
	///ÓÃ»§´úÂë
	TThostFtdcUserIDType	UserID;
	///ÂòÂô·½Ïò
	TThostFtdcDirectionType	Direction;
	///ÊýÁ¿
	TThostFtdcVolumeType	Volume;
	///×éºÏÖ¸Áî·½Ïò
	TThostFtdcCombDirectionType	CombDirection;
	///Í¶»úÌ×±£±êÖ¾
	TThostFtdcHedgeFlagType	HedgeFlag;
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldIPAddressType	reserve2;
	///MacµØÖ·
	TThostFtdcMacAddressType	MacAddress;
	///Í¶×Êµ¥Ôª´úÂë
	TThostFtdcInvestUnitIDType	InvestUnitID;
	///Ç°ÖÃ±àºÅ
	TThostFtdcFrontIDType	FrontID;
	///»á»°±àºÅ
	TThostFtdcSessionIDType	SessionID;
	///ºÏÔ¼´úÂë
	TThostFtdcInstrumentIDType	InstrumentID;
	///IPµØÖ·
	TThostFtdcIPAddressType	IPAddress;
};

///ÉêÇë×éºÏ
struct CThostFtdcCombActionField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///Í¶×ÊÕß´úÂë
	TThostFtdcInvestorIDType	InvestorID;
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldInstrumentIDType	reserve1;
	///×éºÏÒýÓÃ
	TThostFtdcOrderRefType	CombActionRef;
	///ÓÃ»§´úÂë
	TThostFtdcUserIDType	UserID;
	///ÂòÂô·½Ïò
	TThostFtdcDirectionType	Direction;
	///ÊýÁ¿
	TThostFtdcVolumeType	Volume;
	///×éºÏÖ¸Áî·½Ïò
	TThostFtdcCombDirectionType	CombDirection;
	///Í¶»úÌ×±£±êÖ¾
	TThostFtdcHedgeFlagType	HedgeFlag;
	///±¾µØÉêÇë×éºÏ±àºÅ
	TThostFtdcOrderLocalIDType	ActionLocalID;
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///»áÔ±´úÂë
	TThostFtdcParticipantIDType	ParticipantID;
	///¿Í»§´úÂë
	TThostFtdcClientIDType	ClientID;
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldExchangeInstIDType	reserve2;
	///½»Ò×Ëù½»Ò×Ô±´úÂë
	TThostFtdcTraderIDType	TraderID;
	///°²×°±àºÅ
	TThostFtdcInstallIDType	InstallID;
	///×éºÏ×´Ì¬
	TThostFtdcOrderActionStatusType	ActionStatus;
	///±¨µ¥ÌáÊ¾ÐòºÅ
	TThostFtdcSequenceNoType	NotifySequence;
	///½»Ò×ÈÕ
	TThostFtdcDateType	TradingDay;
	///½áËã±àºÅ
	TThostFtdcSettlementIDType	SettlementID;
	///ÐòºÅ
	TThostFtdcSequenceNoType	SequenceNo;
	///Ç°ÖÃ±àºÅ
	TThostFtdcFrontIDType	FrontID;
	///»á»°±àºÅ
	TThostFtdcSessionIDType	SessionID;
	///ÓÃ»§¶Ë²úÆ·ÐÅÏ¢
	TThostFtdcProductInfoType	UserProductInfo;
	///×´Ì¬ÐÅÏ¢
	TThostFtdcErrorMsgType	StatusMsg;
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldIPAddressType	reserve3;
	///MacµØÖ·
	TThostFtdcMacAddressType	MacAddress;
	///×éºÏ±àºÅ
	TThostFtdcTradeIDType	ComTradeID;
	///ÓªÒµ²¿±àºÅ
	TThostFtdcBranchIDType	BranchID;
	///Í¶×Êµ¥Ôª´úÂë
	TThostFtdcInvestUnitIDType	InvestUnitID;
	///ºÏÔ¼´úÂë
	TThostFtdcInstrumentIDType	InstrumentID;
	///ºÏÔ¼ÔÚ½»Ò×ËùµÄ´úÂë
	TThostFtdcExchangeInstIDType	ExchangeInstID;
	///IPµØÖ·
	TThostFtdcIPAddressType	IPAddress;
};

///ÉêÇë×éºÏ²éÑ¯
struct CThostFtdcQryCombActionField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///Í¶×ÊÕß´úÂë
	TThostFtdcInvestorIDType	InvestorID;
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldInstrumentIDType	reserve1;
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///Í¶×Êµ¥Ôª´úÂë
	TThostFtdcInvestUnitIDType	InvestUnitID;
	///ºÏÔ¼´úÂë
	TThostFtdcInstrumentIDType	InstrumentID;
};

///½»Ò×ËùÉêÇë×éºÏÐÅÏ¢
struct CThostFtdcExchangeCombActionField
{
	///ÂòÂô·½Ïò
	TThostFtdcDirectionType	Direction;
	///ÊýÁ¿
	TThostFtdcVolumeType	Volume;
	///×éºÏÖ¸Áî·½Ïò
	TThostFtdcCombDirectionType	CombDirection;
	///Í¶»úÌ×±£±êÖ¾
	TThostFtdcHedgeFlagType	HedgeFlag;
	///±¾µØÉêÇë×éºÏ±àºÅ
	TThostFtdcOrderLocalIDType	ActionLocalID;
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///»áÔ±´úÂë
	TThostFtdcParticipantIDType	ParticipantID;
	///¿Í»§´úÂë
	TThostFtdcClientIDType	ClientID;
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldExchangeInstIDType	reserve1;
	///½»Ò×Ëù½»Ò×Ô±´úÂë
	TThostFtdcTraderIDType	TraderID;
	///°²×°±àºÅ
	TThostFtdcInstallIDType	InstallID;
	///×éºÏ×´Ì¬
	TThostFtdcOrderActionStatusType	ActionStatus;
	///±¨µ¥ÌáÊ¾ÐòºÅ
	TThostFtdcSequenceNoType	NotifySequence;
	///½»Ò×ÈÕ
	TThostFtdcDateType	TradingDay;
	///½áËã±àºÅ
	TThostFtdcSettlementIDType	SettlementID;
	///ÐòºÅ
	TThostFtdcSequenceNoType	SequenceNo;
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldIPAddressType	reserve2;
	///MacµØÖ·
	TThostFtdcMacAddressType	MacAddress;
	///×éºÏ±àºÅ
	TThostFtdcTradeIDType	ComTradeID;
	///ÓªÒµ²¿±àºÅ
	TThostFtdcBranchIDType	BranchID;
	///ºÏÔ¼ÔÚ½»Ò×ËùµÄ´úÂë
	TThostFtdcExchangeInstIDType	ExchangeInstID;
	///IPµØÖ·
	TThostFtdcIPAddressType	IPAddress;
};

///½»Ò×ËùÉêÇë×éºÏ²éÑ¯
struct CThostFtdcQryExchangeCombActionField
{
	///»áÔ±´úÂë
	TThostFtdcParticipantIDType	ParticipantID;
	///¿Í»§´úÂë
	TThostFtdcClientIDType	ClientID;
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldExchangeInstIDType	reserve1;
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///½»Ò×Ëù½»Ò×Ô±´úÂë
	TThostFtdcTraderIDType	TraderID;
	///ºÏÔ¼ÔÚ½»Ò×ËùµÄ´úÂë
	TThostFtdcExchangeInstIDType	ExchangeInstID;
};

///²úÆ·±¨¼Û»ãÂÊ
struct CThostFtdcProductExchRateField
{
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldInstrumentIDType	reserve1;
	///±¨¼Û±ÒÖÖÀàÐÍ
	TThostFtdcCurrencyIDType	QuoteCurrencyID;
	///»ãÂÊ
	TThostFtdcExchangeRateType	ExchangeRate;
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///²úÆ·´úÂë
	TThostFtdcInstrumentIDType	ProductID;
};

///²úÆ·±¨¼Û»ãÂÊ²éÑ¯
struct CThostFtdcQryProductExchRateField
{
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldInstrumentIDType	reserve1;
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///²úÆ·´úÂë
	TThostFtdcInstrumentIDType	ProductID;
};

///²éÑ¯Ñ¯¼Û¼Û²î²ÎÊý
struct CThostFtdcQryForQuoteParamField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldInstrumentIDType	reserve1;
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///ºÏÔ¼´úÂë
	TThostFtdcInstrumentIDType	InstrumentID;
};

///Ñ¯¼Û¼Û²î²ÎÊý
struct CThostFtdcForQuoteParamField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldInstrumentIDType	reserve1;
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///×îÐÂ¼Û
	TThostFtdcPriceType	LastPrice;
	///¼Û²î
	TThostFtdcPriceType	PriceInterval;
	///ºÏÔ¼´úÂë
	TThostFtdcInstrumentIDType	InstrumentID;
};

///µ±Ç°×öÊÐÉÌÆÚÈ¨ºÏÔ¼ÊÖÐø·ÑµÄÏêÏ¸ÄÚÈÝ
struct CThostFtdcMMOptionInstrCommRateField
{
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldInstrumentIDType	reserve1;
	///Í¶×ÊÕß·¶Î§
	TThostFtdcInvestorRangeType	InvestorRange;
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///Í¶×ÊÕß´úÂë
	TThostFtdcInvestorIDType	InvestorID;
	///¿ª²ÖÊÖÐø·ÑÂÊ
	TThostFtdcRatioType	OpenRatioByMoney;
	///¿ª²ÖÊÖÐø·Ñ
	TThostFtdcRatioType	OpenRatioByVolume;
	///Æ½²ÖÊÖÐø·ÑÂÊ
	TThostFtdcRatioType	CloseRatioByMoney;
	///Æ½²ÖÊÖÐø·Ñ
	TThostFtdcRatioType	CloseRatioByVolume;
	///Æ½½ñÊÖÐø·ÑÂÊ
	TThostFtdcRatioType	CloseTodayRatioByMoney;
	///Æ½½ñÊÖÐø·Ñ
	TThostFtdcRatioType	CloseTodayRatioByVolume;
	///Ö´ÐÐÊÖÐø·ÑÂÊ
	TThostFtdcRatioType	StrikeRatioByMoney;
	///Ö´ÐÐÊÖÐø·Ñ
	TThostFtdcRatioType	StrikeRatioByVolume;
	///ºÏÔ¼´úÂë
	TThostFtdcInstrumentIDType	InstrumentID;
};

///×öÊÐÉÌÆÚÈ¨ÊÖÐø·ÑÂÊ²éÑ¯
struct CThostFtdcQryMMOptionInstrCommRateField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///Í¶×ÊÕß´úÂë
	TThostFtdcInvestorIDType	InvestorID;
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldInstrumentIDType	reserve1;
	///ºÏÔ¼´úÂë
	TThostFtdcInstrumentIDType	InstrumentID;
};

///×öÊÐÉÌºÏÔ¼ÊÖÐø·ÑÂÊ
struct CThostFtdcMMInstrumentCommissionRateField
{
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldInstrumentIDType	reserve1;
	///Í¶×ÊÕß·¶Î§
	TThostFtdcInvestorRangeType	InvestorRange;
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///Í¶×ÊÕß´úÂë
	TThostFtdcInvestorIDType	InvestorID;
	///¿ª²ÖÊÖÐø·ÑÂÊ
	TThostFtdcRatioType	OpenRatioByMoney;
	///¿ª²ÖÊÖÐø·Ñ
	TThostFtdcRatioType	OpenRatioByVolume;
	///Æ½²ÖÊÖÐø·ÑÂÊ
	TThostFtdcRatioType	CloseRatioByMoney;
	///Æ½²ÖÊÖÐø·Ñ
	TThostFtdcRatioType	CloseRatioByVolume;
	///Æ½½ñÊÖÐø·ÑÂÊ
	TThostFtdcRatioType	CloseTodayRatioByMoney;
	///Æ½½ñÊÖÐø·Ñ
	TThostFtdcRatioType	CloseTodayRatioByVolume;
	///ºÏÔ¼´úÂë
	TThostFtdcInstrumentIDType	InstrumentID;
};

///²éÑ¯×öÊÐÉÌºÏÔ¼ÊÖÐø·ÑÂÊ
struct CThostFtdcQryMMInstrumentCommissionRateField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///Í¶×ÊÕß´úÂë
	TThostFtdcInvestorIDType	InvestorID;
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldInstrumentIDType	reserve1;
	///ºÏÔ¼´úÂë
	TThostFtdcInstrumentIDType	InstrumentID;
};

///µ±Ç°±¨µ¥ÊÖÐø·ÑµÄÏêÏ¸ÄÚÈÝ
struct CThostFtdcInstrumentOrderCommRateField
{
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldInstrumentIDType	reserve1;
	///Í¶×ÊÕß·¶Î§
	TThostFtdcInvestorRangeType	InvestorRange;
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///Í¶×ÊÕß´úÂë
	TThostFtdcInvestorIDType	InvestorID;
	///Í¶»úÌ×±£±êÖ¾
	TThostFtdcHedgeFlagType	HedgeFlag;
	///±¨µ¥ÊÖÐø·Ñ
	TThostFtdcRatioType	OrderCommByVolume;
	///³·µ¥ÊÖÐø·Ñ
	TThostFtdcRatioType	OrderActionCommByVolume;
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///Í¶×Êµ¥Ôª´úÂë
	TThostFtdcInvestUnitIDType	InvestUnitID;
	///ºÏÔ¼´úÂë
	TThostFtdcInstrumentIDType	InstrumentID;
	///±¨µ¥ÊÖÐø·Ñ
	TThostFtdcRatioType	OrderCommByTrade;
	///³·µ¥ÊÖÐø·Ñ
	TThostFtdcRatioType	OrderActionCommByTrade;
};

///±¨µ¥ÊÖÐø·ÑÂÊ²éÑ¯
struct CThostFtdcQryInstrumentOrderCommRateField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///Í¶×ÊÕß´úÂë
	TThostFtdcInvestorIDType	InvestorID;
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldInstrumentIDType	reserve1;
	///ºÏÔ¼´úÂë
	TThostFtdcInstrumentIDType	InstrumentID;
};

///½»Ò×²ÎÊý
struct CThostFtdcTradeParamField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///²ÎÊý´úÂë
	TThostFtdcTradeParamIDType	TradeParamID;
	///²ÎÊý´úÂëÖµ
	TThostFtdcSettlementParamValueType	TradeParamValue;
	///±¸×¢
	TThostFtdcMemoType	Memo;
};

///ºÏÔ¼±£Ö¤½ðÂÊµ÷Õû
struct CThostFtdcInstrumentMarginRateULField
{
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldInstrumentIDType	reserve1;
	///Í¶×ÊÕß·¶Î§
	TThostFtdcInvestorRangeType	InvestorRange;
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///Í¶×ÊÕß´úÂë
	TThostFtdcInvestorIDType	InvestorID;
	///Í¶»úÌ×±£±êÖ¾
	TThostFtdcHedgeFlagType	HedgeFlag;
	///¶àÍ·±£Ö¤½ðÂÊ
	TThostFtdcRatioType	LongMarginRatioByMoney;
	///¶àÍ·±£Ö¤½ð·Ñ
	TThostFtdcMoneyType	LongMarginRatioByVolume;
	///¿ÕÍ·±£Ö¤½ðÂÊ
	TThostFtdcRatioType	ShortMarginRatioByMoney;
	///¿ÕÍ·±£Ö¤½ð·Ñ
	TThostFtdcMoneyType	ShortMarginRatioByVolume;
	///ºÏÔ¼´úÂë
	TThostFtdcInstrumentIDType	InstrumentID;
};

///ÆÚ»õ³Ö²ÖÏÞÖÆ²ÎÊý
struct CThostFtdcFutureLimitPosiParamField
{
	///Í¶×ÊÕß·¶Î§
	TThostFtdcInvestorRangeType	InvestorRange;
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///Í¶×ÊÕß´úÂë
	TThostFtdcInvestorIDType	InvestorID;
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldInstrumentIDType	reserve1;
	///µ±ÈÕÍ¶»ú¿ª²ÖÊýÁ¿ÏÞÖÆ
	TThostFtdcVolumeType	SpecOpenVolume;
	///µ±ÈÕÌ×Àû¿ª²ÖÊýÁ¿ÏÞÖÆ
	TThostFtdcVolumeType	ArbiOpenVolume;
	///µ±ÈÕÍ¶»ú+Ì×Àû¿ª²ÖÊýÁ¿ÏÞÖÆ
	TThostFtdcVolumeType	OpenVolume;
	///²úÆ·´úÂë
	TThostFtdcInstrumentIDType	ProductID;
};

///½ûÖ¹µÇÂ¼IP
struct CThostFtdcLoginForbiddenIPField
{
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldIPAddressType	reserve1;
	///IPµØÖ·
	TThostFtdcIPAddressType	IPAddress;
};

///IPÁÐ±í
struct CThostFtdcIPListField
{
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldIPAddressType	reserve1;
	///ÊÇ·ñ°×Ãûµ¥
	TThostFtdcBoolType	IsWhite;
	///IPµØÖ·
	TThostFtdcIPAddressType	IPAddress;
};

///ÊäÈëµÄÆÚÈ¨×Ô¶Ô³å
struct CThostFtdcInputOptionSelfCloseField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///Í¶×ÊÕß´úÂë
	TThostFtdcInvestorIDType	InvestorID;
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldInstrumentIDType	reserve1;
	///ÆÚÈ¨×Ô¶Ô³åÒýÓÃ
	TThostFtdcOrderRefType	OptionSelfCloseRef;
	///ÓÃ»§´úÂë
	TThostFtdcUserIDType	UserID;
	///ÊýÁ¿
	TThostFtdcVolumeType	Volume;
	///ÇëÇó±àºÅ
	TThostFtdcRequestIDType	RequestID;
	///ÒµÎñµ¥Ôª
	TThostFtdcBusinessUnitType	BusinessUnit;
	///Í¶»úÌ×±£±êÖ¾
	TThostFtdcHedgeFlagType	HedgeFlag;
	///ÆÚÈ¨ÐÐÈ¨µÄÍ·´çÊÇ·ñ×Ô¶Ô³å
	TThostFtdcOptSelfCloseFlagType	OptSelfCloseFlag;
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///Í¶×Êµ¥Ôª´úÂë
	TThostFtdcInvestUnitIDType	InvestUnitID;
	///×Ê½ðÕËºÅ
	TThostFtdcAccountIDType	AccountID;
	///±ÒÖÖ´úÂë
	TThostFtdcCurrencyIDType	CurrencyID;
	///½»Ò×±àÂë
	TThostFtdcClientIDType	ClientID;
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldIPAddressType	reserve2;
	///MacµØÖ·
	TThostFtdcMacAddressType	MacAddress;
	///ºÏÔ¼´úÂë
	TThostFtdcInstrumentIDType	InstrumentID;
	///IPµØÖ·
	TThostFtdcIPAddressType	IPAddress;
};

///ÊäÈëÆÚÈ¨×Ô¶Ô³å²Ù×÷
struct CThostFtdcInputOptionSelfCloseActionField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///Í¶×ÊÕß´úÂë
	TThostFtdcInvestorIDType	InvestorID;
	///ÆÚÈ¨×Ô¶Ô³å²Ù×÷ÒýÓÃ
	TThostFtdcOrderActionRefType	OptionSelfCloseActionRef;
	///ÆÚÈ¨×Ô¶Ô³åÒýÓÃ
	TThostFtdcOrderRefType	OptionSelfCloseRef;
	///ÇëÇó±àºÅ
	TThostFtdcRequestIDType	RequestID;
	///Ç°ÖÃ±àºÅ
	TThostFtdcFrontIDType	FrontID;
	///»á»°±àºÅ
	TThostFtdcSessionIDType	SessionID;
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///ÆÚÈ¨×Ô¶Ô³å²Ù×÷±àºÅ
	TThostFtdcOrderSysIDType	OptionSelfCloseSysID;
	///²Ù×÷±êÖ¾
	TThostFtdcActionFlagType	ActionFlag;
	///ÓÃ»§´úÂë
	TThostFtdcUserIDType	UserID;
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldInstrumentIDType	reserve1;
	///Í¶×Êµ¥Ôª´úÂë
	TThostFtdcInvestUnitIDType	InvestUnitID;
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldIPAddressType	reserve2;
	///MacµØÖ·
	TThostFtdcMacAddressType	MacAddress;
	///ºÏÔ¼´úÂë
	TThostFtdcInstrumentIDType	InstrumentID;
	///IPµØÖ·
	TThostFtdcIPAddressType	IPAddress;
};

///ÆÚÈ¨×Ô¶Ô³å
struct CThostFtdcOptionSelfCloseField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///Í¶×ÊÕß´úÂë
	TThostFtdcInvestorIDType	InvestorID;
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldInstrumentIDType	reserve1;
	///ÆÚÈ¨×Ô¶Ô³åÒýÓÃ
	TThostFtdcOrderRefType	OptionSelfCloseRef;
	///ÓÃ»§´úÂë
	TThostFtdcUserIDType	UserID;
	///ÊýÁ¿
	TThostFtdcVolumeType	Volume;
	///ÇëÇó±àºÅ
	TThostFtdcRequestIDType	RequestID;
	///ÒµÎñµ¥Ôª
	TThostFtdcBusinessUnitType	BusinessUnit;
	///Í¶»úÌ×±£±êÖ¾
	TThostFtdcHedgeFlagType	HedgeFlag;
	///ÆÚÈ¨ÐÐÈ¨µÄÍ·´çÊÇ·ñ×Ô¶Ô³å
	TThostFtdcOptSelfCloseFlagType	OptSelfCloseFlag;
	///±¾µØÆÚÈ¨×Ô¶Ô³å±àºÅ
	TThostFtdcOrderLocalIDType	OptionSelfCloseLocalID;
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///»áÔ±´úÂë
	TThostFtdcParticipantIDType	ParticipantID;
	///¿Í»§´úÂë
	TThostFtdcClientIDType	ClientID;
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldExchangeInstIDType	reserve2;
	///½»Ò×Ëù½»Ò×Ô±´úÂë
	TThostFtdcTraderIDType	TraderID;
	///°²×°±àºÅ
	TThostFtdcInstallIDType	InstallID;
	///ÆÚÈ¨×Ô¶Ô³åÌá½»×´Ì¬
	TThostFtdcOrderSubmitStatusType	OrderSubmitStatus;
	///±¨µ¥ÌáÊ¾ÐòºÅ
	TThostFtdcSequenceNoType	NotifySequence;
	///½»Ò×ÈÕ
	TThostFtdcDateType	TradingDay;
	///½áËã±àºÅ
	TThostFtdcSettlementIDType	SettlementID;
	///ÆÚÈ¨×Ô¶Ô³å±àºÅ
	TThostFtdcOrderSysIDType	OptionSelfCloseSysID;
	///±¨µ¥ÈÕÆÚ
	TThostFtdcDateType	InsertDate;
	///²åÈëÊ±¼ä
	TThostFtdcTimeType	InsertTime;
	///³·ÏúÊ±¼ä
	TThostFtdcTimeType	CancelTime;
	///×Ô¶Ô³å½á¹û
	TThostFtdcExecResultType	ExecResult;
	///½áËã»áÔ±±àºÅ
	TThostFtdcParticipantIDType	ClearingPartID;
	///ÐòºÅ
	TThostFtdcSequenceNoType	SequenceNo;
	///Ç°ÖÃ±àºÅ
	TThostFtdcFrontIDType	FrontID;
	///»á»°±àºÅ
	TThostFtdcSessionIDType	SessionID;
	///ÓÃ»§¶Ë²úÆ·ÐÅÏ¢
	TThostFtdcProductInfoType	UserProductInfo;
	///×´Ì¬ÐÅÏ¢
	TThostFtdcErrorMsgType	StatusMsg;
	///²Ù×÷ÓÃ»§´úÂë
	TThostFtdcUserIDType	ActiveUserID;
	///¾­¼Í¹«Ë¾±¨µ¥±àºÅ
	TThostFtdcSequenceNoType	BrokerOptionSelfCloseSeq;
	///ÓªÒµ²¿±àºÅ
	TThostFtdcBranchIDType	BranchID;
	///Í¶×Êµ¥Ôª´úÂë
	TThostFtdcInvestUnitIDType	InvestUnitID;
	///×Ê½ðÕËºÅ
	TThostFtdcAccountIDType	AccountID;
	///±ÒÖÖ´úÂë
	TThostFtdcCurrencyIDType	CurrencyID;
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldIPAddressType	reserve3;
	///MacµØÖ·
	TThostFtdcMacAddressType	MacAddress;
	///ºÏÔ¼´úÂë
	TThostFtdcInstrumentIDType	InstrumentID;
	///ºÏÔ¼ÔÚ½»Ò×ËùµÄ´úÂë
	TThostFtdcExchangeInstIDType	ExchangeInstID;
	///IPµØÖ·
	TThostFtdcIPAddressType	IPAddress;
};

///ÆÚÈ¨×Ô¶Ô³å²Ù×÷
struct CThostFtdcOptionSelfCloseActionField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///Í¶×ÊÕß´úÂë
	TThostFtdcInvestorIDType	InvestorID;
	///ÆÚÈ¨×Ô¶Ô³å²Ù×÷ÒýÓÃ
	TThostFtdcOrderActionRefType	OptionSelfCloseActionRef;
	///ÆÚÈ¨×Ô¶Ô³åÒýÓÃ
	TThostFtdcOrderRefType	OptionSelfCloseRef;
	///ÇëÇó±àºÅ
	TThostFtdcRequestIDType	RequestID;
	///Ç°ÖÃ±àºÅ
	TThostFtdcFrontIDType	FrontID;
	///»á»°±àºÅ
	TThostFtdcSessionIDType	SessionID;
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///ÆÚÈ¨×Ô¶Ô³å²Ù×÷±àºÅ
	TThostFtdcOrderSysIDType	OptionSelfCloseSysID;
	///²Ù×÷±êÖ¾
	TThostFtdcActionFlagType	ActionFlag;
	///²Ù×÷ÈÕÆÚ
	TThostFtdcDateType	ActionDate;
	///²Ù×÷Ê±¼ä
	TThostFtdcTimeType	ActionTime;
	///½»Ò×Ëù½»Ò×Ô±´úÂë
	TThostFtdcTraderIDType	TraderID;
	///°²×°±àºÅ
	TThostFtdcInstallIDType	InstallID;
	///±¾µØÆÚÈ¨×Ô¶Ô³å±àºÅ
	TThostFtdcOrderLocalIDType	OptionSelfCloseLocalID;
	///²Ù×÷±¾µØ±àºÅ
	TThostFtdcOrderLocalIDType	ActionLocalID;
	///»áÔ±´úÂë
	TThostFtdcParticipantIDType	ParticipantID;
	///¿Í»§´úÂë
	TThostFtdcClientIDType	ClientID;
	///ÒµÎñµ¥Ôª
	TThostFtdcBusinessUnitType	BusinessUnit;
	///±¨µ¥²Ù×÷×´Ì¬
	TThostFtdcOrderActionStatusType	OrderActionStatus;
	///ÓÃ»§´úÂë
	TThostFtdcUserIDType	UserID;
	///×´Ì¬ÐÅÏ¢
	TThostFtdcErrorMsgType	StatusMsg;
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldInstrumentIDType	reserve1;
	///ÓªÒµ²¿±àºÅ
	TThostFtdcBranchIDType	BranchID;
	///Í¶×Êµ¥Ôª´úÂë
	TThostFtdcInvestUnitIDType	InvestUnitID;
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldIPAddressType	reserve2;
	///MacµØÖ·
	TThostFtdcMacAddressType	MacAddress;
	///ºÏÔ¼´úÂë
	TThostFtdcInstrumentIDType	InstrumentID;
	///IPµØÖ·
	TThostFtdcIPAddressType	IPAddress;
};

///ÆÚÈ¨×Ô¶Ô³å²éÑ¯
struct CThostFtdcQryOptionSelfCloseField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///Í¶×ÊÕß´úÂë
	TThostFtdcInvestorIDType	InvestorID;
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldInstrumentIDType	reserve1;
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///ÆÚÈ¨×Ô¶Ô³å±àºÅ
	TThostFtdcOrderSysIDType	OptionSelfCloseSysID;
	///¿ªÊ¼Ê±¼ä
	TThostFtdcTimeType	InsertTimeStart;
	///½áÊøÊ±¼ä
	TThostFtdcTimeType	InsertTimeEnd;
	///ºÏÔ¼´úÂë
	TThostFtdcInstrumentIDType	InstrumentID;
};

///½»Ò×ËùÆÚÈ¨×Ô¶Ô³åÐÅÏ¢
struct CThostFtdcExchangeOptionSelfCloseField
{
	///ÊýÁ¿
	TThostFtdcVolumeType	Volume;
	///ÇëÇó±àºÅ
	TThostFtdcRequestIDType	RequestID;
	///ÒµÎñµ¥Ôª
	TThostFtdcBusinessUnitType	BusinessUnit;
	///Í¶»úÌ×±£±êÖ¾
	TThostFtdcHedgeFlagType	HedgeFlag;
	///ÆÚÈ¨ÐÐÈ¨µÄÍ·´çÊÇ·ñ×Ô¶Ô³å
	TThostFtdcOptSelfCloseFlagType	OptSelfCloseFlag;
	///±¾µØÆÚÈ¨×Ô¶Ô³å±àºÅ
	TThostFtdcOrderLocalIDType	OptionSelfCloseLocalID;
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///»áÔ±´úÂë
	TThostFtdcParticipantIDType	ParticipantID;
	///¿Í»§´úÂë
	TThostFtdcClientIDType	ClientID;
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldExchangeInstIDType	reserve1;
	///½»Ò×Ëù½»Ò×Ô±´úÂë
	TThostFtdcTraderIDType	TraderID;
	///°²×°±àºÅ
	TThostFtdcInstallIDType	InstallID;
	///ÆÚÈ¨×Ô¶Ô³åÌá½»×´Ì¬
	TThostFtdcOrderSubmitStatusType	OrderSubmitStatus;
	///±¨µ¥ÌáÊ¾ÐòºÅ
	TThostFtdcSequenceNoType	NotifySequence;
	///½»Ò×ÈÕ
	TThostFtdcDateType	TradingDay;
	///½áËã±àºÅ
	TThostFtdcSettlementIDType	SettlementID;
	///ÆÚÈ¨×Ô¶Ô³å±àºÅ
	TThostFtdcOrderSysIDType	OptionSelfCloseSysID;
	///±¨µ¥ÈÕÆÚ
	TThostFtdcDateType	InsertDate;
	///²åÈëÊ±¼ä
	TThostFtdcTimeType	InsertTime;
	///³·ÏúÊ±¼ä
	TThostFtdcTimeType	CancelTime;
	///×Ô¶Ô³å½á¹û
	TThostFtdcExecResultType	ExecResult;
	///½áËã»áÔ±±àºÅ
	TThostFtdcParticipantIDType	ClearingPartID;
	///ÐòºÅ
	TThostFtdcSequenceNoType	SequenceNo;
	///ÓªÒµ²¿±àºÅ
	TThostFtdcBranchIDType	BranchID;
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldIPAddressType	reserve2;
	///MacµØÖ·
	TThostFtdcMacAddressType	MacAddress;
	///ºÏÔ¼ÔÚ½»Ò×ËùµÄ´úÂë
	TThostFtdcExchangeInstIDType	ExchangeInstID;
	///IPµØÖ·
	TThostFtdcIPAddressType	IPAddress;
};

///ÆÚÈ¨×Ô¶Ô³å²Ù×÷²éÑ¯
struct CThostFtdcQryOptionSelfCloseActionField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///Í¶×ÊÕß´úÂë
	TThostFtdcInvestorIDType	InvestorID;
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
};

///½»Ò×ËùÆÚÈ¨×Ô¶Ô³å²Ù×÷
struct CThostFtdcExchangeOptionSelfCloseActionField
{
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///ÆÚÈ¨×Ô¶Ô³å²Ù×÷±àºÅ
	TThostFtdcOrderSysIDType	OptionSelfCloseSysID;
	///²Ù×÷±êÖ¾
	TThostFtdcActionFlagType	ActionFlag;
	///²Ù×÷ÈÕÆÚ
	TThostFtdcDateType	ActionDate;
	///²Ù×÷Ê±¼ä
	TThostFtdcTimeType	ActionTime;
	///½»Ò×Ëù½»Ò×Ô±´úÂë
	TThostFtdcTraderIDType	TraderID;
	///°²×°±àºÅ
	TThostFtdcInstallIDType	InstallID;
	///±¾µØÆÚÈ¨×Ô¶Ô³å±àºÅ
	TThostFtdcOrderLocalIDType	OptionSelfCloseLocalID;
	///²Ù×÷±¾µØ±àºÅ
	TThostFtdcOrderLocalIDType	ActionLocalID;
	///»áÔ±´úÂë
	TThostFtdcParticipantIDType	ParticipantID;
	///¿Í»§´úÂë
	TThostFtdcClientIDType	ClientID;
	///ÒµÎñµ¥Ôª
	TThostFtdcBusinessUnitType	BusinessUnit;
	///±¨µ¥²Ù×÷×´Ì¬
	TThostFtdcOrderActionStatusType	OrderActionStatus;
	///ÓÃ»§´úÂë
	TThostFtdcUserIDType	UserID;
	///ÓªÒµ²¿±àºÅ
	TThostFtdcBranchIDType	BranchID;
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldIPAddressType	reserve1;
	///MacµØÖ·
	TThostFtdcMacAddressType	MacAddress;
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldExchangeInstIDType	reserve2;
	///ÆÚÈ¨ÐÐÈ¨µÄÍ·´çÊÇ·ñ×Ô¶Ô³å
	TThostFtdcOptSelfCloseFlagType	OptSelfCloseFlag;
	///IPµØÖ·
	TThostFtdcIPAddressType	IPAddress;
	///ºÏÔ¼ÔÚ½»Ò×ËùµÄ´úÂë
	TThostFtdcExchangeInstIDType	ExchangeInstID;
};

///ÑÓÊ±»»»ãÍ¬²½
struct CThostFtdcSyncDelaySwapField
{
	///»»»ãÁ÷Ë®ºÅ
	TThostFtdcDepositSeqNoType	DelaySwapSeqNo;
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///Í¶×ÊÕß´úÂë
	TThostFtdcInvestorIDType	InvestorID;
	///Ô´±ÒÖÖ
	TThostFtdcCurrencyIDType	FromCurrencyID;
	///Ô´½ð¶î
	TThostFtdcMoneyType	FromAmount;
	///Ô´»»»ã¶³½á½ð¶î(¿ÉÓÃ¶³½á)
	TThostFtdcMoneyType	FromFrozenSwap;
	///Ô´Ê£Óà»»»ã¶î¶È(¿ÉÌá¶³½á)
	TThostFtdcMoneyType	FromRemainSwap;
	///Ä¿±ê±ÒÖÖ
	TThostFtdcCurrencyIDType	ToCurrencyID;
	///Ä¿±ê½ð¶î
	TThostFtdcMoneyType	ToAmount;
	///ÊÇ·ñÊÖ¹¤»»»ã
	TThostFtdcBoolType	IsManualSwap;
	///ÊÇ·ñ½«ËùÓÐÍâ±ÒµÄÊ£Óà»»»ã¶î¶ÈÉèÖÃÎª0
	TThostFtdcBoolType	IsAllRemainSetZero;
};

///²éÑ¯ÑÓÊ±»»»ãÍ¬²½
struct CThostFtdcQrySyncDelaySwapField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///ÑÓÊ±»»»ãÁ÷Ë®ºÅ
	TThostFtdcDepositSeqNoType	DelaySwapSeqNo;
};

///Í¶×Êµ¥Ôª
struct CThostFtdcInvestUnitField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///Í¶×ÊÕß´úÂë
	TThostFtdcInvestorIDType	InvestorID;
	///Í¶×Êµ¥Ôª´úÂë
	TThostFtdcInvestUnitIDType	InvestUnitID;
	///Í¶×ÊÕßµ¥ÔªÃû³Æ
	TThostFtdcPartyNameType	InvestorUnitName;
	///Í¶×ÊÕß·Ö×é´úÂë
	TThostFtdcInvestorIDType	InvestorGroupID;
	///ÊÖÐø·ÑÂÊÄ£°å´úÂë
	TThostFtdcInvestorIDType	CommModelID;
	///±£Ö¤½ðÂÊÄ£°å´úÂë
	TThostFtdcInvestorIDType	MarginModelID;
	///×Ê½ðÕËºÅ
	TThostFtdcAccountIDType	AccountID;
	///±ÒÖÖ´úÂë
	TThostFtdcCurrencyIDType	CurrencyID;
};

///²éÑ¯Í¶×Êµ¥Ôª
struct CThostFtdcQryInvestUnitField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///Í¶×ÊÕß´úÂë
	TThostFtdcInvestorIDType	InvestorID;
	///Í¶×Êµ¥Ôª´úÂë
	TThostFtdcInvestUnitIDType	InvestUnitID;
};

///¶þ¼¶´úÀíÉÌ×Ê½ðÐ£ÑéÄ£Ê½
struct CThostFtdcSecAgentCheckModeField
{
	///Í¶×ÊÕß´úÂë
	TThostFtdcInvestorIDType	InvestorID;
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///±ÒÖÖ
	TThostFtdcCurrencyIDType	CurrencyID;
	///¾³ÍâÖÐ½é»ú¹¹×Ê½ðÕÊºÅ
	TThostFtdcAccountIDType	BrokerSecAgentID;
	///ÊÇ·ñÐèÒªÐ£Ñé×Ô¼ºµÄ×Ê½ðÕË»§
	TThostFtdcBoolType	CheckSelfAccount;
};

///¶þ¼¶´úÀíÉÌÐÅÏ¢
struct CThostFtdcSecAgentTradeInfoField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///¾³ÍâÖÐ½é»ú¹¹×Ê½ðÕÊºÅ
	TThostFtdcAccountIDType	BrokerSecAgentID;
	///Í¶×ÊÕß´úÂë
	TThostFtdcInvestorIDType	InvestorID;
	///¶þ¼¶´úÀíÉÌÐÕÃû
	TThostFtdcLongIndividualNameType	LongCustomerName;
};

///ÊÐ³¡ÐÐÇé
struct CThostFtdcMarketDataField
{
	///½»Ò×ÈÕ
	TThostFtdcDateType	TradingDay;
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldInstrumentIDType	reserve1;
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldExchangeInstIDType	reserve2;
	///×îÐÂ¼Û
	TThostFtdcPriceType	LastPrice;
	///ÉÏ´Î½áËã¼Û
	TThostFtdcPriceType	PreSettlementPrice;
	///×òÊÕÅÌ
	TThostFtdcPriceType	PreClosePrice;
	///×ò³Ö²ÖÁ¿
	TThostFtdcLargeVolumeType	PreOpenInterest;
	///½ñ¿ªÅÌ
	TThostFtdcPriceType	OpenPrice;
	///×î¸ß¼Û
	TThostFtdcPriceType	HighestPrice;
	///×îµÍ¼Û
	TThostFtdcPriceType	LowestPrice;
	///ÊýÁ¿
	TThostFtdcVolumeType	Volume;
	///³É½»½ð¶î
	TThostFtdcMoneyType	Turnover;
	///³Ö²ÖÁ¿
	TThostFtdcLargeVolumeType	OpenInterest;
	///½ñÊÕÅÌ
	TThostFtdcPriceType	ClosePrice;
	///±¾´Î½áËã¼Û
	TThostFtdcPriceType	SettlementPrice;
	///ÕÇÍ£°å¼Û
	TThostFtdcPriceType	UpperLimitPrice;
	///µøÍ£°å¼Û
	TThostFtdcPriceType	LowerLimitPrice;
	///×òÐéÊµ¶È
	TThostFtdcRatioType	PreDelta;
	///½ñÐéÊµ¶È
	TThostFtdcRatioType	CurrDelta;
	///×îºóÐÞ¸ÄÊ±¼ä
	TThostFtdcTimeType	UpdateTime;
	///×îºóÐÞ¸ÄºÁÃë
	TThostFtdcMillisecType	UpdateMillisec;
	///ÒµÎñÈÕÆÚ
	TThostFtdcDateType	ActionDay;
	///ºÏÔ¼´úÂë
	TThostFtdcInstrumentIDType	InstrumentID;
	///ºÏÔ¼ÔÚ½»Ò×ËùµÄ´úÂë
	TThostFtdcExchangeInstIDType	ExchangeInstID;
};

///ÐÐÇé»ù´¡ÊôÐÔ
struct CThostFtdcMarketDataBaseField
{
	///½»Ò×ÈÕ
	TThostFtdcDateType	TradingDay;
	///ÉÏ´Î½áËã¼Û
	TThostFtdcPriceType	PreSettlementPrice;
	///×òÊÕÅÌ
	TThostFtdcPriceType	PreClosePrice;
	///×ò³Ö²ÖÁ¿
	TThostFtdcLargeVolumeType	PreOpenInterest;
	///×òÐéÊµ¶È
	TThostFtdcRatioType	PreDelta;
};

///ÐÐÇé¾²Ì¬ÊôÐÔ
struct CThostFtdcMarketDataStaticField
{
	///½ñ¿ªÅÌ
	TThostFtdcPriceType	OpenPrice;
	///×î¸ß¼Û
	TThostFtdcPriceType	HighestPrice;
	///×îµÍ¼Û
	TThostFtdcPriceType	LowestPrice;
	///½ñÊÕÅÌ
	TThostFtdcPriceType	ClosePrice;
	///ÕÇÍ£°å¼Û
	TThostFtdcPriceType	UpperLimitPrice;
	///µøÍ£°å¼Û
	TThostFtdcPriceType	LowerLimitPrice;
	///±¾´Î½áËã¼Û
	TThostFtdcPriceType	SettlementPrice;
	///½ñÐéÊµ¶È
	TThostFtdcRatioType	CurrDelta;
};

///ÐÐÇé×îÐÂ³É½»ÊôÐÔ
struct CThostFtdcMarketDataLastMatchField
{
	///×îÐÂ¼Û
	TThostFtdcPriceType	LastPrice;
	///ÊýÁ¿
	TThostFtdcVolumeType	Volume;
	///³É½»½ð¶î
	TThostFtdcMoneyType	Turnover;
	///³Ö²ÖÁ¿
	TThostFtdcLargeVolumeType	OpenInterest;
};

///ÐÐÇé×îÓÅ¼ÛÊôÐÔ
struct CThostFtdcMarketDataBestPriceField
{
	///ÉêÂò¼ÛÒ»
	TThostFtdcPriceType	BidPrice1;
	///ÉêÂòÁ¿Ò»
	TThostFtdcVolumeType	BidVolume1;
	///ÉêÂô¼ÛÒ»
	TThostFtdcPriceType	AskPrice1;
	///ÉêÂôÁ¿Ò»
	TThostFtdcVolumeType	AskVolume1;
};

///ÐÐÇéÉêÂò¶þ¡¢ÈýÊôÐÔ
struct CThostFtdcMarketDataBid23Field
{
	///ÉêÂò¼Û¶þ
	TThostFtdcPriceType	BidPrice2;
	///ÉêÂòÁ¿¶þ
	TThostFtdcVolumeType	BidVolume2;
	///ÉêÂò¼ÛÈý
	TThostFtdcPriceType	BidPrice3;
	///ÉêÂòÁ¿Èý
	TThostFtdcVolumeType	BidVolume3;
};

///ÐÐÇéÉêÂô¶þ¡¢ÈýÊôÐÔ
struct CThostFtdcMarketDataAsk23Field
{
	///ÉêÂô¼Û¶þ
	TThostFtdcPriceType	AskPrice2;
	///ÉêÂôÁ¿¶þ
	TThostFtdcVolumeType	AskVolume2;
	///ÉêÂô¼ÛÈý
	TThostFtdcPriceType	AskPrice3;
	///ÉêÂôÁ¿Èý
	TThostFtdcVolumeType	AskVolume3;
};

///ÐÐÇéÉêÂòËÄ¡¢ÎåÊôÐÔ
struct CThostFtdcMarketDataBid45Field
{
	///ÉêÂò¼ÛËÄ
	TThostFtdcPriceType	BidPrice4;
	///ÉêÂòÁ¿ËÄ
	TThostFtdcVolumeType	BidVolume4;
	///ÉêÂò¼ÛÎå
	TThostFtdcPriceType	BidPrice5;
	///ÉêÂòÁ¿Îå
	TThostFtdcVolumeType	BidVolume5;
};

///ÐÐÇéÉêÂôËÄ¡¢ÎåÊôÐÔ
struct CThostFtdcMarketDataAsk45Field
{
	///ÉêÂô¼ÛËÄ
	TThostFtdcPriceType	AskPrice4;
	///ÉêÂôÁ¿ËÄ
	TThostFtdcVolumeType	AskVolume4;
	///ÉêÂô¼ÛÎå
	TThostFtdcPriceType	AskPrice5;
	///ÉêÂôÁ¿Îå
	TThostFtdcVolumeType	AskVolume5;
};

///ÐÐÇé¸üÐÂÊ±¼äÊôÐÔ
struct CThostFtdcMarketDataUpdateTimeField
{
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldInstrumentIDType	reserve1;
	///×îºóÐÞ¸ÄÊ±¼ä
	TThostFtdcTimeType	UpdateTime;
	///×îºóÐÞ¸ÄºÁÃë
	TThostFtdcMillisecType	UpdateMillisec;
	///ÒµÎñÈÕÆÚ
	TThostFtdcDateType	ActionDay;
	///ºÏÔ¼´úÂë
	TThostFtdcInstrumentIDType	InstrumentID;
};

///ÐÐÇéÉÏÏÂ´ø¼Û
struct CThostFtdcMarketDataBandingPriceField
{
	///ÉÏ´ø¼Û
	TThostFtdcPriceType	BandingUpperPrice;
	///ÏÂ´ø¼Û
	TThostFtdcPriceType	BandingLowerPrice;
};

///ÐÐÇé½»Ò×Ëù´úÂëÊôÐÔ
struct CThostFtdcMarketDataExchangeField
{
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
};

///Ö¸¶¨µÄºÏÔ¼
struct CThostFtdcSpecificInstrumentField
{
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldInstrumentIDType	reserve1;
	///ºÏÔ¼´úÂë
	TThostFtdcInstrumentIDType	InstrumentID;
};

///ºÏÔ¼×´Ì¬
struct CThostFtdcInstrumentStatusField
{
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldExchangeInstIDType	reserve1;
	///½áËã×é´úÂë
	TThostFtdcSettlementGroupIDType	SettlementGroupID;
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldInstrumentIDType	reserve2;
	///ºÏÔ¼½»Ò××´Ì¬
	TThostFtdcInstrumentStatusType	InstrumentStatus;
	///½»Ò×½×¶Î±àºÅ
	TThostFtdcTradingSegmentSNType	TradingSegmentSN;
	///½øÈë±¾×´Ì¬Ê±¼ä
	TThostFtdcTimeType	EnterTime;
	///½øÈë±¾×´Ì¬Ô­Òò
	TThostFtdcInstStatusEnterReasonType	EnterReason;
	///ºÏÔ¼ÔÚ½»Ò×ËùµÄ´úÂë
	TThostFtdcExchangeInstIDType	ExchangeInstID;
	///ºÏÔ¼´úÂë
	TThostFtdcInstrumentIDType	InstrumentID;
};

///²éÑ¯ºÏÔ¼×´Ì¬
struct CThostFtdcQryInstrumentStatusField
{
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldExchangeInstIDType	reserve1;
	///ºÏÔ¼ÔÚ½»Ò×ËùµÄ´úÂë
	TThostFtdcExchangeInstIDType	ExchangeInstID;
};

///Í¶×ÊÕßÕË»§
struct CThostFtdcInvestorAccountField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///Í¶×ÊÕß´úÂë
	TThostFtdcInvestorIDType	InvestorID;
	///Í¶×ÊÕßÕÊºÅ
	TThostFtdcAccountIDType	AccountID;
	///±ÒÖÖ´úÂë
	TThostFtdcCurrencyIDType	CurrencyID;
};

///¸¡¶¯Ó¯¿÷Ëã·¨
struct CThostFtdcPositionProfitAlgorithmField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///Í¶×ÊÕßÕÊºÅ
	TThostFtdcAccountIDType	AccountID;
	///Ó¯¿÷Ëã·¨
	TThostFtdcAlgorithmType	Algorithm;
	///±¸×¢
	TThostFtdcMemoType	Memo;
	///±ÒÖÖ´úÂë
	TThostFtdcCurrencyIDType	CurrencyID;
};

///»áÔ±×Ê½ðÕÛ¿Û
struct CThostFtdcDiscountField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///Í¶×ÊÕß·¶Î§
	TThostFtdcInvestorRangeType	InvestorRange;
	///Í¶×ÊÕß´úÂë
	TThostFtdcInvestorIDType	InvestorID;
	///×Ê½ðÕÛ¿Û±ÈÀý
	TThostFtdcRatioType	Discount;
};

///²éÑ¯×ªÕÊÒøÐÐ
struct CThostFtdcQryTransferBankField
{
	///ÒøÐÐ´úÂë
	TThostFtdcBankIDType	BankID;
	///ÒøÐÐ·ÖÖÐÐÄ´úÂë
	TThostFtdcBankBrchIDType	BankBrchID;
};

///×ªÕÊÒøÐÐ
struct CThostFtdcTransferBankField
{
	///ÒøÐÐ´úÂë
	TThostFtdcBankIDType	BankID;
	///ÒøÐÐ·ÖÖÐÐÄ´úÂë
	TThostFtdcBankBrchIDType	BankBrchID;
	///ÒøÐÐÃû³Æ
	TThostFtdcBankNameType	BankName;
	///ÊÇ·ñ»îÔ¾
	TThostFtdcBoolType	IsActive;
};

///²éÑ¯Í¶×ÊÕß³Ö²ÖÃ÷Ï¸
struct CThostFtdcQryInvestorPositionDetailField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///Í¶×ÊÕß´úÂë
	TThostFtdcInvestorIDType	InvestorID;
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldInstrumentIDType	reserve1;
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///Í¶×Êµ¥Ôª´úÂë
	TThostFtdcInvestUnitIDType	InvestUnitID;
	///ºÏÔ¼´úÂë
	TThostFtdcInstrumentIDType	InstrumentID;
};

///Í¶×ÊÕß³Ö²ÖÃ÷Ï¸
struct CThostFtdcInvestorPositionDetailField
{
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldInstrumentIDType	reserve1;
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///Í¶×ÊÕß´úÂë
	TThostFtdcInvestorIDType	InvestorID;
	///Í¶»úÌ×±£±êÖ¾
	TThostFtdcHedgeFlagType	HedgeFlag;
	///ÂòÂô
	TThostFtdcDirectionType	Direction;
	///¿ª²ÖÈÕÆÚ
	TThostFtdcDateType	OpenDate;
	///³É½»±àºÅ
	TThostFtdcTradeIDType	TradeID;
	///ÊýÁ¿
	TThostFtdcVolumeType	Volume;
	///¿ª²Ö¼Û
	TThostFtdcPriceType	OpenPrice;
	///½»Ò×ÈÕ
	TThostFtdcDateType	TradingDay;
	///½áËã±àºÅ
	TThostFtdcSettlementIDType	SettlementID;
	///³É½»ÀàÐÍ
	TThostFtdcTradeTypeType	TradeType;
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldInstrumentIDType	reserve2;
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///ÖðÈÕ¶¢ÊÐÆ½²ÖÓ¯¿÷
	TThostFtdcMoneyType	CloseProfitByDate;
	///Öð±Ê¶Ô³åÆ½²ÖÓ¯¿÷
	TThostFtdcMoneyType	CloseProfitByTrade;
	///ÖðÈÕ¶¢ÊÐ³Ö²ÖÓ¯¿÷
	TThostFtdcMoneyType	PositionProfitByDate;
	///Öð±Ê¶Ô³å³Ö²ÖÓ¯¿÷
	TThostFtdcMoneyType	PositionProfitByTrade;
	///Í¶×ÊÕß±£Ö¤½ð
	TThostFtdcMoneyType	Margin;
	///½»Ò×Ëù±£Ö¤½ð
	TThostFtdcMoneyType	ExchMargin;
	///±£Ö¤½ðÂÊ
	TThostFtdcRatioType	MarginRateByMoney;
	///±£Ö¤½ðÂÊ(°´ÊÖÊý)
	TThostFtdcRatioType	MarginRateByVolume;
	///×ò½áËã¼Û
	TThostFtdcPriceType	LastSettlementPrice;
	///½áËã¼Û
	TThostFtdcPriceType	SettlementPrice;
	///Æ½²ÖÁ¿
	TThostFtdcVolumeType	CloseVolume;
	///Æ½²Ö½ð¶î
	TThostFtdcMoneyType	CloseAmount;
	///ÏÈ¿ªÏÈÆ½Ê£ÓàÊýÁ¿
	TThostFtdcVolumeType	TimeFirstVolume;
	///Í¶×Êµ¥Ôª´úÂë
	TThostFtdcInvestUnitIDType	InvestUnitID;
	///ÌØÊâ³Ö²Ö±êÖ¾
	TThostFtdcSpecPosiTypeType	SpecPosiType;
	///ºÏÔ¼´úÂë
	TThostFtdcInstrumentIDType	InstrumentID;
	///×éºÏºÏÔ¼´úÂë
	TThostFtdcInstrumentIDType	CombInstrumentID;
};

///×Ê½ðÕË»§¿ÚÁîÓò
struct CThostFtdcTradingAccountPasswordField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///Í¶×ÊÕßÕÊºÅ
	TThostFtdcAccountIDType	AccountID;
	///ÃÜÂë
	TThostFtdcPasswordType	Password;
	///±ÒÖÖ´úÂë
	TThostFtdcCurrencyIDType	CurrencyID;
};

///½»Ò×ËùÐÐÇé±¨ÅÌ»ú
struct CThostFtdcMDTraderOfferField
{
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///½»Ò×Ëù½»Ò×Ô±´úÂë
	TThostFtdcTraderIDType	TraderID;
	///»áÔ±´úÂë
	TThostFtdcParticipantIDType	ParticipantID;
	///ÃÜÂë
	TThostFtdcPasswordType	Password;
	///°²×°±àºÅ
	TThostFtdcInstallIDType	InstallID;
	///±¾µØ±¨µ¥±àºÅ
	TThostFtdcOrderLocalIDType	OrderLocalID;
	///½»Ò×Ëù½»Ò×Ô±Á¬½Ó×´Ì¬
	TThostFtdcTraderConnectStatusType	TraderConnectStatus;
	///·¢³öÁ¬½ÓÇëÇóµÄÈÕÆÚ
	TThostFtdcDateType	ConnectRequestDate;
	///·¢³öÁ¬½ÓÇëÇóµÄÊ±¼ä
	TThostFtdcTimeType	ConnectRequestTime;
	///ÉÏ´Î±¨¸æÈÕÆÚ
	TThostFtdcDateType	LastReportDate;
	///ÉÏ´Î±¨¸æÊ±¼ä
	TThostFtdcTimeType	LastReportTime;
	///Íê³ÉÁ¬½ÓÈÕÆÚ
	TThostFtdcDateType	ConnectDate;
	///Íê³ÉÁ¬½ÓÊ±¼ä
	TThostFtdcTimeType	ConnectTime;
	///Æô¶¯ÈÕÆÚ
	TThostFtdcDateType	StartDate;
	///Æô¶¯Ê±¼ä
	TThostFtdcTimeType	StartTime;
	///½»Ò×ÈÕ
	TThostFtdcDateType	TradingDay;
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///±¾Ï¯Î»×î´ó³É½»±àºÅ
	TThostFtdcTradeIDType	MaxTradeID;
	///±¾Ï¯Î»×î´ó±¨µ¥±¸¿½
	TThostFtdcReturnCodeType	MaxOrderMessageReference;
	///³·µ¥Ê±Ñ¡ÔñÏ¯Î»Ëã·¨
	TThostFtdcOrderCancelAlgType	OrderCancelAlg;
};

///²éÑ¯ÐÐÇé±¨ÅÌ»ú
struct CThostFtdcQryMDTraderOfferField
{
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///»áÔ±´úÂë
	TThostFtdcParticipantIDType	ParticipantID;
	///½»Ò×Ëù½»Ò×Ô±´úÂë
	TThostFtdcTraderIDType	TraderID;
};

///²éÑ¯¿Í»§Í¨Öª
struct CThostFtdcQryNoticeField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
};

///¿Í»§Í¨Öª
struct CThostFtdcNoticeField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///ÏûÏ¢ÕýÎÄ
	TThostFtdcContentType	Content;
	///¾­¼Í¹«Ë¾Í¨ÖªÄÚÈÝÐòÁÐºÅ
	TThostFtdcSequenceLabelType	SequenceLabel;
};

///ÓÃ»§È¨ÏÞ
struct CThostFtdcUserRightField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///ÓÃ»§´úÂë
	TThostFtdcUserIDType	UserID;
	///¿Í»§È¨ÏÞÀàÐÍ
	TThostFtdcUserRightTypeType	UserRightType;
	///ÊÇ·ñ½ûÖ¹
	TThostFtdcBoolType	IsForbidden;
};

///²éÑ¯½áËãÐÅÏ¢È·ÈÏÓò
struct CThostFtdcQrySettlementInfoConfirmField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///Í¶×ÊÕß´úÂë
	TThostFtdcInvestorIDType	InvestorID;
	///Í¶×ÊÕßÕÊºÅ
	TThostFtdcAccountIDType	AccountID;
	///±ÒÖÖ´úÂë
	TThostFtdcCurrencyIDType	CurrencyID;
};

///×°ÔØ½áËãÐÅÏ¢
struct CThostFtdcLoadSettlementInfoField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
};

///¾­¼Í¹«Ë¾¿ÉÌá×Ê½ðËã·¨±í
struct CThostFtdcBrokerWithdrawAlgorithmField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///¿ÉÌá×Ê½ðËã·¨
	TThostFtdcAlgorithmType	WithdrawAlgorithm;
	///×Ê½ðÊ¹ÓÃÂÊ
	TThostFtdcRatioType	UsingRatio;
	///¿ÉÌáÊÇ·ñ°üº¬Æ½²ÖÓ¯Àû
	TThostFtdcIncludeCloseProfitType	IncludeCloseProfit;
	///±¾ÈÕÎÞ²ÖÇÒÎÞ³É½»¿Í»§ÊÇ·ñÊÜ¿ÉÌá±ÈÀýÏÞÖÆ
	TThostFtdcAllWithoutTradeType	AllWithoutTrade;
	///¿ÉÓÃÊÇ·ñ°üº¬Æ½²ÖÓ¯Àû
	TThostFtdcIncludeCloseProfitType	AvailIncludeCloseProfit;
	///ÊÇ·ñÆôÓÃÓÃ»§ÊÂ¼þ
	TThostFtdcBoolType	IsBrokerUserEvent;
	///±ÒÖÖ´úÂë
	TThostFtdcCurrencyIDType	CurrencyID;
	///»õ±ÒÖÊÑº±ÈÂÊ
	TThostFtdcRatioType	FundMortgageRatio;
	///È¨ÒæËã·¨
	TThostFtdcBalanceAlgorithmType	BalanceAlgorithm;
};

///×Ê½ðÕË»§¿ÚÁî±ä¸üÓò
struct CThostFtdcTradingAccountPasswordUpdateV1Field
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///Í¶×ÊÕß´úÂë
	TThostFtdcInvestorIDType	InvestorID;
	///Ô­À´µÄ¿ÚÁî
	TThostFtdcPasswordType	OldPassword;
	///ÐÂµÄ¿ÚÁî
	TThostFtdcPasswordType	NewPassword;
};

///×Ê½ðÕË»§¿ÚÁî±ä¸üÓò
struct CThostFtdcTradingAccountPasswordUpdateField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///Í¶×ÊÕßÕÊºÅ
	TThostFtdcAccountIDType	AccountID;
	///Ô­À´µÄ¿ÚÁî
	TThostFtdcPasswordType	OldPassword;
	///ÐÂµÄ¿ÚÁî
	TThostFtdcPasswordType	NewPassword;
	///±ÒÖÖ´úÂë
	TThostFtdcCurrencyIDType	CurrencyID;
};

///²éÑ¯×éºÏºÏÔ¼·ÖÍÈ
struct CThostFtdcQryCombinationLegField
{
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldInstrumentIDType	reserve1;
	///µ¥ÍÈ±àºÅ
	TThostFtdcLegIDType	LegID;
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldInstrumentIDType	reserve2;
	///×éºÏºÏÔ¼´úÂë
	TThostFtdcInstrumentIDType	CombInstrumentID;
	///µ¥ÍÈºÏÔ¼´úÂë
	TThostFtdcInstrumentIDType	LegInstrumentID;
};

///²éÑ¯×éºÏºÏÔ¼·ÖÍÈ
struct CThostFtdcQrySyncStatusField
{
	///½»Ò×ÈÕ
	TThostFtdcDateType	TradingDay;
};

///×éºÏ½»Ò×ºÏÔ¼µÄµ¥ÍÈ
struct CThostFtdcCombinationLegField
{
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldInstrumentIDType	reserve1;
	///µ¥ÍÈ±àºÅ
	TThostFtdcLegIDType	LegID;
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldInstrumentIDType	reserve2;
	///ÂòÂô·½Ïò
	TThostFtdcDirectionType	Direction;
	///µ¥ÍÈ³ËÊý
	TThostFtdcLegMultipleType	LegMultiple;
	///ÅÉÉú²ãÊý
	TThostFtdcImplyLevelType	ImplyLevel;
	///×éºÏºÏÔ¼´úÂë
	TThostFtdcInstrumentIDType	CombInstrumentID;
	///µ¥ÍÈºÏÔ¼´úÂë
	TThostFtdcInstrumentIDType	LegInstrumentID;
};

///Êý¾ÝÍ¬²½×´Ì¬
struct CThostFtdcSyncStatusField
{
	///½»Ò×ÈÕ
	TThostFtdcDateType	TradingDay;
	///Êý¾ÝÍ¬²½×´Ì¬
	TThostFtdcDataSyncStatusType	DataSyncStatus;
};

///²éÑ¯ÁªÏµÈË
struct CThostFtdcQryLinkManField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///Í¶×ÊÕß´úÂë
	TThostFtdcInvestorIDType	InvestorID;
};

///ÁªÏµÈË
struct CThostFtdcLinkManField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///Í¶×ÊÕß´úÂë
	TThostFtdcInvestorIDType	InvestorID;
	///ÁªÏµÈËÀàÐÍ
	TThostFtdcPersonTypeType	PersonType;
	///Ö¤¼þÀàÐÍ
	TThostFtdcIdCardTypeType	IdentifiedCardType;
	///Ö¤¼þºÅÂë
	TThostFtdcIdentifiedCardNoType	IdentifiedCardNo;
	///Ãû³Æ
	TThostFtdcPartyNameType	PersonName;
	///ÁªÏµµç»°
	TThostFtdcTelephoneType	Telephone;
	///Í¨Ñ¶µØÖ·
	TThostFtdcAddressType	Address;
	///ÓÊÕþ±àÂë
	TThostFtdcZipCodeType	ZipCode;
	///ÓÅÏÈ¼¶
	TThostFtdcPriorityType	Priority;
	///¿ª»§ÓÊÕþ±àÂë
	TThostFtdcUOAZipCodeType	UOAZipCode;
	///È«³Æ
	TThostFtdcInvestorFullNameType	PersonFullName;
};

///²éÑ¯¾­¼Í¹«Ë¾ÓÃ»§ÊÂ¼þ
struct CThostFtdcQryBrokerUserEventField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///ÓÃ»§´úÂë
	TThostFtdcUserIDType	UserID;
	///ÓÃ»§ÊÂ¼þÀàÐÍ
	TThostFtdcUserEventTypeType	UserEventType;
};

///²éÑ¯¾­¼Í¹«Ë¾ÓÃ»§ÊÂ¼þ
struct CThostFtdcBrokerUserEventField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///ÓÃ»§´úÂë
	TThostFtdcUserIDType	UserID;
	///ÓÃ»§ÊÂ¼þÀàÐÍ
	TThostFtdcUserEventTypeType	UserEventType;
	///ÓÃ»§ÊÂ¼þÐòºÅ
	TThostFtdcSequenceNoType	EventSequenceNo;
	///ÊÂ¼þ·¢ÉúÈÕÆÚ
	TThostFtdcDateType	EventDate;
	///ÊÂ¼þ·¢ÉúÊ±¼ä
	TThostFtdcTimeType	EventTime;
	///ÓÃ»§ÊÂ¼þÐÅÏ¢
	TThostFtdcUserEventInfoType	UserEventInfo;
	///Í¶×ÊÕß´úÂë
	TThostFtdcInvestorIDType	InvestorID;
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldInstrumentIDType	reserve1;
	///ºÏÔ¼´úÂë
	TThostFtdcInstrumentIDType	InstrumentID;
	///½»Ò×ÖÐÐÄ´úÂë
	TThostFtdcDRIdentityIDType	DRIdentityID;
	///½»Ò×ÈÕ
	TThostFtdcDateType	TradingDay;
};

///²éÑ¯Ç©Ô¼ÒøÐÐÇëÇó
struct CThostFtdcQryContractBankField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///ÒøÐÐ´úÂë
	TThostFtdcBankIDType	BankID;
	///ÒøÐÐ·ÖÖÐÐÄ´úÂë
	TThostFtdcBankBrchIDType	BankBrchID;
};

///²éÑ¯Ç©Ô¼ÒøÐÐÏìÓ¦
struct CThostFtdcContractBankField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///ÒøÐÐ´úÂë
	TThostFtdcBankIDType	BankID;
	///ÒøÐÐ·ÖÖÐÐÄ´úÂë
	TThostFtdcBankBrchIDType	BankBrchID;
	///ÒøÐÐÃû³Æ
	TThostFtdcBankNameType	BankName;
};

///Í¶×ÊÕß×éºÏ³Ö²ÖÃ÷Ï¸
struct CThostFtdcInvestorPositionCombineDetailField
{
	///½»Ò×ÈÕ
	TThostFtdcDateType	TradingDay;
	///¿ª²ÖÈÕÆÚ
	TThostFtdcDateType	OpenDate;
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///½áËã±àºÅ
	TThostFtdcSettlementIDType	SettlementID;
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///Í¶×ÊÕß´úÂë
	TThostFtdcInvestorIDType	InvestorID;
	///×éºÏ±àºÅ
	TThostFtdcTradeIDType	ComTradeID;
	///´éºÏ±àºÅ
	TThostFtdcTradeIDType	TradeID;
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldInstrumentIDType	reserve1;
	///Í¶»úÌ×±£±êÖ¾
	TThostFtdcHedgeFlagType	HedgeFlag;
	///ÂòÂô
	TThostFtdcDirectionType	Direction;
	///³Ö²ÖÁ¿
	TThostFtdcVolumeType	TotalAmt;
	///Í¶×ÊÕß±£Ö¤½ð
	TThostFtdcMoneyType	Margin;
	///½»Ò×Ëù±£Ö¤½ð
	TThostFtdcMoneyType	ExchMargin;
	///±£Ö¤½ðÂÊ
	TThostFtdcRatioType	MarginRateByMoney;
	///±£Ö¤½ðÂÊ(°´ÊÖÊý)
	TThostFtdcRatioType	MarginRateByVolume;
	///µ¥ÍÈ±àºÅ
	TThostFtdcLegIDType	LegID;
	///µ¥ÍÈ³ËÊý
	TThostFtdcLegMultipleType	LegMultiple;
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldInstrumentIDType	reserve2;
	///³É½»×éºÅ
	TThostFtdcTradeGroupIDType	TradeGroupID;
	///Í¶×Êµ¥Ôª´úÂë
	TThostFtdcInvestUnitIDType	InvestUnitID;
	///ºÏÔ¼´úÂë
	TThostFtdcInstrumentIDType	InstrumentID;
	///×éºÏ³Ö²ÖºÏÔ¼±àÂë
	TThostFtdcInstrumentIDType	CombInstrumentID;
};

///Ô¤Âñµ¥
struct CThostFtdcParkedOrderField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///Í¶×ÊÕß´úÂë
	TThostFtdcInvestorIDType	InvestorID;
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldInstrumentIDType	reserve1;
	///±¨µ¥ÒýÓÃ
	TThostFtdcOrderRefType	OrderRef;
	///ÓÃ»§´úÂë
	TThostFtdcUserIDType	UserID;
	///±¨µ¥¼Û¸ñÌõ¼þ
	TThostFtdcOrderPriceTypeType	OrderPriceType;
	///ÂòÂô·½Ïò
	TThostFtdcDirectionType	Direction;
	///×éºÏ¿ªÆ½±êÖ¾
	TThostFtdcCombOffsetFlagType	CombOffsetFlag;
	///×éºÏÍ¶»úÌ×±£±êÖ¾
	TThostFtdcCombHedgeFlagType	CombHedgeFlag;
	///¼Û¸ñ
	TThostFtdcPriceType	LimitPrice;
	///ÊýÁ¿
	TThostFtdcVolumeType	VolumeTotalOriginal;
	///ÓÐÐ§ÆÚÀàÐÍ
	TThostFtdcTimeConditionType	TimeCondition;
	///GTDÈÕÆÚ
	TThostFtdcDateType	GTDDate;
	///³É½»Á¿ÀàÐÍ
	TThostFtdcVolumeConditionType	VolumeCondition;
	///×îÐ¡³É½»Á¿
	TThostFtdcVolumeType	MinVolume;
	///´¥·¢Ìõ¼þ
	TThostFtdcContingentConditionType	ContingentCondition;
	///Ö¹Ëð¼Û
	TThostFtdcPriceType	StopPrice;
	///Ç¿Æ½Ô­Òò
	TThostFtdcForceCloseReasonType	ForceCloseReason;
	///×Ô¶¯¹ÒÆð±êÖ¾
	TThostFtdcBoolType	IsAutoSuspend;
	///ÒµÎñµ¥Ôª
	TThostFtdcBusinessUnitType	BusinessUnit;
	///ÇëÇó±àºÅ
	TThostFtdcRequestIDType	RequestID;
	///ÓÃ»§Ç¿Æ½±êÖ¾
	TThostFtdcBoolType	UserForceClose;
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///Ô¤Âñ±¨µ¥±àºÅ
	TThostFtdcParkedOrderIDType	ParkedOrderID;
	///ÓÃ»§ÀàÐÍ
	TThostFtdcUserTypeType	UserType;
	///Ô¤Âñµ¥×´Ì¬
	TThostFtdcParkedOrderStatusType	Status;
	///´íÎó´úÂë
	TThostFtdcErrorIDType	ErrorID;
	///´íÎóÐÅÏ¢
	TThostFtdcErrorMsgType	ErrorMsg;
	///»¥»»µ¥±êÖ¾
	TThostFtdcBoolType	IsSwapOrder;
	///×Ê½ðÕËºÅ
	TThostFtdcAccountIDType	AccountID;
	///±ÒÖÖ´úÂë
	TThostFtdcCurrencyIDType	CurrencyID;
	///½»Ò×±àÂë
	TThostFtdcClientIDType	ClientID;
	///Í¶×Êµ¥Ôª´úÂë
	TThostFtdcInvestUnitIDType	InvestUnitID;
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldIPAddressType	reserve2;
	///MacµØÖ·
	TThostFtdcMacAddressType	MacAddress;
	///ºÏÔ¼´úÂë
	TThostFtdcInstrumentIDType	InstrumentID;
	///IPµØÖ·
	TThostFtdcIPAddressType	IPAddress;
};

///ÊäÈëÔ¤Âñµ¥²Ù×÷
struct CThostFtdcParkedOrderActionField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///Í¶×ÊÕß´úÂë
	TThostFtdcInvestorIDType	InvestorID;
	///±¨µ¥²Ù×÷ÒýÓÃ
	TThostFtdcOrderActionRefType	OrderActionRef;
	///±¨µ¥ÒýÓÃ
	TThostFtdcOrderRefType	OrderRef;
	///ÇëÇó±àºÅ
	TThostFtdcRequestIDType	RequestID;
	///Ç°ÖÃ±àºÅ
	TThostFtdcFrontIDType	FrontID;
	///»á»°±àºÅ
	TThostFtdcSessionIDType	SessionID;
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///±¨µ¥±àºÅ
	TThostFtdcOrderSysIDType	OrderSysID;
	///²Ù×÷±êÖ¾
	TThostFtdcActionFlagType	ActionFlag;
	///¼Û¸ñ
	TThostFtdcPriceType	LimitPrice;
	///ÊýÁ¿±ä»¯
	TThostFtdcVolumeType	VolumeChange;
	///ÓÃ»§´úÂë
	TThostFtdcUserIDType	UserID;
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldInstrumentIDType	reserve1;
	///Ô¤Âñ³·µ¥µ¥±àºÅ
	TThostFtdcParkedOrderActionIDType	ParkedOrderActionID;
	///ÓÃ»§ÀàÐÍ
	TThostFtdcUserTypeType	UserType;
	///Ô¤Âñ³·µ¥×´Ì¬
	TThostFtdcParkedOrderStatusType	Status;
	///´íÎó´úÂë
	TThostFtdcErrorIDType	ErrorID;
	///´íÎóÐÅÏ¢
	TThostFtdcErrorMsgType	ErrorMsg;
	///Í¶×Êµ¥Ôª´úÂë
	TThostFtdcInvestUnitIDType	InvestUnitID;
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldIPAddressType	reserve2;
	///MacµØÖ·
	TThostFtdcMacAddressType	MacAddress;
	///ºÏÔ¼´úÂë
	TThostFtdcInstrumentIDType	InstrumentID;
	///IPµØÖ·
	TThostFtdcIPAddressType	IPAddress;
};

///²éÑ¯Ô¤Âñµ¥
struct CThostFtdcQryParkedOrderField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///Í¶×ÊÕß´úÂë
	TThostFtdcInvestorIDType	InvestorID;
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldInstrumentIDType	reserve1;
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///Í¶×Êµ¥Ôª´úÂë
	TThostFtdcInvestUnitIDType	InvestUnitID;
	///ºÏÔ¼´úÂë
	TThostFtdcInstrumentIDType	InstrumentID;
};

///²éÑ¯Ô¤Âñ³·µ¥
struct CThostFtdcQryParkedOrderActionField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///Í¶×ÊÕß´úÂë
	TThostFtdcInvestorIDType	InvestorID;
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldInstrumentIDType	reserve1;
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///Í¶×Êµ¥Ôª´úÂë
	TThostFtdcInvestUnitIDType	InvestUnitID;
	///ºÏÔ¼´úÂë
	TThostFtdcInstrumentIDType	InstrumentID;
};

///É¾³ýÔ¤Âñµ¥
struct CThostFtdcRemoveParkedOrderField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///Í¶×ÊÕß´úÂë
	TThostFtdcInvestorIDType	InvestorID;
	///Ô¤Âñ±¨µ¥±àºÅ
	TThostFtdcParkedOrderIDType	ParkedOrderID;
	///Í¶×Êµ¥Ôª´úÂë
	TThostFtdcInvestUnitIDType	InvestUnitID;
};

///É¾³ýÔ¤Âñ³·µ¥
struct CThostFtdcRemoveParkedOrderActionField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///Í¶×ÊÕß´úÂë
	TThostFtdcInvestorIDType	InvestorID;
	///Ô¤Âñ³·µ¥±àºÅ
	TThostFtdcParkedOrderActionIDType	ParkedOrderActionID;
	///Í¶×Êµ¥Ôª´úÂë
	TThostFtdcInvestUnitIDType	InvestUnitID;
};

///¾­¼Í¹«Ë¾¿ÉÌá×Ê½ðËã·¨±í
struct CThostFtdcInvestorWithdrawAlgorithmField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///Í¶×ÊÕß·¶Î§
	TThostFtdcInvestorRangeType	InvestorRange;
	///Í¶×ÊÕß´úÂë
	TThostFtdcInvestorIDType	InvestorID;
	///¿ÉÌá×Ê½ð±ÈÀý
	TThostFtdcRatioType	UsingRatio;
	///±ÒÖÖ´úÂë
	TThostFtdcCurrencyIDType	CurrencyID;
	///»õ±ÒÖÊÑº±ÈÂÊ
	TThostFtdcRatioType	FundMortgageRatio;
};

///²éÑ¯×éºÏ³Ö²ÖÃ÷Ï¸
struct CThostFtdcQryInvestorPositionCombineDetailField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///Í¶×ÊÕß´úÂë
	TThostFtdcInvestorIDType	InvestorID;
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldInstrumentIDType	reserve1;
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///Í¶×Êµ¥Ôª´úÂë
	TThostFtdcInvestUnitIDType	InvestUnitID;
	///×éºÏ³Ö²ÖºÏÔ¼±àÂë
	TThostFtdcInstrumentIDType	CombInstrumentID;
};

///³É½»¾ù¼Û
struct CThostFtdcMarketDataAveragePriceField
{
	///µ±ÈÕ¾ù¼Û
	TThostFtdcPriceType	AveragePrice;
};

///Ð£ÑéÍ¶×ÊÕßÃÜÂë
struct CThostFtdcVerifyInvestorPasswordField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///Í¶×ÊÕß´úÂë
	TThostFtdcInvestorIDType	InvestorID;
	///ÃÜÂë
	TThostFtdcPasswordType	Password;
};

///ÓÃ»§IP
struct CThostFtdcUserIPField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///ÓÃ»§´úÂë
	TThostFtdcUserIDType	UserID;
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldIPAddressType	reserve1;
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldIPAddressType	reserve2;
	///MacµØÖ·
	TThostFtdcMacAddressType	MacAddress;
	///IPµØÖ·
	TThostFtdcIPAddressType	IPAddress;
	///IPµØÖ·ÑÚÂë
	TThostFtdcIPAddressType	IPMask;
};

///ÓÃ»§ÊÂ¼þÍ¨ÖªÐÅÏ¢
struct CThostFtdcTradingNoticeInfoField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///Í¶×ÊÕß´úÂë
	TThostFtdcInvestorIDType	InvestorID;
	///·¢ËÍÊ±¼ä
	TThostFtdcTimeType	SendTime;
	///ÏûÏ¢ÕýÎÄ
	TThostFtdcContentType	FieldContent;
	///ÐòÁÐÏµÁÐºÅ
	TThostFtdcSequenceSeriesType	SequenceSeries;
	///ÐòÁÐºÅ
	TThostFtdcSequenceNoType	SequenceNo;
	///Í¶×Êµ¥Ôª´úÂë
	TThostFtdcInvestUnitIDType	InvestUnitID;
};

///ÓÃ»§ÊÂ¼þÍ¨Öª
struct CThostFtdcTradingNoticeField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///Í¶×ÊÕß·¶Î§
	TThostFtdcInvestorRangeType	InvestorRange;
	///Í¶×ÊÕß´úÂë
	TThostFtdcInvestorIDType	InvestorID;
	///ÐòÁÐÏµÁÐºÅ
	TThostFtdcSequenceSeriesType	SequenceSeries;
	///ÓÃ»§´úÂë
	TThostFtdcUserIDType	UserID;
	///·¢ËÍÊ±¼ä
	TThostFtdcTimeType	SendTime;
	///ÐòÁÐºÅ
	TThostFtdcSequenceNoType	SequenceNo;
	///ÏûÏ¢ÕýÎÄ
	TThostFtdcContentType	FieldContent;
	///Í¶×Êµ¥Ôª´úÂë
	TThostFtdcInvestUnitIDType	InvestUnitID;
};

///²éÑ¯½»Ò×ÊÂ¼þÍ¨Öª
struct CThostFtdcQryTradingNoticeField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///Í¶×ÊÕß´úÂë
	TThostFtdcInvestorIDType	InvestorID;
	///Í¶×Êµ¥Ôª´úÂë
	TThostFtdcInvestUnitIDType	InvestUnitID;
};

///²éÑ¯´íÎó±¨µ¥
struct CThostFtdcQryErrOrderField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///Í¶×ÊÕß´úÂë
	TThostFtdcInvestorIDType	InvestorID;
};

///´íÎó±¨µ¥
struct CThostFtdcErrOrderField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///Í¶×ÊÕß´úÂë
	TThostFtdcInvestorIDType	InvestorID;
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldInstrumentIDType	reserve1;
	///±¨µ¥ÒýÓÃ
	TThostFtdcOrderRefType	OrderRef;
	///ÓÃ»§´úÂë
	TThostFtdcUserIDType	UserID;
	///±¨µ¥¼Û¸ñÌõ¼þ
	TThostFtdcOrderPriceTypeType	OrderPriceType;
	///ÂòÂô·½Ïò
	TThostFtdcDirectionType	Direction;
	///×éºÏ¿ªÆ½±êÖ¾
	TThostFtdcCombOffsetFlagType	CombOffsetFlag;
	///×éºÏÍ¶»úÌ×±£±êÖ¾
	TThostFtdcCombHedgeFlagType	CombHedgeFlag;
	///¼Û¸ñ
	TThostFtdcPriceType	LimitPrice;
	///ÊýÁ¿
	TThostFtdcVolumeType	VolumeTotalOriginal;
	///ÓÐÐ§ÆÚÀàÐÍ
	TThostFtdcTimeConditionType	TimeCondition;
	///GTDÈÕÆÚ
	TThostFtdcDateType	GTDDate;
	///³É½»Á¿ÀàÐÍ
	TThostFtdcVolumeConditionType	VolumeCondition;
	///×îÐ¡³É½»Á¿
	TThostFtdcVolumeType	MinVolume;
	///´¥·¢Ìõ¼þ
	TThostFtdcContingentConditionType	ContingentCondition;
	///Ö¹Ëð¼Û
	TThostFtdcPriceType	StopPrice;
	///Ç¿Æ½Ô­Òò
	TThostFtdcForceCloseReasonType	ForceCloseReason;
	///×Ô¶¯¹ÒÆð±êÖ¾
	TThostFtdcBoolType	IsAutoSuspend;
	///ÒµÎñµ¥Ôª
	TThostFtdcBusinessUnitType	BusinessUnit;
	///ÇëÇó±àºÅ
	TThostFtdcRequestIDType	RequestID;
	///ÓÃ»§Ç¿Æ½±êÖ¾
	TThostFtdcBoolType	UserForceClose;
	///´íÎó´úÂë
	TThostFtdcErrorIDType	ErrorID;
	///´íÎóÐÅÏ¢
	TThostFtdcErrorMsgType	ErrorMsg;
	///»¥»»µ¥±êÖ¾
	TThostFtdcBoolType	IsSwapOrder;
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///Í¶×Êµ¥Ôª´úÂë
	TThostFtdcInvestUnitIDType	InvestUnitID;
	///×Ê½ðÕËºÅ
	TThostFtdcAccountIDType	AccountID;
	///±ÒÖÖ´úÂë
	TThostFtdcCurrencyIDType	CurrencyID;
	///½»Ò×±àÂë
	TThostFtdcClientIDType	ClientID;
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldIPAddressType	reserve2;
	///MacµØÖ·
	TThostFtdcMacAddressType	MacAddress;
	///ºÏÔ¼´úÂë
	TThostFtdcInstrumentIDType	InstrumentID;
	///IPµØÖ·
	TThostFtdcIPAddressType	IPAddress;
	///±¨µ¥»ØÏÔ×Ö¶Î
	TThostFtdcOrderMemoType	OrderMemo;
	///sessionÉÏÇëÇó¼ÆÊý api×Ô¶¯Î¬»¤
	TThostFtdcSequenceNo12Type	SessionReqSeq;
};

///²éÑ¯´íÎó±¨µ¥²Ù×÷
struct CThostFtdcErrorConditionalOrderField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///Í¶×ÊÕß´úÂë
	TThostFtdcInvestorIDType	InvestorID;
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldInstrumentIDType	reserve1;
	///±¨µ¥ÒýÓÃ
	TThostFtdcOrderRefType	OrderRef;
	///ÓÃ»§´úÂë
	TThostFtdcUserIDType	UserID;
	///±¨µ¥¼Û¸ñÌõ¼þ
	TThostFtdcOrderPriceTypeType	OrderPriceType;
	///ÂòÂô·½Ïò
	TThostFtdcDirectionType	Direction;
	///×éºÏ¿ªÆ½±êÖ¾
	TThostFtdcCombOffsetFlagType	CombOffsetFlag;
	///×éºÏÍ¶»úÌ×±£±êÖ¾
	TThostFtdcCombHedgeFlagType	CombHedgeFlag;
	///¼Û¸ñ
	TThostFtdcPriceType	LimitPrice;
	///ÊýÁ¿
	TThostFtdcVolumeType	VolumeTotalOriginal;
	///ÓÐÐ§ÆÚÀàÐÍ
	TThostFtdcTimeConditionType	TimeCondition;
	///GTDÈÕÆÚ
	TThostFtdcDateType	GTDDate;
	///³É½»Á¿ÀàÐÍ
	TThostFtdcVolumeConditionType	VolumeCondition;
	///×îÐ¡³É½»Á¿
	TThostFtdcVolumeType	MinVolume;
	///´¥·¢Ìõ¼þ
	TThostFtdcContingentConditionType	ContingentCondition;
	///Ö¹Ëð¼Û
	TThostFtdcPriceType	StopPrice;
	///Ç¿Æ½Ô­Òò
	TThostFtdcForceCloseReasonType	ForceCloseReason;
	///×Ô¶¯¹ÒÆð±êÖ¾
	TThostFtdcBoolType	IsAutoSuspend;
	///ÒµÎñµ¥Ôª
	TThostFtdcBusinessUnitType	BusinessUnit;
	///ÇëÇó±àºÅ
	TThostFtdcRequestIDType	RequestID;
	///±¾µØ±¨µ¥±àºÅ
	TThostFtdcOrderLocalIDType	OrderLocalID;
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///»áÔ±´úÂë
	TThostFtdcParticipantIDType	ParticipantID;
	///¿Í»§´úÂë
	TThostFtdcClientIDType	ClientID;
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldExchangeInstIDType	reserve2;
	///½»Ò×Ëù½»Ò×Ô±´úÂë
	TThostFtdcTraderIDType	TraderID;
	///°²×°±àºÅ
	TThostFtdcInstallIDType	InstallID;
	///±¨µ¥Ìá½»×´Ì¬
	TThostFtdcOrderSubmitStatusType	OrderSubmitStatus;
	///±¨µ¥ÌáÊ¾ÐòºÅ
	TThostFtdcSequenceNoType	NotifySequence;
	///½»Ò×ÈÕ
	TThostFtdcDateType	TradingDay;
	///½áËã±àºÅ
	TThostFtdcSettlementIDType	SettlementID;
	///±¨µ¥±àºÅ
	TThostFtdcOrderSysIDType	OrderSysID;
	///±¨µ¥À´Ô´
	TThostFtdcOrderSourceType	OrderSource;
	///±¨µ¥×´Ì¬
	TThostFtdcOrderStatusType	OrderStatus;
	///±¨µ¥ÀàÐÍ
	TThostFtdcOrderTypeType	OrderType;
	///½ñ³É½»ÊýÁ¿
	TThostFtdcVolumeType	VolumeTraded;
	///Ê£ÓàÊýÁ¿
	TThostFtdcVolumeType	VolumeTotal;
	///±¨µ¥ÈÕÆÚ
	TThostFtdcDateType	InsertDate;
	///Î¯ÍÐÊ±¼ä
	TThostFtdcTimeType	InsertTime;
	///¼¤»îÊ±¼ä
	TThostFtdcTimeType	ActiveTime;
	///¹ÒÆðÊ±¼ä
	TThostFtdcTimeType	SuspendTime;
	///×îºóÐÞ¸ÄÊ±¼ä
	TThostFtdcTimeType	UpdateTime;
	///³·ÏúÊ±¼ä
	TThostFtdcTimeType	CancelTime;
	///×îºóÐÞ¸Ä½»Ò×Ëù½»Ò×Ô±´úÂë
	TThostFtdcTraderIDType	ActiveTraderID;
	///½áËã»áÔ±±àºÅ
	TThostFtdcParticipantIDType	ClearingPartID;
	///ÐòºÅ
	TThostFtdcSequenceNoType	SequenceNo;
	///Ç°ÖÃ±àºÅ
	TThostFtdcFrontIDType	FrontID;
	///»á»°±àºÅ
	TThostFtdcSessionIDType	SessionID;
	///ÓÃ»§¶Ë²úÆ·ÐÅÏ¢
	TThostFtdcProductInfoType	UserProductInfo;
	///×´Ì¬ÐÅÏ¢
	TThostFtdcErrorMsgType	StatusMsg;
	///ÓÃ»§Ç¿Æ½±êÖ¾
	TThostFtdcBoolType	UserForceClose;
	///²Ù×÷ÓÃ»§´úÂë
	TThostFtdcUserIDType	ActiveUserID;
	///¾­¼Í¹«Ë¾±¨µ¥±àºÅ
	TThostFtdcSequenceNoType	BrokerOrderSeq;
	///Ïà¹Ø±¨µ¥
	TThostFtdcOrderSysIDType	RelativeOrderSysID;
	///Ö£ÉÌËù³É½»ÊýÁ¿
	TThostFtdcVolumeType	ZCETotalTradedVolume;
	///´íÎó´úÂë
	TThostFtdcErrorIDType	ErrorID;
	///´íÎóÐÅÏ¢
	TThostFtdcErrorMsgType	ErrorMsg;
	///»¥»»µ¥±êÖ¾
	TThostFtdcBoolType	IsSwapOrder;
	///ÓªÒµ²¿±àºÅ
	TThostFtdcBranchIDType	BranchID;
	///Í¶×Êµ¥Ôª´úÂë
	TThostFtdcInvestUnitIDType	InvestUnitID;
	///×Ê½ðÕËºÅ
	TThostFtdcAccountIDType	AccountID;
	///±ÒÖÖ´úÂë
	TThostFtdcCurrencyIDType	CurrencyID;
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldIPAddressType	reserve3;
	///MacµØÖ·
	TThostFtdcMacAddressType	MacAddress;
	///ºÏÔ¼´úÂë
	TThostFtdcInstrumentIDType	InstrumentID;
	///ºÏÔ¼ÔÚ½»Ò×ËùµÄ´úÂë
	TThostFtdcExchangeInstIDType	ExchangeInstID;
	///IPµØÖ·
	TThostFtdcIPAddressType	IPAddress;
};

///²éÑ¯´íÎó±¨µ¥²Ù×÷
struct CThostFtdcQryErrOrderActionField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///Í¶×ÊÕß´úÂë
	TThostFtdcInvestorIDType	InvestorID;
};

///´íÎó±¨µ¥²Ù×÷
struct CThostFtdcErrOrderActionField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///Í¶×ÊÕß´úÂë
	TThostFtdcInvestorIDType	InvestorID;
	///±¨µ¥²Ù×÷ÒýÓÃ
	TThostFtdcOrderActionRefType	OrderActionRef;
	///±¨µ¥ÒýÓÃ
	TThostFtdcOrderRefType	OrderRef;
	///ÇëÇó±àºÅ
	TThostFtdcRequestIDType	RequestID;
	///Ç°ÖÃ±àºÅ
	TThostFtdcFrontIDType	FrontID;
	///»á»°±àºÅ
	TThostFtdcSessionIDType	SessionID;
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///±¨µ¥±àºÅ
	TThostFtdcOrderSysIDType	OrderSysID;
	///²Ù×÷±êÖ¾
	TThostFtdcActionFlagType	ActionFlag;
	///¼Û¸ñ
	TThostFtdcPriceType	LimitPrice;
	///ÊýÁ¿±ä»¯
	TThostFtdcVolumeType	VolumeChange;
	///²Ù×÷ÈÕÆÚ
	TThostFtdcDateType	ActionDate;
	///²Ù×÷Ê±¼ä
	TThostFtdcTimeType	ActionTime;
	///½»Ò×Ëù½»Ò×Ô±´úÂë
	TThostFtdcTraderIDType	TraderID;
	///°²×°±àºÅ
	TThostFtdcInstallIDType	InstallID;
	///±¾µØ±¨µ¥±àºÅ
	TThostFtdcOrderLocalIDType	OrderLocalID;
	///²Ù×÷±¾µØ±àºÅ
	TThostFtdcOrderLocalIDType	ActionLocalID;
	///»áÔ±´úÂë
	TThostFtdcParticipantIDType	ParticipantID;
	///¿Í»§´úÂë
	TThostFtdcClientIDType	ClientID;
	///ÒµÎñµ¥Ôª
	TThostFtdcBusinessUnitType	BusinessUnit;
	///±¨µ¥²Ù×÷×´Ì¬
	TThostFtdcOrderActionStatusType	OrderActionStatus;
	///ÓÃ»§´úÂë
	TThostFtdcUserIDType	UserID;
	///×´Ì¬ÐÅÏ¢
	TThostFtdcErrorMsgType	StatusMsg;
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldInstrumentIDType	reserve1;
	///ÓªÒµ²¿±àºÅ
	TThostFtdcBranchIDType	BranchID;
	///Í¶×Êµ¥Ôª´úÂë
	TThostFtdcInvestUnitIDType	InvestUnitID;
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldIPAddressType	reserve2;
	///MacµØÖ·
	TThostFtdcMacAddressType	MacAddress;
	///´íÎó´úÂë
	TThostFtdcErrorIDType	ErrorID;
	///´íÎóÐÅÏ¢
	TThostFtdcErrorMsgType	ErrorMsg;
	///ºÏÔ¼´úÂë
	TThostFtdcInstrumentIDType	InstrumentID;
	///IPµØÖ·
	TThostFtdcIPAddressType	IPAddress;
	///±¨µ¥»ØÏÔ×Ö¶Î
	TThostFtdcOrderMemoType	OrderMemo;
	///sessionÉÏÇëÇó¼ÆÊý api×Ô¶¯Î¬»¤
	TThostFtdcSequenceNo12Type	SessionReqSeq;
};

///²éÑ¯½»Ò×Ëù×´Ì¬
struct CThostFtdcQryExchangeSequenceField
{
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
};

///½»Ò×Ëù×´Ì¬
struct CThostFtdcExchangeSequenceField
{
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///ÐòºÅ
	TThostFtdcSequenceNoType	SequenceNo;
	///ºÏÔ¼½»Ò××´Ì¬
	TThostFtdcInstrumentStatusType	MarketStatus;
};

///¸ù¾Ý¼Û¸ñ²éÑ¯×î´ó±¨µ¥ÊýÁ¿
struct CThostFtdcQryMaxOrderVolumeWithPriceField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///Í¶×ÊÕß´úÂë
	TThostFtdcInvestorIDType	InvestorID;
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldInstrumentIDType	reserve1;
	///ÂòÂô·½Ïò
	TThostFtdcDirectionType	Direction;
	///¿ªÆ½±êÖ¾
	TThostFtdcOffsetFlagType	OffsetFlag;
	///Í¶»úÌ×±£±êÖ¾
	TThostFtdcHedgeFlagType	HedgeFlag;
	///×î´óÔÊÐí±¨µ¥ÊýÁ¿
	TThostFtdcVolumeType	MaxVolume;
	///±¨µ¥¼Û¸ñ
	TThostFtdcPriceType	Price;
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///Í¶×Êµ¥Ôª´úÂë
	TThostFtdcInvestUnitIDType	InvestUnitID;
	///ºÏÔ¼´úÂë
	TThostFtdcInstrumentIDType	InstrumentID;
};

///²éÑ¯¾­¼Í¹«Ë¾½»Ò×²ÎÊý
struct CThostFtdcQryBrokerTradingParamsField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///Í¶×ÊÕß´úÂë
	TThostFtdcInvestorIDType	InvestorID;
	///±ÒÖÖ´úÂë
	TThostFtdcCurrencyIDType	CurrencyID;
	///Í¶×ÊÕßÕÊºÅ
	TThostFtdcAccountIDType	AccountID;
};

///¾­¼Í¹«Ë¾½»Ò×²ÎÊý
struct CThostFtdcBrokerTradingParamsField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///Í¶×ÊÕß´úÂë
	TThostFtdcInvestorIDType	InvestorID;
	///±£Ö¤½ð¼Û¸ñÀàÐÍ
	TThostFtdcMarginPriceTypeType	MarginPriceType;
	///Ó¯¿÷Ëã·¨
	TThostFtdcAlgorithmType	Algorithm;
	///¿ÉÓÃÊÇ·ñ°üº¬Æ½²ÖÓ¯Àû
	TThostFtdcIncludeCloseProfitType	AvailIncludeCloseProfit;
	///±ÒÖÖ´úÂë
	TThostFtdcCurrencyIDType	CurrencyID;
	///ÆÚÈ¨È¨Àû½ð¼Û¸ñÀàÐÍ
	TThostFtdcOptionRoyaltyPriceTypeType	OptionRoyaltyPriceType;
	///Í¶×ÊÕßÕÊºÅ
	TThostFtdcAccountIDType	AccountID;
};

///²éÑ¯¾­¼Í¹«Ë¾½»Ò×Ëã·¨
struct CThostFtdcQryBrokerTradingAlgosField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldInstrumentIDType	reserve1;
	///ºÏÔ¼´úÂë
	TThostFtdcInstrumentIDType	InstrumentID;
};

///¾­¼Í¹«Ë¾½»Ò×Ëã·¨
struct CThostFtdcBrokerTradingAlgosField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldInstrumentIDType	reserve1;
	///³Ö²Ö´¦ÀíËã·¨±àºÅ
	TThostFtdcHandlePositionAlgoIDType	HandlePositionAlgoID;
	///Ñ°ÕÒ±£Ö¤½ðÂÊËã·¨±àºÅ
	TThostFtdcFindMarginRateAlgoIDType	FindMarginRateAlgoID;
	///×Ê½ð´¦ÀíËã·¨±àºÅ
	TThostFtdcHandleTradingAccountAlgoIDType	HandleTradingAccountAlgoID;
	///ºÏÔ¼´úÂë
	TThostFtdcInstrumentIDType	InstrumentID;
};

///²éÑ¯¾­¼Í¹«Ë¾×Ê½ð
struct CThostFtdcQueryBrokerDepositField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
};

///¾­¼Í¹«Ë¾×Ê½ð
struct CThostFtdcBrokerDepositField
{
	///½»Ò×ÈÕÆÚ
	TThostFtdcTradeDateType	TradingDay;
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///»áÔ±´úÂë
	TThostFtdcParticipantIDType	ParticipantID;
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///ÉÏ´Î½áËã×¼±¸½ð
	TThostFtdcMoneyType	PreBalance;
	///µ±Ç°±£Ö¤½ð×Ü¶î
	TThostFtdcMoneyType	CurrMargin;
	///Æ½²ÖÓ¯¿÷
	TThostFtdcMoneyType	CloseProfit;
	///ÆÚ»õ½áËã×¼±¸½ð
	TThostFtdcMoneyType	Balance;
	///Èë½ð½ð¶î
	TThostFtdcMoneyType	Deposit;
	///³ö½ð½ð¶î
	TThostFtdcMoneyType	Withdraw;
	///¿ÉÌá×Ê½ð
	TThostFtdcMoneyType	Available;
	///»ù±¾×¼±¸½ð
	TThostFtdcMoneyType	Reserve;
	///¶³½áµÄ±£Ö¤½ð
	TThostFtdcMoneyType	FrozenMargin;
};

///²éÑ¯±£Ö¤½ð¼à¹ÜÏµÍ³¾­¼Í¹«Ë¾ÃÜÔ¿
struct CThostFtdcQryCFMMCBrokerKeyField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
};

///±£Ö¤½ð¼à¹ÜÏµÍ³¾­¼Í¹«Ë¾ÃÜÔ¿
struct CThostFtdcCFMMCBrokerKeyField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///¾­¼Í¹«Ë¾Í³Ò»±àÂë
	TThostFtdcParticipantIDType	ParticipantID;
	///ÃÜÔ¿Éú³ÉÈÕÆÚ
	TThostFtdcDateType	CreateDate;
	///ÃÜÔ¿Éú³ÉÊ±¼ä
	TThostFtdcTimeType	CreateTime;
	///ÃÜÔ¿±àºÅ
	TThostFtdcSequenceNoType	KeyID;
	///¶¯Ì¬ÃÜÔ¿
	TThostFtdcCFMMCKeyType	CurrentKey;
	///¶¯Ì¬ÃÜÔ¿ÀàÐÍ
	TThostFtdcCFMMCKeyKindType	KeyKind;
};

///±£Ö¤½ð¼à¹ÜÏµÍ³¾­¼Í¹«Ë¾×Ê½ðÕË»§ÃÜÔ¿
struct CThostFtdcCFMMCTradingAccountKeyField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///¾­¼Í¹«Ë¾Í³Ò»±àÂë
	TThostFtdcParticipantIDType	ParticipantID;
	///Í¶×ÊÕßÕÊºÅ
	TThostFtdcAccountIDType	AccountID;
	///ÃÜÔ¿±àºÅ
	TThostFtdcSequenceNoType	KeyID;
	///¶¯Ì¬ÃÜÔ¿
	TThostFtdcCFMMCKeyType	CurrentKey;
};

///ÇëÇó²éÑ¯±£Ö¤½ð¼à¹ÜÏµÍ³¾­¼Í¹«Ë¾×Ê½ðÕË»§ÃÜÔ¿
struct CThostFtdcQryCFMMCTradingAccountKeyField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///Í¶×ÊÕß´úÂë
	TThostFtdcInvestorIDType	InvestorID;
};

///ÓÃ»§¶¯Ì¬ÁîÅÆ²ÎÊý
struct CThostFtdcBrokerUserOTPParamField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///ÓÃ»§´úÂë
	TThostFtdcUserIDType	UserID;
	///¶¯Ì¬ÁîÅÆÌá¹©ÉÌ
	TThostFtdcOTPVendorsIDType	OTPVendorsID;
	///¶¯Ì¬ÁîÅÆÐòÁÐºÅ
	TThostFtdcSerialNumberType	SerialNumber;
	///ÁîÅÆÃÜÔ¿
	TThostFtdcAuthKeyType	AuthKey;
	///Æ¯ÒÆÖµ
	TThostFtdcLastDriftType	LastDrift;
	///³É¹¦Öµ
	TThostFtdcLastSuccessType	LastSuccess;
	///¶¯Ì¬ÁîÅÆÀàÐÍ
	TThostFtdcOTPTypeType	OTPType;
};

///ÊÖ¹¤Í¬²½ÓÃ»§¶¯Ì¬ÁîÅÆ
struct CThostFtdcManualSyncBrokerUserOTPField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///ÓÃ»§´úÂë
	TThostFtdcUserIDType	UserID;
	///¶¯Ì¬ÁîÅÆÀàÐÍ
	TThostFtdcOTPTypeType	OTPType;
	///µÚÒ»¸ö¶¯Ì¬ÃÜÂë
	TThostFtdcPasswordType	FirstOTP;
	///µÚ¶þ¸ö¶¯Ì¬ÃÜÂë
	TThostFtdcPasswordType	SecondOTP;
};

///Í¶×ÊÕßÊÖÐø·ÑÂÊÄ£°å
struct CThostFtdcCommRateModelField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///ÊÖÐø·ÑÂÊÄ£°å´úÂë
	TThostFtdcInvestorIDType	CommModelID;
	///Ä£°åÃû³Æ
	TThostFtdcCommModelNameType	CommModelName;
};

///ÇëÇó²éÑ¯Í¶×ÊÕßÊÖÐø·ÑÂÊÄ£°å
struct CThostFtdcQryCommRateModelField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///ÊÖÐø·ÑÂÊÄ£°å´úÂë
	TThostFtdcInvestorIDType	CommModelID;
};

///Í¶×ÊÕß±£Ö¤½ðÂÊÄ£°å
struct CThostFtdcMarginModelField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///±£Ö¤½ðÂÊÄ£°å´úÂë
	TThostFtdcInvestorIDType	MarginModelID;
	///Ä£°åÃû³Æ
	TThostFtdcCommModelNameType	MarginModelName;
};

///ÇëÇó²éÑ¯Í¶×ÊÕß±£Ö¤½ðÂÊÄ£°å
struct CThostFtdcQryMarginModelField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///±£Ö¤½ðÂÊÄ£°å´úÂë
	TThostFtdcInvestorIDType	MarginModelID;
};

///²Öµ¥ÕÛµÖÐÅÏ¢
struct CThostFtdcEWarrantOffsetField
{
	///½»Ò×ÈÕÆÚ
	TThostFtdcTradeDateType	TradingDay;
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///Í¶×ÊÕß´úÂë
	TThostFtdcInvestorIDType	InvestorID;
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldInstrumentIDType	reserve1;
	///ÂòÂô·½Ïò
	TThostFtdcDirectionType	Direction;
	///Í¶»úÌ×±£±êÖ¾
	TThostFtdcHedgeFlagType	HedgeFlag;
	///ÊýÁ¿
	TThostFtdcVolumeType	Volume;
	///Í¶×Êµ¥Ôª´úÂë
	TThostFtdcInvestUnitIDType	InvestUnitID;
	///ºÏÔ¼´úÂë
	TThostFtdcInstrumentIDType	InstrumentID;
};

///²éÑ¯²Öµ¥ÕÛµÖÐÅÏ¢
struct CThostFtdcQryEWarrantOffsetField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///Í¶×ÊÕß´úÂë
	TThostFtdcInvestorIDType	InvestorID;
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldInstrumentIDType	reserve1;
	///Í¶×Êµ¥Ôª´úÂë
	TThostFtdcInvestUnitIDType	InvestUnitID;
	///ºÏÔ¼´úÂë
	TThostFtdcInstrumentIDType	InstrumentID;
};

///²éÑ¯Í¶×ÊÕßÆ·ÖÖ/¿çÆ·ÖÖ±£Ö¤½ð
struct CThostFtdcQryInvestorProductGroupMarginField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///Í¶×ÊÕß´úÂë
	TThostFtdcInvestorIDType	InvestorID;
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldInstrumentIDType	reserve1;
	///Í¶»úÌ×±£±êÖ¾
	TThostFtdcHedgeFlagType	HedgeFlag;
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///Í¶×Êµ¥Ôª´úÂë
	TThostFtdcInvestUnitIDType	InvestUnitID;
	///Æ·ÖÖ/¿çÆ·ÖÖ±êÊ¾
	TThostFtdcInstrumentIDType	ProductGroupID;
};

///Í¶×ÊÕßÆ·ÖÖ/¿çÆ·ÖÖ±£Ö¤½ð
struct CThostFtdcInvestorProductGroupMarginField
{
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldInstrumentIDType	reserve1;
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///Í¶×ÊÕß´úÂë
	TThostFtdcInvestorIDType	InvestorID;
	///½»Ò×ÈÕ
	TThostFtdcDateType	TradingDay;
	///½áËã±àºÅ
	TThostFtdcSettlementIDType	SettlementID;
	///¶³½áµÄ±£Ö¤½ð
	TThostFtdcMoneyType	FrozenMargin;
	///¶àÍ·¶³½áµÄ±£Ö¤½ð
	TThostFtdcMoneyType	LongFrozenMargin;
	///¿ÕÍ·¶³½áµÄ±£Ö¤½ð
	TThostFtdcMoneyType	ShortFrozenMargin;
	///Õ¼ÓÃµÄ±£Ö¤½ð
	TThostFtdcMoneyType	UseMargin;
	///¶àÍ·±£Ö¤½ð
	TThostFtdcMoneyType	LongUseMargin;
	///¿ÕÍ·±£Ö¤½ð
	TThostFtdcMoneyType	ShortUseMargin;
	///½»Ò×Ëù±£Ö¤½ð
	TThostFtdcMoneyType	ExchMargin;
	///½»Ò×Ëù¶àÍ·±£Ö¤½ð
	TThostFtdcMoneyType	LongExchMargin;
	///½»Ò×Ëù¿ÕÍ·±£Ö¤½ð
	TThostFtdcMoneyType	ShortExchMargin;
	///Æ½²ÖÓ¯¿÷
	TThostFtdcMoneyType	CloseProfit;
	///¶³½áµÄÊÖÐø·Ñ
	TThostFtdcMoneyType	FrozenCommission;
	///ÊÖÐø·Ñ
	TThostFtdcMoneyType	Commission;
	///¶³½áµÄ×Ê½ð
	TThostFtdcMoneyType	FrozenCash;
	///×Ê½ð²î¶î
	TThostFtdcMoneyType	CashIn;
	///³Ö²ÖÓ¯¿÷
	TThostFtdcMoneyType	PositionProfit;
	///ÕÛµÖ×Ü½ð¶î
	TThostFtdcMoneyType	OffsetAmount;
	///¶àÍ·ÕÛµÖ×Ü½ð¶î
	TThostFtdcMoneyType	LongOffsetAmount;
	///¿ÕÍ·ÕÛµÖ×Ü½ð¶î
	TThostFtdcMoneyType	ShortOffsetAmount;
	///½»Ò×ËùÕÛµÖ×Ü½ð¶î
	TThostFtdcMoneyType	ExchOffsetAmount;
	///½»Ò×Ëù¶àÍ·ÕÛµÖ×Ü½ð¶î
	TThostFtdcMoneyType	LongExchOffsetAmount;
	///½»Ò×Ëù¿ÕÍ·ÕÛµÖ×Ü½ð¶î
	TThostFtdcMoneyType	ShortExchOffsetAmount;
	///Í¶»úÌ×±£±êÖ¾
	TThostFtdcHedgeFlagType	HedgeFlag;
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///Í¶×Êµ¥Ôª´úÂë
	TThostFtdcInvestUnitIDType	InvestUnitID;
	///Æ·ÖÖ/¿çÆ·ÖÖ±êÊ¾
	TThostFtdcInstrumentIDType	ProductGroupID;
};

///²éÑ¯¼à¿ØÖÐÐÄÓÃ»§ÁîÅÆ
struct CThostFtdcQueryCFMMCTradingAccountTokenField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///Í¶×ÊÕß´úÂë
	TThostFtdcInvestorIDType	InvestorID;
	///Í¶×Êµ¥Ôª´úÂë
	TThostFtdcInvestUnitIDType	InvestUnitID;
};

///¼à¿ØÖÐÐÄÓÃ»§ÁîÅÆ
struct CThostFtdcCFMMCTradingAccountTokenField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///¾­¼Í¹«Ë¾Í³Ò»±àÂë
	TThostFtdcParticipantIDType	ParticipantID;
	///Í¶×ÊÕßÕÊºÅ
	TThostFtdcAccountIDType	AccountID;
	///ÃÜÔ¿±àºÅ
	TThostFtdcSequenceNoType	KeyID;
	///¶¯Ì¬ÁîÅÆ
	TThostFtdcCFMMCTokenType	Token;
};

///²éÑ¯²úÆ·×é
struct CThostFtdcQryProductGroupField
{
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldInstrumentIDType	reserve1;
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///²úÆ·´úÂë
	TThostFtdcInstrumentIDType	ProductID;
};

///Í¶×ÊÕßÆ·ÖÖ/¿çÆ·ÖÖ±£Ö¤½ð²úÆ·×é
struct CThostFtdcProductGroupField
{
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldInstrumentIDType	reserve1;
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldInstrumentIDType	reserve2;
	///²úÆ·´úÂë
	TThostFtdcInstrumentIDType	ProductID;
	///²úÆ·×é´úÂë
	TThostFtdcInstrumentIDType	ProductGroupID;
};

///½»Ò×Ëù¹«¸æ
struct CThostFtdcBulletinField
{
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///½»Ò×ÈÕ
	TThostFtdcDateType	TradingDay;
	///¹«¸æ±àºÅ
	TThostFtdcBulletinIDType	BulletinID;
	///ÐòÁÐºÅ
	TThostFtdcSequenceNoType	SequenceNo;
	///¹«¸æÀàÐÍ
	TThostFtdcNewsTypeType	NewsType;
	///½ô¼±³Ì¶È
	TThostFtdcNewsUrgencyType	NewsUrgency;
	///·¢ËÍÊ±¼ä
	TThostFtdcTimeType	SendTime;
	///ÏûÏ¢ÕªÒª
	TThostFtdcAbstractType	Abstract;
	///ÏûÏ¢À´Ô´
	TThostFtdcComeFromType	ComeFrom;
	///ÏûÏ¢ÕýÎÄ
	TThostFtdcContentType	Content;
	///WEBµØÖ·
	TThostFtdcURLLinkType	URLLink;
	///ÊÐ³¡´úÂë
	TThostFtdcMarketIDType	MarketID;
};

///²éÑ¯½»Ò×Ëù¹«¸æ
struct CThostFtdcQryBulletinField
{
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///¹«¸æ±àºÅ
	TThostFtdcBulletinIDType	BulletinID;
	///ÐòÁÐºÅ
	TThostFtdcSequenceNoType	SequenceNo;
	///¹«¸æÀàÐÍ
	TThostFtdcNewsTypeType	NewsType;
	///½ô¼±³Ì¶È
	TThostFtdcNewsUrgencyType	NewsUrgency;
};

///MulticastInstrument
struct CThostFtdcMulticastInstrumentField
{
	///Ö÷ÌâºÅ
	TThostFtdcInstallIDType	TopicID;
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldInstrumentIDType	reserve1;
	///ºÏÔ¼±àºÅ
	TThostFtdcInstallIDType	InstrumentNo;
	///»ù×¼¼Û
	TThostFtdcPriceType	CodePrice;
	///ºÏÔ¼ÊýÁ¿³ËÊý
	TThostFtdcVolumeMultipleType	VolumeMultiple;
	///×îÐ¡±ä¶¯¼ÛÎ»
	TThostFtdcPriceType	PriceTick;
	///ºÏÔ¼´úÂë
	TThostFtdcInstrumentIDType	InstrumentID;
};

///QryMulticastInstrument
struct CThostFtdcQryMulticastInstrumentField
{
	///Ö÷ÌâºÅ
	TThostFtdcInstallIDType	TopicID;
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldInstrumentIDType	reserve1;
	///ºÏÔ¼´úÂë
	TThostFtdcInstrumentIDType	InstrumentID;
};

///App¿Í»§¶ËÈ¨ÏÞ·ÖÅä
struct CThostFtdcAppIDAuthAssignField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///App´úÂë
	TThostFtdcAppIDType	AppID;
	///½»Ò×ÖÐÐÄ´úÂë
	TThostFtdcDRIdentityIDType	DRIdentityID;
};

///×ªÕÊ¿ª»§ÇëÇó
struct CThostFtdcReqOpenAccountField
{
	///ÒµÎñ¹¦ÄÜÂë
	TThostFtdcTradeCodeType	TradeCode;
	///ÒøÐÐ´úÂë
	TThostFtdcBankIDType	BankID;
	///ÒøÐÐ·ÖÖ§»ú¹¹´úÂë
	TThostFtdcBankBrchIDType	BankBranchID;
	///ÆÚÉÌ´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///ÆÚÉÌ·ÖÖ§»ú¹¹´úÂë
	TThostFtdcFutureBranchIDType	BrokerBranchID;
	///½»Ò×ÈÕÆÚ
	TThostFtdcTradeDateType	TradeDate;
	///½»Ò×Ê±¼ä
	TThostFtdcTradeTimeType	TradeTime;
	///ÒøÐÐÁ÷Ë®ºÅ
	TThostFtdcBankSerialType	BankSerial;
	///½»Ò×ÏµÍ³ÈÕÆÚ 
	TThostFtdcTradeDateType	TradingDay;
	///ÒøÆÚÆ½Ì¨ÏûÏ¢Á÷Ë®ºÅ
	TThostFtdcSerialType	PlateSerial;
	///×îºó·ÖÆ¬±êÖ¾
	TThostFtdcLastFragmentType	LastFragment;
	///»á»°ºÅ
	TThostFtdcSessionIDType	SessionID;
	///¿Í»§ÐÕÃû
	TThostFtdcIndividualNameType	CustomerName;
	///Ö¤¼þÀàÐÍ
	TThostFtdcIdCardTypeType	IdCardType;
	///Ö¤¼þºÅÂë
	TThostFtdcIdentifiedCardNoType	IdentifiedCardNo;
	///ÐÔ±ð
	TThostFtdcGenderType	Gender;
	///¹ú¼Ò´úÂë
	TThostFtdcCountryCodeType	CountryCode;
	///¿Í»§ÀàÐÍ
	TThostFtdcCustTypeType	CustType;
	///µØÖ·
	TThostFtdcAddressType	Address;
	///ÓÊ±à
	TThostFtdcZipCodeType	ZipCode;
	///µç»°ºÅÂë
	TThostFtdcTelephoneType	Telephone;
	///ÊÖ»ú
	TThostFtdcMobilePhoneType	MobilePhone;
	///´«Õæ
	TThostFtdcFaxType	Fax;
	///µç×ÓÓÊ¼þ
	TThostFtdcEMailType	EMail;
	///×Ê½ðÕË»§×´Ì¬
	TThostFtdcMoneyAccountStatusType	MoneyAccountStatus;
	///ÒøÐÐÕÊºÅ
	TThostFtdcBankAccountType	BankAccount;
	///ÒøÐÐÃÜÂë
	TThostFtdcPasswordType	BankPassWord;
	///Í¶×ÊÕßÕÊºÅ
	TThostFtdcAccountIDType	AccountID;
	///ÆÚ»õÃÜÂë
	TThostFtdcPasswordType	Password;
	///°²×°±àºÅ
	TThostFtdcInstallIDType	InstallID;
	///ÑéÖ¤¿Í»§Ö¤¼þºÅÂë±êÖ¾
	TThostFtdcYesNoIndicatorType	VerifyCertNoFlag;
	///±ÒÖÖ´úÂë
	TThostFtdcCurrencyIDType	CurrencyID;
	///»ã³®±êÖ¾
	TThostFtdcCashExchangeCodeType	CashExchangeCode;
	///ÕªÒª
	TThostFtdcDigestType	Digest;
	///ÒøÐÐÕÊºÅÀàÐÍ
	TThostFtdcBankAccTypeType	BankAccType;
	///ÇþµÀ±êÖ¾
	TThostFtdcDeviceIDType	DeviceID;
	///ÆÚ»õµ¥Î»ÕÊºÅÀàÐÍ
	TThostFtdcBankAccTypeType	BankSecuAccType;
	///ÆÚ»õ¹«Ë¾ÒøÐÐ±àÂë
	TThostFtdcBankCodingForFutureType	BrokerIDByBank;
	///ÆÚ»õµ¥Î»ÕÊºÅ
	TThostFtdcBankAccountType	BankSecuAcc;
	///ÒøÐÐÃÜÂë±êÖ¾
	TThostFtdcPwdFlagType	BankPwdFlag;
	///ÆÚ»õ×Ê½ðÃÜÂëºË¶Ô±êÖ¾
	TThostFtdcPwdFlagType	SecuPwdFlag;
	///½»Ò×¹ñÔ±
	TThostFtdcOperNoType	OperNo;
	///½»Ò×ID
	TThostFtdcTIDType	TID;
	///ÓÃ»§±êÊ¶
	TThostFtdcUserIDType	UserID;
	///³¤¿Í»§ÐÕÃû
	TThostFtdcLongIndividualNameType	LongCustomerName;
};

///×ªÕÊÏú»§ÇëÇó
struct CThostFtdcReqCancelAccountField
{
	///ÒµÎñ¹¦ÄÜÂë
	TThostFtdcTradeCodeType	TradeCode;
	///ÒøÐÐ´úÂë
	TThostFtdcBankIDType	BankID;
	///ÒøÐÐ·ÖÖ§»ú¹¹´úÂë
	TThostFtdcBankBrchIDType	BankBranchID;
	///ÆÚÉÌ´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///ÆÚÉÌ·ÖÖ§»ú¹¹´úÂë
	TThostFtdcFutureBranchIDType	BrokerBranchID;
	///½»Ò×ÈÕÆÚ
	TThostFtdcTradeDateType	TradeDate;
	///½»Ò×Ê±¼ä
	TThostFtdcTradeTimeType	TradeTime;
	///ÒøÐÐÁ÷Ë®ºÅ
	TThostFtdcBankSerialType	BankSerial;
	///½»Ò×ÏµÍ³ÈÕÆÚ 
	TThostFtdcTradeDateType	TradingDay;
	///ÒøÆÚÆ½Ì¨ÏûÏ¢Á÷Ë®ºÅ
	TThostFtdcSerialType	PlateSerial;
	///×îºó·ÖÆ¬±êÖ¾
	TThostFtdcLastFragmentType	LastFragment;
	///»á»°ºÅ
	TThostFtdcSessionIDType	SessionID;
	///¿Í»§ÐÕÃû
	TThostFtdcIndividualNameType	CustomerName;
	///Ö¤¼þÀàÐÍ
	TThostFtdcIdCardTypeType	IdCardType;
	///Ö¤¼þºÅÂë
	TThostFtdcIdentifiedCardNoType	IdentifiedCardNo;
	///ÐÔ±ð
	TThostFtdcGenderType	Gender;
	///¹ú¼Ò´úÂë
	TThostFtdcCountryCodeType	CountryCode;
	///¿Í»§ÀàÐÍ
	TThostFtdcCustTypeType	CustType;
	///µØÖ·
	TThostFtdcAddressType	Address;
	///ÓÊ±à
	TThostFtdcZipCodeType	ZipCode;
	///µç»°ºÅÂë
	TThostFtdcTelephoneType	Telephone;
	///ÊÖ»ú
	TThostFtdcMobilePhoneType	MobilePhone;
	///´«Õæ
	TThostFtdcFaxType	Fax;
	///µç×ÓÓÊ¼þ
	TThostFtdcEMailType	EMail;
	///×Ê½ðÕË»§×´Ì¬
	TThostFtdcMoneyAccountStatusType	MoneyAccountStatus;
	///ÒøÐÐÕÊºÅ
	TThostFtdcBankAccountType	BankAccount;
	///ÒøÐÐÃÜÂë
	TThostFtdcPasswordType	BankPassWord;
	///Í¶×ÊÕßÕÊºÅ
	TThostFtdcAccountIDType	AccountID;
	///ÆÚ»õÃÜÂë
	TThostFtdcPasswordType	Password;
	///°²×°±àºÅ
	TThostFtdcInstallIDType	InstallID;
	///ÑéÖ¤¿Í»§Ö¤¼þºÅÂë±êÖ¾
	TThostFtdcYesNoIndicatorType	VerifyCertNoFlag;
	///±ÒÖÖ´úÂë
	TThostFtdcCurrencyIDType	CurrencyID;
	///»ã³®±êÖ¾
	TThostFtdcCashExchangeCodeType	CashExchangeCode;
	///ÕªÒª
	TThostFtdcDigestType	Digest;
	///ÒøÐÐÕÊºÅÀàÐÍ
	TThostFtdcBankAccTypeType	BankAccType;
	///ÇþµÀ±êÖ¾
	TThostFtdcDeviceIDType	DeviceID;
	///ÆÚ»õµ¥Î»ÕÊºÅÀàÐÍ
	TThostFtdcBankAccTypeType	BankSecuAccType;
	///ÆÚ»õ¹«Ë¾ÒøÐÐ±àÂë
	TThostFtdcBankCodingForFutureType	BrokerIDByBank;
	///ÆÚ»õµ¥Î»ÕÊºÅ
	TThostFtdcBankAccountType	BankSecuAcc;
	///ÒøÐÐÃÜÂë±êÖ¾
	TThostFtdcPwdFlagType	BankPwdFlag;
	///ÆÚ»õ×Ê½ðÃÜÂëºË¶Ô±êÖ¾
	TThostFtdcPwdFlagType	SecuPwdFlag;
	///½»Ò×¹ñÔ±
	TThostFtdcOperNoType	OperNo;
	///½»Ò×ID
	TThostFtdcTIDType	TID;
	///ÓÃ»§±êÊ¶
	TThostFtdcUserIDType	UserID;
	///³¤¿Í»§ÐÕÃû
	TThostFtdcLongIndividualNameType	LongCustomerName;
};

///±ä¸üÒøÐÐÕË»§ÇëÇó
struct CThostFtdcReqChangeAccountField
{
	///ÒµÎñ¹¦ÄÜÂë
	TThostFtdcTradeCodeType	TradeCode;
	///ÒøÐÐ´úÂë
	TThostFtdcBankIDType	BankID;
	///ÒøÐÐ·ÖÖ§»ú¹¹´úÂë
	TThostFtdcBankBrchIDType	BankBranchID;
	///ÆÚÉÌ´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///ÆÚÉÌ·ÖÖ§»ú¹¹´úÂë
	TThostFtdcFutureBranchIDType	BrokerBranchID;
	///½»Ò×ÈÕÆÚ
	TThostFtdcTradeDateType	TradeDate;
	///½»Ò×Ê±¼ä
	TThostFtdcTradeTimeType	TradeTime;
	///ÒøÐÐÁ÷Ë®ºÅ
	TThostFtdcBankSerialType	BankSerial;
	///½»Ò×ÏµÍ³ÈÕÆÚ 
	TThostFtdcTradeDateType	TradingDay;
	///ÒøÆÚÆ½Ì¨ÏûÏ¢Á÷Ë®ºÅ
	TThostFtdcSerialType	PlateSerial;
	///×îºó·ÖÆ¬±êÖ¾
	TThostFtdcLastFragmentType	LastFragment;
	///»á»°ºÅ
	TThostFtdcSessionIDType	SessionID;
	///¿Í»§ÐÕÃû
	TThostFtdcIndividualNameType	CustomerName;
	///Ö¤¼þÀàÐÍ
	TThostFtdcIdCardTypeType	IdCardType;
	///Ö¤¼þºÅÂë
	TThostFtdcIdentifiedCardNoType	IdentifiedCardNo;
	///ÐÔ±ð
	TThostFtdcGenderType	Gender;
	///¹ú¼Ò´úÂë
	TThostFtdcCountryCodeType	CountryCode;
	///¿Í»§ÀàÐÍ
	TThostFtdcCustTypeType	CustType;
	///µØÖ·
	TThostFtdcAddressType	Address;
	///ÓÊ±à
	TThostFtdcZipCodeType	ZipCode;
	///µç»°ºÅÂë
	TThostFtdcTelephoneType	Telephone;
	///ÊÖ»ú
	TThostFtdcMobilePhoneType	MobilePhone;
	///´«Õæ
	TThostFtdcFaxType	Fax;
	///µç×ÓÓÊ¼þ
	TThostFtdcEMailType	EMail;
	///×Ê½ðÕË»§×´Ì¬
	TThostFtdcMoneyAccountStatusType	MoneyAccountStatus;
	///ÒøÐÐÕÊºÅ
	TThostFtdcBankAccountType	BankAccount;
	///ÒøÐÐÃÜÂë
	TThostFtdcPasswordType	BankPassWord;
	///ÐÂÒøÐÐÕÊºÅ
	TThostFtdcBankAccountType	NewBankAccount;
	///ÐÂÒøÐÐÃÜÂë
	TThostFtdcPasswordType	NewBankPassWord;
	///Í¶×ÊÕßÕÊºÅ
	TThostFtdcAccountIDType	AccountID;
	///ÆÚ»õÃÜÂë
	TThostFtdcPasswordType	Password;
	///ÒøÐÐÕÊºÅÀàÐÍ
	TThostFtdcBankAccTypeType	BankAccType;
	///°²×°±àºÅ
	TThostFtdcInstallIDType	InstallID;
	///ÑéÖ¤¿Í»§Ö¤¼þºÅÂë±êÖ¾
	TThostFtdcYesNoIndicatorType	VerifyCertNoFlag;
	///±ÒÖÖ´úÂë
	TThostFtdcCurrencyIDType	CurrencyID;
	///ÆÚ»õ¹«Ë¾ÒøÐÐ±àÂë
	TThostFtdcBankCodingForFutureType	BrokerIDByBank;
	///ÒøÐÐÃÜÂë±êÖ¾
	TThostFtdcPwdFlagType	BankPwdFlag;
	///ÆÚ»õ×Ê½ðÃÜÂëºË¶Ô±êÖ¾
	TThostFtdcPwdFlagType	SecuPwdFlag;
	///½»Ò×ID
	TThostFtdcTIDType	TID;
	///ÕªÒª
	TThostFtdcDigestType	Digest;
	///³¤¿Í»§ÐÕÃû
	TThostFtdcLongIndividualNameType	LongCustomerName;
};

///×ªÕËÇëÇó
struct CThostFtdcReqTransferField
{
	///ÒµÎñ¹¦ÄÜÂë
	TThostFtdcTradeCodeType	TradeCode;
	///ÒøÐÐ´úÂë
	TThostFtdcBankIDType	BankID;
	///ÒøÐÐ·ÖÖ§»ú¹¹´úÂë
	TThostFtdcBankBrchIDType	BankBranchID;
	///ÆÚÉÌ´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///ÆÚÉÌ·ÖÖ§»ú¹¹´úÂë
	TThostFtdcFutureBranchIDType	BrokerBranchID;
	///½»Ò×ÈÕÆÚ
	TThostFtdcTradeDateType	TradeDate;
	///½»Ò×Ê±¼ä
	TThostFtdcTradeTimeType	TradeTime;
	///ÒøÐÐÁ÷Ë®ºÅ
	TThostFtdcBankSerialType	BankSerial;
	///½»Ò×ÏµÍ³ÈÕÆÚ 
	TThostFtdcTradeDateType	TradingDay;
	///ÒøÆÚÆ½Ì¨ÏûÏ¢Á÷Ë®ºÅ
	TThostFtdcSerialType	PlateSerial;
	///×îºó·ÖÆ¬±êÖ¾
	TThostFtdcLastFragmentType	LastFragment;
	///»á»°ºÅ
	TThostFtdcSessionIDType	SessionID;
	///¿Í»§ÐÕÃû
	TThostFtdcIndividualNameType	CustomerName;
	///Ö¤¼þÀàÐÍ
	TThostFtdcIdCardTypeType	IdCardType;
	///Ö¤¼þºÅÂë
	TThostFtdcIdentifiedCardNoType	IdentifiedCardNo;
	///¿Í»§ÀàÐÍ
	TThostFtdcCustTypeType	CustType;
	///ÒøÐÐÕÊºÅ
	TThostFtdcBankAccountType	BankAccount;
	///ÒøÐÐÃÜÂë
	TThostFtdcPasswordType	BankPassWord;
	///Í¶×ÊÕßÕÊºÅ
	TThostFtdcAccountIDType	AccountID;
	///ÆÚ»õÃÜÂë
	TThostFtdcPasswordType	Password;
	///°²×°±àºÅ
	TThostFtdcInstallIDType	InstallID;
	///ÆÚ»õ¹«Ë¾Á÷Ë®ºÅ
	TThostFtdcFutureSerialType	FutureSerial;
	///ÓÃ»§±êÊ¶
	TThostFtdcUserIDType	UserID;
	///ÑéÖ¤¿Í»§Ö¤¼þºÅÂë±êÖ¾
	TThostFtdcYesNoIndicatorType	VerifyCertNoFlag;
	///±ÒÖÖ´úÂë
	TThostFtdcCurrencyIDType	CurrencyID;
	///×ªÕÊ½ð¶î
	TThostFtdcTradeAmountType	TradeAmount;
	///ÆÚ»õ¿ÉÈ¡½ð¶î
	TThostFtdcTradeAmountType	FutureFetchAmount;
	///·ÑÓÃÖ§¸¶±êÖ¾
	TThostFtdcFeePayFlagType	FeePayFlag;
	///Ó¦ÊÕ¿Í»§·ÑÓÃ
	TThostFtdcCustFeeType	CustFee;
	///Ó¦ÊÕÆÚ»õ¹«Ë¾·ÑÓÃ
	TThostFtdcFutureFeeType	BrokerFee;
	///·¢ËÍ·½¸ø½ÓÊÕ·½µÄÏûÏ¢
	TThostFtdcAddInfoType	Message;
	///ÕªÒª
	TThostFtdcDigestType	Digest;
	///ÒøÐÐÕÊºÅÀàÐÍ
	TThostFtdcBankAccTypeType	BankAccType;
	///ÇþµÀ±êÖ¾
	TThostFtdcDeviceIDType	DeviceID;
	///ÆÚ»õµ¥Î»ÕÊºÅÀàÐÍ
	TThostFtdcBankAccTypeType	BankSecuAccType;
	///ÆÚ»õ¹«Ë¾ÒøÐÐ±àÂë
	TThostFtdcBankCodingForFutureType	BrokerIDByBank;
	///ÆÚ»õµ¥Î»ÕÊºÅ
	TThostFtdcBankAccountType	BankSecuAcc;
	///ÒøÐÐÃÜÂë±êÖ¾
	TThostFtdcPwdFlagType	BankPwdFlag;
	///ÆÚ»õ×Ê½ðÃÜÂëºË¶Ô±êÖ¾
	TThostFtdcPwdFlagType	SecuPwdFlag;
	///½»Ò×¹ñÔ±
	TThostFtdcOperNoType	OperNo;
	///ÇëÇó±àºÅ
	TThostFtdcRequestIDType	RequestID;
	///½»Ò×ID
	TThostFtdcTIDType	TID;
	///×ªÕË½»Ò××´Ì¬
	TThostFtdcTransferStatusType	TransferStatus;
	///³¤¿Í»§ÐÕÃû
	TThostFtdcLongIndividualNameType	LongCustomerName;
};

///ÒøÐÐ·¢ÆðÒøÐÐ×Ê½ð×ªÆÚ»õÏìÓ¦
struct CThostFtdcRspTransferField
{
	///ÒµÎñ¹¦ÄÜÂë
	TThostFtdcTradeCodeType	TradeCode;
	///ÒøÐÐ´úÂë
	TThostFtdcBankIDType	BankID;
	///ÒøÐÐ·ÖÖ§»ú¹¹´úÂë
	TThostFtdcBankBrchIDType	BankBranchID;
	///ÆÚÉÌ´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///ÆÚÉÌ·ÖÖ§»ú¹¹´úÂë
	TThostFtdcFutureBranchIDType	BrokerBranchID;
	///½»Ò×ÈÕÆÚ
	TThostFtdcTradeDateType	TradeDate;
	///½»Ò×Ê±¼ä
	TThostFtdcTradeTimeType	TradeTime;
	///ÒøÐÐÁ÷Ë®ºÅ
	TThostFtdcBankSerialType	BankSerial;
	///½»Ò×ÏµÍ³ÈÕÆÚ 
	TThostFtdcTradeDateType	TradingDay;
	///ÒøÆÚÆ½Ì¨ÏûÏ¢Á÷Ë®ºÅ
	TThostFtdcSerialType	PlateSerial;
	///×îºó·ÖÆ¬±êÖ¾
	TThostFtdcLastFragmentType	LastFragment;
	///»á»°ºÅ
	TThostFtdcSessionIDType	SessionID;
	///¿Í»§ÐÕÃû
	TThostFtdcIndividualNameType	CustomerName;
	///Ö¤¼þÀàÐÍ
	TThostFtdcIdCardTypeType	IdCardType;
	///Ö¤¼þºÅÂë
	TThostFtdcIdentifiedCardNoType	IdentifiedCardNo;
	///¿Í»§ÀàÐÍ
	TThostFtdcCustTypeType	CustType;
	///ÒøÐÐÕÊºÅ
	TThostFtdcBankAccountType	BankAccount;
	///ÒøÐÐÃÜÂë
	TThostFtdcPasswordType	BankPassWord;
	///Í¶×ÊÕßÕÊºÅ
	TThostFtdcAccountIDType	AccountID;
	///ÆÚ»õÃÜÂë
	TThostFtdcPasswordType	Password;
	///°²×°±àºÅ
	TThostFtdcInstallIDType	InstallID;
	///ÆÚ»õ¹«Ë¾Á÷Ë®ºÅ
	TThostFtdcFutureSerialType	FutureSerial;
	///ÓÃ»§±êÊ¶
	TThostFtdcUserIDType	UserID;
	///ÑéÖ¤¿Í»§Ö¤¼þºÅÂë±êÖ¾
	TThostFtdcYesNoIndicatorType	VerifyCertNoFlag;
	///±ÒÖÖ´úÂë
	TThostFtdcCurrencyIDType	CurrencyID;
	///×ªÕÊ½ð¶î
	TThostFtdcTradeAmountType	TradeAmount;
	///ÆÚ»õ¿ÉÈ¡½ð¶î
	TThostFtdcTradeAmountType	FutureFetchAmount;
	///·ÑÓÃÖ§¸¶±êÖ¾
	TThostFtdcFeePayFlagType	FeePayFlag;
	///Ó¦ÊÕ¿Í»§·ÑÓÃ
	TThostFtdcCustFeeType	CustFee;
	///Ó¦ÊÕÆÚ»õ¹«Ë¾·ÑÓÃ
	TThostFtdcFutureFeeType	BrokerFee;
	///·¢ËÍ·½¸ø½ÓÊÕ·½µÄÏûÏ¢
	TThostFtdcAddInfoType	Message;
	///ÕªÒª
	TThostFtdcDigestType	Digest;
	///ÒøÐÐÕÊºÅÀàÐÍ
	TThostFtdcBankAccTypeType	BankAccType;
	///ÇþµÀ±êÖ¾
	TThostFtdcDeviceIDType	DeviceID;
	///ÆÚ»õµ¥Î»ÕÊºÅÀàÐÍ
	TThostFtdcBankAccTypeType	BankSecuAccType;
	///ÆÚ»õ¹«Ë¾ÒøÐÐ±àÂë
	TThostFtdcBankCodingForFutureType	BrokerIDByBank;
	///ÆÚ»õµ¥Î»ÕÊºÅ
	TThostFtdcBankAccountType	BankSecuAcc;
	///ÒøÐÐÃÜÂë±êÖ¾
	TThostFtdcPwdFlagType	BankPwdFlag;
	///ÆÚ»õ×Ê½ðÃÜÂëºË¶Ô±êÖ¾
	TThostFtdcPwdFlagType	SecuPwdFlag;
	///½»Ò×¹ñÔ±
	TThostFtdcOperNoType	OperNo;
	///ÇëÇó±àºÅ
	TThostFtdcRequestIDType	RequestID;
	///½»Ò×ID
	TThostFtdcTIDType	TID;
	///×ªÕË½»Ò××´Ì¬
	TThostFtdcTransferStatusType	TransferStatus;
	///´íÎó´úÂë
	TThostFtdcErrorIDType	ErrorID;
	///´íÎóÐÅÏ¢
	TThostFtdcErrorMsgType	ErrorMsg;
	///³¤¿Í»§ÐÕÃû
	TThostFtdcLongIndividualNameType	LongCustomerName;
};

///³åÕýÇëÇó
struct CThostFtdcReqRepealField
{
	///³åÕýÊ±¼ä¼ä¸ô
	TThostFtdcRepealTimeIntervalType	RepealTimeInterval;
	///ÒÑ¾­³åÕý´ÎÊý
	TThostFtdcRepealedTimesType	RepealedTimes;
	///ÒøÐÐ³åÕý±êÖ¾
	TThostFtdcBankRepealFlagType	BankRepealFlag;
	///ÆÚÉÌ³åÕý±êÖ¾
	TThostFtdcBrokerRepealFlagType	BrokerRepealFlag;
	///±»³åÕýÆ½Ì¨Á÷Ë®ºÅ
	TThostFtdcPlateSerialType	PlateRepealSerial;
	///±»³åÕýÒøÐÐÁ÷Ë®ºÅ
	TThostFtdcBankSerialType	BankRepealSerial;
	///±»³åÕýÆÚ»õÁ÷Ë®ºÅ
	TThostFtdcFutureSerialType	FutureRepealSerial;
	///ÒµÎñ¹¦ÄÜÂë
	TThostFtdcTradeCodeType	TradeCode;
	///ÒøÐÐ´úÂë
	TThostFtdcBankIDType	BankID;
	///ÒøÐÐ·ÖÖ§»ú¹¹´úÂë
	TThostFtdcBankBrchIDType	BankBranchID;
	///ÆÚÉÌ´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///ÆÚÉÌ·ÖÖ§»ú¹¹´úÂë
	TThostFtdcFutureBranchIDType	BrokerBranchID;
	///½»Ò×ÈÕÆÚ
	TThostFtdcTradeDateType	TradeDate;
	///½»Ò×Ê±¼ä
	TThostFtdcTradeTimeType	TradeTime;
	///ÒøÐÐÁ÷Ë®ºÅ
	TThostFtdcBankSerialType	BankSerial;
	///½»Ò×ÏµÍ³ÈÕÆÚ 
	TThostFtdcTradeDateType	TradingDay;
	///ÒøÆÚÆ½Ì¨ÏûÏ¢Á÷Ë®ºÅ
	TThostFtdcSerialType	PlateSerial;
	///×îºó·ÖÆ¬±êÖ¾
	TThostFtdcLastFragmentType	LastFragment;
	///»á»°ºÅ
	TThostFtdcSessionIDType	SessionID;
	///¿Í»§ÐÕÃû
	TThostFtdcIndividualNameType	CustomerName;
	///Ö¤¼þÀàÐÍ
	TThostFtdcIdCardTypeType	IdCardType;
	///Ö¤¼þºÅÂë
	TThostFtdcIdentifiedCardNoType	IdentifiedCardNo;
	///¿Í»§ÀàÐÍ
	TThostFtdcCustTypeType	CustType;
	///ÒøÐÐÕÊºÅ
	TThostFtdcBankAccountType	BankAccount;
	///ÒøÐÐÃÜÂë
	TThostFtdcPasswordType	BankPassWord;
	///Í¶×ÊÕßÕÊºÅ
	TThostFtdcAccountIDType	AccountID;
	///ÆÚ»õÃÜÂë
	TThostFtdcPasswordType	Password;
	///°²×°±àºÅ
	TThostFtdcInstallIDType	InstallID;
	///ÆÚ»õ¹«Ë¾Á÷Ë®ºÅ
	TThostFtdcFutureSerialType	FutureSerial;
	///ÓÃ»§±êÊ¶
	TThostFtdcUserIDType	UserID;
	///ÑéÖ¤¿Í»§Ö¤¼þºÅÂë±êÖ¾
	TThostFtdcYesNoIndicatorType	VerifyCertNoFlag;
	///±ÒÖÖ´úÂë
	TThostFtdcCurrencyIDType	CurrencyID;
	///×ªÕÊ½ð¶î
	TThostFtdcTradeAmountType	TradeAmount;
	///ÆÚ»õ¿ÉÈ¡½ð¶î
	TThostFtdcTradeAmountType	FutureFetchAmount;
	///·ÑÓÃÖ§¸¶±êÖ¾
	TThostFtdcFeePayFlagType	FeePayFlag;
	///Ó¦ÊÕ¿Í»§·ÑÓÃ
	TThostFtdcCustFeeType	CustFee;
	///Ó¦ÊÕÆÚ»õ¹«Ë¾·ÑÓÃ
	TThostFtdcFutureFeeType	BrokerFee;
	///·¢ËÍ·½¸ø½ÓÊÕ·½µÄÏûÏ¢
	TThostFtdcAddInfoType	Message;
	///ÕªÒª
	TThostFtdcDigestType	Digest;
	///ÒøÐÐÕÊºÅÀàÐÍ
	TThostFtdcBankAccTypeType	BankAccType;
	///ÇþµÀ±êÖ¾
	TThostFtdcDeviceIDType	DeviceID;
	///ÆÚ»õµ¥Î»ÕÊºÅÀàÐÍ
	TThostFtdcBankAccTypeType	BankSecuAccType;
	///ÆÚ»õ¹«Ë¾ÒøÐÐ±àÂë
	TThostFtdcBankCodingForFutureType	BrokerIDByBank;
	///ÆÚ»õµ¥Î»ÕÊºÅ
	TThostFtdcBankAccountType	BankSecuAcc;
	///ÒøÐÐÃÜÂë±êÖ¾
	TThostFtdcPwdFlagType	BankPwdFlag;
	///ÆÚ»õ×Ê½ðÃÜÂëºË¶Ô±êÖ¾
	TThostFtdcPwdFlagType	SecuPwdFlag;
	///½»Ò×¹ñÔ±
	TThostFtdcOperNoType	OperNo;
	///ÇëÇó±àºÅ
	TThostFtdcRequestIDType	RequestID;
	///½»Ò×ID
	TThostFtdcTIDType	TID;
	///×ªÕË½»Ò××´Ì¬
	TThostFtdcTransferStatusType	TransferStatus;
	///³¤¿Í»§ÐÕÃû
	TThostFtdcLongIndividualNameType	LongCustomerName;
};

///³åÕýÏìÓ¦
struct CThostFtdcRspRepealField
{
	///³åÕýÊ±¼ä¼ä¸ô
	TThostFtdcRepealTimeIntervalType	RepealTimeInterval;
	///ÒÑ¾­³åÕý´ÎÊý
	TThostFtdcRepealedTimesType	RepealedTimes;
	///ÒøÐÐ³åÕý±êÖ¾
	TThostFtdcBankRepealFlagType	BankRepealFlag;
	///ÆÚÉÌ³åÕý±êÖ¾
	TThostFtdcBrokerRepealFlagType	BrokerRepealFlag;
	///±»³åÕýÆ½Ì¨Á÷Ë®ºÅ
	TThostFtdcPlateSerialType	PlateRepealSerial;
	///±»³åÕýÒøÐÐÁ÷Ë®ºÅ
	TThostFtdcBankSerialType	BankRepealSerial;
	///±»³åÕýÆÚ»õÁ÷Ë®ºÅ
	TThostFtdcFutureSerialType	FutureRepealSerial;
	///ÒµÎñ¹¦ÄÜÂë
	TThostFtdcTradeCodeType	TradeCode;
	///ÒøÐÐ´úÂë
	TThostFtdcBankIDType	BankID;
	///ÒøÐÐ·ÖÖ§»ú¹¹´úÂë
	TThostFtdcBankBrchIDType	BankBranchID;
	///ÆÚÉÌ´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///ÆÚÉÌ·ÖÖ§»ú¹¹´úÂë
	TThostFtdcFutureBranchIDType	BrokerBranchID;
	///½»Ò×ÈÕÆÚ
	TThostFtdcTradeDateType	TradeDate;
	///½»Ò×Ê±¼ä
	TThostFtdcTradeTimeType	TradeTime;
	///ÒøÐÐÁ÷Ë®ºÅ
	TThostFtdcBankSerialType	BankSerial;
	///½»Ò×ÏµÍ³ÈÕÆÚ 
	TThostFtdcTradeDateType	TradingDay;
	///ÒøÆÚÆ½Ì¨ÏûÏ¢Á÷Ë®ºÅ
	TThostFtdcSerialType	PlateSerial;
	///×îºó·ÖÆ¬±êÖ¾
	TThostFtdcLastFragmentType	LastFragment;
	///»á»°ºÅ
	TThostFtdcSessionIDType	SessionID;
	///¿Í»§ÐÕÃû
	TThostFtdcIndividualNameType	CustomerName;
	///Ö¤¼þÀàÐÍ
	TThostFtdcIdCardTypeType	IdCardType;
	///Ö¤¼þºÅÂë
	TThostFtdcIdentifiedCardNoType	IdentifiedCardNo;
	///¿Í»§ÀàÐÍ
	TThostFtdcCustTypeType	CustType;
	///ÒøÐÐÕÊºÅ
	TThostFtdcBankAccountType	BankAccount;
	///ÒøÐÐÃÜÂë
	TThostFtdcPasswordType	BankPassWord;
	///Í¶×ÊÕßÕÊºÅ
	TThostFtdcAccountIDType	AccountID;
	///ÆÚ»õÃÜÂë
	TThostFtdcPasswordType	Password;
	///°²×°±àºÅ
	TThostFtdcInstallIDType	InstallID;
	///ÆÚ»õ¹«Ë¾Á÷Ë®ºÅ
	TThostFtdcFutureSerialType	FutureSerial;
	///ÓÃ»§±êÊ¶
	TThostFtdcUserIDType	UserID;
	///ÑéÖ¤¿Í»§Ö¤¼þºÅÂë±êÖ¾
	TThostFtdcYesNoIndicatorType	VerifyCertNoFlag;
	///±ÒÖÖ´úÂë
	TThostFtdcCurrencyIDType	CurrencyID;
	///×ªÕÊ½ð¶î
	TThostFtdcTradeAmountType	TradeAmount;
	///ÆÚ»õ¿ÉÈ¡½ð¶î
	TThostFtdcTradeAmountType	FutureFetchAmount;
	///·ÑÓÃÖ§¸¶±êÖ¾
	TThostFtdcFeePayFlagType	FeePayFlag;
	///Ó¦ÊÕ¿Í»§·ÑÓÃ
	TThostFtdcCustFeeType	CustFee;
	///Ó¦ÊÕÆÚ»õ¹«Ë¾·ÑÓÃ
	TThostFtdcFutureFeeType	BrokerFee;
	///·¢ËÍ·½¸ø½ÓÊÕ·½µÄÏûÏ¢
	TThostFtdcAddInfoType	Message;
	///ÕªÒª
	TThostFtdcDigestType	Digest;
	///ÒøÐÐÕÊºÅÀàÐÍ
	TThostFtdcBankAccTypeType	BankAccType;
	///ÇþµÀ±êÖ¾
	TThostFtdcDeviceIDType	DeviceID;
	///ÆÚ»õµ¥Î»ÕÊºÅÀàÐÍ
	TThostFtdcBankAccTypeType	BankSecuAccType;
	///ÆÚ»õ¹«Ë¾ÒøÐÐ±àÂë
	TThostFtdcBankCodingForFutureType	BrokerIDByBank;
	///ÆÚ»õµ¥Î»ÕÊºÅ
	TThostFtdcBankAccountType	BankSecuAcc;
	///ÒøÐÐÃÜÂë±êÖ¾
	TThostFtdcPwdFlagType	BankPwdFlag;
	///ÆÚ»õ×Ê½ðÃÜÂëºË¶Ô±êÖ¾
	TThostFtdcPwdFlagType	SecuPwdFlag;
	///½»Ò×¹ñÔ±
	TThostFtdcOperNoType	OperNo;
	///ÇëÇó±àºÅ
	TThostFtdcRequestIDType	RequestID;
	///½»Ò×ID
	TThostFtdcTIDType	TID;
	///×ªÕË½»Ò××´Ì¬
	TThostFtdcTransferStatusType	TransferStatus;
	///´íÎó´úÂë
	TThostFtdcErrorIDType	ErrorID;
	///´íÎóÐÅÏ¢
	TThostFtdcErrorMsgType	ErrorMsg;
	///³¤¿Í»§ÐÕÃû
	TThostFtdcLongIndividualNameType	LongCustomerName;
};

///²éÑ¯ÕË»§ÐÅÏ¢ÇëÇó
struct CThostFtdcReqQueryAccountField
{
	///ÒµÎñ¹¦ÄÜÂë
	TThostFtdcTradeCodeType	TradeCode;
	///ÒøÐÐ´úÂë
	TThostFtdcBankIDType	BankID;
	///ÒøÐÐ·ÖÖ§»ú¹¹´úÂë
	TThostFtdcBankBrchIDType	BankBranchID;
	///ÆÚÉÌ´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///ÆÚÉÌ·ÖÖ§»ú¹¹´úÂë
	TThostFtdcFutureBranchIDType	BrokerBranchID;
	///½»Ò×ÈÕÆÚ
	TThostFtdcTradeDateType	TradeDate;
	///½»Ò×Ê±¼ä
	TThostFtdcTradeTimeType	TradeTime;
	///ÒøÐÐÁ÷Ë®ºÅ
	TThostFtdcBankSerialType	BankSerial;
	///½»Ò×ÏµÍ³ÈÕÆÚ 
	TThostFtdcTradeDateType	TradingDay;
	///ÒøÆÚÆ½Ì¨ÏûÏ¢Á÷Ë®ºÅ
	TThostFtdcSerialType	PlateSerial;
	///×îºó·ÖÆ¬±êÖ¾
	TThostFtdcLastFragmentType	LastFragment;
	///»á»°ºÅ
	TThostFtdcSessionIDType	SessionID;
	///¿Í»§ÐÕÃû
	TThostFtdcIndividualNameType	CustomerName;
	///Ö¤¼þÀàÐÍ
	TThostFtdcIdCardTypeType	IdCardType;
	///Ö¤¼þºÅÂë
	TThostFtdcIdentifiedCardNoType	IdentifiedCardNo;
	///¿Í»§ÀàÐÍ
	TThostFtdcCustTypeType	CustType;
	///ÒøÐÐÕÊºÅ
	TThostFtdcBankAccountType	BankAccount;
	///ÒøÐÐÃÜÂë
	TThostFtdcPasswordType	BankPassWord;
	///Í¶×ÊÕßÕÊºÅ
	TThostFtdcAccountIDType	AccountID;
	///ÆÚ»õÃÜÂë
	TThostFtdcPasswordType	Password;
	///ÆÚ»õ¹«Ë¾Á÷Ë®ºÅ
	TThostFtdcFutureSerialType	FutureSerial;
	///°²×°±àºÅ
	TThostFtdcInstallIDType	InstallID;
	///ÓÃ»§±êÊ¶
	TThostFtdcUserIDType	UserID;
	///ÑéÖ¤¿Í»§Ö¤¼þºÅÂë±êÖ¾
	TThostFtdcYesNoIndicatorType	VerifyCertNoFlag;
	///±ÒÖÖ´úÂë
	TThostFtdcCurrencyIDType	CurrencyID;
	///ÕªÒª
	TThostFtdcDigestType	Digest;
	///ÒøÐÐÕÊºÅÀàÐÍ
	TThostFtdcBankAccTypeType	BankAccType;
	///ÇþµÀ±êÖ¾
	TThostFtdcDeviceIDType	DeviceID;
	///ÆÚ»õµ¥Î»ÕÊºÅÀàÐÍ
	TThostFtdcBankAccTypeType	BankSecuAccType;
	///ÆÚ»õ¹«Ë¾ÒøÐÐ±àÂë
	TThostFtdcBankCodingForFutureType	BrokerIDByBank;
	///ÆÚ»õµ¥Î»ÕÊºÅ
	TThostFtdcBankAccountType	BankSecuAcc;
	///ÒøÐÐÃÜÂë±êÖ¾
	TThostFtdcPwdFlagType	BankPwdFlag;
	///ÆÚ»õ×Ê½ðÃÜÂëºË¶Ô±êÖ¾
	TThostFtdcPwdFlagType	SecuPwdFlag;
	///½»Ò×¹ñÔ±
	TThostFtdcOperNoType	OperNo;
	///ÇëÇó±àºÅ
	TThostFtdcRequestIDType	RequestID;
	///½»Ò×ID
	TThostFtdcTIDType	TID;
	///³¤¿Í»§ÐÕÃû
	TThostFtdcLongIndividualNameType	LongCustomerName;
};

///²éÑ¯ÕË»§ÐÅÏ¢ÏìÓ¦
struct CThostFtdcRspQueryAccountField
{
	///ÒµÎñ¹¦ÄÜÂë
	TThostFtdcTradeCodeType	TradeCode;
	///ÒøÐÐ´úÂë
	TThostFtdcBankIDType	BankID;
	///ÒøÐÐ·ÖÖ§»ú¹¹´úÂë
	TThostFtdcBankBrchIDType	BankBranchID;
	///ÆÚÉÌ´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///ÆÚÉÌ·ÖÖ§»ú¹¹´úÂë
	TThostFtdcFutureBranchIDType	BrokerBranchID;
	///½»Ò×ÈÕÆÚ
	TThostFtdcTradeDateType	TradeDate;
	///½»Ò×Ê±¼ä
	TThostFtdcTradeTimeType	TradeTime;
	///ÒøÐÐÁ÷Ë®ºÅ
	TThostFtdcBankSerialType	BankSerial;
	///½»Ò×ÏµÍ³ÈÕÆÚ 
	TThostFtdcTradeDateType	TradingDay;
	///ÒøÆÚÆ½Ì¨ÏûÏ¢Á÷Ë®ºÅ
	TThostFtdcSerialType	PlateSerial;
	///×îºó·ÖÆ¬±êÖ¾
	TThostFtdcLastFragmentType	LastFragment;
	///»á»°ºÅ
	TThostFtdcSessionIDType	SessionID;
	///¿Í»§ÐÕÃû
	TThostFtdcIndividualNameType	CustomerName;
	///Ö¤¼þÀàÐÍ
	TThostFtdcIdCardTypeType	IdCardType;
	///Ö¤¼þºÅÂë
	TThostFtdcIdentifiedCardNoType	IdentifiedCardNo;
	///¿Í»§ÀàÐÍ
	TThostFtdcCustTypeType	CustType;
	///ÒøÐÐÕÊºÅ
	TThostFtdcBankAccountType	BankAccount;
	///ÒøÐÐÃÜÂë
	TThostFtdcPasswordType	BankPassWord;
	///Í¶×ÊÕßÕÊºÅ
	TThostFtdcAccountIDType	AccountID;
	///ÆÚ»õÃÜÂë
	TThostFtdcPasswordType	Password;
	///ÆÚ»õ¹«Ë¾Á÷Ë®ºÅ
	TThostFtdcFutureSerialType	FutureSerial;
	///°²×°±àºÅ
	TThostFtdcInstallIDType	InstallID;
	///ÓÃ»§±êÊ¶
	TThostFtdcUserIDType	UserID;
	///ÑéÖ¤¿Í»§Ö¤¼þºÅÂë±êÖ¾
	TThostFtdcYesNoIndicatorType	VerifyCertNoFlag;
	///±ÒÖÖ´úÂë
	TThostFtdcCurrencyIDType	CurrencyID;
	///ÕªÒª
	TThostFtdcDigestType	Digest;
	///ÒøÐÐÕÊºÅÀàÐÍ
	TThostFtdcBankAccTypeType	BankAccType;
	///ÇþµÀ±êÖ¾
	TThostFtdcDeviceIDType	DeviceID;
	///ÆÚ»õµ¥Î»ÕÊºÅÀàÐÍ
	TThostFtdcBankAccTypeType	BankSecuAccType;
	///ÆÚ»õ¹«Ë¾ÒøÐÐ±àÂë
	TThostFtdcBankCodingForFutureType	BrokerIDByBank;
	///ÆÚ»õµ¥Î»ÕÊºÅ
	TThostFtdcBankAccountType	BankSecuAcc;
	///ÒøÐÐÃÜÂë±êÖ¾
	TThostFtdcPwdFlagType	BankPwdFlag;
	///ÆÚ»õ×Ê½ðÃÜÂëºË¶Ô±êÖ¾
	TThostFtdcPwdFlagType	SecuPwdFlag;
	///½»Ò×¹ñÔ±
	TThostFtdcOperNoType	OperNo;
	///ÇëÇó±àºÅ
	TThostFtdcRequestIDType	RequestID;
	///½»Ò×ID
	TThostFtdcTIDType	TID;
	///ÒøÐÐ¿ÉÓÃ½ð¶î
	TThostFtdcTradeAmountType	BankUseAmount;
	///ÒøÐÐ¿ÉÈ¡½ð¶î
	TThostFtdcTradeAmountType	BankFetchAmount;
	///³¤¿Í»§ÐÕÃû
	TThostFtdcLongIndividualNameType	LongCustomerName;
};

///ÆÚÉÌÇ©µ½Ç©ÍË
struct CThostFtdcFutureSignIOField
{
	///ÒµÎñ¹¦ÄÜÂë
	TThostFtdcTradeCodeType	TradeCode;
	///ÒøÐÐ´úÂë
	TThostFtdcBankIDType	BankID;
	///ÒøÐÐ·ÖÖ§»ú¹¹´úÂë
	TThostFtdcBankBrchIDType	BankBranchID;
	///ÆÚÉÌ´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///ÆÚÉÌ·ÖÖ§»ú¹¹´úÂë
	TThostFtdcFutureBranchIDType	BrokerBranchID;
	///½»Ò×ÈÕÆÚ
	TThostFtdcTradeDateType	TradeDate;
	///½»Ò×Ê±¼ä
	TThostFtdcTradeTimeType	TradeTime;
	///ÒøÐÐÁ÷Ë®ºÅ
	TThostFtdcBankSerialType	BankSerial;
	///½»Ò×ÏµÍ³ÈÕÆÚ 
	TThostFtdcTradeDateType	TradingDay;
	///ÒøÆÚÆ½Ì¨ÏûÏ¢Á÷Ë®ºÅ
	TThostFtdcSerialType	PlateSerial;
	///×îºó·ÖÆ¬±êÖ¾
	TThostFtdcLastFragmentType	LastFragment;
	///»á»°ºÅ
	TThostFtdcSessionIDType	SessionID;
	///°²×°±àºÅ
	TThostFtdcInstallIDType	InstallID;
	///ÓÃ»§±êÊ¶
	TThostFtdcUserIDType	UserID;
	///ÕªÒª
	TThostFtdcDigestType	Digest;
	///±ÒÖÖ´úÂë
	TThostFtdcCurrencyIDType	CurrencyID;
	///ÇþµÀ±êÖ¾
	TThostFtdcDeviceIDType	DeviceID;
	///ÆÚ»õ¹«Ë¾ÒøÐÐ±àÂë
	TThostFtdcBankCodingForFutureType	BrokerIDByBank;
	///½»Ò×¹ñÔ±
	TThostFtdcOperNoType	OperNo;
	///ÇëÇó±àºÅ
	TThostFtdcRequestIDType	RequestID;
	///½»Ò×ID
	TThostFtdcTIDType	TID;
};

///ÆÚÉÌÇ©µ½ÏìÓ¦
struct CThostFtdcRspFutureSignInField
{
	///ÒµÎñ¹¦ÄÜÂë
	TThostFtdcTradeCodeType	TradeCode;
	///ÒøÐÐ´úÂë
	TThostFtdcBankIDType	BankID;
	///ÒøÐÐ·ÖÖ§»ú¹¹´úÂë
	TThostFtdcBankBrchIDType	BankBranchID;
	///ÆÚÉÌ´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///ÆÚÉÌ·ÖÖ§»ú¹¹´úÂë
	TThostFtdcFutureBranchIDType	BrokerBranchID;
	///½»Ò×ÈÕÆÚ
	TThostFtdcTradeDateType	TradeDate;
	///½»Ò×Ê±¼ä
	TThostFtdcTradeTimeType	TradeTime;
	///ÒøÐÐÁ÷Ë®ºÅ
	TThostFtdcBankSerialType	BankSerial;
	///½»Ò×ÏµÍ³ÈÕÆÚ 
	TThostFtdcTradeDateType	TradingDay;
	///ÒøÆÚÆ½Ì¨ÏûÏ¢Á÷Ë®ºÅ
	TThostFtdcSerialType	PlateSerial;
	///×îºó·ÖÆ¬±êÖ¾
	TThostFtdcLastFragmentType	LastFragment;
	///»á»°ºÅ
	TThostFtdcSessionIDType	SessionID;
	///°²×°±àºÅ
	TThostFtdcInstallIDType	InstallID;
	///ÓÃ»§±êÊ¶
	TThostFtdcUserIDType	UserID;
	///ÕªÒª
	TThostFtdcDigestType	Digest;
	///±ÒÖÖ´úÂë
	TThostFtdcCurrencyIDType	CurrencyID;
	///ÇþµÀ±êÖ¾
	TThostFtdcDeviceIDType	DeviceID;
	///ÆÚ»õ¹«Ë¾ÒøÐÐ±àÂë
	TThostFtdcBankCodingForFutureType	BrokerIDByBank;
	///½»Ò×¹ñÔ±
	TThostFtdcOperNoType	OperNo;
	///ÇëÇó±àºÅ
	TThostFtdcRequestIDType	RequestID;
	///½»Ò×ID
	TThostFtdcTIDType	TID;
	///´íÎó´úÂë
	TThostFtdcErrorIDType	ErrorID;
	///´íÎóÐÅÏ¢
	TThostFtdcErrorMsgType	ErrorMsg;
	///PINÃÜÔ¿
	TThostFtdcPasswordKeyType	PinKey;
	///MACÃÜÔ¿
	TThostFtdcPasswordKeyType	MacKey;
};

///ÆÚÉÌÇ©ÍËÇëÇó
struct CThostFtdcReqFutureSignOutField
{
	///ÒµÎñ¹¦ÄÜÂë
	TThostFtdcTradeCodeType	TradeCode;
	///ÒøÐÐ´úÂë
	TThostFtdcBankIDType	BankID;
	///ÒøÐÐ·ÖÖ§»ú¹¹´úÂë
	TThostFtdcBankBrchIDType	BankBranchID;
	///ÆÚÉÌ´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///ÆÚÉÌ·ÖÖ§»ú¹¹´úÂë
	TThostFtdcFutureBranchIDType	BrokerBranchID;
	///½»Ò×ÈÕÆÚ
	TThostFtdcTradeDateType	TradeDate;
	///½»Ò×Ê±¼ä
	TThostFtdcTradeTimeType	TradeTime;
	///ÒøÐÐÁ÷Ë®ºÅ
	TThostFtdcBankSerialType	BankSerial;
	///½»Ò×ÏµÍ³ÈÕÆÚ 
	TThostFtdcTradeDateType	TradingDay;
	///ÒøÆÚÆ½Ì¨ÏûÏ¢Á÷Ë®ºÅ
	TThostFtdcSerialType	PlateSerial;
	///×îºó·ÖÆ¬±êÖ¾
	TThostFtdcLastFragmentType	LastFragment;
	///»á»°ºÅ
	TThostFtdcSessionIDType	SessionID;
	///°²×°±àºÅ
	TThostFtdcInstallIDType	InstallID;
	///ÓÃ»§±êÊ¶
	TThostFtdcUserIDType	UserID;
	///ÕªÒª
	TThostFtdcDigestType	Digest;
	///±ÒÖÖ´úÂë
	TThostFtdcCurrencyIDType	CurrencyID;
	///ÇþµÀ±êÖ¾
	TThostFtdcDeviceIDType	DeviceID;
	///ÆÚ»õ¹«Ë¾ÒøÐÐ±àÂë
	TThostFtdcBankCodingForFutureType	BrokerIDByBank;
	///½»Ò×¹ñÔ±
	TThostFtdcOperNoType	OperNo;
	///ÇëÇó±àºÅ
	TThostFtdcRequestIDType	RequestID;
	///½»Ò×ID
	TThostFtdcTIDType	TID;
};

///ÆÚÉÌÇ©ÍËÏìÓ¦
struct CThostFtdcRspFutureSignOutField
{
	///ÒµÎñ¹¦ÄÜÂë
	TThostFtdcTradeCodeType	TradeCode;
	///ÒøÐÐ´úÂë
	TThostFtdcBankIDType	BankID;
	///ÒøÐÐ·ÖÖ§»ú¹¹´úÂë
	TThostFtdcBankBrchIDType	BankBranchID;
	///ÆÚÉÌ´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///ÆÚÉÌ·ÖÖ§»ú¹¹´úÂë
	TThostFtdcFutureBranchIDType	BrokerBranchID;
	///½»Ò×ÈÕÆÚ
	TThostFtdcTradeDateType	TradeDate;
	///½»Ò×Ê±¼ä
	TThostFtdcTradeTimeType	TradeTime;
	///ÒøÐÐÁ÷Ë®ºÅ
	TThostFtdcBankSerialType	BankSerial;
	///½»Ò×ÏµÍ³ÈÕÆÚ 
	TThostFtdcTradeDateType	TradingDay;
	///ÒøÆÚÆ½Ì¨ÏûÏ¢Á÷Ë®ºÅ
	TThostFtdcSerialType	PlateSerial;
	///×îºó·ÖÆ¬±êÖ¾
	TThostFtdcLastFragmentType	LastFragment;
	///»á»°ºÅ
	TThostFtdcSessionIDType	SessionID;
	///°²×°±àºÅ
	TThostFtdcInstallIDType	InstallID;
	///ÓÃ»§±êÊ¶
	TThostFtdcUserIDType	UserID;
	///ÕªÒª
	TThostFtdcDigestType	Digest;
	///±ÒÖÖ´úÂë
	TThostFtdcCurrencyIDType	CurrencyID;
	///ÇþµÀ±êÖ¾
	TThostFtdcDeviceIDType	DeviceID;
	///ÆÚ»õ¹«Ë¾ÒøÐÐ±àÂë
	TThostFtdcBankCodingForFutureType	BrokerIDByBank;
	///½»Ò×¹ñÔ±
	TThostFtdcOperNoType	OperNo;
	///ÇëÇó±àºÅ
	TThostFtdcRequestIDType	RequestID;
	///½»Ò×ID
	TThostFtdcTIDType	TID;
	///´íÎó´úÂë
	TThostFtdcErrorIDType	ErrorID;
	///´íÎóÐÅÏ¢
	TThostFtdcErrorMsgType	ErrorMsg;
};

///²éÑ¯Ö¸¶¨Á÷Ë®ºÅµÄ½»Ò×½á¹ûÇëÇó
struct CThostFtdcReqQueryTradeResultBySerialField
{
	///ÒµÎñ¹¦ÄÜÂë
	TThostFtdcTradeCodeType	TradeCode;
	///ÒøÐÐ´úÂë
	TThostFtdcBankIDType	BankID;
	///ÒøÐÐ·ÖÖ§»ú¹¹´úÂë
	TThostFtdcBankBrchIDType	BankBranchID;
	///ÆÚÉÌ´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///ÆÚÉÌ·ÖÖ§»ú¹¹´úÂë
	TThostFtdcFutureBranchIDType	BrokerBranchID;
	///½»Ò×ÈÕÆÚ
	TThostFtdcTradeDateType	TradeDate;
	///½»Ò×Ê±¼ä
	TThostFtdcTradeTimeType	TradeTime;
	///ÒøÐÐÁ÷Ë®ºÅ
	TThostFtdcBankSerialType	BankSerial;
	///½»Ò×ÏµÍ³ÈÕÆÚ 
	TThostFtdcTradeDateType	TradingDay;
	///ÒøÆÚÆ½Ì¨ÏûÏ¢Á÷Ë®ºÅ
	TThostFtdcSerialType	PlateSerial;
	///×îºó·ÖÆ¬±êÖ¾
	TThostFtdcLastFragmentType	LastFragment;
	///»á»°ºÅ
	TThostFtdcSessionIDType	SessionID;
	///Á÷Ë®ºÅ
	TThostFtdcSerialType	Reference;
	///±¾Á÷Ë®ºÅ·¢²¼ÕßµÄ»ú¹¹ÀàÐÍ
	TThostFtdcInstitutionTypeType	RefrenceIssureType;
	///±¾Á÷Ë®ºÅ·¢²¼Õß»ú¹¹±àÂë
	TThostFtdcOrganCodeType	RefrenceIssure;
	///¿Í»§ÐÕÃû
	TThostFtdcIndividualNameType	CustomerName;
	///Ö¤¼þÀàÐÍ
	TThostFtdcIdCardTypeType	IdCardType;
	///Ö¤¼þºÅÂë
	TThostFtdcIdentifiedCardNoType	IdentifiedCardNo;
	///¿Í»§ÀàÐÍ
	TThostFtdcCustTypeType	CustType;
	///ÒøÐÐÕÊºÅ
	TThostFtdcBankAccountType	BankAccount;
	///ÒøÐÐÃÜÂë
	TThostFtdcPasswordType	BankPassWord;
	///Í¶×ÊÕßÕÊºÅ
	TThostFtdcAccountIDType	AccountID;
	///ÆÚ»õÃÜÂë
	TThostFtdcPasswordType	Password;
	///±ÒÖÖ´úÂë
	TThostFtdcCurrencyIDType	CurrencyID;
	///×ªÕÊ½ð¶î
	TThostFtdcTradeAmountType	TradeAmount;
	///ÕªÒª
	TThostFtdcDigestType	Digest;
	///³¤¿Í»§ÐÕÃû
	TThostFtdcLongIndividualNameType	LongCustomerName;
};

///²éÑ¯Ö¸¶¨Á÷Ë®ºÅµÄ½»Ò×½á¹ûÏìÓ¦
struct CThostFtdcRspQueryTradeResultBySerialField
{
	///ÒµÎñ¹¦ÄÜÂë
	TThostFtdcTradeCodeType	TradeCode;
	///ÒøÐÐ´úÂë
	TThostFtdcBankIDType	BankID;
	///ÒøÐÐ·ÖÖ§»ú¹¹´úÂë
	TThostFtdcBankBrchIDType	BankBranchID;
	///ÆÚÉÌ´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///ÆÚÉÌ·ÖÖ§»ú¹¹´úÂë
	TThostFtdcFutureBranchIDType	BrokerBranchID;
	///½»Ò×ÈÕÆÚ
	TThostFtdcTradeDateType	TradeDate;
	///½»Ò×Ê±¼ä
	TThostFtdcTradeTimeType	TradeTime;
	///ÒøÐÐÁ÷Ë®ºÅ
	TThostFtdcBankSerialType	BankSerial;
	///½»Ò×ÏµÍ³ÈÕÆÚ 
	TThostFtdcTradeDateType	TradingDay;
	///ÒøÆÚÆ½Ì¨ÏûÏ¢Á÷Ë®ºÅ
	TThostFtdcSerialType	PlateSerial;
	///×îºó·ÖÆ¬±êÖ¾
	TThostFtdcLastFragmentType	LastFragment;
	///»á»°ºÅ
	TThostFtdcSessionIDType	SessionID;
	///´íÎó´úÂë
	TThostFtdcErrorIDType	ErrorID;
	///´íÎóÐÅÏ¢
	TThostFtdcErrorMsgType	ErrorMsg;
	///Á÷Ë®ºÅ
	TThostFtdcSerialType	Reference;
	///±¾Á÷Ë®ºÅ·¢²¼ÕßµÄ»ú¹¹ÀàÐÍ
	TThostFtdcInstitutionTypeType	RefrenceIssureType;
	///±¾Á÷Ë®ºÅ·¢²¼Õß»ú¹¹±àÂë
	TThostFtdcOrganCodeType	RefrenceIssure;
	///Ô­Ê¼·µ»Ø´úÂë
	TThostFtdcReturnCodeType	OriginReturnCode;
	///Ô­Ê¼·µ»ØÂëÃèÊö
	TThostFtdcDescrInfoForReturnCodeType	OriginDescrInfoForReturnCode;
	///ÒøÐÐÕÊºÅ
	TThostFtdcBankAccountType	BankAccount;
	///ÒøÐÐÃÜÂë
	TThostFtdcPasswordType	BankPassWord;
	///Í¶×ÊÕßÕÊºÅ
	TThostFtdcAccountIDType	AccountID;
	///ÆÚ»õÃÜÂë
	TThostFtdcPasswordType	Password;
	///±ÒÖÖ´úÂë
	TThostFtdcCurrencyIDType	CurrencyID;
	///×ªÕÊ½ð¶î
	TThostFtdcTradeAmountType	TradeAmount;
	///ÕªÒª
	TThostFtdcDigestType	Digest;
};

///ÈÕÖÕÎÄ¼þ¾ÍÐ÷ÇëÇó
struct CThostFtdcReqDayEndFileReadyField
{
	///ÒµÎñ¹¦ÄÜÂë
	TThostFtdcTradeCodeType	TradeCode;
	///ÒøÐÐ´úÂë
	TThostFtdcBankIDType	BankID;
	///ÒøÐÐ·ÖÖ§»ú¹¹´úÂë
	TThostFtdcBankBrchIDType	BankBranchID;
	///ÆÚÉÌ´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///ÆÚÉÌ·ÖÖ§»ú¹¹´úÂë
	TThostFtdcFutureBranchIDType	BrokerBranchID;
	///½»Ò×ÈÕÆÚ
	TThostFtdcTradeDateType	TradeDate;
	///½»Ò×Ê±¼ä
	TThostFtdcTradeTimeType	TradeTime;
	///ÒøÐÐÁ÷Ë®ºÅ
	TThostFtdcBankSerialType	BankSerial;
	///½»Ò×ÏµÍ³ÈÕÆÚ 
	TThostFtdcTradeDateType	TradingDay;
	///ÒøÆÚÆ½Ì¨ÏûÏ¢Á÷Ë®ºÅ
	TThostFtdcSerialType	PlateSerial;
	///×îºó·ÖÆ¬±êÖ¾
	TThostFtdcLastFragmentType	LastFragment;
	///»á»°ºÅ
	TThostFtdcSessionIDType	SessionID;
	///ÎÄ¼þÒµÎñ¹¦ÄÜ
	TThostFtdcFileBusinessCodeType	FileBusinessCode;
	///ÕªÒª
	TThostFtdcDigestType	Digest;
};

///·µ»Ø½á¹û
struct CThostFtdcReturnResultField
{
	///·µ»Ø´úÂë
	TThostFtdcReturnCodeType	ReturnCode;
	///·µ»ØÂëÃèÊö
	TThostFtdcDescrInfoForReturnCodeType	DescrInfoForReturnCode;
};

///ÑéÖ¤ÆÚ»õ×Ê½ðÃÜÂë
struct CThostFtdcVerifyFuturePasswordField
{
	///ÒµÎñ¹¦ÄÜÂë
	TThostFtdcTradeCodeType	TradeCode;
	///ÒøÐÐ´úÂë
	TThostFtdcBankIDType	BankID;
	///ÒøÐÐ·ÖÖ§»ú¹¹´úÂë
	TThostFtdcBankBrchIDType	BankBranchID;
	///ÆÚÉÌ´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///ÆÚÉÌ·ÖÖ§»ú¹¹´úÂë
	TThostFtdcFutureBranchIDType	BrokerBranchID;
	///½»Ò×ÈÕÆÚ
	TThostFtdcTradeDateType	TradeDate;
	///½»Ò×Ê±¼ä
	TThostFtdcTradeTimeType	TradeTime;
	///ÒøÐÐÁ÷Ë®ºÅ
	TThostFtdcBankSerialType	BankSerial;
	///½»Ò×ÏµÍ³ÈÕÆÚ 
	TThostFtdcTradeDateType	TradingDay;
	///ÒøÆÚÆ½Ì¨ÏûÏ¢Á÷Ë®ºÅ
	TThostFtdcSerialType	PlateSerial;
	///×îºó·ÖÆ¬±êÖ¾
	TThostFtdcLastFragmentType	LastFragment;
	///»á»°ºÅ
	TThostFtdcSessionIDType	SessionID;
	///Í¶×ÊÕßÕÊºÅ
	TThostFtdcAccountIDType	AccountID;
	///ÆÚ»õÃÜÂë
	TThostFtdcPasswordType	Password;
	///ÒøÐÐÕÊºÅ
	TThostFtdcBankAccountType	BankAccount;
	///ÒøÐÐÃÜÂë
	TThostFtdcPasswordType	BankPassWord;
	///°²×°±àºÅ
	TThostFtdcInstallIDType	InstallID;
	///½»Ò×ID
	TThostFtdcTIDType	TID;
	///±ÒÖÖ´úÂë
	TThostFtdcCurrencyIDType	CurrencyID;
};

///ÑéÖ¤¿Í»§ÐÅÏ¢
struct CThostFtdcVerifyCustInfoField
{
	///¿Í»§ÐÕÃû
	TThostFtdcIndividualNameType	CustomerName;
	///Ö¤¼þÀàÐÍ
	TThostFtdcIdCardTypeType	IdCardType;
	///Ö¤¼þºÅÂë
	TThostFtdcIdentifiedCardNoType	IdentifiedCardNo;
	///¿Í»§ÀàÐÍ
	TThostFtdcCustTypeType	CustType;
	///³¤¿Í»§ÐÕÃû
	TThostFtdcLongIndividualNameType	LongCustomerName;
};

///ÑéÖ¤ÆÚ»õ×Ê½ðÃÜÂëºÍ¿Í»§ÐÅÏ¢
struct CThostFtdcVerifyFuturePasswordAndCustInfoField
{
	///¿Í»§ÐÕÃû
	TThostFtdcIndividualNameType	CustomerName;
	///Ö¤¼þÀàÐÍ
	TThostFtdcIdCardTypeType	IdCardType;
	///Ö¤¼þºÅÂë
	TThostFtdcIdentifiedCardNoType	IdentifiedCardNo;
	///¿Í»§ÀàÐÍ
	TThostFtdcCustTypeType	CustType;
	///Í¶×ÊÕßÕÊºÅ
	TThostFtdcAccountIDType	AccountID;
	///ÆÚ»õÃÜÂë
	TThostFtdcPasswordType	Password;
	///±ÒÖÖ´úÂë
	TThostFtdcCurrencyIDType	CurrencyID;
	///³¤¿Í»§ÐÕÃû
	TThostFtdcLongIndividualNameType	LongCustomerName;
};

///ÑéÖ¤ÆÚ»õ×Ê½ðÃÜÂëºÍ¿Í»§ÐÅÏ¢
struct CThostFtdcDepositResultInformField
{
	///³öÈë½ðÁ÷Ë®ºÅ£¬¸ÃÁ÷Ë®ºÅÎªÒøÆÚ±¨ÅÌ·µ»ØµÄÁ÷Ë®ºÅ
	TThostFtdcDepositSeqNoType	DepositSeqNo;
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///Í¶×ÊÕß´úÂë
	TThostFtdcInvestorIDType	InvestorID;
	///Èë½ð½ð¶î
	TThostFtdcMoneyType	Deposit;
	///ÇëÇó±àºÅ
	TThostFtdcRequestIDType	RequestID;
	///·µ»Ø´úÂë
	TThostFtdcReturnCodeType	ReturnCode;
	///·µ»ØÂëÃèÊö
	TThostFtdcDescrInfoForReturnCodeType	DescrInfoForReturnCode;
};

///½»Ò×ºËÐÄÏòÒøÆÚ±¨ÅÌ·¢³öÃÜÔ¿Í¬²½ÇëÇó
struct CThostFtdcReqSyncKeyField
{
	///ÒµÎñ¹¦ÄÜÂë
	TThostFtdcTradeCodeType	TradeCode;
	///ÒøÐÐ´úÂë
	TThostFtdcBankIDType	BankID;
	///ÒøÐÐ·ÖÖ§»ú¹¹´úÂë
	TThostFtdcBankBrchIDType	BankBranchID;
	///ÆÚÉÌ´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///ÆÚÉÌ·ÖÖ§»ú¹¹´úÂë
	TThostFtdcFutureBranchIDType	BrokerBranchID;
	///½»Ò×ÈÕÆÚ
	TThostFtdcTradeDateType	TradeDate;
	///½»Ò×Ê±¼ä
	TThostFtdcTradeTimeType	TradeTime;
	///ÒøÐÐÁ÷Ë®ºÅ
	TThostFtdcBankSerialType	BankSerial;
	///½»Ò×ÏµÍ³ÈÕÆÚ 
	TThostFtdcTradeDateType	TradingDay;
	///ÒøÆÚÆ½Ì¨ÏûÏ¢Á÷Ë®ºÅ
	TThostFtdcSerialType	PlateSerial;
	///×îºó·ÖÆ¬±êÖ¾
	TThostFtdcLastFragmentType	LastFragment;
	///»á»°ºÅ
	TThostFtdcSessionIDType	SessionID;
	///°²×°±àºÅ
	TThostFtdcInstallIDType	InstallID;
	///ÓÃ»§±êÊ¶
	TThostFtdcUserIDType	UserID;
	///½»Ò×ºËÐÄ¸øÒøÆÚ±¨ÅÌµÄÏûÏ¢
	TThostFtdcAddInfoType	Message;
	///ÇþµÀ±êÖ¾
	TThostFtdcDeviceIDType	DeviceID;
	///ÆÚ»õ¹«Ë¾ÒøÐÐ±àÂë
	TThostFtdcBankCodingForFutureType	BrokerIDByBank;
	///½»Ò×¹ñÔ±
	TThostFtdcOperNoType	OperNo;
	///ÇëÇó±àºÅ
	TThostFtdcRequestIDType	RequestID;
	///½»Ò×ID
	TThostFtdcTIDType	TID;
};

///½»Ò×ºËÐÄÏòÒøÆÚ±¨ÅÌ·¢³öÃÜÔ¿Í¬²½ÏìÓ¦
struct CThostFtdcRspSyncKeyField
{
	///ÒµÎñ¹¦ÄÜÂë
	TThostFtdcTradeCodeType	TradeCode;
	///ÒøÐÐ´úÂë
	TThostFtdcBankIDType	BankID;
	///ÒøÐÐ·ÖÖ§»ú¹¹´úÂë
	TThostFtdcBankBrchIDType	BankBranchID;
	///ÆÚÉÌ´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///ÆÚÉÌ·ÖÖ§»ú¹¹´úÂë
	TThostFtdcFutureBranchIDType	BrokerBranchID;
	///½»Ò×ÈÕÆÚ
	TThostFtdcTradeDateType	TradeDate;
	///½»Ò×Ê±¼ä
	TThostFtdcTradeTimeType	TradeTime;
	///ÒøÐÐÁ÷Ë®ºÅ
	TThostFtdcBankSerialType	BankSerial;
	///½»Ò×ÏµÍ³ÈÕÆÚ 
	TThostFtdcTradeDateType	TradingDay;
	///ÒøÆÚÆ½Ì¨ÏûÏ¢Á÷Ë®ºÅ
	TThostFtdcSerialType	PlateSerial;
	///×îºó·ÖÆ¬±êÖ¾
	TThostFtdcLastFragmentType	LastFragment;
	///»á»°ºÅ
	TThostFtdcSessionIDType	SessionID;
	///°²×°±àºÅ
	TThostFtdcInstallIDType	InstallID;
	///ÓÃ»§±êÊ¶
	TThostFtdcUserIDType	UserID;
	///½»Ò×ºËÐÄ¸øÒøÆÚ±¨ÅÌµÄÏûÏ¢
	TThostFtdcAddInfoType	Message;
	///ÇþµÀ±êÖ¾
	TThostFtdcDeviceIDType	DeviceID;
	///ÆÚ»õ¹«Ë¾ÒøÐÐ±àÂë
	TThostFtdcBankCodingForFutureType	BrokerIDByBank;
	///½»Ò×¹ñÔ±
	TThostFtdcOperNoType	OperNo;
	///ÇëÇó±àºÅ
	TThostFtdcRequestIDType	RequestID;
	///½»Ò×ID
	TThostFtdcTIDType	TID;
	///´íÎó´úÂë
	TThostFtdcErrorIDType	ErrorID;
	///´íÎóÐÅÏ¢
	TThostFtdcErrorMsgType	ErrorMsg;
};

///²éÑ¯ÕË»§ÐÅÏ¢Í¨Öª
struct CThostFtdcNotifyQueryAccountField
{
	///ÒµÎñ¹¦ÄÜÂë
	TThostFtdcTradeCodeType	TradeCode;
	///ÒøÐÐ´úÂë
	TThostFtdcBankIDType	BankID;
	///ÒøÐÐ·ÖÖ§»ú¹¹´úÂë
	TThostFtdcBankBrchIDType	BankBranchID;
	///ÆÚÉÌ´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///ÆÚÉÌ·ÖÖ§»ú¹¹´úÂë
	TThostFtdcFutureBranchIDType	BrokerBranchID;
	///½»Ò×ÈÕÆÚ
	TThostFtdcTradeDateType	TradeDate;
	///½»Ò×Ê±¼ä
	TThostFtdcTradeTimeType	TradeTime;
	///ÒøÐÐÁ÷Ë®ºÅ
	TThostFtdcBankSerialType	BankSerial;
	///½»Ò×ÏµÍ³ÈÕÆÚ 
	TThostFtdcTradeDateType	TradingDay;
	///ÒøÆÚÆ½Ì¨ÏûÏ¢Á÷Ë®ºÅ
	TThostFtdcSerialType	PlateSerial;
	///×îºó·ÖÆ¬±êÖ¾
	TThostFtdcLastFragmentType	LastFragment;
	///»á»°ºÅ
	TThostFtdcSessionIDType	SessionID;
	///¿Í»§ÐÕÃû
	TThostFtdcIndividualNameType	CustomerName;
	///Ö¤¼þÀàÐÍ
	TThostFtdcIdCardTypeType	IdCardType;
	///Ö¤¼þºÅÂë
	TThostFtdcIdentifiedCardNoType	IdentifiedCardNo;
	///¿Í»§ÀàÐÍ
	TThostFtdcCustTypeType	CustType;
	///ÒøÐÐÕÊºÅ
	TThostFtdcBankAccountType	BankAccount;
	///ÒøÐÐÃÜÂë
	TThostFtdcPasswordType	BankPassWord;
	///Í¶×ÊÕßÕÊºÅ
	TThostFtdcAccountIDType	AccountID;
	///ÆÚ»õÃÜÂë
	TThostFtdcPasswordType	Password;
	///ÆÚ»õ¹«Ë¾Á÷Ë®ºÅ
	TThostFtdcFutureSerialType	FutureSerial;
	///°²×°±àºÅ
	TThostFtdcInstallIDType	InstallID;
	///ÓÃ»§±êÊ¶
	TThostFtdcUserIDType	UserID;
	///ÑéÖ¤¿Í»§Ö¤¼þºÅÂë±êÖ¾
	TThostFtdcYesNoIndicatorType	VerifyCertNoFlag;
	///±ÒÖÖ´úÂë
	TThostFtdcCurrencyIDType	CurrencyID;
	///ÕªÒª
	TThostFtdcDigestType	Digest;
	///ÒøÐÐÕÊºÅÀàÐÍ
	TThostFtdcBankAccTypeType	BankAccType;
	///ÇþµÀ±êÖ¾
	TThostFtdcDeviceIDType	DeviceID;
	///ÆÚ»õµ¥Î»ÕÊºÅÀàÐÍ
	TThostFtdcBankAccTypeType	BankSecuAccType;
	///ÆÚ»õ¹«Ë¾ÒøÐÐ±àÂë
	TThostFtdcBankCodingForFutureType	BrokerIDByBank;
	///ÆÚ»õµ¥Î»ÕÊºÅ
	TThostFtdcBankAccountType	BankSecuAcc;
	///ÒøÐÐÃÜÂë±êÖ¾
	TThostFtdcPwdFlagType	BankPwdFlag;
	///ÆÚ»õ×Ê½ðÃÜÂëºË¶Ô±êÖ¾
	TThostFtdcPwdFlagType	SecuPwdFlag;
	///½»Ò×¹ñÔ±
	TThostFtdcOperNoType	OperNo;
	///ÇëÇó±àºÅ
	TThostFtdcRequestIDType	RequestID;
	///½»Ò×ID
	TThostFtdcTIDType	TID;
	///ÒøÐÐ¿ÉÓÃ½ð¶î
	TThostFtdcTradeAmountType	BankUseAmount;
	///ÒøÐÐ¿ÉÈ¡½ð¶î
	TThostFtdcTradeAmountType	BankFetchAmount;
	///´íÎó´úÂë
	TThostFtdcErrorIDType	ErrorID;
	///´íÎóÐÅÏ¢
	TThostFtdcErrorMsgType	ErrorMsg;
	///³¤¿Í»§ÐÕÃû
	TThostFtdcLongIndividualNameType	LongCustomerName;
};

///ÒøÆÚ×ªÕË½»Ò×Á÷Ë®±í
struct CThostFtdcTransferSerialField
{
	///Æ½Ì¨Á÷Ë®ºÅ
	TThostFtdcPlateSerialType	PlateSerial;
	///½»Ò×·¢Æð·½ÈÕÆÚ
	TThostFtdcTradeDateType	TradeDate;
	///½»Ò×ÈÕÆÚ
	TThostFtdcDateType	TradingDay;
	///½»Ò×Ê±¼ä
	TThostFtdcTradeTimeType	TradeTime;
	///½»Ò×´úÂë
	TThostFtdcTradeCodeType	TradeCode;
	///»á»°±àºÅ
	TThostFtdcSessionIDType	SessionID;
	///ÒøÐÐ±àÂë
	TThostFtdcBankIDType	BankID;
	///ÒøÐÐ·ÖÖ§»ú¹¹±àÂë
	TThostFtdcBankBrchIDType	BankBranchID;
	///ÒøÐÐÕÊºÅÀàÐÍ
	TThostFtdcBankAccTypeType	BankAccType;
	///ÒøÐÐÕÊºÅ
	TThostFtdcBankAccountType	BankAccount;
	///ÒøÐÐÁ÷Ë®ºÅ
	TThostFtdcBankSerialType	BankSerial;
	///ÆÚ»õ¹«Ë¾±àÂë
	TThostFtdcBrokerIDType	BrokerID;
	///ÆÚÉÌ·ÖÖ§»ú¹¹´úÂë
	TThostFtdcFutureBranchIDType	BrokerBranchID;
	///ÆÚ»õ¹«Ë¾ÕÊºÅÀàÐÍ
	TThostFtdcFutureAccTypeType	FutureAccType;
	///Í¶×ÊÕßÕÊºÅ
	TThostFtdcAccountIDType	AccountID;
	///Í¶×ÊÕß´úÂë
	TThostFtdcInvestorIDType	InvestorID;
	///ÆÚ»õ¹«Ë¾Á÷Ë®ºÅ
	TThostFtdcFutureSerialType	FutureSerial;
	///Ö¤¼þÀàÐÍ
	TThostFtdcIdCardTypeType	IdCardType;
	///Ö¤¼þºÅÂë
	TThostFtdcIdentifiedCardNoType	IdentifiedCardNo;
	///±ÒÖÖ´úÂë
	TThostFtdcCurrencyIDType	CurrencyID;
	///½»Ò×½ð¶î
	TThostFtdcTradeAmountType	TradeAmount;
	///Ó¦ÊÕ¿Í»§·ÑÓÃ
	TThostFtdcCustFeeType	CustFee;
	///Ó¦ÊÕÆÚ»õ¹«Ë¾·ÑÓÃ
	TThostFtdcFutureFeeType	BrokerFee;
	///ÓÐÐ§±êÖ¾
	TThostFtdcAvailabilityFlagType	AvailabilityFlag;
	///²Ù×÷Ô±
	TThostFtdcOperatorCodeType	OperatorCode;
	///ÐÂÒøÐÐÕÊºÅ
	TThostFtdcBankAccountType	BankNewAccount;
	///´íÎó´úÂë
	TThostFtdcErrorIDType	ErrorID;
	///´íÎóÐÅÏ¢
	TThostFtdcErrorMsgType	ErrorMsg;
};

///ÇëÇó²éÑ¯×ªÕÊÁ÷Ë®
struct CThostFtdcQryTransferSerialField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///Í¶×ÊÕßÕÊºÅ
	TThostFtdcAccountIDType	AccountID;
	///ÒøÐÐ±àÂë
	TThostFtdcBankIDType	BankID;
	///±ÒÖÖ´úÂë
	TThostFtdcCurrencyIDType	CurrencyID;
};

///ÆÚÉÌÇ©µ½Í¨Öª
struct CThostFtdcNotifyFutureSignInField
{
	///ÒµÎñ¹¦ÄÜÂë
	TThostFtdcTradeCodeType	TradeCode;
	///ÒøÐÐ´úÂë
	TThostFtdcBankIDType	BankID;
	///ÒøÐÐ·ÖÖ§»ú¹¹´úÂë
	TThostFtdcBankBrchIDType	BankBranchID;
	///ÆÚÉÌ´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///ÆÚÉÌ·ÖÖ§»ú¹¹´úÂë
	TThostFtdcFutureBranchIDType	BrokerBranchID;
	///½»Ò×ÈÕÆÚ
	TThostFtdcTradeDateType	TradeDate;
	///½»Ò×Ê±¼ä
	TThostFtdcTradeTimeType	TradeTime;
	///ÒøÐÐÁ÷Ë®ºÅ
	TThostFtdcBankSerialType	BankSerial;
	///½»Ò×ÏµÍ³ÈÕÆÚ 
	TThostFtdcTradeDateType	TradingDay;
	///ÒøÆÚÆ½Ì¨ÏûÏ¢Á÷Ë®ºÅ
	TThostFtdcSerialType	PlateSerial;
	///×îºó·ÖÆ¬±êÖ¾
	TThostFtdcLastFragmentType	LastFragment;
	///»á»°ºÅ
	TThostFtdcSessionIDType	SessionID;
	///°²×°±àºÅ
	TThostFtdcInstallIDType	InstallID;
	///ÓÃ»§±êÊ¶
	TThostFtdcUserIDType	UserID;
	///ÕªÒª
	TThostFtdcDigestType	Digest;
	///±ÒÖÖ´úÂë
	TThostFtdcCurrencyIDType	CurrencyID;
	///ÇþµÀ±êÖ¾
	TThostFtdcDeviceIDType	DeviceID;
	///ÆÚ»õ¹«Ë¾ÒøÐÐ±àÂë
	TThostFtdcBankCodingForFutureType	BrokerIDByBank;
	///½»Ò×¹ñÔ±
	TThostFtdcOperNoType	OperNo;
	///ÇëÇó±àºÅ
	TThostFtdcRequestIDType	RequestID;
	///½»Ò×ID
	TThostFtdcTIDType	TID;
	///´íÎó´úÂë
	TThostFtdcErrorIDType	ErrorID;
	///´íÎóÐÅÏ¢
	TThostFtdcErrorMsgType	ErrorMsg;
	///PINÃÜÔ¿
	TThostFtdcPasswordKeyType	PinKey;
	///MACÃÜÔ¿
	TThostFtdcPasswordKeyType	MacKey;
};

///ÆÚÉÌÇ©ÍËÍ¨Öª
struct CThostFtdcNotifyFutureSignOutField
{
	///ÒµÎñ¹¦ÄÜÂë
	TThostFtdcTradeCodeType	TradeCode;
	///ÒøÐÐ´úÂë
	TThostFtdcBankIDType	BankID;
	///ÒøÐÐ·ÖÖ§»ú¹¹´úÂë
	TThostFtdcBankBrchIDType	BankBranchID;
	///ÆÚÉÌ´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///ÆÚÉÌ·ÖÖ§»ú¹¹´úÂë
	TThostFtdcFutureBranchIDType	BrokerBranchID;
	///½»Ò×ÈÕÆÚ
	TThostFtdcTradeDateType	TradeDate;
	///½»Ò×Ê±¼ä
	TThostFtdcTradeTimeType	TradeTime;
	///ÒøÐÐÁ÷Ë®ºÅ
	TThostFtdcBankSerialType	BankSerial;
	///½»Ò×ÏµÍ³ÈÕÆÚ 
	TThostFtdcTradeDateType	TradingDay;
	///ÒøÆÚÆ½Ì¨ÏûÏ¢Á÷Ë®ºÅ
	TThostFtdcSerialType	PlateSerial;
	///×îºó·ÖÆ¬±êÖ¾
	TThostFtdcLastFragmentType	LastFragment;
	///»á»°ºÅ
	TThostFtdcSessionIDType	SessionID;
	///°²×°±àºÅ
	TThostFtdcInstallIDType	InstallID;
	///ÓÃ»§±êÊ¶
	TThostFtdcUserIDType	UserID;
	///ÕªÒª
	TThostFtdcDigestType	Digest;
	///±ÒÖÖ´úÂë
	TThostFtdcCurrencyIDType	CurrencyID;
	///ÇþµÀ±êÖ¾
	TThostFtdcDeviceIDType	DeviceID;
	///ÆÚ»õ¹«Ë¾ÒøÐÐ±àÂë
	TThostFtdcBankCodingForFutureType	BrokerIDByBank;
	///½»Ò×¹ñÔ±
	TThostFtdcOperNoType	OperNo;
	///ÇëÇó±àºÅ
	TThostFtdcRequestIDType	RequestID;
	///½»Ò×ID
	TThostFtdcTIDType	TID;
	///´íÎó´úÂë
	TThostFtdcErrorIDType	ErrorID;
	///´íÎóÐÅÏ¢
	TThostFtdcErrorMsgType	ErrorMsg;
};

///½»Ò×ºËÐÄÏòÒøÆÚ±¨ÅÌ·¢³öÃÜÔ¿Í¬²½´¦Àí½á¹ûµÄÍ¨Öª
struct CThostFtdcNotifySyncKeyField
{
	///ÒµÎñ¹¦ÄÜÂë
	TThostFtdcTradeCodeType	TradeCode;
	///ÒøÐÐ´úÂë
	TThostFtdcBankIDType	BankID;
	///ÒøÐÐ·ÖÖ§»ú¹¹´úÂë
	TThostFtdcBankBrchIDType	BankBranchID;
	///ÆÚÉÌ´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///ÆÚÉÌ·ÖÖ§»ú¹¹´úÂë
	TThostFtdcFutureBranchIDType	BrokerBranchID;
	///½»Ò×ÈÕÆÚ
	TThostFtdcTradeDateType	TradeDate;
	///½»Ò×Ê±¼ä
	TThostFtdcTradeTimeType	TradeTime;
	///ÒøÐÐÁ÷Ë®ºÅ
	TThostFtdcBankSerialType	BankSerial;
	///½»Ò×ÏµÍ³ÈÕÆÚ 
	TThostFtdcTradeDateType	TradingDay;
	///ÒøÆÚÆ½Ì¨ÏûÏ¢Á÷Ë®ºÅ
	TThostFtdcSerialType	PlateSerial;
	///×îºó·ÖÆ¬±êÖ¾
	TThostFtdcLastFragmentType	LastFragment;
	///»á»°ºÅ
	TThostFtdcSessionIDType	SessionID;
	///°²×°±àºÅ
	TThostFtdcInstallIDType	InstallID;
	///ÓÃ»§±êÊ¶
	TThostFtdcUserIDType	UserID;
	///½»Ò×ºËÐÄ¸øÒøÆÚ±¨ÅÌµÄÏûÏ¢
	TThostFtdcAddInfoType	Message;
	///ÇþµÀ±êÖ¾
	TThostFtdcDeviceIDType	DeviceID;
	///ÆÚ»õ¹«Ë¾ÒøÐÐ±àÂë
	TThostFtdcBankCodingForFutureType	BrokerIDByBank;
	///½»Ò×¹ñÔ±
	TThostFtdcOperNoType	OperNo;
	///ÇëÇó±àºÅ
	TThostFtdcRequestIDType	RequestID;
	///½»Ò×ID
	TThostFtdcTIDType	TID;
	///´íÎó´úÂë
	TThostFtdcErrorIDType	ErrorID;
	///´íÎóÐÅÏ¢
	TThostFtdcErrorMsgType	ErrorMsg;
};

///ÇëÇó²éÑ¯ÒøÆÚÇ©Ô¼¹ØÏµ
struct CThostFtdcQryAccountregisterField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///Í¶×ÊÕßÕÊºÅ
	TThostFtdcAccountIDType	AccountID;
	///ÒøÐÐ±àÂë
	TThostFtdcBankIDType	BankID;
	///ÒøÐÐ·ÖÖ§»ú¹¹±àÂë
	TThostFtdcBankBrchIDType	BankBranchID;
	///±ÒÖÖ´úÂë
	TThostFtdcCurrencyIDType	CurrencyID;
};

///¿Í»§¿ªÏú»§ÐÅÏ¢±í
struct CThostFtdcAccountregisterField
{
	///½»Ò×ÈÕÆÚ
	TThostFtdcTradeDateType	TradeDay;
	///ÒøÐÐ±àÂë
	TThostFtdcBankIDType	BankID;
	///ÒøÐÐ·ÖÖ§»ú¹¹±àÂë
	TThostFtdcBankBrchIDType	BankBranchID;
	///ÒøÐÐÕÊºÅ
	TThostFtdcBankAccountType	BankAccount;
	///ÆÚ»õ¹«Ë¾±àÂë
	TThostFtdcBrokerIDType	BrokerID;
	///ÆÚ»õ¹«Ë¾·ÖÖ§»ú¹¹±àÂë
	TThostFtdcFutureBranchIDType	BrokerBranchID;
	///Í¶×ÊÕßÕÊºÅ
	TThostFtdcAccountIDType	AccountID;
	///Ö¤¼þÀàÐÍ
	TThostFtdcIdCardTypeType	IdCardType;
	///Ö¤¼þºÅÂë
	TThostFtdcIdentifiedCardNoType	IdentifiedCardNo;
	///¿Í»§ÐÕÃû
	TThostFtdcIndividualNameType	CustomerName;
	///±ÒÖÖ´úÂë
	TThostFtdcCurrencyIDType	CurrencyID;
	///¿ªÏú»§Àà±ð
	TThostFtdcOpenOrDestroyType	OpenOrDestroy;
	///Ç©Ô¼ÈÕÆÚ
	TThostFtdcTradeDateType	RegDate;
	///½âÔ¼ÈÕÆÚ
	TThostFtdcTradeDateType	OutDate;
	///½»Ò×ID
	TThostFtdcTIDType	TID;
	///¿Í»§ÀàÐÍ
	TThostFtdcCustTypeType	CustType;
	///ÒøÐÐÕÊºÅÀàÐÍ
	TThostFtdcBankAccTypeType	BankAccType;
	///³¤¿Í»§ÐÕÃû
	TThostFtdcLongIndividualNameType	LongCustomerName;
};

///ÒøÆÚ¿ª»§ÐÅÏ¢
struct CThostFtdcOpenAccountField
{
	///ÒµÎñ¹¦ÄÜÂë
	TThostFtdcTradeCodeType	TradeCode;
	///ÒøÐÐ´úÂë
	TThostFtdcBankIDType	BankID;
	///ÒøÐÐ·ÖÖ§»ú¹¹´úÂë
	TThostFtdcBankBrchIDType	BankBranchID;
	///ÆÚÉÌ´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///ÆÚÉÌ·ÖÖ§»ú¹¹´úÂë
	TThostFtdcFutureBranchIDType	BrokerBranchID;
	///½»Ò×ÈÕÆÚ
	TThostFtdcTradeDateType	TradeDate;
	///½»Ò×Ê±¼ä
	TThostFtdcTradeTimeType	TradeTime;
	///ÒøÐÐÁ÷Ë®ºÅ
	TThostFtdcBankSerialType	BankSerial;
	///½»Ò×ÏµÍ³ÈÕÆÚ 
	TThostFtdcTradeDateType	TradingDay;
	///ÒøÆÚÆ½Ì¨ÏûÏ¢Á÷Ë®ºÅ
	TThostFtdcSerialType	PlateSerial;
	///×îºó·ÖÆ¬±êÖ¾
	TThostFtdcLastFragmentType	LastFragment;
	///»á»°ºÅ
	TThostFtdcSessionIDType	SessionID;
	///¿Í»§ÐÕÃû
	TThostFtdcIndividualNameType	CustomerName;
	///Ö¤¼þÀàÐÍ
	TThostFtdcIdCardTypeType	IdCardType;
	///Ö¤¼þºÅÂë
	TThostFtdcIdentifiedCardNoType	IdentifiedCardNo;
	///ÐÔ±ð
	TThostFtdcGenderType	Gender;
	///¹ú¼Ò´úÂë
	TThostFtdcCountryCodeType	CountryCode;
	///¿Í»§ÀàÐÍ
	TThostFtdcCustTypeType	CustType;
	///µØÖ·
	TThostFtdcAddressType	Address;
	///ÓÊ±à
	TThostFtdcZipCodeType	ZipCode;
	///µç»°ºÅÂë
	TThostFtdcTelephoneType	Telephone;
	///ÊÖ»ú
	TThostFtdcMobilePhoneType	MobilePhone;
	///´«Õæ
	TThostFtdcFaxType	Fax;
	///µç×ÓÓÊ¼þ
	TThostFtdcEMailType	EMail;
	///×Ê½ðÕË»§×´Ì¬
	TThostFtdcMoneyAccountStatusType	MoneyAccountStatus;
	///ÒøÐÐÕÊºÅ
	TThostFtdcBankAccountType	BankAccount;
	///ÒøÐÐÃÜÂë
	TThostFtdcPasswordType	BankPassWord;
	///Í¶×ÊÕßÕÊºÅ
	TThostFtdcAccountIDType	AccountID;
	///ÆÚ»õÃÜÂë
	TThostFtdcPasswordType	Password;
	///°²×°±àºÅ
	TThostFtdcInstallIDType	InstallID;
	///ÑéÖ¤¿Í»§Ö¤¼þºÅÂë±êÖ¾
	TThostFtdcYesNoIndicatorType	VerifyCertNoFlag;
	///±ÒÖÖ´úÂë
	TThostFtdcCurrencyIDType	CurrencyID;
	///»ã³®±êÖ¾
	TThostFtdcCashExchangeCodeType	CashExchangeCode;
	///ÕªÒª
	TThostFtdcDigestType	Digest;
	///ÒøÐÐÕÊºÅÀàÐÍ
	TThostFtdcBankAccTypeType	BankAccType;
	///ÇþµÀ±êÖ¾
	TThostFtdcDeviceIDType	DeviceID;
	///ÆÚ»õµ¥Î»ÕÊºÅÀàÐÍ
	TThostFtdcBankAccTypeType	BankSecuAccType;
	///ÆÚ»õ¹«Ë¾ÒøÐÐ±àÂë
	TThostFtdcBankCodingForFutureType	BrokerIDByBank;
	///ÆÚ»õµ¥Î»ÕÊºÅ
	TThostFtdcBankAccountType	BankSecuAcc;
	///ÒøÐÐÃÜÂë±êÖ¾
	TThostFtdcPwdFlagType	BankPwdFlag;
	///ÆÚ»õ×Ê½ðÃÜÂëºË¶Ô±êÖ¾
	TThostFtdcPwdFlagType	SecuPwdFlag;
	///½»Ò×¹ñÔ±
	TThostFtdcOperNoType	OperNo;
	///½»Ò×ID
	TThostFtdcTIDType	TID;
	///ÓÃ»§±êÊ¶
	TThostFtdcUserIDType	UserID;
	///´íÎó´úÂë
	TThostFtdcErrorIDType	ErrorID;
	///´íÎóÐÅÏ¢
	TThostFtdcErrorMsgType	ErrorMsg;
	///³¤¿Í»§ÐÕÃû
	TThostFtdcLongIndividualNameType	LongCustomerName;
};

///ÒøÆÚÏú»§ÐÅÏ¢
struct CThostFtdcCancelAccountField
{
	///ÒµÎñ¹¦ÄÜÂë
	TThostFtdcTradeCodeType	TradeCode;
	///ÒøÐÐ´úÂë
	TThostFtdcBankIDType	BankID;
	///ÒøÐÐ·ÖÖ§»ú¹¹´úÂë
	TThostFtdcBankBrchIDType	BankBranchID;
	///ÆÚÉÌ´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///ÆÚÉÌ·ÖÖ§»ú¹¹´úÂë
	TThostFtdcFutureBranchIDType	BrokerBranchID;
	///½»Ò×ÈÕÆÚ
	TThostFtdcTradeDateType	TradeDate;
	///½»Ò×Ê±¼ä
	TThostFtdcTradeTimeType	TradeTime;
	///ÒøÐÐÁ÷Ë®ºÅ
	TThostFtdcBankSerialType	BankSerial;
	///½»Ò×ÏµÍ³ÈÕÆÚ 
	TThostFtdcTradeDateType	TradingDay;
	///ÒøÆÚÆ½Ì¨ÏûÏ¢Á÷Ë®ºÅ
	TThostFtdcSerialType	PlateSerial;
	///×îºó·ÖÆ¬±êÖ¾
	TThostFtdcLastFragmentType	LastFragment;
	///»á»°ºÅ
	TThostFtdcSessionIDType	SessionID;
	///¿Í»§ÐÕÃû
	TThostFtdcIndividualNameType	CustomerName;
	///Ö¤¼þÀàÐÍ
	TThostFtdcIdCardTypeType	IdCardType;
	///Ö¤¼þºÅÂë
	TThostFtdcIdentifiedCardNoType	IdentifiedCardNo;
	///ÐÔ±ð
	TThostFtdcGenderType	Gender;
	///¹ú¼Ò´úÂë
	TThostFtdcCountryCodeType	CountryCode;
	///¿Í»§ÀàÐÍ
	TThostFtdcCustTypeType	CustType;
	///µØÖ·
	TThostFtdcAddressType	Address;
	///ÓÊ±à
	TThostFtdcZipCodeType	ZipCode;
	///µç»°ºÅÂë
	TThostFtdcTelephoneType	Telephone;
	///ÊÖ»ú
	TThostFtdcMobilePhoneType	MobilePhone;
	///´«Õæ
	TThostFtdcFaxType	Fax;
	///µç×ÓÓÊ¼þ
	TThostFtdcEMailType	EMail;
	///×Ê½ðÕË»§×´Ì¬
	TThostFtdcMoneyAccountStatusType	MoneyAccountStatus;
	///ÒøÐÐÕÊºÅ
	TThostFtdcBankAccountType	BankAccount;
	///ÒøÐÐÃÜÂë
	TThostFtdcPasswordType	BankPassWord;
	///Í¶×ÊÕßÕÊºÅ
	TThostFtdcAccountIDType	AccountID;
	///ÆÚ»õÃÜÂë
	TThostFtdcPasswordType	Password;
	///°²×°±àºÅ
	TThostFtdcInstallIDType	InstallID;
	///ÑéÖ¤¿Í»§Ö¤¼þºÅÂë±êÖ¾
	TThostFtdcYesNoIndicatorType	VerifyCertNoFlag;
	///±ÒÖÖ´úÂë
	TThostFtdcCurrencyIDType	CurrencyID;
	///»ã³®±êÖ¾
	TThostFtdcCashExchangeCodeType	CashExchangeCode;
	///ÕªÒª
	TThostFtdcDigestType	Digest;
	///ÒøÐÐÕÊºÅÀàÐÍ
	TThostFtdcBankAccTypeType	BankAccType;
	///ÇþµÀ±êÖ¾
	TThostFtdcDeviceIDType	DeviceID;
	///ÆÚ»õµ¥Î»ÕÊºÅÀàÐÍ
	TThostFtdcBankAccTypeType	BankSecuAccType;
	///ÆÚ»õ¹«Ë¾ÒøÐÐ±àÂë
	TThostFtdcBankCodingForFutureType	BrokerIDByBank;
	///ÆÚ»õµ¥Î»ÕÊºÅ
	TThostFtdcBankAccountType	BankSecuAcc;
	///ÒøÐÐÃÜÂë±êÖ¾
	TThostFtdcPwdFlagType	BankPwdFlag;
	///ÆÚ»õ×Ê½ðÃÜÂëºË¶Ô±êÖ¾
	TThostFtdcPwdFlagType	SecuPwdFlag;
	///½»Ò×¹ñÔ±
	TThostFtdcOperNoType	OperNo;
	///½»Ò×ID
	TThostFtdcTIDType	TID;
	///ÓÃ»§±êÊ¶
	TThostFtdcUserIDType	UserID;
	///´íÎó´úÂë
	TThostFtdcErrorIDType	ErrorID;
	///´íÎóÐÅÏ¢
	TThostFtdcErrorMsgType	ErrorMsg;
	///³¤¿Í»§ÐÕÃû
	TThostFtdcLongIndividualNameType	LongCustomerName;
};

///ÒøÆÚ±ä¸üÒøÐÐÕËºÅÐÅÏ¢
struct CThostFtdcChangeAccountField
{
	///ÒµÎñ¹¦ÄÜÂë
	TThostFtdcTradeCodeType	TradeCode;
	///ÒøÐÐ´úÂë
	TThostFtdcBankIDType	BankID;
	///ÒøÐÐ·ÖÖ§»ú¹¹´úÂë
	TThostFtdcBankBrchIDType	BankBranchID;
	///ÆÚÉÌ´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///ÆÚÉÌ·ÖÖ§»ú¹¹´úÂë
	TThostFtdcFutureBranchIDType	BrokerBranchID;
	///½»Ò×ÈÕÆÚ
	TThostFtdcTradeDateType	TradeDate;
	///½»Ò×Ê±¼ä
	TThostFtdcTradeTimeType	TradeTime;
	///ÒøÐÐÁ÷Ë®ºÅ
	TThostFtdcBankSerialType	BankSerial;
	///½»Ò×ÏµÍ³ÈÕÆÚ 
	TThostFtdcTradeDateType	TradingDay;
	///ÒøÆÚÆ½Ì¨ÏûÏ¢Á÷Ë®ºÅ
	TThostFtdcSerialType	PlateSerial;
	///×îºó·ÖÆ¬±êÖ¾
	TThostFtdcLastFragmentType	LastFragment;
	///»á»°ºÅ
	TThostFtdcSessionIDType	SessionID;
	///¿Í»§ÐÕÃû
	TThostFtdcIndividualNameType	CustomerName;
	///Ö¤¼þÀàÐÍ
	TThostFtdcIdCardTypeType	IdCardType;
	///Ö¤¼þºÅÂë
	TThostFtdcIdentifiedCardNoType	IdentifiedCardNo;
	///ÐÔ±ð
	TThostFtdcGenderType	Gender;
	///¹ú¼Ò´úÂë
	TThostFtdcCountryCodeType	CountryCode;
	///¿Í»§ÀàÐÍ
	TThostFtdcCustTypeType	CustType;
	///µØÖ·
	TThostFtdcAddressType	Address;
	///ÓÊ±à
	TThostFtdcZipCodeType	ZipCode;
	///µç»°ºÅÂë
	TThostFtdcTelephoneType	Telephone;
	///ÊÖ»ú
	TThostFtdcMobilePhoneType	MobilePhone;
	///´«Õæ
	TThostFtdcFaxType	Fax;
	///µç×ÓÓÊ¼þ
	TThostFtdcEMailType	EMail;
	///×Ê½ðÕË»§×´Ì¬
	TThostFtdcMoneyAccountStatusType	MoneyAccountStatus;
	///ÒøÐÐÕÊºÅ
	TThostFtdcBankAccountType	BankAccount;
	///ÒøÐÐÃÜÂë
	TThostFtdcPasswordType	BankPassWord;
	///ÐÂÒøÐÐÕÊºÅ
	TThostFtdcBankAccountType	NewBankAccount;
	///ÐÂÒøÐÐÃÜÂë
	TThostFtdcPasswordType	NewBankPassWord;
	///Í¶×ÊÕßÕÊºÅ
	TThostFtdcAccountIDType	AccountID;
	///ÆÚ»õÃÜÂë
	TThostFtdcPasswordType	Password;
	///ÒøÐÐÕÊºÅÀàÐÍ
	TThostFtdcBankAccTypeType	BankAccType;
	///°²×°±àºÅ
	TThostFtdcInstallIDType	InstallID;
	///ÑéÖ¤¿Í»§Ö¤¼þºÅÂë±êÖ¾
	TThostFtdcYesNoIndicatorType	VerifyCertNoFlag;
	///±ÒÖÖ´úÂë
	TThostFtdcCurrencyIDType	CurrencyID;
	///ÆÚ»õ¹«Ë¾ÒøÐÐ±àÂë
	TThostFtdcBankCodingForFutureType	BrokerIDByBank;
	///ÒøÐÐÃÜÂë±êÖ¾
	TThostFtdcPwdFlagType	BankPwdFlag;
	///ÆÚ»õ×Ê½ðÃÜÂëºË¶Ô±êÖ¾
	TThostFtdcPwdFlagType	SecuPwdFlag;
	///½»Ò×ID
	TThostFtdcTIDType	TID;
	///ÕªÒª
	TThostFtdcDigestType	Digest;
	///´íÎó´úÂë
	TThostFtdcErrorIDType	ErrorID;
	///´íÎóÐÅÏ¢
	TThostFtdcErrorMsgType	ErrorMsg;
	///³¤¿Í»§ÐÕÃû
	TThostFtdcLongIndividualNameType	LongCustomerName;
};

///¶þ¼¶´úÀí²Ù×÷Ô±ÒøÆÚÈ¨ÏÞ
struct CThostFtdcSecAgentACIDMapField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///ÓÃ»§´úÂë
	TThostFtdcUserIDType	UserID;
	///×Ê½ðÕË»§
	TThostFtdcAccountIDType	AccountID;
	///±ÒÖÖ
	TThostFtdcCurrencyIDType	CurrencyID;
	///¾³ÍâÖÐ½é»ú¹¹×Ê½ðÕÊºÅ
	TThostFtdcAccountIDType	BrokerSecAgentID;
};

///¶þ¼¶´úÀí²Ù×÷Ô±ÒøÆÚÈ¨ÏÞ²éÑ¯
struct CThostFtdcQrySecAgentACIDMapField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///ÓÃ»§´úÂë
	TThostFtdcUserIDType	UserID;
	///×Ê½ðÕË»§
	TThostFtdcAccountIDType	AccountID;
	///±ÒÖÖ
	TThostFtdcCurrencyIDType	CurrencyID;
};

///ÔÖ±¸ÖÐÐÄ½»Ò×È¨ÏÞ
struct CThostFtdcUserRightsAssignField
{
	///Ó¦ÓÃµ¥Ôª´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///ÓÃ»§´úÂë
	TThostFtdcUserIDType	UserID;
	///½»Ò×ÖÐÐÄ´úÂë
	TThostFtdcDRIdentityIDType	DRIdentityID;
};

///¾­¼Ã¹«Ë¾ÊÇ·ñÓÐÔÚ±¾±êÊ¾µÄ½»Ò×È¨ÏÞ
struct CThostFtdcBrokerUserRightAssignField
{
	///Ó¦ÓÃµ¥Ôª´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///½»Ò×ÖÐÐÄ´úÂë
	TThostFtdcDRIdentityIDType	DRIdentityID;
	///ÄÜ·ñ½»Ò×
	TThostFtdcBoolType	Tradeable;
};

///ÔÖ±¸½»Ò××ª»»±¨ÎÄ
struct CThostFtdcDRTransferField
{
	///Ô­½»Ò×ÖÐÐÄ´úÂë
	TThostFtdcDRIdentityIDType	OrigDRIdentityID;
	///Ä¿±ê½»Ò×ÖÐÐÄ´úÂë
	TThostFtdcDRIdentityIDType	DestDRIdentityID;
	///Ô­Ó¦ÓÃµ¥Ôª´úÂë
	TThostFtdcBrokerIDType	OrigBrokerID;
	///Ä¿±êÒ×ÓÃµ¥Ôª´úÂë
	TThostFtdcBrokerIDType	DestBrokerID;
};

///FensÓÃ»§ÐÅÏ¢
struct CThostFtdcFensUserInfoField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///ÓÃ»§´úÂë
	TThostFtdcUserIDType	UserID;
	///µÇÂ¼Ä£Ê½
	TThostFtdcLoginModeType	LoginMode;
};

///µ±Ç°ÒøÆÚËùÊô½»Ò×ÖÐÐÄ
struct CThostFtdcCurrTransferIdentityField
{
	///½»Ò×ÖÐÐÄ´úÂë
	TThostFtdcDRIdentityIDType	IdentityID;
};

///½ûÖ¹µÇÂ¼ÓÃ»§
struct CThostFtdcLoginForbiddenUserField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///ÓÃ»§´úÂë
	TThostFtdcUserIDType	UserID;
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldIPAddressType	reserve1;
	///IPµØÖ·
	TThostFtdcIPAddressType	IPAddress;
};

///²éÑ¯½ûÖ¹µÇÂ¼ÓÃ»§
struct CThostFtdcQryLoginForbiddenUserField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///ÓÃ»§´úÂë
	TThostFtdcUserIDType	UserID;
};

///×Ê½ðÕË»§»ù±¾×¼±¸½ð
struct CThostFtdcTradingAccountReserveField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///Í¶×ÊÕßÕÊºÅ
	TThostFtdcAccountIDType	AccountID;
	///»ù±¾×¼±¸½ð
	TThostFtdcMoneyType	Reserve;
	///±ÒÖÖ´úÂë
	TThostFtdcCurrencyIDType	CurrencyID;
};

///²éÑ¯½ûÖ¹µÇÂ¼IP
struct CThostFtdcQryLoginForbiddenIPField
{
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldIPAddressType	reserve1;
	///IPµØÖ·
	TThostFtdcIPAddressType	IPAddress;
};

///²éÑ¯IPÁÐ±í
struct CThostFtdcQryIPListField
{
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldIPAddressType	reserve1;
	///IPµØÖ·
	TThostFtdcIPAddressType	IPAddress;
};

///²éÑ¯ÓÃ»§ÏÂµ¥È¨ÏÞ·ÖÅä±í
struct CThostFtdcQryUserRightsAssignField
{
	///Ó¦ÓÃµ¥Ôª´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///ÓÃ»§´úÂë
	TThostFtdcUserIDType	UserID;
};

///ÒøÆÚÔ¤Ô¼¿ª»§È·ÈÏÇëÇó
struct CThostFtdcReserveOpenAccountConfirmField
{
	///ÒµÎñ¹¦ÄÜÂë
	TThostFtdcTradeCodeType	TradeCode;
	///ÒøÐÐ´úÂë
	TThostFtdcBankIDType	BankID;
	///ÒøÐÐ·ÖÖ§»ú¹¹´úÂë
	TThostFtdcBankBrchIDType	BankBranchID;
	///ÆÚÉÌ´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///ÆÚÉÌ·ÖÖ§»ú¹¹´úÂë
	TThostFtdcFutureBranchIDType	BrokerBranchID;
	///½»Ò×ÈÕÆÚ
	TThostFtdcTradeDateType	TradeDate;
	///½»Ò×Ê±¼ä
	TThostFtdcTradeTimeType	TradeTime;
	///ÒøÐÐÁ÷Ë®ºÅ
	TThostFtdcBankSerialType	BankSerial;
	///½»Ò×ÏµÍ³ÈÕÆÚ 
	TThostFtdcTradeDateType	TradingDay;
	///ÒøÆÚÆ½Ì¨ÏûÏ¢Á÷Ë®ºÅ
	TThostFtdcSerialType	PlateSerial;
	///×îºó·ÖÆ¬±êÖ¾
	TThostFtdcLastFragmentType	LastFragment;
	///»á»°ºÅ
	TThostFtdcSessionIDType	SessionID;
	///¿Í»§ÐÕÃû
	TThostFtdcLongIndividualNameType	CustomerName;
	///Ö¤¼þÀàÐÍ
	TThostFtdcIdCardTypeType	IdCardType;
	///Ö¤¼þºÅÂë
	TThostFtdcIdentifiedCardNoType	IdentifiedCardNo;
	///ÐÔ±ð
	TThostFtdcGenderType	Gender;
	///¹ú¼Ò´úÂë
	TThostFtdcCountryCodeType	CountryCode;
	///¿Í»§ÀàÐÍ
	TThostFtdcCustTypeType	CustType;
	///µØÖ·
	TThostFtdcAddressType	Address;
	///ÓÊ±à
	TThostFtdcZipCodeType	ZipCode;
	///µç»°ºÅÂë
	TThostFtdcTelephoneType	Telephone;
	///ÊÖ»ú
	TThostFtdcMobilePhoneType	MobilePhone;
	///´«Õæ
	TThostFtdcFaxType	Fax;
	///µç×ÓÓÊ¼þ
	TThostFtdcEMailType	EMail;
	///×Ê½ðÕË»§×´Ì¬
	TThostFtdcMoneyAccountStatusType	MoneyAccountStatus;
	///ÒøÐÐÕÊºÅ
	TThostFtdcBankAccountType	BankAccount;
	///ÒøÐÐÃÜÂë
	TThostFtdcPasswordType	BankPassWord;
	///°²×°±àºÅ
	TThostFtdcInstallIDType	InstallID;
	///ÑéÖ¤¿Í»§Ö¤¼þºÅÂë±êÖ¾
	TThostFtdcYesNoIndicatorType	VerifyCertNoFlag;
	///±ÒÖÖ´úÂë
	TThostFtdcCurrencyIDType	CurrencyID;
	///ÕªÒª
	TThostFtdcDigestType	Digest;
	///ÒøÐÐÕÊºÅÀàÐÍ
	TThostFtdcBankAccTypeType	BankAccType;
	///ÆÚ»õ¹«Ë¾ÒøÐÐ±àÂë
	TThostFtdcBankCodingForFutureType	BrokerIDByBank;
	///½»Ò×ID
	TThostFtdcTIDType	TID;
	///Í¶×ÊÕßÕÊºÅ
	TThostFtdcAccountIDType	AccountID;
	///ÆÚ»õÃÜÂë
	TThostFtdcPasswordType	Password;
	///Ô¤Ô¼¿ª»§ÒøÐÐÁ÷Ë®ºÅ
	TThostFtdcBankSerialType	BankReserveOpenSeq;
	///Ô¤Ô¼¿ª»§ÈÕÆÚ
	TThostFtdcTradeDateType	BookDate;
	///Ô¤Ô¼¿ª»§ÑéÖ¤ÃÜÂë
	TThostFtdcPasswordType	BookPsw;
	///´íÎó´úÂë
	TThostFtdcErrorIDType	ErrorID;
	///´íÎóÐÅÏ¢
	TThostFtdcErrorMsgType	ErrorMsg;
};

///ÒøÆÚÔ¤Ô¼¿ª»§
struct CThostFtdcReserveOpenAccountField
{
	///ÒµÎñ¹¦ÄÜÂë
	TThostFtdcTradeCodeType	TradeCode;
	///ÒøÐÐ´úÂë
	TThostFtdcBankIDType	BankID;
	///ÒøÐÐ·ÖÖ§»ú¹¹´úÂë
	TThostFtdcBankBrchIDType	BankBranchID;
	///ÆÚÉÌ´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///ÆÚÉÌ·ÖÖ§»ú¹¹´úÂë
	TThostFtdcFutureBranchIDType	BrokerBranchID;
	///½»Ò×ÈÕÆÚ
	TThostFtdcTradeDateType	TradeDate;
	///½»Ò×Ê±¼ä
	TThostFtdcTradeTimeType	TradeTime;
	///ÒøÐÐÁ÷Ë®ºÅ
	TThostFtdcBankSerialType	BankSerial;
	///½»Ò×ÏµÍ³ÈÕÆÚ 
	TThostFtdcTradeDateType	TradingDay;
	///ÒøÆÚÆ½Ì¨ÏûÏ¢Á÷Ë®ºÅ
	TThostFtdcSerialType	PlateSerial;
	///×îºó·ÖÆ¬±êÖ¾
	TThostFtdcLastFragmentType	LastFragment;
	///»á»°ºÅ
	TThostFtdcSessionIDType	SessionID;
	///¿Í»§ÐÕÃû
	TThostFtdcLongIndividualNameType	CustomerName;
	///Ö¤¼þÀàÐÍ
	TThostFtdcIdCardTypeType	IdCardType;
	///Ö¤¼þºÅÂë
	TThostFtdcIdentifiedCardNoType	IdentifiedCardNo;
	///ÐÔ±ð
	TThostFtdcGenderType	Gender;
	///¹ú¼Ò´úÂë
	TThostFtdcCountryCodeType	CountryCode;
	///¿Í»§ÀàÐÍ
	TThostFtdcCustTypeType	CustType;
	///µØÖ·
	TThostFtdcAddressType	Address;
	///ÓÊ±à
	TThostFtdcZipCodeType	ZipCode;
	///µç»°ºÅÂë
	TThostFtdcTelephoneType	Telephone;
	///ÊÖ»ú
	TThostFtdcMobilePhoneType	MobilePhone;
	///´«Õæ
	TThostFtdcFaxType	Fax;
	///µç×ÓÓÊ¼þ
	TThostFtdcEMailType	EMail;
	///×Ê½ðÕË»§×´Ì¬
	TThostFtdcMoneyAccountStatusType	MoneyAccountStatus;
	///ÒøÐÐÕÊºÅ
	TThostFtdcBankAccountType	BankAccount;
	///ÒøÐÐÃÜÂë
	TThostFtdcPasswordType	BankPassWord;
	///°²×°±àºÅ
	TThostFtdcInstallIDType	InstallID;
	///ÑéÖ¤¿Í»§Ö¤¼þºÅÂë±êÖ¾
	TThostFtdcYesNoIndicatorType	VerifyCertNoFlag;
	///±ÒÖÖ´úÂë
	TThostFtdcCurrencyIDType	CurrencyID;
	///ÕªÒª
	TThostFtdcDigestType	Digest;
	///ÒøÐÐÕÊºÅÀàÐÍ
	TThostFtdcBankAccTypeType	BankAccType;
	///ÆÚ»õ¹«Ë¾ÒøÐÐ±àÂë
	TThostFtdcBankCodingForFutureType	BrokerIDByBank;
	///½»Ò×ID
	TThostFtdcTIDType	TID;
	///Ô¤Ô¼¿ª»§×´Ì¬
	TThostFtdcReserveOpenAccStasType	ReserveOpenAccStas;
	///´íÎó´úÂë
	TThostFtdcErrorIDType	ErrorID;
	///´íÎóÐÅÏ¢
	TThostFtdcErrorMsgType	ErrorMsg;
};

///ÒøÐÐÕË»§ÊôÐÔ
struct CThostFtdcAccountPropertyField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///Í¶×ÊÕßÕÊºÅ
	TThostFtdcAccountIDType	AccountID;
	///ÒøÐÐÍ³Ò»±êÊ¶ÀàÐÍ
	TThostFtdcBankIDType	BankID;
	///ÒøÐÐÕË»§
	TThostFtdcBankAccountType	BankAccount;
	///ÒøÐÐÕË»§µÄ¿ª»§ÈËÃû³Æ
	TThostFtdcInvestorFullNameType	OpenName;
	///ÒøÐÐÕË»§µÄ¿ª»§ÐÐ
	TThostFtdcOpenBankType	OpenBank;
	///ÊÇ·ñ»îÔ¾
	TThostFtdcBoolType	IsActive;
	///ÕË»§À´Ô´
	TThostFtdcAccountSourceTypeType	AccountSourceType;
	///¿ª»§ÈÕÆÚ
	TThostFtdcDateType	OpenDate;
	///×¢ÏúÈÕÆÚ
	TThostFtdcDateType	CancelDate;
	///Â¼ÈëÔ±´úÂë
	TThostFtdcOperatorIDType	OperatorID;
	///Â¼ÈëÈÕÆÚ
	TThostFtdcDateType	OperateDate;
	///Â¼ÈëÊ±¼ä
	TThostFtdcTimeType	OperateTime;
	///±ÒÖÖ´úÂë
	TThostFtdcCurrencyIDType	CurrencyID;
};

///²éÑ¯µ±Ç°½»Ò×ÖÐÐÄ
struct CThostFtdcQryCurrDRIdentityField
{
	///½»Ò×ÖÐÐÄ´úÂë
	TThostFtdcDRIdentityIDType	DRIdentityID;
};

///µ±Ç°½»Ò×ÖÐÐÄ
struct CThostFtdcCurrDRIdentityField
{
	///½»Ò×ÖÐÐÄ´úÂë
	TThostFtdcDRIdentityIDType	DRIdentityID;
};

///²éÑ¯¶þ¼¶´úÀíÉÌ×Ê½ðÐ£ÑéÄ£Ê½
struct CThostFtdcQrySecAgentCheckModeField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///Í¶×ÊÕß´úÂë
	TThostFtdcInvestorIDType	InvestorID;
};

///²éÑ¯¶þ¼¶´úÀíÉÌÐÅÏ¢
struct CThostFtdcQrySecAgentTradeInfoField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///¾³ÍâÖÐ½é»ú¹¹×Ê½ðÕÊºÅ
	TThostFtdcAccountIDType	BrokerSecAgentID;
};

///ÓÃ»§·¢³ö»ñÈ¡°²È«°²È«µÇÂ½·½·¨ÇëÇó
struct CThostFtdcReqUserAuthMethodField
{
	///½»Ò×ÈÕ
	TThostFtdcDateType	TradingDay;
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///ÓÃ»§´úÂë
	TThostFtdcUserIDType	UserID;
};

///ÓÃ»§·¢³ö»ñÈ¡°²È«°²È«µÇÂ½·½·¨»Ø¸´
struct CThostFtdcRspUserAuthMethodField
{
	///µ±Ç°¿ÉÒÔÓÃµÄÈÏÖ¤Ä£Ê½
	TThostFtdcCurrentAuthMethodType	UsableAuthMethod;
};

///ÓÃ»§·¢³ö»ñÈ¡°²È«°²È«µÇÂ½·½·¨ÇëÇó
struct CThostFtdcReqGenUserCaptchaField
{
	///½»Ò×ÈÕ
	TThostFtdcDateType	TradingDay;
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///ÓÃ»§´úÂë
	TThostFtdcUserIDType	UserID;
};

///Éú³ÉµÄÍ¼Æ¬ÑéÖ¤ÂëÐÅÏ¢
struct CThostFtdcRspGenUserCaptchaField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///ÓÃ»§´úÂë
	TThostFtdcUserIDType	UserID;
	///Í¼Æ¬ÐÅÏ¢³¤¶È
	TThostFtdcCaptchaInfoLenType	CaptchaInfoLen;
	///Í¼Æ¬ÐÅÏ¢
	TThostFtdcCaptchaInfoType	CaptchaInfo;
};

///ÓÃ»§·¢³ö»ñÈ¡°²È«°²È«µÇÂ½·½·¨ÇëÇó
struct CThostFtdcReqGenUserTextField
{
	///½»Ò×ÈÕ
	TThostFtdcDateType	TradingDay;
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///ÓÃ»§´úÂë
	TThostFtdcUserIDType	UserID;
};

///¶ÌÐÅÑéÖ¤ÂëÉú³ÉµÄ»Ø¸´
struct CThostFtdcRspGenUserTextField
{
	///¶ÌÐÅÑéÖ¤ÂëÐòºÅ
	TThostFtdcUserTextSeqType	UserTextSeq;
};

///ÓÃ»§·¢³ö´øÍ¼ÐÎÑéÖ¤ÂëµÄµÇÂ¼ÇëÇóÇëÇó
struct CThostFtdcReqUserLoginWithCaptchaField
{
	///½»Ò×ÈÕ
	TThostFtdcDateType	TradingDay;
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///ÓÃ»§´úÂë
	TThostFtdcUserIDType	UserID;
	///ÃÜÂë
	TThostFtdcPasswordType	Password;
	///ÓÃ»§¶Ë²úÆ·ÐÅÏ¢
	TThostFtdcProductInfoType	UserProductInfo;
	///½Ó¿Ú¶Ë²úÆ·ÐÅÏ¢
	TThostFtdcProductInfoType	InterfaceProductInfo;
	///Ð­ÒéÐÅÏ¢
	TThostFtdcProtocolInfoType	ProtocolInfo;
	///MacµØÖ·
	TThostFtdcMacAddressType	MacAddress;
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldIPAddressType	reserve1;
	///µÇÂ¼±¸×¢
	TThostFtdcLoginRemarkType	LoginRemark;
	///Í¼ÐÎÑéÖ¤ÂëµÄÎÄ×ÖÄÚÈÝ
	TThostFtdcPasswordType	Captcha;
	///ÖÕ¶ËIP¶Ë¿Ú
	TThostFtdcIPPortType	ClientIPPort;
	///ÖÕ¶ËIPµØÖ·
	TThostFtdcIPAddressType	ClientIPAddress;
};

///ÓÃ»§·¢³ö´ø¶ÌÐÅÑéÖ¤ÂëµÄµÇÂ¼ÇëÇóÇëÇó
struct CThostFtdcReqUserLoginWithTextField
{
	///½»Ò×ÈÕ
	TThostFtdcDateType	TradingDay;
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///ÓÃ»§´úÂë
	TThostFtdcUserIDType	UserID;
	///ÃÜÂë
	TThostFtdcPasswordType	Password;
	///ÓÃ»§¶Ë²úÆ·ÐÅÏ¢
	TThostFtdcProductInfoType	UserProductInfo;
	///½Ó¿Ú¶Ë²úÆ·ÐÅÏ¢
	TThostFtdcProductInfoType	InterfaceProductInfo;
	///Ð­ÒéÐÅÏ¢
	TThostFtdcProtocolInfoType	ProtocolInfo;
	///MacµØÖ·
	TThostFtdcMacAddressType	MacAddress;
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldIPAddressType	reserve1;
	///µÇÂ¼±¸×¢
	TThostFtdcLoginRemarkType	LoginRemark;
	///¶ÌÐÅÑéÖ¤ÂëÎÄ×ÖÄÚÈÝ
	TThostFtdcPasswordType	Text;
	///ÖÕ¶ËIP¶Ë¿Ú
	TThostFtdcIPPortType	ClientIPPort;
	///ÖÕ¶ËIPµØÖ·
	TThostFtdcIPAddressType	ClientIPAddress;
};

///ÓÃ»§·¢³ö´ø¶¯Ì¬ÑéÖ¤ÂëµÄµÇÂ¼ÇëÇóÇëÇó
struct CThostFtdcReqUserLoginWithOTPField
{
	///½»Ò×ÈÕ
	TThostFtdcDateType	TradingDay;
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///ÓÃ»§´úÂë
	TThostFtdcUserIDType	UserID;
	///ÃÜÂë
	TThostFtdcPasswordType	Password;
	///ÓÃ»§¶Ë²úÆ·ÐÅÏ¢
	TThostFtdcProductInfoType	UserProductInfo;
	///½Ó¿Ú¶Ë²úÆ·ÐÅÏ¢
	TThostFtdcProductInfoType	InterfaceProductInfo;
	///Ð­ÒéÐÅÏ¢
	TThostFtdcProtocolInfoType	ProtocolInfo;
	///MacµØÖ·
	TThostFtdcMacAddressType	MacAddress;
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldIPAddressType	reserve1;
	///µÇÂ¼±¸×¢
	TThostFtdcLoginRemarkType	LoginRemark;
	///OTPÃÜÂë
	TThostFtdcPasswordType	OTPPassword;
	///ÖÕ¶ËIP¶Ë¿Ú
	TThostFtdcIPPortType	ClientIPPort;
	///ÖÕ¶ËIPµØÖ·
	TThostFtdcIPAddressType	ClientIPAddress;
};

///apiÎÕÊÖÇëÇó
struct CThostFtdcReqApiHandshakeField
{
	///apiÓëfrontÍ¨ÐÅÃÜÔ¿°æ±¾ºÅ
	TThostFtdcCryptoKeyVersionType	CryptoKeyVersion;
};

///front·¢¸øapiµÄÎÕÊÖ»Ø¸´
struct CThostFtdcRspApiHandshakeField
{
	///ÎÕÊÖ»Ø¸´Êý¾Ý³¤¶È
	TThostFtdcHandshakeDataLenType	FrontHandshakeDataLen;
	///ÎÕÊÖ»Ø¸´Êý¾Ý
	TThostFtdcHandshakeDataType	FrontHandshakeData;
	///APIÈÏÖ¤ÊÇ·ñ¿ªÆô
	TThostFtdcBoolType	IsApiAuthEnabled;
};

///api¸øfrontµÄÑéÖ¤keyµÄÇëÇó
struct CThostFtdcReqVerifyApiKeyField
{
	///ÎÕÊÖ»Ø¸´Êý¾Ý³¤¶È
	TThostFtdcHandshakeDataLenType	ApiHandshakeDataLen;
	///ÎÕÊÖ»Ø¸´Êý¾Ý
	TThostFtdcHandshakeDataType	ApiHandshakeData;
};

///²Ù×÷Ô±×éÖ¯¼Ü¹¹¹ØÏµ
struct CThostFtdcDepartmentUserField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///ÓÃ»§´úÂë
	TThostFtdcUserIDType	UserID;
	///Í¶×ÊÕß·¶Î§
	TThostFtdcDepartmentRangeType	InvestorRange;
	///Í¶×ÊÕß´úÂë
	TThostFtdcInvestorIDType	InvestorID;
};

///²éÑ¯ÆµÂÊ£¬Ã¿Ãë²éÑ¯±ÈÊý
struct CThostFtdcQueryFreqField
{
	///²éÑ¯ÆµÂÊ
	TThostFtdcQueryFreqType	QueryFreq;
	///FTDÆµÂÊ
	TThostFtdcQueryFreqType	FTDPkgFreq;
};

///½ûÖ¹ÈÏÖ¤IP
struct CThostFtdcAuthForbiddenIPField
{
	///IPµØÖ·
	TThostFtdcIPAddressType	IPAddress;
};

///²éÑ¯½ûÖ¹ÈÏÖ¤IP
struct CThostFtdcQryAuthForbiddenIPField
{
	///IPµØÖ·
	TThostFtdcIPAddressType	IPAddress;
};

///»»»ã¿ÉÌá¶³½á
struct CThostFtdcSyncDelaySwapFrozenField
{
	///»»»ãÁ÷Ë®ºÅ
	TThostFtdcDepositSeqNoType	DelaySwapSeqNo;
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///Í¶×ÊÕß´úÂë
	TThostFtdcInvestorIDType	InvestorID;
	///Ô´±ÒÖÖ
	TThostFtdcCurrencyIDType	FromCurrencyID;
	///Ô´Ê£Óà»»»ã¶î¶È(¿ÉÌá¶³½á)
	TThostFtdcMoneyType	FromRemainSwap;
	///ÊÇ·ñÊÖ¹¤»»»ã
	TThostFtdcBoolType	IsManualSwap;
};

///ÓÃ»§ÏµÍ³ÐÅÏ¢
struct CThostFtdcUserSystemInfoField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///ÓÃ»§´úÂë
	TThostFtdcUserIDType	UserID;
	///ÓÃ»§¶ËÏµÍ³ÄÚ²¿ÐÅÏ¢³¤¶È
	TThostFtdcSystemInfoLenType	ClientSystemInfoLen;
	///ÓÃ»§¶ËÏµÍ³ÄÚ²¿ÐÅÏ¢
	TThostFtdcClientSystemInfoType	ClientSystemInfo;
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldIPAddressType	reserve1;
	///ÖÕ¶ËIP¶Ë¿Ú
	TThostFtdcIPPortType	ClientIPPort;
	///µÇÂ¼³É¹¦Ê±¼ä
	TThostFtdcTimeType	ClientLoginTime;
	///App´úÂë
	TThostFtdcAppIDType	ClientAppID;
	///ÓÃ»§¹«ÍøIP
	TThostFtdcIPAddressType	ClientPublicIP;
	///¿Í»§µÇÂ¼±¸×¢2
	TThostFtdcClientLoginRemarkType	ClientLoginRemark;
};

///ÖÕ¶ËÓÃ»§°ó¶¨ÐÅÏ¢
struct CThostFtdcAuthUserIDField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///App´úÂë
	TThostFtdcAppIDType	AppID;
	///ÓÃ»§´úÂë
	TThostFtdcUserIDType	UserID;
	///Ð£ÑéÀàÐÍ
	TThostFtdcAuthTypeType	AuthType;
};

///ÓÃ»§IP°ó¶¨ÐÅÏ¢
struct CThostFtdcAuthIPField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///App´úÂë
	TThostFtdcAppIDType	AppID;
	///ÓÃ»§´úÂë
	TThostFtdcIPAddressType	IPAddress;
};

///²éÑ¯·ÖÀàºÏÔ¼
struct CThostFtdcQryClassifiedInstrumentField
{
	///ºÏÔ¼´úÂë
	TThostFtdcInstrumentIDType	InstrumentID;
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///ºÏÔ¼ÔÚ½»Ò×ËùµÄ´úÂë
	TThostFtdcExchangeInstIDType	ExchangeInstID;
	///²úÆ·´úÂë
	TThostFtdcInstrumentIDType	ProductID;
	///ºÏÔ¼½»Ò××´Ì¬
	TThostFtdcTradingTypeType	TradingType;
	///ºÏÔ¼·ÖÀàÀàÐÍ
	TThostFtdcClassTypeType	ClassType;
};

///²éÑ¯×éºÏÓÅ»Ý±ÈÀý
struct CThostFtdcQryCombPromotionParamField
{
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///ºÏÔ¼´úÂë
	TThostFtdcInstrumentIDType	InstrumentID;
};

///×éºÏÓÅ»Ý±ÈÀý
struct CThostFtdcCombPromotionParamField
{
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///ºÏÔ¼´úÂë
	TThostFtdcInstrumentIDType	InstrumentID;
	///Í¶»úÌ×±£±êÖ¾
	TThostFtdcCombHedgeFlagType	CombHedgeFlag;
	///ÆÚÈ¨×éºÏ±£Ö¤½ð±ÈÀý
	TThostFtdcDiscountRatioType	Xparameter;
};

///¹úÃÜÓÃ»§µÇÂ¼ÇëÇó
struct CThostFtdcReqUserLoginSMField
{
	///½»Ò×ÈÕ
	TThostFtdcDateType	TradingDay;
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///ÓÃ»§´úÂë
	TThostFtdcUserIDType	UserID;
	///ÃÜÂë
	TThostFtdcPasswordType	Password;
	///ÓÃ»§¶Ë²úÆ·ÐÅÏ¢
	TThostFtdcProductInfoType	UserProductInfo;
	///½Ó¿Ú¶Ë²úÆ·ÐÅÏ¢
	TThostFtdcProductInfoType	InterfaceProductInfo;
	///Ð­ÒéÐÅÏ¢
	TThostFtdcProtocolInfoType	ProtocolInfo;
	///MacµØÖ·
	TThostFtdcMacAddressType	MacAddress;
	///¶¯Ì¬ÃÜÂë
	TThostFtdcPasswordType	OneTimePassword;
	///±£ÁôµÄÎÞÐ§×Ö¶Î
	TThostFtdcOldIPAddressType	reserve1;
	///µÇÂ¼±¸×¢
	TThostFtdcLoginRemarkType	LoginRemark;
	///ÖÕ¶ËIP¶Ë¿Ú
	TThostFtdcIPPortType	ClientIPPort;
	///ÖÕ¶ËIPµØÖ·
	TThostFtdcIPAddressType	ClientIPAddress;
	///¾­¼Í¹«Ë¾Ãû³Æ
	TThostFtdcBrokerNameType	BrokerName;
	///ÈÏÖ¤Âë
	TThostFtdcAuthCodeType	AuthCode;
	///App´úÂë
	TThostFtdcAppIDType	AppID;
	///PINÂë
	TThostFtdcPasswordType	PIN;
};

///Í¶×ÊÕß·çÏÕ½áËã³Ö²Ö²éÑ¯
struct CThostFtdcQryRiskSettleInvstPositionField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///Í¶×ÊÕß´úÂë
	TThostFtdcInvestorIDType	InvestorID;
	///ºÏÔ¼´úÂë
	TThostFtdcInstrumentIDType	InstrumentID;
};

///·çÏÕ½áËã²úÆ·²éÑ¯
struct CThostFtdcQryRiskSettleProductStatusField
{
	///²úÆ·´úÂë
	TThostFtdcInstrumentIDType	ProductID;
};

///Í¶×ÊÕß·çÏÕ½áËã³Ö²Ö
struct CThostFtdcRiskSettleInvstPositionField
{
	///ºÏÔ¼´úÂë
	TThostFtdcInstrumentIDType	InstrumentID;
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///Í¶×ÊÕß´úÂë
	TThostFtdcInvestorIDType	InvestorID;
	///³Ö²Ö¶à¿Õ·½Ïò
	TThostFtdcPosiDirectionType	PosiDirection;
	///Í¶»úÌ×±£±êÖ¾
	TThostFtdcHedgeFlagType	HedgeFlag;
	///³Ö²ÖÈÕÆÚ
	TThostFtdcPositionDateType	PositionDate;
	///ÉÏÈÕ³Ö²Ö
	TThostFtdcVolumeType	YdPosition;
	///½ñÈÕ³Ö²Ö
	TThostFtdcVolumeType	Position;
	///¶àÍ·¶³½á
	TThostFtdcVolumeType	LongFrozen;
	///¿ÕÍ·¶³½á
	TThostFtdcVolumeType	ShortFrozen;
	///¿ª²Ö¶³½á½ð¶î
	TThostFtdcMoneyType	LongFrozenAmount;
	///¿ª²Ö¶³½á½ð¶î
	TThostFtdcMoneyType	ShortFrozenAmount;
	///¿ª²ÖÁ¿
	TThostFtdcVolumeType	OpenVolume;
	///Æ½²ÖÁ¿
	TThostFtdcVolumeType	CloseVolume;
	///¿ª²Ö½ð¶î
	TThostFtdcMoneyType	OpenAmount;
	///Æ½²Ö½ð¶î
	TThostFtdcMoneyType	CloseAmount;
	///³Ö²Ö³É±¾
	TThostFtdcMoneyType	PositionCost;
	///ÉÏ´ÎÕ¼ÓÃµÄ±£Ö¤½ð
	TThostFtdcMoneyType	PreMargin;
	///Õ¼ÓÃµÄ±£Ö¤½ð
	TThostFtdcMoneyType	UseMargin;
	///¶³½áµÄ±£Ö¤½ð
	TThostFtdcMoneyType	FrozenMargin;
	///¶³½áµÄ×Ê½ð
	TThostFtdcMoneyType	FrozenCash;
	///¶³½áµÄÊÖÐø·Ñ
	TThostFtdcMoneyType	FrozenCommission;
	///×Ê½ð²î¶î
	TThostFtdcMoneyType	CashIn;
	///ÊÖÐø·Ñ
	TThostFtdcMoneyType	Commission;
	///Æ½²ÖÓ¯¿÷
	TThostFtdcMoneyType	CloseProfit;
	///³Ö²ÖÓ¯¿÷
	TThostFtdcMoneyType	PositionProfit;
	///ÉÏ´Î½áËã¼Û
	TThostFtdcPriceType	PreSettlementPrice;
	///±¾´Î½áËã¼Û
	TThostFtdcPriceType	SettlementPrice;
	///½»Ò×ÈÕ
	TThostFtdcDateType	TradingDay;
	///½áËã±àºÅ
	TThostFtdcSettlementIDType	SettlementID;
	///¿ª²Ö³É±¾
	TThostFtdcMoneyType	OpenCost;
	///½»Ò×Ëù±£Ö¤½ð
	TThostFtdcMoneyType	ExchangeMargin;
	///×éºÏ³É½»ÐÎ³ÉµÄ³Ö²Ö
	TThostFtdcVolumeType	CombPosition;
	///×éºÏ¶àÍ·¶³½á
	TThostFtdcVolumeType	CombLongFrozen;
	///×éºÏ¿ÕÍ·¶³½á
	TThostFtdcVolumeType	CombShortFrozen;
	///ÖðÈÕ¶¢ÊÐÆ½²ÖÓ¯¿÷
	TThostFtdcMoneyType	CloseProfitByDate;
	///Öð±Ê¶Ô³åÆ½²ÖÓ¯¿÷
	TThostFtdcMoneyType	CloseProfitByTrade;
	///½ñÈÕ³Ö²Ö
	TThostFtdcVolumeType	TodayPosition;
	///±£Ö¤½ðÂÊ
	TThostFtdcRatioType	MarginRateByMoney;
	///±£Ö¤½ðÂÊ(°´ÊÖÊý)
	TThostFtdcRatioType	MarginRateByVolume;
	///Ö´ÐÐ¶³½á
	TThostFtdcVolumeType	StrikeFrozen;
	///Ö´ÐÐ¶³½á½ð¶î
	TThostFtdcMoneyType	StrikeFrozenAmount;
	///·ÅÆúÖ´ÐÐ¶³½á
	TThostFtdcVolumeType	AbandonFrozen;
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///Ö´ÐÐ¶³½áµÄ×ò²Ö
	TThostFtdcVolumeType	YdStrikeFrozen;
	///Í¶×Êµ¥Ôª´úÂë
	TThostFtdcInvestUnitIDType	InvestUnitID;
	///³Ö²Ö³É±¾²îÖµ
	TThostFtdcMoneyType	PositionCostOffset;
	///tas³Ö²ÖÊÖÊý
	TThostFtdcVolumeType	TasPosition;
	///tas³Ö²Ö³É±¾
	TThostFtdcMoneyType	TasPositionCost;
};

///·çÏÕÆ·ÖÖ
struct CThostFtdcRiskSettleProductStatusField
{
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///²úÆ·±àºÅ
	TThostFtdcInstrumentIDType	ProductID;
	///²úÆ·½áËã×´Ì¬
	TThostFtdcProductStatusType	ProductStatus;
};

///·çÏÕ½áËã×·Æ½ÐÅÏ¢
struct CThostFtdcSyncDeltaInfoField
{
	///×·Æ½ÐòºÅ
	TThostFtdcSequenceNoType	SyncDeltaSequenceNo;
	///×·Æ½×´Ì¬
	TThostFtdcSyncDeltaStatusType	SyncDeltaStatus;
	///×·Æ½ÃèÊö
	TThostFtdcSyncDescriptionType	SyncDescription;
	///ÊÇ·ñÖ»ÓÐ×Ê½ð×·Æ½
	TThostFtdcBoolType	IsOnlyTrdDelta;
};

///·çÏÕ½áËã×·Æ½²úÆ·ÐÅÏ¢
struct CThostFtdcSyncDeltaProductStatusField
{
	///×·Æ½ÐòºÅ
	TThostFtdcSequenceNoType	SyncDeltaSequenceNo;
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///²úÆ·´úÂë
	TThostFtdcInstrumentIDType	ProductID;
	///ÊÇ·ñÔÊÐí½»Ò×
	TThostFtdcProductStatusType	ProductStatus;
};

///·çÏÕ½áËã×·Æ½³Ö²ÖÃ÷Ï¸
struct CThostFtdcSyncDeltaInvstPosDtlField
{
	///ºÏÔ¼´úÂë
	TThostFtdcInstrumentIDType	InstrumentID;
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///Í¶×ÊÕß´úÂë
	TThostFtdcInvestorIDType	InvestorID;
	///Í¶»úÌ×±£±êÖ¾
	TThostFtdcHedgeFlagType	HedgeFlag;
	///ÂòÂô
	TThostFtdcDirectionType	Direction;
	///¿ª²ÖÈÕÆÚ
	TThostFtdcDateType	OpenDate;
	///³É½»±àºÅ
	TThostFtdcTradeIDType	TradeID;
	///ÊýÁ¿
	TThostFtdcVolumeType	Volume;
	///¿ª²Ö¼Û
	TThostFtdcPriceType	OpenPrice;
	///½»Ò×ÈÕ
	TThostFtdcDateType	TradingDay;
	///½áËã±àºÅ
	TThostFtdcSettlementIDType	SettlementID;
	///³É½»ÀàÐÍ
	TThostFtdcTradeTypeType	TradeType;
	///×éºÏºÏÔ¼´úÂë
	TThostFtdcInstrumentIDType	CombInstrumentID;
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///ÖðÈÕ¶¢ÊÐÆ½²ÖÓ¯¿÷
	TThostFtdcMoneyType	CloseProfitByDate;
	///Öð±Ê¶Ô³åÆ½²ÖÓ¯¿÷
	TThostFtdcMoneyType	CloseProfitByTrade;
	///ÖðÈÕ¶¢ÊÐ³Ö²ÖÓ¯¿÷
	TThostFtdcMoneyType	PositionProfitByDate;
	///Öð±Ê¶Ô³å³Ö²ÖÓ¯¿÷
	TThostFtdcMoneyType	PositionProfitByTrade;
	///Í¶×ÊÕß±£Ö¤½ð
	TThostFtdcMoneyType	Margin;
	///½»Ò×Ëù±£Ö¤½ð
	TThostFtdcMoneyType	ExchMargin;
	///±£Ö¤½ðÂÊ
	TThostFtdcRatioType	MarginRateByMoney;
	///±£Ö¤½ðÂÊ(°´ÊÖÊý)
	TThostFtdcRatioType	MarginRateByVolume;
	///×ò½áËã¼Û
	TThostFtdcPriceType	LastSettlementPrice;
	///½áËã¼Û
	TThostFtdcPriceType	SettlementPrice;
	///Æ½²ÖÁ¿
	TThostFtdcVolumeType	CloseVolume;
	///Æ½²Ö½ð¶î
	TThostFtdcMoneyType	CloseAmount;
	///ÏÈ¿ªÏÈÆ½Ê£ÓàÊýÁ¿
	TThostFtdcVolumeType	TimeFirstVolume;
	///ÌØÊâ³Ö²Ö±êÖ¾
	TThostFtdcSpecPosiTypeType	SpecPosiType;
	///²Ù×÷±êÖ¾
	TThostFtdcActionDirectionType	ActionDirection;
	///×·Æ½ÐòºÅ
	TThostFtdcSequenceNoType	SyncDeltaSequenceNo;
};

///·çÏÕ½áËã×·Æ½×éºÏ³Ö²ÖÃ÷Ï¸
struct CThostFtdcSyncDeltaInvstPosCombDtlField
{
	///½»Ò×ÈÕ
	TThostFtdcDateType	TradingDay;
	///¿ª²ÖÈÕÆÚ
	TThostFtdcDateType	OpenDate;
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///½áËã±àºÅ
	TThostFtdcSettlementIDType	SettlementID;
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///Í¶×ÊÕß´úÂë
	TThostFtdcInvestorIDType	InvestorID;
	///×éºÏ±àºÅ
	TThostFtdcTradeIDType	ComTradeID;
	///´éºÏ±àºÅ
	TThostFtdcTradeIDType	TradeID;
	///ºÏÔ¼´úÂë
	TThostFtdcInstrumentIDType	InstrumentID;
	///Í¶»úÌ×±£±êÖ¾
	TThostFtdcHedgeFlagType	HedgeFlag;
	///ÂòÂô
	TThostFtdcDirectionType	Direction;
	///³Ö²ÖÁ¿
	TThostFtdcVolumeType	TotalAmt;
	///Í¶×ÊÕß±£Ö¤½ð
	TThostFtdcMoneyType	Margin;
	///½»Ò×Ëù±£Ö¤½ð
	TThostFtdcMoneyType	ExchMargin;
	///±£Ö¤½ðÂÊ
	TThostFtdcRatioType	MarginRateByMoney;
	///±£Ö¤½ðÂÊ(°´ÊÖÊý)
	TThostFtdcRatioType	MarginRateByVolume;
	///µ¥ÍÈ±àºÅ
	TThostFtdcLegIDType	LegID;
	///µ¥ÍÈ³ËÊý
	TThostFtdcLegMultipleType	LegMultiple;
	///³É½»×éºÅ
	TThostFtdcTradeGroupIDType	TradeGroupID;
	///²Ù×÷±êÖ¾
	TThostFtdcActionDirectionType	ActionDirection;
	///×·Æ½ÐòºÅ
	TThostFtdcSequenceNoType	SyncDeltaSequenceNo;
};

///·çÏÕ½áËã×·Æ½×Ê½ð
struct CThostFtdcSyncDeltaTradingAccountField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///Í¶×ÊÕßÕÊºÅ
	TThostFtdcAccountIDType	AccountID;
	///ÉÏ´ÎÖÊÑº½ð¶î
	TThostFtdcMoneyType	PreMortgage;
	///ÉÏ´ÎÐÅÓÃ¶î¶È
	TThostFtdcMoneyType	PreCredit;
	///ÉÏ´Î´æ¿î¶î
	TThostFtdcMoneyType	PreDeposit;
	///ÉÏ´Î½áËã×¼±¸½ð
	TThostFtdcMoneyType	PreBalance;
	///ÉÏ´ÎÕ¼ÓÃµÄ±£Ö¤½ð
	TThostFtdcMoneyType	PreMargin;
	///ÀûÏ¢»ùÊý
	TThostFtdcMoneyType	InterestBase;
	///ÀûÏ¢ÊÕÈë
	TThostFtdcMoneyType	Interest;
	///Èë½ð½ð¶î
	TThostFtdcMoneyType	Deposit;
	///³ö½ð½ð¶î
	TThostFtdcMoneyType	Withdraw;
	///¶³½áµÄ±£Ö¤½ð
	TThostFtdcMoneyType	FrozenMargin;
	///¶³½áµÄ×Ê½ð
	TThostFtdcMoneyType	FrozenCash;
	///¶³½áµÄÊÖÐø·Ñ
	TThostFtdcMoneyType	FrozenCommission;
	///µ±Ç°±£Ö¤½ð×Ü¶î
	TThostFtdcMoneyType	CurrMargin;
	///×Ê½ð²î¶î
	TThostFtdcMoneyType	CashIn;
	///ÊÖÐø·Ñ
	TThostFtdcMoneyType	Commission;
	///Æ½²ÖÓ¯¿÷
	TThostFtdcMoneyType	CloseProfit;
	///³Ö²ÖÓ¯¿÷
	TThostFtdcMoneyType	PositionProfit;
	///ÆÚ»õ½áËã×¼±¸½ð
	TThostFtdcMoneyType	Balance;
	///¿ÉÓÃ×Ê½ð
	TThostFtdcMoneyType	Available;
	///¿ÉÈ¡×Ê½ð
	TThostFtdcMoneyType	WithdrawQuota;
	///»ù±¾×¼±¸½ð
	TThostFtdcMoneyType	Reserve;
	///½»Ò×ÈÕ
	TThostFtdcDateType	TradingDay;
	///½áËã±àºÅ
	TThostFtdcSettlementIDType	SettlementID;
	///ÐÅÓÃ¶î¶È
	TThostFtdcMoneyType	Credit;
	///ÖÊÑº½ð¶î
	TThostFtdcMoneyType	Mortgage;
	///½»Ò×Ëù±£Ö¤½ð
	TThostFtdcMoneyType	ExchangeMargin;
	///Í¶×ÊÕß½»¸î±£Ö¤½ð
	TThostFtdcMoneyType	DeliveryMargin;
	///½»Ò×Ëù½»¸î±£Ö¤½ð
	TThostFtdcMoneyType	ExchangeDeliveryMargin;
	///±£µ×ÆÚ»õ½áËã×¼±¸½ð
	TThostFtdcMoneyType	ReserveBalance;
	///±ÒÖÖ´úÂë
	TThostFtdcCurrencyIDType	CurrencyID;
	///ÉÏ´Î»õ±ÒÖÊÈë½ð¶î
	TThostFtdcMoneyType	PreFundMortgageIn;
	///ÉÏ´Î»õ±ÒÖÊ³ö½ð¶î
	TThostFtdcMoneyType	PreFundMortgageOut;
	///»õ±ÒÖÊÈë½ð¶î
	TThostFtdcMoneyType	FundMortgageIn;
	///»õ±ÒÖÊ³ö½ð¶î
	TThostFtdcMoneyType	FundMortgageOut;
	///»õ±ÒÖÊÑºÓà¶î
	TThostFtdcMoneyType	FundMortgageAvailable;
	///¿ÉÖÊÑº»õ±Ò½ð¶î
	TThostFtdcMoneyType	MortgageableFund;
	///ÌØÊâ²úÆ·Õ¼ÓÃ±£Ö¤½ð
	TThostFtdcMoneyType	SpecProductMargin;
	///ÌØÊâ²úÆ·¶³½á±£Ö¤½ð
	TThostFtdcMoneyType	SpecProductFrozenMargin;
	///ÌØÊâ²úÆ·ÊÖÐø·Ñ
	TThostFtdcMoneyType	SpecProductCommission;
	///ÌØÊâ²úÆ·¶³½áÊÖÐø·Ñ
	TThostFtdcMoneyType	SpecProductFrozenCommission;
	///ÌØÊâ²úÆ·³Ö²ÖÓ¯¿÷
	TThostFtdcMoneyType	SpecProductPositionProfit;
	///ÌØÊâ²úÆ·Æ½²ÖÓ¯¿÷
	TThostFtdcMoneyType	SpecProductCloseProfit;
	///¸ù¾Ý³Ö²ÖÓ¯¿÷Ëã·¨¼ÆËãµÄÌØÊâ²úÆ·³Ö²ÖÓ¯¿÷
	TThostFtdcMoneyType	SpecProductPositionProfitByAlg;
	///ÌØÊâ²úÆ·½»Ò×Ëù±£Ö¤½ð
	TThostFtdcMoneyType	SpecProductExchangeMargin;
	///ÑÓÊ±»»»ã¶³½á½ð¶î
	TThostFtdcMoneyType	FrozenSwap;
	///Ê£Óà»»»ã¶î¶È
	TThostFtdcMoneyType	RemainSwap;
	///ÆÚÈ¨ÊÐÖµ
	TThostFtdcMoneyType	OptionValue;
	///×·Æ½ÐòºÅ
	TThostFtdcSequenceNoType	SyncDeltaSequenceNo;
};

///Í¶×ÊÕß·çÏÕ½áËã×Ü±£Ö¤½ð
struct CThostFtdcSyncDeltaInitInvstMarginField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///Í¶×ÊÕß´úÂë
	TThostFtdcInvestorIDType	InvestorID;
	///×·Æ½Ç°×Ü·çÏÕ±£Ö¤½ð
	TThostFtdcMoneyType	LastRiskTotalInvstMargin;
	///×·Æ½Ç°½»Ò×Ëù×Ü·çÏÕ±£Ö¤½ð
	TThostFtdcMoneyType	LastRiskTotalExchMargin;
	///±¾´Î×·Æ½Æ·ÖÖ×Ü±£Ö¤½ð
	TThostFtdcMoneyType	ThisSyncInvstMargin;
	///±¾´Î×·Æ½Æ·ÖÖ½»Ò×Ëù×Ü±£Ö¤½ð
	TThostFtdcMoneyType	ThisSyncExchMargin;
	///±¾´ÎÎ´×·Æ½Æ·ÖÖ×Ü±£Ö¤½ð
	TThostFtdcMoneyType	RemainRiskInvstMargin;
	///±¾´ÎÎ´×·Æ½Æ·ÖÖ½»Ò×Ëù×Ü±£Ö¤½ð
	TThostFtdcMoneyType	RemainRiskExchMargin;
	///×·Æ½Ç°×ÜÌØÊâ²úÆ··çÏÕ±£Ö¤½ð
	TThostFtdcMoneyType	LastRiskSpecTotalInvstMargin;
	///×·Æ½Ç°×ÜÌØÊâ²úÆ·½»Ò×Ëù·çÏÕ±£Ö¤½ð
	TThostFtdcMoneyType	LastRiskSpecTotalExchMargin;
	///±¾´Î×·Æ½Æ·ÖÖÌØÊâ²úÆ·×Ü±£Ö¤½ð
	TThostFtdcMoneyType	ThisSyncSpecInvstMargin;
	///±¾´Î×·Æ½Æ·ÖÖÌØÊâ²úÆ·½»Ò×Ëù×Ü±£Ö¤½ð
	TThostFtdcMoneyType	ThisSyncSpecExchMargin;
	///±¾´ÎÎ´×·Æ½Æ·ÖÖÌØÊâ²úÆ·×Ü±£Ö¤½ð
	TThostFtdcMoneyType	RemainRiskSpecInvstMargin;
	///±¾´ÎÎ´×·Æ½Æ·ÖÖÌØÊâ²úÆ·½»Ò×Ëù×Ü±£Ö¤½ð
	TThostFtdcMoneyType	RemainRiskSpecExchMargin;
	///×·Æ½ÐòºÅ
	TThostFtdcSequenceNoType	SyncDeltaSequenceNo;
};

///·çÏÕ½áËã×·Æ½×éºÏÓÅÏÈ¼¶
struct CThostFtdcSyncDeltaDceCombInstrumentField
{
	///ºÏÔ¼´úÂë
	TThostFtdcInstrumentIDType	CombInstrumentID;
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///ºÏÔ¼ÔÚ½»Ò×ËùµÄ´úÂë
	TThostFtdcExchangeInstIDType	ExchangeInstID;
	///³É½»×éºÅ
	TThostFtdcTradeGroupIDType	TradeGroupID;
	///Í¶»úÌ×±£±êÖ¾
	TThostFtdcHedgeFlagType	CombHedgeFlag;
	///×éºÏÀàÐÍ
	TThostFtdcDceCombinationTypeType	CombinationType;
	///ÂòÂô
	TThostFtdcDirectionType	Direction;
	///²úÆ·´úÂë
	TThostFtdcInstrumentIDType	ProductID;
	///ÆÚÈ¨×éºÏ±£Ö¤½ð±ÈÀý
	TThostFtdcDiscountRatioType	Xparameter;
	///²Ù×÷±êÖ¾
	TThostFtdcActionDirectionType	ActionDirection;
	///×·Æ½ÐòºÅ
	TThostFtdcSequenceNoType	SyncDeltaSequenceNo;
};

///·çÏÕ½áËã×·Æ½Í¶×ÊÕßÆÚ»õ±£Ö¤½ðÂÊ
struct CThostFtdcSyncDeltaInvstMarginRateField
{
	///ºÏÔ¼´úÂë
	TThostFtdcInstrumentIDType	InstrumentID;
	///Í¶×ÊÕß·¶Î§
	TThostFtdcInvestorRangeType	InvestorRange;
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///Í¶×ÊÕß´úÂë
	TThostFtdcInvestorIDType	InvestorID;
	///Í¶»úÌ×±£±êÖ¾
	TThostFtdcHedgeFlagType	HedgeFlag;
	///¶àÍ·±£Ö¤½ðÂÊ
	TThostFtdcRatioType	LongMarginRatioByMoney;
	///¶àÍ·±£Ö¤½ð·Ñ
	TThostFtdcMoneyType	LongMarginRatioByVolume;
	///¿ÕÍ·±£Ö¤½ðÂÊ
	TThostFtdcRatioType	ShortMarginRatioByMoney;
	///¿ÕÍ·±£Ö¤½ð·Ñ
	TThostFtdcMoneyType	ShortMarginRatioByVolume;
	///ÊÇ·ñÏà¶Ô½»Ò×ËùÊÕÈ¡
	TThostFtdcBoolType	IsRelative;
	///²Ù×÷±êÖ¾
	TThostFtdcActionDirectionType	ActionDirection;
	///×·Æ½ÐòºÅ
	TThostFtdcSequenceNoType	SyncDeltaSequenceNo;
};

///·çÏÕ½áËã×·Æ½½»Ò×ËùÆÚ»õ±£Ö¤½ðÂÊ
struct CThostFtdcSyncDeltaExchMarginRateField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///ºÏÔ¼´úÂë
	TThostFtdcInstrumentIDType	InstrumentID;
	///Í¶»úÌ×±£±êÖ¾
	TThostFtdcHedgeFlagType	HedgeFlag;
	///¶àÍ·±£Ö¤½ðÂÊ
	TThostFtdcRatioType	LongMarginRatioByMoney;
	///¶àÍ·±£Ö¤½ð·Ñ
	TThostFtdcMoneyType	LongMarginRatioByVolume;
	///¿ÕÍ·±£Ö¤½ðÂÊ
	TThostFtdcRatioType	ShortMarginRatioByMoney;
	///¿ÕÍ·±£Ö¤½ð·Ñ
	TThostFtdcMoneyType	ShortMarginRatioByVolume;
	///²Ù×÷±êÖ¾
	TThostFtdcActionDirectionType	ActionDirection;
	///×·Æ½ÐòºÅ
	TThostFtdcSequenceNoType	SyncDeltaSequenceNo;
};

///·çÏÕ½áËã×·Æ½ÖÐ½ðÏÖ»õÆÚÈ¨½»Ò×Ëù±£Ö¤½ðÂÊ
struct CThostFtdcSyncDeltaOptExchMarginField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///ºÏÔ¼´úÂë
	TThostFtdcInstrumentIDType	InstrumentID;
	///Í¶»ú¿ÕÍ·±£Ö¤½ðµ÷ÕûÏµÊý
	TThostFtdcRatioType	SShortMarginRatioByMoney;
	///Í¶»ú¿ÕÍ·±£Ö¤½ðµ÷ÕûÏµÊý
	TThostFtdcMoneyType	SShortMarginRatioByVolume;
	///±£Öµ¿ÕÍ·±£Ö¤½ðµ÷ÕûÏµÊý
	TThostFtdcRatioType	HShortMarginRatioByMoney;
	///±£Öµ¿ÕÍ·±£Ö¤½ðµ÷ÕûÏµÊý
	TThostFtdcMoneyType	HShortMarginRatioByVolume;
	///Ì×Àû¿ÕÍ·±£Ö¤½ðµ÷ÕûÏµÊý
	TThostFtdcRatioType	AShortMarginRatioByMoney;
	///Ì×Àû¿ÕÍ·±£Ö¤½ðµ÷ÕûÏµÊý
	TThostFtdcMoneyType	AShortMarginRatioByVolume;
	///×öÊÐÉÌ¿ÕÍ·±£Ö¤½ðµ÷ÕûÏµÊý
	TThostFtdcRatioType	MShortMarginRatioByMoney;
	///×öÊÐÉÌ¿ÕÍ·±£Ö¤½ðµ÷ÕûÏµÊý
	TThostFtdcMoneyType	MShortMarginRatioByVolume;
	///²Ù×÷±êÖ¾
	TThostFtdcActionDirectionType	ActionDirection;
	///×·Æ½ÐòºÅ
	TThostFtdcSequenceNoType	SyncDeltaSequenceNo;
};

///·çÏÕ½áËã×·Æ½ÖÐ½ðÏÖ»õÆÚÈ¨Í¶×ÊÕß±£Ö¤½ðÂÊ
struct CThostFtdcSyncDeltaOptInvstMarginField
{
	///ºÏÔ¼´úÂë
	TThostFtdcInstrumentIDType	InstrumentID;
	///Í¶×ÊÕß·¶Î§
	TThostFtdcInvestorRangeType	InvestorRange;
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///Í¶×ÊÕß´úÂë
	TThostFtdcInvestorIDType	InvestorID;
	///Í¶»ú¿ÕÍ·±£Ö¤½ðµ÷ÕûÏµÊý
	TThostFtdcRatioType	SShortMarginRatioByMoney;
	///Í¶»ú¿ÕÍ·±£Ö¤½ðµ÷ÕûÏµÊý
	TThostFtdcMoneyType	SShortMarginRatioByVolume;
	///±£Öµ¿ÕÍ·±£Ö¤½ðµ÷ÕûÏµÊý
	TThostFtdcRatioType	HShortMarginRatioByMoney;
	///±£Öµ¿ÕÍ·±£Ö¤½ðµ÷ÕûÏµÊý
	TThostFtdcMoneyType	HShortMarginRatioByVolume;
	///Ì×Àû¿ÕÍ·±£Ö¤½ðµ÷ÕûÏµÊý
	TThostFtdcRatioType	AShortMarginRatioByMoney;
	///Ì×Àû¿ÕÍ·±£Ö¤½ðµ÷ÕûÏµÊý
	TThostFtdcMoneyType	AShortMarginRatioByVolume;
	///ÊÇ·ñ¸úËæ½»Ò×ËùÊÕÈ¡
	TThostFtdcBoolType	IsRelative;
	///×öÊÐÉÌ¿ÕÍ·±£Ö¤½ðµ÷ÕûÏµÊý
	TThostFtdcRatioType	MShortMarginRatioByMoney;
	///×öÊÐÉÌ¿ÕÍ·±£Ö¤½ðµ÷ÕûÏµÊý
	TThostFtdcMoneyType	MShortMarginRatioByVolume;
	///²Ù×÷±êÖ¾
	TThostFtdcActionDirectionType	ActionDirection;
	///×·Æ½ÐòºÅ
	TThostFtdcSequenceNoType	SyncDeltaSequenceNo;
};

///·çÏÕ½áËã×·Æ½ÆÚÈ¨±êµÄµ÷Õû±£Ö¤½ðÂÊ
struct CThostFtdcSyncDeltaInvstMarginRateULField
{
	///ºÏÔ¼´úÂë
	TThostFtdcInstrumentIDType	InstrumentID;
	///Í¶×ÊÕß·¶Î§
	TThostFtdcInvestorRangeType	InvestorRange;
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///Í¶×ÊÕß´úÂë
	TThostFtdcInvestorIDType	InvestorID;
	///Í¶»úÌ×±£±êÖ¾
	TThostFtdcHedgeFlagType	HedgeFlag;
	///¶àÍ·±£Ö¤½ðÂÊ
	TThostFtdcRatioType	LongMarginRatioByMoney;
	///¶àÍ·±£Ö¤½ð·Ñ
	TThostFtdcMoneyType	LongMarginRatioByVolume;
	///¿ÕÍ·±£Ö¤½ðÂÊ
	TThostFtdcRatioType	ShortMarginRatioByMoney;
	///¿ÕÍ·±£Ö¤½ð·Ñ
	TThostFtdcMoneyType	ShortMarginRatioByVolume;
	///²Ù×÷±êÖ¾
	TThostFtdcActionDirectionType	ActionDirection;
	///×·Æ½ÐòºÅ
	TThostFtdcSequenceNoType	SyncDeltaSequenceNo;
};

///·çÏÕ½áËã×·Æ½ÆÚÈ¨ÊÖÐø·ÑÂÊ
struct CThostFtdcSyncDeltaOptInvstCommRateField
{
	///ºÏÔ¼´úÂë
	TThostFtdcInstrumentIDType	InstrumentID;
	///Í¶×ÊÕß·¶Î§
	TThostFtdcInvestorRangeType	InvestorRange;
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///Í¶×ÊÕß´úÂë
	TThostFtdcInvestorIDType	InvestorID;
	///¿ª²ÖÊÖÐø·ÑÂÊ
	TThostFtdcRatioType	OpenRatioByMoney;
	///¿ª²ÖÊÖÐø·Ñ
	TThostFtdcRatioType	OpenRatioByVolume;
	///Æ½²ÖÊÖÐø·ÑÂÊ
	TThostFtdcRatioType	CloseRatioByMoney;
	///Æ½²ÖÊÖÐø·Ñ
	TThostFtdcRatioType	CloseRatioByVolume;
	///Æ½½ñÊÖÐø·ÑÂÊ
	TThostFtdcRatioType	CloseTodayRatioByMoney;
	///Æ½½ñÊÖÐø·Ñ
	TThostFtdcRatioType	CloseTodayRatioByVolume;
	///Ö´ÐÐÊÖÐø·ÑÂÊ
	TThostFtdcRatioType	StrikeRatioByMoney;
	///Ö´ÐÐÊÖÐø·Ñ
	TThostFtdcRatioType	StrikeRatioByVolume;
	///²Ù×÷±êÖ¾
	TThostFtdcActionDirectionType	ActionDirection;
	///×·Æ½ÐòºÅ
	TThostFtdcSequenceNoType	SyncDeltaSequenceNo;
};

///·çÏÕ½áËã×·Æ½ÆÚ»õÊÖÐø·ÑÂÊ
struct CThostFtdcSyncDeltaInvstCommRateField
{
	///ºÏÔ¼´úÂë
	TThostFtdcInstrumentIDType	InstrumentID;
	///Í¶×ÊÕß·¶Î§
	TThostFtdcInvestorRangeType	InvestorRange;
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///Í¶×ÊÕß´úÂë
	TThostFtdcInvestorIDType	InvestorID;
	///¿ª²ÖÊÖÐø·ÑÂÊ
	TThostFtdcRatioType	OpenRatioByMoney;
	///¿ª²ÖÊÖÐø·Ñ
	TThostFtdcRatioType	OpenRatioByVolume;
	///Æ½²ÖÊÖÐø·ÑÂÊ
	TThostFtdcRatioType	CloseRatioByMoney;
	///Æ½²ÖÊÖÐø·Ñ
	TThostFtdcRatioType	CloseRatioByVolume;
	///Æ½½ñÊÖÐø·ÑÂÊ
	TThostFtdcRatioType	CloseTodayRatioByMoney;
	///Æ½½ñÊÖÐø·Ñ
	TThostFtdcRatioType	CloseTodayRatioByVolume;
	///²Ù×÷±êÖ¾
	TThostFtdcActionDirectionType	ActionDirection;
	///×·Æ½ÐòºÅ
	TThostFtdcSequenceNoType	SyncDeltaSequenceNo;
};

///·çÏÕ½áËã×·Æ½½»²æ»ãÂÊ
struct CThostFtdcSyncDeltaProductExchRateField
{
	///²úÆ·´úÂë
	TThostFtdcInstrumentIDType	ProductID;
	///±¨¼Û±ÒÖÖÀàÐÍ
	TThostFtdcCurrencyIDType	QuoteCurrencyID;
	///»ãÂÊ
	TThostFtdcExchangeRateType	ExchangeRate;
	///²Ù×÷±êÖ¾
	TThostFtdcActionDirectionType	ActionDirection;
	///×·Æ½ÐòºÅ
	TThostFtdcSequenceNoType	SyncDeltaSequenceNo;
};

///·çÏÕ½áËã×·Æ½ÐÐÇé
struct CThostFtdcSyncDeltaDepthMarketDataField
{
	///½»Ò×ÈÕ
	TThostFtdcDateType	TradingDay;
	///ºÏÔ¼´úÂë
	TThostFtdcInstrumentIDType	InstrumentID;
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///ºÏÔ¼ÔÚ½»Ò×ËùµÄ´úÂë
	TThostFtdcExchangeInstIDType	ExchangeInstID;
	///×îÐÂ¼Û
	TThostFtdcPriceType	LastPrice;
	///ÉÏ´Î½áËã¼Û
	TThostFtdcPriceType	PreSettlementPrice;
	///×òÊÕÅÌ
	TThostFtdcPriceType	PreClosePrice;
	///×ò³Ö²ÖÁ¿
	TThostFtdcLargeVolumeType	PreOpenInterest;
	///½ñ¿ªÅÌ
	TThostFtdcPriceType	OpenPrice;
	///×î¸ß¼Û
	TThostFtdcPriceType	HighestPrice;
	///×îµÍ¼Û
	TThostFtdcPriceType	LowestPrice;
	///ÊýÁ¿
	TThostFtdcVolumeType	Volume;
	///³É½»½ð¶î
	TThostFtdcMoneyType	Turnover;
	///³Ö²ÖÁ¿
	TThostFtdcLargeVolumeType	OpenInterest;
	///½ñÊÕÅÌ
	TThostFtdcPriceType	ClosePrice;
	///±¾´Î½áËã¼Û
	TThostFtdcPriceType	SettlementPrice;
	///ÕÇÍ£°å¼Û
	TThostFtdcPriceType	UpperLimitPrice;
	///µøÍ£°å¼Û
	TThostFtdcPriceType	LowerLimitPrice;
	///×òÐéÊµ¶È
	TThostFtdcRatioType	PreDelta;
	///½ñÐéÊµ¶È
	TThostFtdcRatioType	CurrDelta;
	///×îºóÐÞ¸ÄÊ±¼ä
	TThostFtdcTimeType	UpdateTime;
	///×îºóÐÞ¸ÄºÁÃë
	TThostFtdcMillisecType	UpdateMillisec;
	///ÉêÂò¼ÛÒ»
	TThostFtdcPriceType	BidPrice1;
	///ÉêÂòÁ¿Ò»
	TThostFtdcVolumeType	BidVolume1;
	///ÉêÂô¼ÛÒ»
	TThostFtdcPriceType	AskPrice1;
	///ÉêÂôÁ¿Ò»
	TThostFtdcVolumeType	AskVolume1;
	///ÉêÂò¼Û¶þ
	TThostFtdcPriceType	BidPrice2;
	///ÉêÂòÁ¿¶þ
	TThostFtdcVolumeType	BidVolume2;
	///ÉêÂô¼Û¶þ
	TThostFtdcPriceType	AskPrice2;
	///ÉêÂôÁ¿¶þ
	TThostFtdcVolumeType	AskVolume2;
	///ÉêÂò¼ÛÈý
	TThostFtdcPriceType	BidPrice3;
	///ÉêÂòÁ¿Èý
	TThostFtdcVolumeType	BidVolume3;
	///ÉêÂô¼ÛÈý
	TThostFtdcPriceType	AskPrice3;
	///ÉêÂôÁ¿Èý
	TThostFtdcVolumeType	AskVolume3;
	///ÉêÂò¼ÛËÄ
	TThostFtdcPriceType	BidPrice4;
	///ÉêÂòÁ¿ËÄ
	TThostFtdcVolumeType	BidVolume4;
	///ÉêÂô¼ÛËÄ
	TThostFtdcPriceType	AskPrice4;
	///ÉêÂôÁ¿ËÄ
	TThostFtdcVolumeType	AskVolume4;
	///ÉêÂò¼ÛÎå
	TThostFtdcPriceType	BidPrice5;
	///ÉêÂòÁ¿Îå
	TThostFtdcVolumeType	BidVolume5;
	///ÉêÂô¼ÛÎå
	TThostFtdcPriceType	AskPrice5;
	///ÉêÂôÁ¿Îå
	TThostFtdcVolumeType	AskVolume5;
	///µ±ÈÕ¾ù¼Û
	TThostFtdcPriceType	AveragePrice;
	///ÒµÎñÈÕÆÚ
	TThostFtdcDateType	ActionDay;
	///ÉÏ´ø¼Û
	TThostFtdcPriceType	BandingUpperPrice;
	///ÏÂ´ø¼Û
	TThostFtdcPriceType	BandingLowerPrice;
	///²Ù×÷±êÖ¾
	TThostFtdcActionDirectionType	ActionDirection;
	///×·Æ½ÐòºÅ
	TThostFtdcSequenceNoType	SyncDeltaSequenceNo;
};

///·çÏÕ½áËã×·Æ½ÏÖ»õÖ¸Êý
struct CThostFtdcSyncDeltaIndexPriceField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///ºÏÔ¼´úÂë
	TThostFtdcInstrumentIDType	InstrumentID;
	///Ö¸ÊýÏÖ»õÊÕÅÌ¼Û
	TThostFtdcPriceType	ClosePrice;
	///²Ù×÷±êÖ¾
	TThostFtdcActionDirectionType	ActionDirection;
	///×·Æ½ÐòºÅ
	TThostFtdcSequenceNoType	SyncDeltaSequenceNo;
};

///·çÏÕ½áËã×·Æ½²Öµ¥ÕÛµÖ
struct CThostFtdcSyncDeltaEWarrantOffsetField
{
	///½»Ò×ÈÕÆÚ
	TThostFtdcTradeDateType	TradingDay;
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///Í¶×ÊÕß´úÂë
	TThostFtdcInvestorIDType	InvestorID;
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///ºÏÔ¼´úÂë
	TThostFtdcInstrumentIDType	InstrumentID;
	///ÂòÂô·½Ïò
	TThostFtdcDirectionType	Direction;
	///Í¶»úÌ×±£±êÖ¾
	TThostFtdcHedgeFlagType	HedgeFlag;
	///ÊýÁ¿
	TThostFtdcVolumeType	Volume;
	///²Ù×÷±êÖ¾
	TThostFtdcActionDirectionType	ActionDirection;
	///×·Æ½ÐòºÅ
	TThostFtdcSequenceNoType	SyncDeltaSequenceNo;
};

///SPBMÆÚ»õºÏÔ¼±£Ö¤½ð²ÎÊý
struct CThostFtdcSPBMFutureParameterField
{
	///½»Ò×ÈÕ
	TThostFtdcDateType	TradingDay;
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///ºÏÔ¼´úÂë
	TThostFtdcInstrumentIDType	InstrumentID;
	///Æ·ÖÖ´úÂë
	TThostFtdcInstrumentIDType	ProdFamilyCode;
	///ÆÚ»õºÏÔ¼Òò×Ó
	TThostFtdcVolumeMultipleType	Cvf;
	///½×¶Î±êÊ¶
	TThostFtdcTimeRangeType	TimeRange;
	///Æ·ÖÖ±£Ö¤½ð±ê×¼
	TThostFtdcRatioType	MarginRate;
	///ÆÚ»õºÏÔ¼ÄÚ²¿¶ÔËø²Ö·ÑÂÊÕÛ¿Û±ÈÀý
	TThostFtdcRatioType	LockRateX;
	///Ìá¸ß±£Ö¤½ð±ê×¼
	TThostFtdcRatioType	AddOnRate;
	///×ò½áËã¼Û
	TThostFtdcPriceType	PreSettlementPrice;
	///ÆÚ»õºÏÔ¼ÄÚ²¿¶ÔËø²Ö¸½¼Ó·ÑÂÊÕÛ¿Û±ÈÀý
	TThostFtdcRatioType	AddOnLockRateX2;
};

///SPBMÆÚÈ¨ºÏÔ¼±£Ö¤½ð²ÎÊý
struct CThostFtdcSPBMOptionParameterField
{
	///½»Ò×ÈÕ
	TThostFtdcDateType	TradingDay;
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///ºÏÔ¼´úÂë
	TThostFtdcInstrumentIDType	InstrumentID;
	///Æ·ÖÖ´úÂë
	TThostFtdcInstrumentIDType	ProdFamilyCode;
	///ÆÚÈ¨ºÏÔ¼Òò×Ó
	TThostFtdcVolumeMultipleType	Cvf;
	///ÆÚÈ¨³åµÖ¼Û¸ñ
	TThostFtdcPriceType	DownPrice;
	///DeltaÖµ
	TThostFtdcDeltaType	Delta;
	///Âô·½ÆÚÈ¨·çÏÕ×ª»»×îµÍÖµ
	TThostFtdcDeltaType	SlimiDelta;
	///×ò½áËã¼Û
	TThostFtdcPriceType	PreSettlementPrice;
};

///SPBMÆ·ÖÖÄÚ¶ÔËø²ÖÕÛ¿Û²ÎÊý
struct CThostFtdcSPBMIntraParameterField
{
	///½»Ò×ÈÕ
	TThostFtdcDateType	TradingDay;
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///Æ·ÖÖ´úÂë
	TThostFtdcInstrumentIDType	ProdFamilyCode;
	///Æ·ÖÖÄÚºÏÔ¼¼ä¶ÔËø²Ö·ÑÂÊÕÛ¿Û±ÈÀý
	TThostFtdcRatioType	IntraRateY;
	///Æ·ÖÖÄÚºÏÔ¼¼ä¶ÔËø²Ö¸½¼Ó·ÑÂÊÕÛ¿Û±ÈÀý
	TThostFtdcRatioType	AddOnIntraRateY2;
};

///SPBM¿çÆ·ÖÖµÖ¿Û²ÎÊý
struct CThostFtdcSPBMInterParameterField
{
	///½»Ò×ÈÕ
	TThostFtdcDateType	TradingDay;
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///ÓÅÏÈ¼¶
	TThostFtdcSpreadIdType	SpreadId;
	///Æ·ÖÖ¼ä¶ÔËø²Ö·ÑÂÊÕÛ¿Û±ÈÀý
	TThostFtdcRatioType	InterRateZ;
	///µÚÒ»ÍÈ¹¹³ÉÆ·ÖÖ
	TThostFtdcInstrumentIDType	Leg1ProdFamilyCode;
	///µÚ¶þÍÈ¹¹³ÉÆ·ÖÖ
	TThostFtdcInstrumentIDType	Leg2ProdFamilyCode;
};

///Í¬²½SPBM²ÎÊý½áÊø
struct CThostFtdcSyncSPBMParameterEndField
{
	///½»Ò×ÈÕ
	TThostFtdcDateType	TradingDay;
};

///SPBMÆÚ»õºÏÔ¼±£Ö¤½ð²ÎÊý²éÑ¯
struct CThostFtdcQrySPBMFutureParameterField
{
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///ºÏÔ¼´úÂë
	TThostFtdcInstrumentIDType	InstrumentID;
	///Æ·ÖÖ´úÂë
	TThostFtdcInstrumentIDType	ProdFamilyCode;
};

///SPBMÆÚÈ¨ºÏÔ¼±£Ö¤½ð²ÎÊý²éÑ¯
struct CThostFtdcQrySPBMOptionParameterField
{
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///ºÏÔ¼´úÂë
	TThostFtdcInstrumentIDType	InstrumentID;
	///Æ·ÖÖ´úÂë
	TThostFtdcInstrumentIDType	ProdFamilyCode;
};

///SPBMÆ·ÖÖÄÚ¶ÔËø²ÖÕÛ¿Û²ÎÊý²éÑ¯
struct CThostFtdcQrySPBMIntraParameterField
{
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///Æ·ÖÖ´úÂë
	TThostFtdcInstrumentIDType	ProdFamilyCode;
};

///SPBM¿çÆ·ÖÖµÖ¿Û²ÎÊý²éÑ¯
struct CThostFtdcQrySPBMInterParameterField
{
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///µÚÒ»ÍÈ¹¹³ÉÆ·ÖÖ
	TThostFtdcInstrumentIDType	Leg1ProdFamilyCode;
	///µÚ¶þÍÈ¹¹³ÉÆ·ÖÖ
	TThostFtdcInstrumentIDType	Leg2ProdFamilyCode;
};

///×éºÏ±£Ö¤½ðÌ×²Í
struct CThostFtdcSPBMPortfDefinitionField
{
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///×éºÏ±£Ö¤½ðÌ×²Í´úÂë
	TThostFtdcPortfolioDefIDType	PortfolioDefID;
	///Æ·ÖÖ´úÂë
	TThostFtdcInstrumentIDType	ProdFamilyCode;
	///ÊÇ·ñÆôÓÃSPBM
	TThostFtdcBoolType	IsSPBM;
};

///Í¶×ÊÕßÌ×²ÍÑ¡Ôñ
struct CThostFtdcSPBMInvestorPortfDefField
{
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///Í¶×ÊÕß´úÂë
	TThostFtdcInvestorIDType	InvestorID;
	///×éºÏ±£Ö¤½ðÌ×²Í´úÂë
	TThostFtdcPortfolioDefIDType	PortfolioDefID;
};

///Í¶×ÊÕßÐÂÐÍ×éºÏ±£Ö¤½ðÏµÊý
struct CThostFtdcInvestorPortfMarginRatioField
{
	///Í¶×ÊÕß·¶Î§
	TThostFtdcInvestorRangeType	InvestorRange;
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///Í¶×ÊÕß´úÂë
	TThostFtdcInvestorIDType	InvestorID;
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///»áÔ±¶ÔÍ¶×ÊÕßÊÕÈ¡µÄ±£Ö¤½ðºÍ½»Ò×Ëù¶ÔÍ¶×ÊÕßÊÕÈ¡µÄ±£Ö¤½ðµÄ±ÈÀý
	TThostFtdcRatioType	MarginRatio;
	///²úÆ·Èº´úÂë
	TThostFtdcProductIDType	ProductGroupID;
};

///×éºÏ±£Ö¤½ðÌ×²Í²éÑ¯
struct CThostFtdcQrySPBMPortfDefinitionField
{
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///×éºÏ±£Ö¤½ðÌ×²Í´úÂë
	TThostFtdcPortfolioDefIDType	PortfolioDefID;
	///Æ·ÖÖ´úÂë
	TThostFtdcInstrumentIDType	ProdFamilyCode;
};

///Í¶×ÊÕßÌ×²ÍÑ¡Ôñ²éÑ¯
struct CThostFtdcQrySPBMInvestorPortfDefField
{
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///Í¶×ÊÕß´úÂë
	TThostFtdcInvestorIDType	InvestorID;
};

///Í¶×ÊÕßÐÂÐÍ×éºÏ±£Ö¤½ðÏµÊý²éÑ¯
struct CThostFtdcQryInvestorPortfMarginRatioField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///Í¶×ÊÕß´úÂë
	TThostFtdcInvestorIDType	InvestorID;
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///²úÆ·Èº´úÂë
	TThostFtdcProductIDType	ProductGroupID;
};

///Í¶×ÊÕß²úÆ·SPBMÃ÷Ï¸
struct CThostFtdcInvestorProdSPBMDetailField
{
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///Í¶×ÊÕß´úÂë
	TThostFtdcInvestorIDType	InvestorID;
	///Æ·ÖÖ´úÂë
	TThostFtdcInstrumentIDType	ProdFamilyCode;
	///ºÏÔ¼ÄÚ¶ÔËø±£Ö¤½ð
	TThostFtdcMoneyType	IntraInstrMargin;
	///Âò¹é¼¯±£Ö¤½ð
	TThostFtdcMoneyType	BCollectingMargin;
	///Âô¹é¼¯±£Ö¤½ð
	TThostFtdcMoneyType	SCollectingMargin;
	///Æ·ÖÖÄÚºÏÔ¼¼ä¶ÔËø±£Ö¤½ð
	TThostFtdcMoneyType	IntraProdMargin;
	///¾»±£Ö¤½ð
	TThostFtdcMoneyType	NetMargin;
	///²úÆ·¼ä¶ÔËø±£Ö¤½ð
	TThostFtdcMoneyType	InterProdMargin;
	///Âã±£Ö¤½ð
	TThostFtdcMoneyType	SingleMargin;
	///¸½¼Ó±£Ö¤½ð
	TThostFtdcMoneyType	AddOnMargin;
	///½»¸îÔÂ±£Ö¤½ð
	TThostFtdcMoneyType	DeliveryMargin;
	///¿´ÕÇÆÚÈ¨×îµÍ·çÏÕ
	TThostFtdcMoneyType	CallOptionMinRisk;
	///¿´µøÆÚÈ¨×îµÍ·çÏÕ
	TThostFtdcMoneyType	PutOptionMinRisk;
	///Âô·½ÆÚÈ¨×îµÍ·çÏÕ
	TThostFtdcMoneyType	OptionMinRisk;
	///Âò·½ÆÚÈ¨³åµÖ¼ÛÖµ
	TThostFtdcMoneyType	OptionValueOffset;
	///Âô·½ÆÚÈ¨È¨Àû½ð
	TThostFtdcMoneyType	OptionRoyalty;
	///¼ÛÖµ³åµÖ
	TThostFtdcMoneyType	RealOptionValueOffset;
	///±£Ö¤½ð
	TThostFtdcMoneyType	Margin;
	///½»Ò×Ëù±£Ö¤½ð
	TThostFtdcMoneyType	ExchMargin;
};

///Í¶×ÊÕß²úÆ·SPBMÃ÷Ï¸²éÑ¯
struct CThostFtdcQryInvestorProdSPBMDetailField
{
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///Í¶×ÊÕß´úÂë
	TThostFtdcInvestorIDType	InvestorID;
	///Æ·ÖÖ´úÂë
	TThostFtdcInstrumentIDType	ProdFamilyCode;
};

///×é±£½»Ò×²ÎÊýÉèÖÃ
struct CThostFtdcPortfTradeParamSettingField
{
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///Í¶×ÊÕß´úÂë
	TThostFtdcInvestorIDType	InvestorID;
	///ÐÂÐÍ×é±£Ëã·¨
	TThostFtdcPortfolioType	Portfolio;
	///³·µ¥ÊÇ·ñÑé×Ê
	TThostFtdcBoolType	IsActionVerify;
	///Æ½²ÖÊÇ·ñÑé×Ê
	TThostFtdcBoolType	IsCloseVerify;
};

///Í¶×ÊÕß½»Ò×È¨ÏÞÉèÖÃ
struct CThostFtdcInvestorTradingRightField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///Í¶×ÊÕß´úÂë
	TThostFtdcInvestorIDType	InvestorID;
	///½»Ò×È¨ÏÞ
	TThostFtdcInvstTradingRightType	InvstTradingRight;
};

///ÖÊÑºÅä±È²ÎÊý
struct CThostFtdcMortgageParamField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///Í¶×ÊÕßÕÊºÅ
	TThostFtdcAccountIDType	AccountID;
	///ÖÊÑºÅä±ÈÏµÊý
	TThostFtdcRatioType	MortgageBalance;
	///¿ª²ÖÊÇ·ñÑéÖ¤ÖÊÑºÅä±È
	TThostFtdcBoolType	CheckMortgageRatio;
};

///¿ÉÌá¿ØÖÆ²ÎÊý
struct CThostFtdcWithDrawParamField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///Í¶×ÊÕßÕÊºÅ
	TThostFtdcAccountIDType	AccountID;
	///²ÎÊý´úÂë
	TThostFtdcWithDrawParamIDType	WithDrawParamID;
	///²ÎÊý´úÂëÖµ
	TThostFtdcWithDrawParamValueType	WithDrawParamValue;
};

///ThostÖÕ¶ËÓÃ»§¹¦ÄÜÈ¨ÏÞ
struct CThostFtdcThostUserFunctionField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///ÓÃ»§´úÂë
	TThostFtdcUserIDType	UserID;
	///ThostÖÕ¶Ë¹¦ÄÜ´úÂë
	TThostFtdcThostFunctionCodeType	ThostFunctionCode;
};

///ThostÖÕ¶ËÓÃ»§¹¦ÄÜÈ¨ÏÞ²éÑ¯
struct CThostFtdcQryThostUserFunctionField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///ÓÃ»§´úÂë
	TThostFtdcUserIDType	UserID;
};

///SPBM¸½¼Ó¿çÆ·ÖÖµÖ¿Û²ÎÊý
struct CThostFtdcSPBMAddOnInterParameterField
{
	///½»Ò×ÈÕ
	TThostFtdcDateType	TradingDay;
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///ÓÅÏÈ¼¶
	TThostFtdcSpreadIdType	SpreadId;
	///Æ·ÖÖ¼ä¶ÔËø²Ö¸½¼Ó·ÑÂÊÕÛ¿Û±ÈÀý
	TThostFtdcRatioType	AddOnInterRateZ2;
	///µÚÒ»ÍÈ¹¹³ÉÆ·ÖÖ
	TThostFtdcInstrumentIDType	Leg1ProdFamilyCode;
	///µÚ¶þÍÈ¹¹³ÉÆ·ÖÖ
	TThostFtdcInstrumentIDType	Leg2ProdFamilyCode;
};

///SPBM¸½¼Ó¿çÆ·ÖÖµÖ¿Û²ÎÊý²éÑ¯
struct CThostFtdcQrySPBMAddOnInterParameterField
{
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///µÚÒ»ÍÈ¹¹³ÉÆ·ÖÖ
	TThostFtdcInstrumentIDType	Leg1ProdFamilyCode;
	///µÚ¶þÍÈ¹¹³ÉÆ·ÖÖ
	TThostFtdcInstrumentIDType	Leg2ProdFamilyCode;
};

///Í¶×ÊÕßÉÌÆ·×éSPMM¼ÇÂ¼²éÑ¯
struct CThostFtdcQryInvestorCommoditySPMMMarginField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///Í¶×ÊÕß´úÂë
	TThostFtdcInvestorIDType	InvestorID;
	///ÉÌÆ·×é´úÂë
	TThostFtdcSPMMProductIDType	CommodityID;
};

///Í¶×ÊÕßÉÌÆ·ÈºSPMM¼ÇÂ¼²éÑ¯
struct CThostFtdcQryInvestorCommodityGroupSPMMMarginField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///Í¶×ÊÕß´úÂë
	TThostFtdcInvestorIDType	InvestorID;
	///ÉÌÆ·Èº´úÂë
	TThostFtdcSPMMProductIDType	CommodityGroupID;
};

///SPMMºÏÔ¼²ÎÊý²éÑ¯
struct CThostFtdcQrySPMMInstParamField
{
	///ºÏÔ¼´úÂë
	TThostFtdcInstrumentIDType	InstrumentID;
};

///SPMM²úÆ·²ÎÊý²éÑ¯
struct CThostFtdcQrySPMMProductParamField
{
	///²úÆ·´úÂë
	TThostFtdcSPMMProductIDType	ProductID;
};

///Í¶×ÊÕßÉÌÆ·×éSPMM¼ÇÂ¼
struct CThostFtdcInvestorCommoditySPMMMarginField
{
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///Í¶×ÊÕß´úÂë
	TThostFtdcInvestorIDType	InvestorID;
	///ÉÌÆ·×é´úÂë
	TThostFtdcSPMMProductIDType	CommodityID;
	///ÓÅ»Ý²ÖÎ»Ó¦ÊÕ±£Ö¤½ð
	TThostFtdcMoneyType	MarginBeforeDiscount;
	///²»ÓÅ»Ý²ÖÎ»Ó¦ÊÕ±£Ö¤½ð
	TThostFtdcMoneyType	MarginNoDiscount;
	///¶àÍ·Êµ²Ö·çÏÕ
	TThostFtdcMoneyType	LongPosRisk;
	///¶àÍ·¿ª²Ö¶³½á·çÏÕ
	TThostFtdcMoneyType	LongOpenFrozenRisk;
	///¶àÍ·±»Æ½¶³½á·çÏÕ
	TThostFtdcMoneyType	LongCloseFrozenRisk;
	///¿ÕÍ·Êµ²Ö·çÏÕ
	TThostFtdcMoneyType	ShortPosRisk;
	///¿ÕÍ·¿ª²Ö¶³½á·çÏÕ
	TThostFtdcMoneyType	ShortOpenFrozenRisk;
	///¿ÕÍ·±»Æ½¶³½á·çÏÕ
	TThostFtdcMoneyType	ShortCloseFrozenRisk;
	///SPMMÆ·ÖÖÄÚ¿çÆÚÓÅ»ÝÏµÊý
	TThostFtdcSPMMDiscountRatioType	IntraCommodityRate;
	///SPMMÆÚÈ¨ÓÅ»ÝÏµÊý
	TThostFtdcSPMMDiscountRatioType	OptionDiscountRate;
	///Êµ²Ö¶Ô³åÓÅ»Ý½ð¶î
	TThostFtdcMoneyType	PosDiscount;
	///¿ª²Ö±¨µ¥¶Ô³åÓÅ»Ý½ð¶î
	TThostFtdcMoneyType	OpenFrozenDiscount;
	///Æ·ÖÖ·çÏÕ¾»Í·
	TThostFtdcMoneyType	NetRisk;
	///Æ½²Ö¶³½á±£Ö¤½ð
	TThostFtdcMoneyType	CloseFrozenMargin;
	///¶³½áµÄÊÖÐø·Ñ
	TThostFtdcMoneyType	FrozenCommission;
	///ÊÖÐø·Ñ
	TThostFtdcMoneyType	Commission;
	///¶³½áµÄ×Ê½ð
	TThostFtdcMoneyType	FrozenCash;
	///×Ê½ð²î¶î
	TThostFtdcMoneyType	CashIn;
	///ÐÐÈ¨¶³½á×Ê½ð
	TThostFtdcMoneyType	StrikeFrozenMargin;
};

///Í¶×ÊÕßÉÌÆ·ÈºSPMM¼ÇÂ¼
struct CThostFtdcInvestorCommodityGroupSPMMMarginField
{
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///Í¶×ÊÕß´úÂë
	TThostFtdcInvestorIDType	InvestorID;
	///ÉÌÆ·Èº´úÂë
	TThostFtdcSPMMProductIDType	CommodityGroupID;
	///ÓÅ»Ý²ÖÎ»Ó¦ÊÕ±£Ö¤½ð
	TThostFtdcMoneyType	MarginBeforeDiscount;
	///²»ÓÅ»Ý²ÖÎ»Ó¦ÊÕ±£Ö¤½ð
	TThostFtdcMoneyType	MarginNoDiscount;
	///¶àÍ··çÏÕ
	TThostFtdcMoneyType	LongRisk;
	///¿ÕÍ··çÏÕ
	TThostFtdcMoneyType	ShortRisk;
	///ÉÌÆ·ÈºÆ½²Ö¶³½á±£Ö¤½ð
	TThostFtdcMoneyType	CloseFrozenMargin;
	///SPMM¿çÆ·ÖÖÓÅ»ÝÏµÊý
	TThostFtdcSPMMDiscountRatioType	InterCommodityRate;
	///ÉÌÆ·Èº×îÐ¡±£Ö¤½ð±ÈÀý
	TThostFtdcSPMMDiscountRatioType	MiniMarginRatio;
	///Í¶×ÊÕß±£Ö¤½ðºÍ½»Ò×Ëù±£Ö¤½ðµÄ±ÈÀý
	TThostFtdcRatioType	AdjustRatio;
	///SPMMÆ·ÖÖÄÚÓÅ»Ý»ã×Ü
	TThostFtdcMoneyType	IntraCommodityDiscount;
	///SPMM¿çÆ·ÖÖÓÅ»Ý
	TThostFtdcMoneyType	InterCommodityDiscount;
	///½»Ò×Ëù±£Ö¤½ð
	TThostFtdcMoneyType	ExchMargin;
	///Í¶×ÊÕß±£Ö¤½ð
	TThostFtdcMoneyType	InvestorMargin;
	///¶³½áµÄÊÖÐø·Ñ
	TThostFtdcMoneyType	FrozenCommission;
	///ÊÖÐø·Ñ
	TThostFtdcMoneyType	Commission;
	///¶³½áµÄ×Ê½ð
	TThostFtdcMoneyType	FrozenCash;
	///×Ê½ð²î¶î
	TThostFtdcMoneyType	CashIn;
	///ÐÐÈ¨¶³½á×Ê½ð
	TThostFtdcMoneyType	StrikeFrozenMargin;
};

///SPMMºÏÔ¼²ÎÊý
struct CThostFtdcSPMMInstParamField
{
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///ºÏÔ¼´úÂë
	TThostFtdcInstrumentIDType	InstrumentID;
	///SPMMºÏÔ¼±£Ö¤½ðËã·¨
	TThostFtdcInstMarginCalIDType	InstMarginCalID;
	///ÉÌÆ·×é´úÂë
	TThostFtdcSPMMProductIDType	CommodityID;
	///ÉÌÆ·Èº´úÂë
	TThostFtdcSPMMProductIDType	CommodityGroupID;
};

///SPMM²úÆ·²ÎÊý
struct CThostFtdcSPMMProductParamField
{
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///²úÆ·´úÂë
	TThostFtdcSPMMProductIDType	ProductID;
	///ÉÌÆ·×é´úÂë
	TThostFtdcSPMMProductIDType	CommodityID;
	///ÉÌÆ·Èº´úÂë
	TThostFtdcSPMMProductIDType	CommodityGroupID;
};

///Ï¯Î»Óë½»Ò×ÖÐÐÄ¶ÔÓ¦¹ØÏµÎ¬»¤²éÑ¯
struct CThostFtdcQryTraderAssignField
{
	///½»Ò×Ô±´úÂë
	TThostFtdcTraderIDType	TraderID;
};

///Ï¯Î»Óë½»Ò×ÖÐÐÄ¶ÔÓ¦¹ØÏµ
struct CThostFtdcTraderAssignField
{
	///Ó¦ÓÃµ¥Ôª´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///½»Ò×Ëù½»Ò×Ô±´úÂë
	TThostFtdcTraderIDType	TraderID;
	///»áÔ±´úÂë
	TThostFtdcParticipantIDType	ParticipantID;
	///½»Ò×ÖÐÐÄ´úÂë
	TThostFtdcDRIdentityIDType	DRIdentityID;
};

///Í¶×ÊÕßÉê±¨·Ñ½×ÌÝÊÕÈ¡ÉèÖÃ
struct CThostFtdcInvestorInfoCntSettingField
{
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///Í¶×ÊÕß´úÂë
	TThostFtdcInvestorIDType	InvestorID;
	///ÉÌÆ·´úÂë
	TThostFtdcProductIDType	ProductID;
	///ÊÇ·ñÊÕÈ¡Éê±¨·Ñ
	TThostFtdcBoolType	IsCalInfoComm;
	///ÊÇ·ñÏÞÖÆÐÅÏ¢Á¿
	TThostFtdcBoolType	IsLimitInfoMax;
	///ÐÅÏ¢Á¿ÏÞÖÆ±ÊÊý
	TThostFtdcVolumeType	InfoMaxLimit;
};

///RCAMS²úÆ·×éºÏÐÅÏ¢
struct CThostFtdcRCAMSCombProductInfoField
{
	///½»Ò×ÈÕ
	TThostFtdcDateType	TradingDay;
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///²úÆ·´úÂë
	TThostFtdcProductIDType	ProductID;
	///ÉÌÆ·×é´úÂë
	TThostFtdcProductIDType	CombProductID;
	///ÉÌÆ·Èº´úÂë
	TThostFtdcProductIDType	ProductGroupID;
};

///RCAMSÍ¬ºÏÔ¼·çÏÕ¶Ô³å²ÎÊý
struct CThostFtdcRCAMSInstrParameterField
{
	///½»Ò×ÈÕ
	TThostFtdcDateType	TradingDay;
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///²úÆ·´úÂë
	TThostFtdcProductIDType	ProductID;
	///Í¬ºÏÔ¼·çÏÕ¶Ô³å±ÈÂÊ
	TThostFtdcHedgeRateType	HedgeRate;
};

///RCAMSÆ·ÖÖÄÚ·çÏÕ¶Ô³å²ÎÊý
struct CThostFtdcRCAMSIntraParameterField
{
	///½»Ò×ÈÕ
	TThostFtdcDateType	TradingDay;
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///²úÆ·×éºÏ´úÂë
	TThostFtdcProductIDType	CombProductID;
	///Æ·ÖÖÄÚ¶Ô³å±ÈÂÊ
	TThostFtdcHedgeRateType	HedgeRate;
};

///RCAMS¿çÆ·ÖÖ·çÏÕÕÛµÖ²ÎÊý
struct CThostFtdcRCAMSInterParameterField
{
	///½»Ò×ÈÕ
	TThostFtdcDateType	TradingDay;
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///ÉÌÆ·Èº´úÂë
	TThostFtdcProductIDType	ProductGroupID;
	///ÓÅÏÈ¼¶
	TThostFtdcRCAMSPriorityType	Priority;
	///ÕÛµÖÂÊ
	TThostFtdcHedgeRateType	CreditRate;
	///²úÆ·×éºÏ´úÂë1
	TThostFtdcProductIDType	CombProduct1;
	///²úÆ·×éºÏ´úÂë2
	TThostFtdcProductIDType	CombProduct2;
};

///RCAMS¿ÕÍ·ÆÚÈ¨·çÏÕµ÷Õû²ÎÊý
struct CThostFtdcRCAMSShortOptAdjustParamField
{
	///½»Ò×ÈÕ
	TThostFtdcDateType	TradingDay;
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///²úÆ·×éºÏ´úÂë
	TThostFtdcProductIDType	CombProductID;
	///Í¶Ì×±êÖ¾
	TThostFtdcHedgeFlagType	HedgeFlag;
	///¿ÕÍ·ÆÚÈ¨·çÏÕµ÷Õû±ê×¼
	TThostFtdcAdjustValueType	AdjustValue;
};

///RCAMS²ßÂÔ×éºÏ³Ö²Ö
struct CThostFtdcRCAMSInvestorCombPositionField
{
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///Í¶×ÊÕß´úÂë
	TThostFtdcInvestorIDType	InvestorID;
	///ºÏÔ¼´úÂë
	TThostFtdcInstrumentIDType	InstrumentID;
	///Í¶Ì×±êÖ¾
	TThostFtdcHedgeFlagType	HedgeFlag;
	///³Ö²Ö¶à¿Õ·½Ïò
	TThostFtdcPosiDirectionType	PosiDirection;
	///×éºÏºÏÔ¼´úÂë
	TThostFtdcInstrumentIDType	CombInstrumentID;
	///µ¥ÍÈ±àºÅ
	TThostFtdcLegIDType	LegID;
	///½»Ò×Ëù×éºÏºÏÔ¼´úÂë
	TThostFtdcExchangeInstIDType	ExchangeInstID;
	///³Ö²ÖÁ¿
	TThostFtdcVolumeType	TotalAmt;
	///½»Ò×Ëù±£Ö¤½ð
	TThostFtdcMoneyType	ExchMargin;
	///Í¶×ÊÕß±£Ö¤½ð
	TThostFtdcMoneyType	Margin;
};

///Í¶×ÊÕßÆ·ÖÖRCAMS±£Ö¤½ð
struct CThostFtdcInvestorProdRCAMSMarginField
{
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///Í¶×ÊÕß´úÂë
	TThostFtdcInvestorIDType	InvestorID;
	///²úÆ·×éºÏ´úÂë
	TThostFtdcProductIDType	CombProductID;
	///Í¶Ì×±êÖ¾
	TThostFtdcHedgeFlagType	HedgeFlag;
	///ÉÌÆ·Èº´úÂë
	TThostFtdcProductIDType	ProductGroupID;
	///Æ·ÖÖ×éºÏÇ°·çÏÕ
	TThostFtdcMoneyType	RiskBeforeDiscount;
	///Í¬ºÏÔ¼¶Ô³å·çÏÕ
	TThostFtdcMoneyType	IntraInstrRisk;
	///Æ·ÖÖÂò³Ö²Ö·çÏÕ
	TThostFtdcMoneyType	BPosRisk;
	///Æ·ÖÖÂô³Ö²Ö·çÏÕ
	TThostFtdcMoneyType	SPosRisk;
	///Æ·ÖÖÄÚ¶Ô³å·çÏÕ
	TThostFtdcMoneyType	IntraProdRisk;
	///Æ·ÖÖ¾»³Ö²Ö·çÏÕ
	TThostFtdcMoneyType	NetRisk;
	///Æ·ÖÖ¼ä¶Ô³å·çÏÕ
	TThostFtdcMoneyType	InterProdRisk;
	///¿ÕÍ·ÆÚÈ¨·çÏÕµ÷Õû
	TThostFtdcMoneyType	ShortOptRiskAdj;
	///¿ÕÍ·ÆÚÈ¨È¨Àû½ð
	TThostFtdcMoneyType	OptionRoyalty;
	///´ó±ß×éºÏÆ½²Ö¶³½á±£Ö¤½ð
	TThostFtdcMoneyType	MMSACloseFrozenMargin;
	///²ßÂÔ×éºÏÆ½²Ö/ÐÐÈ¨¶³½á±£Ö¤½ð
	TThostFtdcMoneyType	CloseCombFrozenMargin;
	///Æ½²Ö/ÐÐÈ¨¶³½á±£Ö¤½ð
	TThostFtdcMoneyType	CloseFrozenMargin;
	///´ó±ß×éºÏ¿ª²Ö¶³½á±£Ö¤½ð
	TThostFtdcMoneyType	MMSAOpenFrozenMargin;
	///½»¸îÔÂÆÚ»õ¿ª²Ö¶³½á±£Ö¤½ð
	TThostFtdcMoneyType	DeliveryOpenFrozenMargin;
	///¿ª²Ö¶³½á±£Ö¤½ð
	TThostFtdcMoneyType	OpenFrozenMargin;
	///Í¶×ÊÕß¶³½á±£Ö¤½ð
	TThostFtdcMoneyType	UseFrozenMargin;
	///´ó±ß×éºÏ½»Ò×Ëù³Ö²Ö±£Ö¤½ð
	TThostFtdcMoneyType	MMSAExchMargin;
	///½»¸îÔÂÆÚ»õ½»Ò×Ëù³Ö²Ö±£Ö¤½ð
	TThostFtdcMoneyType	DeliveryExchMargin;
	///²ßÂÔ×éºÏ½»Ò×Ëù±£Ö¤½ð
	TThostFtdcMoneyType	CombExchMargin;
	///½»Ò×Ëù³Ö²Ö±£Ö¤½ð
	TThostFtdcMoneyType	ExchMargin;
	///Í¶×ÊÕß³Ö²Ö±£Ö¤½ð
	TThostFtdcMoneyType	UseMargin;
};

///RCAMS²úÆ·×éºÏÐÅÏ¢²éÑ¯
struct CThostFtdcQryRCAMSCombProductInfoField
{
	///²úÆ·´úÂë
	TThostFtdcProductIDType	ProductID;
	///ÉÌÆ·×é´úÂë
	TThostFtdcProductIDType	CombProductID;
	///ÉÌÆ·Èº´úÂë
	TThostFtdcProductIDType	ProductGroupID;
};

///RCAMSÍ¬ºÏÔ¼·çÏÕ¶Ô³å²ÎÊý²éÑ¯
struct CThostFtdcQryRCAMSInstrParameterField
{
	///²úÆ·´úÂë
	TThostFtdcProductIDType	ProductID;
};

///RCAMSÆ·ÖÖÄÚ·çÏÕ¶Ô³å²ÎÊý²éÑ¯
struct CThostFtdcQryRCAMSIntraParameterField
{
	///²úÆ·×éºÏ´úÂë
	TThostFtdcProductIDType	CombProductID;
};

///RCAMS¿çÆ·ÖÖ·çÏÕÕÛµÖ²ÎÊý²éÑ¯
struct CThostFtdcQryRCAMSInterParameterField
{
	///ÉÌÆ·Èº´úÂë
	TThostFtdcProductIDType	ProductGroupID;
	///²úÆ·×éºÏ´úÂë1
	TThostFtdcProductIDType	CombProduct1;
	///²úÆ·×éºÏ´úÂë2
	TThostFtdcProductIDType	CombProduct2;
};

///RCAMS¿ÕÍ·ÆÚÈ¨·çÏÕµ÷Õû²ÎÊý²éÑ¯
struct CThostFtdcQryRCAMSShortOptAdjustParamField
{
	///²úÆ·×éºÏ´úÂë
	TThostFtdcProductIDType	CombProductID;
};

///RCAMS²ßÂÔ×éºÏ³Ö²Ö²éÑ¯
struct CThostFtdcQryRCAMSInvestorCombPositionField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///Í¶×ÊÕß´úÂë
	TThostFtdcInvestorIDType	InvestorID;
	///ºÏÔ¼´úÂë
	TThostFtdcInstrumentIDType	InstrumentID;
	///×éºÏºÏÔ¼´úÂë
	TThostFtdcInstrumentIDType	CombInstrumentID;
};

///Í¶×ÊÕßÆ·ÖÖRCAMS±£Ö¤½ð²éÑ¯
struct CThostFtdcQryInvestorProdRCAMSMarginField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///Í¶×ÊÕß´úÂë
	TThostFtdcInvestorIDType	InvestorID;
	///²úÆ·×éºÏ´úÂë
	TThostFtdcProductIDType	CombProductID;
	///ÉÌÆ·Èº´úÂë
	TThostFtdcProductIDType	ProductGroupID;
};

///RULEºÏÔ¼±£Ö¤½ð²ÎÊý
struct CThostFtdcRULEInstrParameterField
{
	///½»Ò×ÈÕ
	TThostFtdcDateType	TradingDay;
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///ºÏÔ¼´úÂë
	TThostFtdcInstrumentIDType	InstrumentID;
	///ºÏÔ¼ÀàÐÍ
	TThostFtdcInstrumentClassType	InstrumentClass;
	///±ê×¼ºÏÔ¼
	TThostFtdcInstrumentIDType	StdInstrumentID;
	///Í¶»úÂòÕÛËãÏµÊý
	TThostFtdcRatioType	BSpecRatio;
	///Í¶»úÂôÕÛËãÏµÊý
	TThostFtdcRatioType	SSpecRatio;
	///Ì×±£ÂòÕÛËãÏµÊý
	TThostFtdcRatioType	BHedgeRatio;
	///Ì×±£ÂôÕÛËãÏµÊý
	TThostFtdcRatioType	SHedgeRatio;
	///Âò¸½¼Ó·çÏÕ±£Ö¤½ð
	TThostFtdcMoneyType	BAddOnMargin;
	///Âô¸½¼Ó·çÏÕ±£Ö¤½ð
	TThostFtdcMoneyType	SAddOnMargin;
	///ÉÌÆ·ÈººÅ
	TThostFtdcCommodityGroupIDType	CommodityGroupID;
};

///RULEÆ·ÖÖÄÚ¶ÔËø²ÖÕÛ¿Û²ÎÊý
struct CThostFtdcRULEIntraParameterField
{
	///½»Ò×ÈÕ
	TThostFtdcDateType	TradingDay;
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///Æ·ÖÖ´úÂë
	TThostFtdcInstrumentIDType	ProdFamilyCode;
	///±ê×¼ºÏÔ¼
	TThostFtdcInstrumentIDType	StdInstrumentID;
	///±ê×¼ºÏÔ¼±£Ö¤½ð
	TThostFtdcMoneyType	StdInstrMargin;
	///Ò»°ãÔÂ·ÝºÏÔ¼×éºÏ±£Ö¤½ðÏµÊý
	TThostFtdcRatioType	UsualIntraRate;
	///ÁÙ½ü½»¸îºÏÔ¼×éºÏ±£Ö¤½ðÏµÊý
	TThostFtdcRatioType	DeliveryIntraRate;
};

///RULE¿çÆ·ÖÖµÖ¿Û²ÎÊý
struct CThostFtdcRULEInterParameterField
{
	///½»Ò×ÈÕ
	TThostFtdcDateType	TradingDay;
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///ÓÅÏÈ¼¶
	TThostFtdcSpreadIdType	SpreadId;
	///Æ·ÖÖ¼ä¶ÔËø²Ö·ÑÂÊÕÛ¿Û±ÈÀý
	TThostFtdcRatioType	InterRate;
	///µÚÒ»ÍÈ¹¹³ÉÆ·ÖÖ
	TThostFtdcInstrumentIDType	Leg1ProdFamilyCode;
	///µÚ¶þÍÈ¹¹³ÉÆ·ÖÖ
	TThostFtdcInstrumentIDType	Leg2ProdFamilyCode;
	///ÍÈ1±ÈÀýÏµÊý
	TThostFtdcCommonIntType	Leg1PropFactor;
	///ÍÈ2±ÈÀýÏµÊý
	TThostFtdcCommonIntType	Leg2PropFactor;
	///ÉÌÆ·ÈººÅ
	TThostFtdcCommodityGroupIDType	CommodityGroupID;
	///ÉÌÆ·ÈºÃû³Æ
	TThostFtdcInstrumentNameType	CommodityGroupName;
};

///RULEºÏÔ¼±£Ö¤½ð²ÎÊý²éÑ¯
struct CThostFtdcQryRULEInstrParameterField
{
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///ºÏÔ¼´úÂë
	TThostFtdcInstrumentIDType	InstrumentID;
};

///RULEÆ·ÖÖÄÚ¶ÔËø²ÖÕÛ¿Û²ÎÊý²éÑ¯
struct CThostFtdcQryRULEIntraParameterField
{
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///Æ·ÖÖ´úÂë
	TThostFtdcInstrumentIDType	ProdFamilyCode;
};

///RULE¿çÆ·ÖÖµÖ¿Û²ÎÊý²éÑ¯
struct CThostFtdcQryRULEInterParameterField
{
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///µÚÒ»ÍÈ¹¹³ÉÆ·ÖÖ
	TThostFtdcInstrumentIDType	Leg1ProdFamilyCode;
	///µÚ¶þÍÈ¹¹³ÉÆ·ÖÖ
	TThostFtdcInstrumentIDType	Leg2ProdFamilyCode;
	///ÉÌÆ·ÈººÅ
	TThostFtdcCommodityGroupIDType	CommodityGroupID;
};

///Í¶×ÊÕß²úÆ·RULE±£Ö¤½ð
struct CThostFtdcInvestorProdRULEMarginField
{
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///Í¶×ÊÕß´úÂë
	TThostFtdcInvestorIDType	InvestorID;
	///Æ·ÖÖ´úÂë
	TThostFtdcInstrumentIDType	ProdFamilyCode;
	///ºÏÔ¼ÀàÐÍ
	TThostFtdcInstrumentClassType	InstrumentClass;
	///ÉÌÆ·ÈººÅ
	TThostFtdcCommodityGroupIDType	CommodityGroupID;
	///Âò±ê×¼³Ö²Ö
	TThostFtdcStdPositionType	BStdPosition;
	///Âô±ê×¼³Ö²Ö
	TThostFtdcStdPositionType	SStdPosition;
	///Âò±ê×¼¿ª²Ö¶³½á
	TThostFtdcStdPositionType	BStdOpenFrozen;
	///Âô±ê×¼¿ª²Ö¶³½á
	TThostFtdcStdPositionType	SStdOpenFrozen;
	///Âò±ê×¼Æ½²Ö¶³½á
	TThostFtdcStdPositionType	BStdCloseFrozen;
	///Âô±ê×¼Æ½²Ö¶³½á
	TThostFtdcStdPositionType	SStdCloseFrozen;
	///Æ·ÖÖÄÚ¶Ô³å±ê×¼³Ö²Ö
	TThostFtdcStdPositionType	IntraProdStdPosition;
	///Æ·ÖÖÄÚµ¥ÍÈ±ê×¼³Ö²Ö
	TThostFtdcStdPositionType	NetStdPosition;
	///Æ·ÖÖ¼ä¶Ô³å±ê×¼³Ö²Ö
	TThostFtdcStdPositionType	InterProdStdPosition;
	///µ¥ÍÈ±ê×¼³Ö²Ö
	TThostFtdcStdPositionType	SingleStdPosition;
	///Æ·ÖÖÄÚ¶ÔËø±£Ö¤½ð
	TThostFtdcMoneyType	IntraProdMargin;
	///Æ·ÖÖ¼ä¶ÔËø±£Ö¤½ð
	TThostFtdcMoneyType	InterProdMargin;
	///¿çÆ·ÖÖµ¥ÍÈ±£Ö¤½ð
	TThostFtdcMoneyType	SingleMargin;
	///·Ç×éºÏºÏÔ¼±£Ö¤½ð
	TThostFtdcMoneyType	NonCombMargin;
	///¸½¼Ó±£Ö¤½ð
	TThostFtdcMoneyType	AddOnMargin;
	///½»Ò×Ëù±£Ö¤½ð
	TThostFtdcMoneyType	ExchMargin;
	///¸½¼Ó¶³½á±£Ö¤½ð
	TThostFtdcMoneyType	AddOnFrozenMargin;
	///¿ª²Ö¶³½á±£Ö¤½ð
	TThostFtdcMoneyType	OpenFrozenMargin;
	///Æ½²Ö¶³½á±£Ö¤½ð
	TThostFtdcMoneyType	CloseFrozenMargin;
	///Æ·ÖÖ±£Ö¤½ð
	TThostFtdcMoneyType	Margin;
	///¶³½á±£Ö¤½ð
	TThostFtdcMoneyType	FrozenMargin;
};

///Í¶×ÊÕß²úÆ·RULE±£Ö¤½ð²éÑ¯
struct CThostFtdcQryInvestorProdRULEMarginField
{
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///Í¶×ÊÕß´úÂë
	TThostFtdcInvestorIDType	InvestorID;
	///Æ·ÖÖ´úÂë
	TThostFtdcInstrumentIDType	ProdFamilyCode;
	///ÉÌÆ·ÈººÅ
	TThostFtdcCommodityGroupIDType	CommodityGroupID;
};

///·çÏÕ½áËã×·Æ½SPBM×éºÏ±£Ö¤½ðÌ×²Í
struct CThostFtdcSyncDeltaSPBMPortfDefinitionField
{
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///×éºÏ±£Ö¤½ðÌ×²Í´úÂë
	TThostFtdcPortfolioDefIDType	PortfolioDefID;
	///Æ·ÖÖ´úÂë
	TThostFtdcInstrumentIDType	ProdFamilyCode;
	///ÊÇ·ñÆôÓÃSPBM
	TThostFtdcBoolType	IsSPBM;
	///²Ù×÷±êÖ¾
	TThostFtdcActionDirectionType	ActionDirection;
	///×·Æ½ÐòºÅ
	TThostFtdcSequenceNoType	SyncDeltaSequenceNo;
};

///·çÏÕ½áËã×·Æ½Í¶×ÊÕßSPBMÌ×²ÍÑ¡Ôñ
struct CThostFtdcSyncDeltaSPBMInvstPortfDefField
{
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///Í¶×ÊÕß´úÂë
	TThostFtdcInvestorIDType	InvestorID;
	///×éºÏ±£Ö¤½ðÌ×²Í´úÂë
	TThostFtdcPortfolioDefIDType	PortfolioDefID;
	///²Ù×÷±êÖ¾
	TThostFtdcActionDirectionType	ActionDirection;
	///×·Æ½ÐòºÅ
	TThostFtdcSequenceNoType	SyncDeltaSequenceNo;
};

///·çÏÕ½áËã×·Æ½SPBMÆÚ»õºÏÔ¼±£Ö¤½ð²ÎÊý
struct CThostFtdcSyncDeltaSPBMFutureParameterField
{
	///½»Ò×ÈÕ
	TThostFtdcDateType	TradingDay;
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///ºÏÔ¼´úÂë
	TThostFtdcInstrumentIDType	InstrumentID;
	///Æ·ÖÖ´úÂë
	TThostFtdcInstrumentIDType	ProdFamilyCode;
	///ÆÚ»õºÏÔ¼Òò×Ó
	TThostFtdcVolumeMultipleType	Cvf;
	///½×¶Î±êÊ¶
	TThostFtdcTimeRangeType	TimeRange;
	///Æ·ÖÖ±£Ö¤½ð±ê×¼
	TThostFtdcRatioType	MarginRate;
	///ÆÚ»õºÏÔ¼ÄÚ²¿¶ÔËø²Ö·ÑÂÊÕÛ¿Û±ÈÀý
	TThostFtdcRatioType	LockRateX;
	///Ìá¸ß±£Ö¤½ð±ê×¼
	TThostFtdcRatioType	AddOnRate;
	///×ò½áËã¼Û
	TThostFtdcPriceType	PreSettlementPrice;
	///ÆÚ»õºÏÔ¼ÄÚ²¿¶ÔËø²Ö¸½¼Ó·ÑÂÊÕÛ¿Û±ÈÀý
	TThostFtdcRatioType	AddOnLockRateX2;
	///²Ù×÷±êÖ¾
	TThostFtdcActionDirectionType	ActionDirection;
	///×·Æ½ÐòºÅ
	TThostFtdcSequenceNoType	SyncDeltaSequenceNo;
};

///·çÏÕ½áËã×·Æ½SPBMÆÚÈ¨ºÏÔ¼±£Ö¤½ð²ÎÊý
struct CThostFtdcSyncDeltaSPBMOptionParameterField
{
	///½»Ò×ÈÕ
	TThostFtdcDateType	TradingDay;
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///ºÏÔ¼´úÂë
	TThostFtdcInstrumentIDType	InstrumentID;
	///Æ·ÖÖ´úÂë
	TThostFtdcInstrumentIDType	ProdFamilyCode;
	///ÆÚÈ¨ºÏÔ¼Òò×Ó
	TThostFtdcVolumeMultipleType	Cvf;
	///ÆÚÈ¨³åµÖ¼Û¸ñ
	TThostFtdcPriceType	DownPrice;
	///DeltaÖµ
	TThostFtdcDeltaType	Delta;
	///Âô·½ÆÚÈ¨·çÏÕ×ª»»×îµÍÖµ
	TThostFtdcDeltaType	SlimiDelta;
	///×ò½áËã¼Û
	TThostFtdcPriceType	PreSettlementPrice;
	///²Ù×÷±êÖ¾
	TThostFtdcActionDirectionType	ActionDirection;
	///×·Æ½ÐòºÅ
	TThostFtdcSequenceNoType	SyncDeltaSequenceNo;
};

///·çÏÕ½áËã×·Æ½SPBMÆ·ÖÖÄÚ¶ÔËø²ÖÕÛ¿Û²ÎÊý
struct CThostFtdcSyncDeltaSPBMIntraParameterField
{
	///½»Ò×ÈÕ
	TThostFtdcDateType	TradingDay;
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///Æ·ÖÖ´úÂë
	TThostFtdcInstrumentIDType	ProdFamilyCode;
	///Æ·ÖÖÄÚºÏÔ¼¼ä¶ÔËø²Ö·ÑÂÊÕÛ¿Û±ÈÀý
	TThostFtdcRatioType	IntraRateY;
	///Æ·ÖÖÄÚºÏÔ¼¼ä¶ÔËø²Ö¸½¼Ó·ÑÂÊÕÛ¿Û±ÈÀý
	TThostFtdcRatioType	AddOnIntraRateY2;
	///²Ù×÷±êÖ¾
	TThostFtdcActionDirectionType	ActionDirection;
	///×·Æ½ÐòºÅ
	TThostFtdcSequenceNoType	SyncDeltaSequenceNo;
};

///·çÏÕ½áËã×·Æ½SPBM¿çÆ·ÖÖµÖ¿Û²ÎÊý
struct CThostFtdcSyncDeltaSPBMInterParameterField
{
	///½»Ò×ÈÕ
	TThostFtdcDateType	TradingDay;
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///ÓÅÏÈ¼¶
	TThostFtdcSpreadIdType	SpreadId;
	///Æ·ÖÖ¼ä¶ÔËø²Ö·ÑÂÊÕÛ¿Û±ÈÀý
	TThostFtdcRatioType	InterRateZ;
	///µÚÒ»ÍÈ¹¹³ÉÆ·ÖÖ
	TThostFtdcInstrumentIDType	Leg1ProdFamilyCode;
	///µÚ¶þÍÈ¹¹³ÉÆ·ÖÖ
	TThostFtdcInstrumentIDType	Leg2ProdFamilyCode;
	///²Ù×÷±êÖ¾
	TThostFtdcActionDirectionType	ActionDirection;
	///×·Æ½ÐòºÅ
	TThostFtdcSequenceNoType	SyncDeltaSequenceNo;
};

///·çÏÕ½áËã×·Æ½SPBM¸½¼Ó¿çÆ·ÖÖµÖ¿Û²ÎÊý
struct CThostFtdcSyncDeltaSPBMAddOnInterParamField
{
	///½»Ò×ÈÕ
	TThostFtdcDateType	TradingDay;
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///ÓÅÏÈ¼¶
	TThostFtdcSpreadIdType	SpreadId;
	///Æ·ÖÖ¼ä¶ÔËø²Ö¸½¼Ó·ÑÂÊÕÛ¿Û±ÈÀý
	TThostFtdcRatioType	AddOnInterRateZ2;
	///µÚÒ»ÍÈ¹¹³ÉÆ·ÖÖ
	TThostFtdcInstrumentIDType	Leg1ProdFamilyCode;
	///µÚ¶þÍÈ¹¹³ÉÆ·ÖÖ
	TThostFtdcInstrumentIDType	Leg2ProdFamilyCode;
	///²Ù×÷±êÖ¾
	TThostFtdcActionDirectionType	ActionDirection;
	///×·Æ½ÐòºÅ
	TThostFtdcSequenceNoType	SyncDeltaSequenceNo;
};

///·çÏÕ½áËã×·Æ½SPMMºÏÔ¼²ÎÊý
struct CThostFtdcSyncDeltaSPMMInstParamField
{
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///ºÏÔ¼´úÂë
	TThostFtdcInstrumentIDType	InstrumentID;
	///SPMMºÏÔ¼±£Ö¤½ðËã·¨
	TThostFtdcInstMarginCalIDType	InstMarginCalID;
	///ÉÌÆ·×é´úÂë
	TThostFtdcSPMMProductIDType	CommodityID;
	///ÉÌÆ·Èº´úÂë
	TThostFtdcSPMMProductIDType	CommodityGroupID;
	///²Ù×÷±êÖ¾
	TThostFtdcActionDirectionType	ActionDirection;
	///×·Æ½ÐòºÅ
	TThostFtdcSequenceNoType	SyncDeltaSequenceNo;
};

///·çÏÕ½áËã×·Æ½SPMM²úÆ·Ïà¹Ø²ÎÊý
struct CThostFtdcSyncDeltaSPMMProductParamField
{
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///²úÆ·´úÂë
	TThostFtdcSPMMProductIDType	ProductID;
	///ÉÌÆ·×é´úÂë
	TThostFtdcSPMMProductIDType	CommodityID;
	///ÉÌÆ·Èº´úÂë
	TThostFtdcSPMMProductIDType	CommodityGroupID;
	///²Ù×÷±êÖ¾
	TThostFtdcActionDirectionType	ActionDirection;
	///×·Æ½ÐòºÅ
	TThostFtdcSequenceNoType	SyncDeltaSequenceNo;
};

///·çÏÕ½áËã×·Æ½Í¶×ÊÕßSPMMÄ£°åÑ¡Ôñ
struct CThostFtdcSyncDeltaInvestorSPMMModelField
{
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///Í¶×ÊÕß´úÂë
	TThostFtdcInvestorIDType	InvestorID;
	///SPMMÄ£°åID
	TThostFtdcSPMMModelIDType	SPMMModelID;
	///²Ù×÷±êÖ¾
	TThostFtdcActionDirectionType	ActionDirection;
	///×·Æ½ÐòºÅ
	TThostFtdcSequenceNoType	SyncDeltaSequenceNo;
};

///·çÏÕ½áËã×·Æ½SPMMÄ£°å²ÎÊýÉèÖÃ
struct CThostFtdcSyncDeltaSPMMModelParamField
{
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///SPMMÄ£°åID
	TThostFtdcSPMMModelIDType	SPMMModelID;
	///ÉÌÆ·Èº´úÂë
	TThostFtdcSPMMProductIDType	CommodityGroupID;
	///SPMMÆ·ÖÖÄÚ¿çÆÚÓÅ»ÝÏµÊý
	TThostFtdcSPMMDiscountRatioType	IntraCommodityRate;
	///SPMMÆ·ÖÖ¼äÓÅ»ÝÏµÊý
	TThostFtdcSPMMDiscountRatioType	InterCommodityRate;
	///SPMMÆÚÈ¨ÓÅ»ÝÏµÊý
	TThostFtdcSPMMDiscountRatioType	OptionDiscountRate;
	///ÉÌÆ·Èº×îÐ¡±£Ö¤½ð±ÈÀý
	TThostFtdcSPMMDiscountRatioType	MiniMarginRatio;
	///²Ù×÷±êÖ¾
	TThostFtdcActionDirectionType	ActionDirection;
	///×·Æ½ÐòºÅ
	TThostFtdcSequenceNoType	SyncDeltaSequenceNo;
};

///·çÏÕ½áËã×·Æ½RCAMS²úÆ·×éºÏÐÅÏ¢
struct CThostFtdcSyncDeltaRCAMSCombProdInfoField
{
	///½»Ò×ÈÕ
	TThostFtdcDateType	TradingDay;
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///²úÆ·´úÂë
	TThostFtdcProductIDType	ProductID;
	///ÉÌÆ·×é´úÂë
	TThostFtdcProductIDType	CombProductID;
	///ÉÌÆ·Èº´úÂë
	TThostFtdcProductIDType	ProductGroupID;
	///²Ù×÷±êÖ¾
	TThostFtdcActionDirectionType	ActionDirection;
	///×·Æ½ÐòºÅ
	TThostFtdcSequenceNoType	SyncDeltaSequenceNo;
};

///·çÏÕ½áËã×·Æ½RCAMSÍ¬ºÏÔ¼·çÏÕ¶Ô³å²ÎÊý
struct CThostFtdcSyncDeltaRCAMSInstrParameterField
{
	///½»Ò×ÈÕ
	TThostFtdcDateType	TradingDay;
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///²úÆ·´úÂë
	TThostFtdcProductIDType	ProductID;
	///Í¬ºÏÔ¼·çÏÕ¶Ô³å±ÈÂÊ
	TThostFtdcHedgeRateType	HedgeRate;
	///²Ù×÷±êÖ¾
	TThostFtdcActionDirectionType	ActionDirection;
	///×·Æ½ÐòºÅ
	TThostFtdcSequenceNoType	SyncDeltaSequenceNo;
};

///·çÏÕ½áËã×·Æ½RCAMSÆ·ÖÖÄÚ·çÏÕ¶Ô³å²ÎÊý
struct CThostFtdcSyncDeltaRCAMSIntraParameterField
{
	///½»Ò×ÈÕ
	TThostFtdcDateType	TradingDay;
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///²úÆ·×éºÏ´úÂë
	TThostFtdcProductIDType	CombProductID;
	///Æ·ÖÖÄÚ¶Ô³å±ÈÂÊ
	TThostFtdcHedgeRateType	HedgeRate;
	///²Ù×÷±êÖ¾
	TThostFtdcActionDirectionType	ActionDirection;
	///×·Æ½ÐòºÅ
	TThostFtdcSequenceNoType	SyncDeltaSequenceNo;
};

///·çÏÕ½áËã×·Æ½RCAMS¿çÆ·ÖÖ·çÏÕÕÛµÖ²ÎÊý
struct CThostFtdcSyncDeltaRCAMSInterParameterField
{
	///½»Ò×ÈÕ
	TThostFtdcDateType	TradingDay;
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///ÉÌÆ·Èº´úÂë
	TThostFtdcProductIDType	ProductGroupID;
	///ÓÅÏÈ¼¶
	TThostFtdcRCAMSPriorityType	Priority;
	///ÕÛµÖÂÊ
	TThostFtdcHedgeRateType	CreditRate;
	///²úÆ·×éºÏ´úÂë1
	TThostFtdcProductIDType	CombProduct1;
	///²úÆ·×éºÏ´úÂë2
	TThostFtdcProductIDType	CombProduct2;
	///²Ù×÷±êÖ¾
	TThostFtdcActionDirectionType	ActionDirection;
	///×·Æ½ÐòºÅ
	TThostFtdcSequenceNoType	SyncDeltaSequenceNo;
};

///·çÏÕ½áËã×·Æ½RCAMS¿ÕÍ·ÆÚÈ¨·çÏÕµ÷Õû²ÎÊý
struct CThostFtdcSyncDeltaRCAMSSOptAdjParamField
{
	///½»Ò×ÈÕ
	TThostFtdcDateType	TradingDay;
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///²úÆ·×éºÏ´úÂë
	TThostFtdcProductIDType	CombProductID;
	///Í¶Ì×±êÖ¾
	TThostFtdcHedgeFlagType	HedgeFlag;
	///¿ÕÍ·ÆÚÈ¨·çÏÕµ÷Õû±ê×¼
	TThostFtdcAdjustValueType	AdjustValue;
	///²Ù×÷±êÖ¾
	TThostFtdcActionDirectionType	ActionDirection;
	///×·Æ½ÐòºÅ
	TThostFtdcSequenceNoType	SyncDeltaSequenceNo;
};

///·çÏÕ½áËã×·Æ½RCAMS²ßÂÔ×éºÏ¹æÔòÃ÷Ï¸
struct CThostFtdcSyncDeltaRCAMSCombRuleDtlField
{
	///½»Ò×ÈÕ
	TThostFtdcDateType	TradingDay;
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///²ßÂÔ²úÆ·
	TThostFtdcProductIDType	ProdGroup;
	///²ßÂÔid
	TThostFtdcRuleIdType	RuleId;
	///ÓÅÏÈ¼¶
	TThostFtdcRCAMSPriorityType	Priority;
	///Í¶Ì×±êÖ¾
	TThostFtdcHedgeFlagType	HedgeFlag;
	///×éºÏ±£Ö¤½ð±ê×¼
	TThostFtdcMoneyType	CombMargin;
	///½»Ò×Ëù×éºÏºÏÔ¼´úÂë
	TThostFtdcExchangeInstIDType	ExchangeInstID;
	///µ¥ÍÈ±àºÅ
	TThostFtdcLegIDType	LegID;
	///µ¥ÍÈºÏÔ¼´úÂë
	TThostFtdcInstrumentIDType	LegInstrumentID;
	///ÂòÂô·½Ïò
	TThostFtdcDirectionType	Direction;
	///µ¥ÍÈ³ËÊý
	TThostFtdcLegMultipleType	LegMultiple;
	///²Ù×÷±êÖ¾
	TThostFtdcActionDirectionType	ActionDirection;
	///×·Æ½ÐòºÅ
	TThostFtdcSequenceNoType	SyncDeltaSequenceNo;
};

///·çÏÕ½áËã×·Æ½RCAMS²ßÂÔ×éºÏ³Ö²Ö
struct CThostFtdcSyncDeltaRCAMSInvstCombPosField
{
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///Í¶×ÊÕß´úÂë
	TThostFtdcInvestorIDType	InvestorID;
	///ºÏÔ¼´úÂë
	TThostFtdcInstrumentIDType	InstrumentID;
	///Í¶Ì×±êÖ¾
	TThostFtdcHedgeFlagType	HedgeFlag;
	///³Ö²Ö¶à¿Õ·½Ïò
	TThostFtdcPosiDirectionType	PosiDirection;
	///×éºÏºÏÔ¼´úÂë
	TThostFtdcInstrumentIDType	CombInstrumentID;
	///µ¥ÍÈ±àºÅ
	TThostFtdcLegIDType	LegID;
	///½»Ò×Ëù×éºÏºÏÔ¼´úÂë
	TThostFtdcExchangeInstIDType	ExchangeInstID;
	///³Ö²ÖÁ¿
	TThostFtdcVolumeType	TotalAmt;
	///½»Ò×Ëù±£Ö¤½ð
	TThostFtdcMoneyType	ExchMargin;
	///Í¶×ÊÕß±£Ö¤½ð
	TThostFtdcMoneyType	Margin;
	///²Ù×÷±êÖ¾
	TThostFtdcActionDirectionType	ActionDirection;
	///×·Æ½ÐòºÅ
	TThostFtdcSequenceNoType	SyncDeltaSequenceNo;
};

///·çÏÕ½áËã×·Æ½RULEºÏÔ¼±£Ö¤½ð²ÎÊý
struct CThostFtdcSyncDeltaRULEInstrParameterField
{
	///½»Ò×ÈÕ
	TThostFtdcDateType	TradingDay;
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///ºÏÔ¼´úÂë
	TThostFtdcInstrumentIDType	InstrumentID;
	///ºÏÔ¼ÀàÐÍ
	TThostFtdcInstrumentClassType	InstrumentClass;
	///±ê×¼ºÏÔ¼
	TThostFtdcInstrumentIDType	StdInstrumentID;
	///Í¶»úÂòÕÛËãÏµÊý
	TThostFtdcRatioType	BSpecRatio;
	///Í¶»úÂôÕÛËãÏµÊý
	TThostFtdcRatioType	SSpecRatio;
	///Ì×±£ÂòÕÛËãÏµÊý
	TThostFtdcRatioType	BHedgeRatio;
	///Ì×±£ÂôÕÛËãÏµÊý
	TThostFtdcRatioType	SHedgeRatio;
	///Âò¸½¼Ó·çÏÕ±£Ö¤½ð
	TThostFtdcMoneyType	BAddOnMargin;
	///Âô¸½¼Ó·çÏÕ±£Ö¤½ð
	TThostFtdcMoneyType	SAddOnMargin;
	///ÉÌÆ·ÈººÅ
	TThostFtdcCommodityGroupIDType	CommodityGroupID;
	///²Ù×÷±êÖ¾
	TThostFtdcActionDirectionType	ActionDirection;
	///×·Æ½ÐòºÅ
	TThostFtdcSequenceNoType	SyncDeltaSequenceNo;
};

///·çÏÕ½áËã×·Æ½RULEÆ·ÖÖÄÚ¶ÔËø²ÖÕÛ¿Û²ÎÊý
struct CThostFtdcSyncDeltaRULEIntraParameterField
{
	///½»Ò×ÈÕ
	TThostFtdcDateType	TradingDay;
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///Æ·ÖÖ´úÂë
	TThostFtdcInstrumentIDType	ProdFamilyCode;
	///±ê×¼ºÏÔ¼
	TThostFtdcInstrumentIDType	StdInstrumentID;
	///±ê×¼ºÏÔ¼±£Ö¤½ð
	TThostFtdcMoneyType	StdInstrMargin;
	///Ò»°ãÔÂ·ÝºÏÔ¼×éºÏ±£Ö¤½ðÏµÊý
	TThostFtdcRatioType	UsualIntraRate;
	///ÁÙ½ü½»¸îºÏÔ¼×éºÏ±£Ö¤½ðÏµÊý
	TThostFtdcRatioType	DeliveryIntraRate;
	///²Ù×÷±êÖ¾
	TThostFtdcActionDirectionType	ActionDirection;
	///×·Æ½ÐòºÅ
	TThostFtdcSequenceNoType	SyncDeltaSequenceNo;
};

///·çÏÕ½áËã×·Æ½RULE¿çÆ·ÖÖµÖ¿Û²ÎÊý
struct CThostFtdcSyncDeltaRULEInterParameterField
{
	///½»Ò×ÈÕ
	TThostFtdcDateType	TradingDay;
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///ÓÅÏÈ¼¶
	TThostFtdcSpreadIdType	SpreadId;
	///Æ·ÖÖ¼ä¶ÔËø²Ö·ÑÂÊÕÛ¿Û±ÈÀý
	TThostFtdcRatioType	InterRate;
	///µÚÒ»ÍÈ¹¹³ÉÆ·ÖÖ
	TThostFtdcInstrumentIDType	Leg1ProdFamilyCode;
	///µÚ¶þÍÈ¹¹³ÉÆ·ÖÖ
	TThostFtdcInstrumentIDType	Leg2ProdFamilyCode;
	///ÍÈ1±ÈÀýÏµÊý
	TThostFtdcCommonIntType	Leg1PropFactor;
	///ÍÈ2±ÈÀýÏµÊý
	TThostFtdcCommonIntType	Leg2PropFactor;
	///ÉÌÆ·ÈººÅ
	TThostFtdcCommodityGroupIDType	CommodityGroupID;
	///ÉÌÆ·ÈºÃû³Æ
	TThostFtdcInstrumentNameType	CommodityGroupName;
	///²Ù×÷±êÖ¾
	TThostFtdcActionDirectionType	ActionDirection;
	///×·Æ½ÐòºÅ
	TThostFtdcSequenceNoType	SyncDeltaSequenceNo;
};

///·þÎñµØÖ·²ÎÊý
struct CThostFtdcIpAddrParamField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///·þÎñµØÖ·
	TThostFtdcIpAddrType	Address;
	///½»Ò×ÖÐÐÄ´úÂë
	TThostFtdcDRIdentityIDType	DRIdentityID;
	///½»Ò×ÖÐÐÄÃû³Æ
	TThostFtdcDRIdentityNameType	DRIdentityName;
	///½»Ò×µØÖ·ORÐÐÇéµØÖ·
	TThostFtdcAddrSrvModeType	AddrSrvMode;
	///µØÖ·°æ±¾
	TThostFtdcAddrVerType	AddrVer;
	///·þÎñµØÖ·±àºÅ
	TThostFtdcCommonIntType	AddrNo;
	///·þÎñµØÖ·Ãû³Æ
	TThostFtdcAddrNameType	AddrName;
	///ÊÇ·ñÊÇ¹úÃÜµØÖ·
	TThostFtdcBoolType	IsSM;
	///ÊÇ·ñÊÇÄÚÍøµØÖ·
	TThostFtdcBoolType	IsLocalAddr;
	///µØÖ·²¹³äÐÅÏ¢
	TThostFtdcAddrRemarkType	Remark;
	///Õ¾µã
	TThostFtdcSiteType	Site;
	///ÍøÂçÔËÓªÉÌ
	TThostFtdcNetOperatorType	NetOperator;
};

///·þÎñµØÖ·²ÎÊý²éÑ¯
struct CThostFtdcQryIpAddrParamField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
};

///·þÎñµØÖ·²ÎÊý
struct CThostFtdcTGIpAddrParamField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///ÓÃ»§´úÂë
	TThostFtdcUserIDType	UserID;
	///·þÎñµØÖ·
	TThostFtdcIpAddrType	Address;
	///½»Ò×ÖÐÐÄ´úÂë
	TThostFtdcDRIdentityIDType	DRIdentityID;
	///½»Ò×ÖÐÐÄÃû³Æ
	TThostFtdcDRIdentityNameType	DRIdentityName;
	///½»Ò×µØÖ·ORÐÐÇéµØÖ·
	TThostFtdcAddrSrvModeType	AddrSrvMode;
	///µØÖ·°æ±¾
	TThostFtdcAddrVerType	AddrVer;
	///·þÎñµØÖ·±àºÅ
	TThostFtdcCommonIntType	AddrNo;
	///·þÎñµØÖ·Ãû³Æ
	TThostFtdcAddrNameType	AddrName;
	///ÊÇ·ñÊÇ¹úÃÜµØÖ·
	TThostFtdcBoolType	IsSM;
	///ÊÇ·ñÊÇÄÚÍøµØÖ·
	TThostFtdcBoolType	IsLocalAddr;
	///µØÖ·²¹³äÐÅÏ¢
	TThostFtdcAddrRemarkType	Remark;
	///Õ¾µã
	TThostFtdcSiteType	Site;
	///ÍøÂçÔËÓªÉÌ
	TThostFtdcNetOperatorType	NetOperator;
};

///·þÎñµØÖ·²ÎÊý²éÑ¯
struct CThostFtdcQryTGIpAddrParamField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///ÓÃ»§´úÂë
	TThostFtdcUserIDType	UserID;
	///App´úÂë
	TThostFtdcAppIDType	AppID;
};

///TGate»á»°²éÑ¯×´Ì¬
struct CThostFtdcTGSessionQryStatusField
{
	///×î½ü30sµÄ²éÑ¯ÆµÂÊ
	TThostFtdcCommonIntType	LastQryFreq;
	///²éÑ¯×´Ì¬
	TThostFtdcTGSessionQryStatusType	QryStatus;
};

///ÄÚÍøµØÖ·ÅäÖÃ
struct CThostFtdcLocalAddrConfigField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///¶Ô¶ËµØÖ·
	TThostFtdcIpAddrType	PeerAddr;
	///×ÓÍøÑÚÂë
	TThostFtdcIpAddrType	NetMask;
	///½»Ò×ÖÐÐÄ´úÂë
	TThostFtdcDRIdentityIDType	DRIdentityID;
	///ÄÚÍø·þÎñµØÖ·
	TThostFtdcIpAddrType	LocalAddress;
};

///ÄÚÍøµØÖ·ÅäÖÃ²éÑ¯
struct CThostFtdcQryLocalAddrConfigField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
};

///´ÎÏ¯²éÑ¯ÒøÐÐ×Ê½ðÕÊ»§ÐÅÏ¢ÇëÇó
struct CThostFtdcReqQueryBankAccountBySecField
{
	///ÒµÎñ¹¦ÄÜÂë
	TThostFtdcTradeCodeType	TradeCode;
	///ÒøÐÐ´úÂë
	TThostFtdcBankIDType	BankID;
	///ÒøÐÐ·ÖÖ§»ú¹¹´úÂë
	TThostFtdcBankBrchIDType	BankBranchID;
	///ÆÚÉÌ´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///ÆÚÉÌ·ÖÖ§»ú¹¹´úÂë
	TThostFtdcFutureBranchIDType	BrokerBranchID;
	///½»Ò×ÈÕÆÚ
	TThostFtdcTradeDateType	TradeDate;
	///½»Ò×Ê±¼ä
	TThostFtdcTradeTimeType	TradeTime;
	///ÒøÐÐÁ÷Ë®ºÅ
	TThostFtdcBankSerialType	BankSerial;
	///½»Ò×ÏµÍ³ÈÕÆÚ 
	TThostFtdcTradeDateType	TradingDay;
	///ÒøÆÚÆ½Ì¨ÏûÏ¢Á÷Ë®ºÅ
	TThostFtdcSerialType	PlateSerial;
	///×îºó·ÖÆ¬±êÖ¾
	TThostFtdcLastFragmentType	LastFragment;
	///»á»°ºÅ
	TThostFtdcSessionIDType	SessionID;
	///¿Í»§ÐÕÃû
	TThostFtdcIndividualNameType	CustomerName;
	///Ö¤¼þÀàÐÍ
	TThostFtdcIdCardTypeType	IdCardType;
	///Ö¤¼þºÅÂë
	TThostFtdcIdentifiedCardNoType	IdentifiedCardNo;
	///¿Í»§ÀàÐÍ
	TThostFtdcCustTypeType	CustType;
	///ÒøÐÐÕÊºÅ
	TThostFtdcBankAccountType	BankAccount;
	///ÒøÐÐÃÜÂë
	TThostFtdcPasswordType	BankPassWord;
	///Í¶×ÊÕßÕÊºÅ
	TThostFtdcAccountIDType	AccountID;
	///ÆÚ»õÃÜÂë
	TThostFtdcPasswordType	Password;
	///ÆÚ»õ¹«Ë¾Á÷Ë®ºÅ
	TThostFtdcFutureSerialType	FutureSerial;
	///°²×°±àºÅ
	TThostFtdcInstallIDType	InstallID;
	///ÓÃ»§±êÊ¶
	TThostFtdcUserIDType	UserID;
	///ÑéÖ¤¿Í»§Ö¤¼þºÅÂë±êÖ¾
	TThostFtdcYesNoIndicatorType	VerifyCertNoFlag;
	///±ÒÖÖ´úÂë
	TThostFtdcCurrencyIDType	CurrencyID;
	///ÕªÒª
	TThostFtdcDigestType	Digest;
	///ÒøÐÐÕÊºÅÀàÐÍ
	TThostFtdcBankAccTypeType	BankAccType;
	///ÇþµÀ±êÖ¾
	TThostFtdcDeviceIDType	DeviceID;
	///ÆÚ»õµ¥Î»ÕÊºÅÀàÐÍ
	TThostFtdcBankAccTypeType	BankSecuAccType;
	///ÆÚ»õ¹«Ë¾ÒøÐÐ±àÂë
	TThostFtdcBankCodingForFutureType	BrokerIDByBank;
	///ÆÚ»õµ¥Î»ÕÊºÅ
	TThostFtdcBankAccountType	BankSecuAcc;
	///ÒøÐÐÃÜÂë±êÖ¾
	TThostFtdcPwdFlagType	BankPwdFlag;
	///ÆÚ»õ×Ê½ðÃÜÂëºË¶Ô±êÖ¾
	TThostFtdcPwdFlagType	SecuPwdFlag;
	///½»Ò×¹ñÔ±
	TThostFtdcOperNoType	OperNo;
	///ÇëÇó±àºÅ
	TThostFtdcRequestIDType	RequestID;
	///½»Ò×ID
	TThostFtdcTIDType	TID;
	///³¤¿Í»§ÐÕÃû
	TThostFtdcLongIndividualNameType	LongCustomerName;
	///½»Ò×ÖÐÐÄ´úÂë
	TThostFtdcDRIdentityIDType	DRIdentityID;
	///´ÎÖÐÐÄ·¢Æð×ªÕËÆÚ»õ¹«Ë¾Á÷Ë®ºÅ
	TThostFtdcFutureSerialType	SecFutureSerial;
};

///´ÎÏ¯²éÑ¯ÒøÐÐ×Ê½ðÕÊ»§ÐÅÏ¢»Ø±¨
struct CThostFtdcRspQueryBankAccountBySecField
{
	///ÒµÎñ¹¦ÄÜÂë
	TThostFtdcTradeCodeType	TradeCode;
	///ÒøÐÐ´úÂë
	TThostFtdcBankIDType	BankID;
	///ÒøÐÐ·ÖÖ§»ú¹¹´úÂë
	TThostFtdcBankBrchIDType	BankBranchID;
	///ÆÚÉÌ´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///ÆÚÉÌ·ÖÖ§»ú¹¹´úÂë
	TThostFtdcFutureBranchIDType	BrokerBranchID;
	///½»Ò×ÈÕÆÚ
	TThostFtdcTradeDateType	TradeDate;
	///½»Ò×Ê±¼ä
	TThostFtdcTradeTimeType	TradeTime;
	///ÒøÐÐÁ÷Ë®ºÅ
	TThostFtdcBankSerialType	BankSerial;
	///½»Ò×ÏµÍ³ÈÕÆÚ 
	TThostFtdcTradeDateType	TradingDay;
	///ÒøÆÚÆ½Ì¨ÏûÏ¢Á÷Ë®ºÅ
	TThostFtdcSerialType	PlateSerial;
	///×îºó·ÖÆ¬±êÖ¾
	TThostFtdcLastFragmentType	LastFragment;
	///»á»°ºÅ
	TThostFtdcSessionIDType	SessionID;
	///¿Í»§ÐÕÃû
	TThostFtdcIndividualNameType	CustomerName;
	///Ö¤¼þÀàÐÍ
	TThostFtdcIdCardTypeType	IdCardType;
	///Ö¤¼þºÅÂë
	TThostFtdcIdentifiedCardNoType	IdentifiedCardNo;
	///¿Í»§ÀàÐÍ
	TThostFtdcCustTypeType	CustType;
	///ÒøÐÐÕÊºÅ
	TThostFtdcBankAccountType	BankAccount;
	///ÒøÐÐÃÜÂë
	TThostFtdcPasswordType	BankPassWord;
	///Í¶×ÊÕßÕÊºÅ
	TThostFtdcAccountIDType	AccountID;
	///ÆÚ»õÃÜÂë
	TThostFtdcPasswordType	Password;
	///ÆÚ»õ¹«Ë¾Á÷Ë®ºÅ
	TThostFtdcFutureSerialType	FutureSerial;
	///°²×°±àºÅ
	TThostFtdcInstallIDType	InstallID;
	///ÓÃ»§±êÊ¶
	TThostFtdcUserIDType	UserID;
	///ÑéÖ¤¿Í»§Ö¤¼þºÅÂë±êÖ¾
	TThostFtdcYesNoIndicatorType	VerifyCertNoFlag;
	///±ÒÖÖ´úÂë
	TThostFtdcCurrencyIDType	CurrencyID;
	///ÕªÒª
	TThostFtdcDigestType	Digest;
	///ÒøÐÐÕÊºÅÀàÐÍ
	TThostFtdcBankAccTypeType	BankAccType;
	///ÇþµÀ±êÖ¾
	TThostFtdcDeviceIDType	DeviceID;
	///ÆÚ»õµ¥Î»ÕÊºÅÀàÐÍ
	TThostFtdcBankAccTypeType	BankSecuAccType;
	///ÆÚ»õ¹«Ë¾ÒøÐÐ±àÂë
	TThostFtdcBankCodingForFutureType	BrokerIDByBank;
	///ÆÚ»õµ¥Î»ÕÊºÅ
	TThostFtdcBankAccountType	BankSecuAcc;
	///ÒøÐÐÃÜÂë±êÖ¾
	TThostFtdcPwdFlagType	BankPwdFlag;
	///ÆÚ»õ×Ê½ðÃÜÂëºË¶Ô±êÖ¾
	TThostFtdcPwdFlagType	SecuPwdFlag;
	///½»Ò×¹ñÔ±
	TThostFtdcOperNoType	OperNo;
	///ÇëÇó±àºÅ
	TThostFtdcRequestIDType	RequestID;
	///½»Ò×ID
	TThostFtdcTIDType	TID;
	///ÒøÐÐ¿ÉÓÃ½ð¶î
	TThostFtdcTradeAmountType	BankUseAmount;
	///ÒøÐÐ¿ÉÈ¡½ð¶î
	TThostFtdcTradeAmountType	BankFetchAmount;
	///³¤¿Í»§ÐÕÃû
	TThostFtdcLongIndividualNameType	LongCustomerName;
	///½»Ò×ÖÐÐÄ´úÂë
	TThostFtdcDRIdentityIDType	DRIdentityID;
	///´ÎÖÐÐÄ·¢Æð×ªÕËÆÚ»õ¹«Ë¾Á÷Ë®ºÅ
	TThostFtdcFutureSerialType	SecFutureSerial;
};

///´ÎÖÐÐÄ·¢ÆðµÄ×ªÕÊ½»Ò×
struct CThostFtdcReqTransferBySecField
{
	///ÒµÎñ¹¦ÄÜÂë
	TThostFtdcTradeCodeType	TradeCode;
	///ÒøÐÐ´úÂë
	TThostFtdcBankIDType	BankID;
	///ÒøÐÐ·ÖÖ§»ú¹¹´úÂë
	TThostFtdcBankBrchIDType	BankBranchID;
	///ÆÚÉÌ´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///ÆÚÉÌ·ÖÖ§»ú¹¹´úÂë
	TThostFtdcFutureBranchIDType	BrokerBranchID;
	///½»Ò×ÈÕÆÚ
	TThostFtdcTradeDateType	TradeDate;
	///½»Ò×Ê±¼ä
	TThostFtdcTradeTimeType	TradeTime;
	///ÒøÐÐÁ÷Ë®ºÅ
	TThostFtdcBankSerialType	BankSerial;
	///½»Ò×ÏµÍ³ÈÕÆÚ 
	TThostFtdcTradeDateType	TradingDay;
	///ÒøÆÚÆ½Ì¨ÏûÏ¢Á÷Ë®ºÅ
	TThostFtdcSerialType	PlateSerial;
	///×îºó·ÖÆ¬±êÖ¾
	TThostFtdcLastFragmentType	LastFragment;
	///»á»°ºÅ
	TThostFtdcSessionIDType	SessionID;
	///¿Í»§ÐÕÃû
	TThostFtdcIndividualNameType	CustomerName;
	///Ö¤¼þÀàÐÍ
	TThostFtdcIdCardTypeType	IdCardType;
	///Ö¤¼þºÅÂë
	TThostFtdcIdentifiedCardNoType	IdentifiedCardNo;
	///¿Í»§ÀàÐÍ
	TThostFtdcCustTypeType	CustType;
	///ÒøÐÐÕÊºÅ
	TThostFtdcBankAccountType	BankAccount;
	///ÒøÐÐÃÜÂë
	TThostFtdcPasswordType	BankPassWord;
	///Í¶×ÊÕßÕÊºÅ
	TThostFtdcAccountIDType	AccountID;
	///ÆÚ»õÃÜÂë
	TThostFtdcPasswordType	Password;
	///°²×°±àºÅ
	TThostFtdcInstallIDType	InstallID;
	///ÆÚ»õ¹«Ë¾Á÷Ë®ºÅ
	TThostFtdcFutureSerialType	FutureSerial;
	///ÓÃ»§±êÊ¶
	TThostFtdcUserIDType	UserID;
	///ÑéÖ¤¿Í»§Ö¤¼þºÅÂë±êÖ¾
	TThostFtdcYesNoIndicatorType	VerifyCertNoFlag;
	///±ÒÖÖ´úÂë
	TThostFtdcCurrencyIDType	CurrencyID;
	///×ªÕÊ½ð¶î
	TThostFtdcTradeAmountType	TradeAmount;
	///ÆÚ»õ¿ÉÈ¡½ð¶î
	TThostFtdcTradeAmountType	FutureFetchAmount;
	///·ÑÓÃÖ§¸¶±êÖ¾
	TThostFtdcFeePayFlagType	FeePayFlag;
	///Ó¦ÊÕ¿Í»§·ÑÓÃ
	TThostFtdcCustFeeType	CustFee;
	///Ó¦ÊÕÆÚ»õ¹«Ë¾·ÑÓÃ
	TThostFtdcFutureFeeType	BrokerFee;
	///·¢ËÍ·½¸ø½ÓÊÕ·½µÄÏûÏ¢
	TThostFtdcAddInfoType	Message;
	///ÕªÒª
	TThostFtdcDigestType	Digest;
	///ÒøÐÐÕÊºÅÀàÐÍ
	TThostFtdcBankAccTypeType	BankAccType;
	///ÇþµÀ±êÖ¾
	TThostFtdcDeviceIDType	DeviceID;
	///ÆÚ»õµ¥Î»ÕÊºÅÀàÐÍ
	TThostFtdcBankAccTypeType	BankSecuAccType;
	///ÆÚ»õ¹«Ë¾ÒøÐÐ±àÂë
	TThostFtdcBankCodingForFutureType	BrokerIDByBank;
	///ÆÚ»õµ¥Î»ÕÊºÅ
	TThostFtdcBankAccountType	BankSecuAcc;
	///ÒøÐÐÃÜÂë±êÖ¾
	TThostFtdcPwdFlagType	BankPwdFlag;
	///ÆÚ»õ×Ê½ðÃÜÂëºË¶Ô±êÖ¾
	TThostFtdcPwdFlagType	SecuPwdFlag;
	///½»Ò×¹ñÔ±
	TThostFtdcOperNoType	OperNo;
	///ÇëÇó±àºÅ
	TThostFtdcRequestIDType	RequestID;
	///½»Ò×ID
	TThostFtdcTIDType	TID;
	///×ªÕË½»Ò××´Ì¬
	TThostFtdcTransferStatusType	TransferStatus;
	///³¤¿Í»§ÐÕÃû
	TThostFtdcLongIndividualNameType	LongCustomerName;
	///½»Ò×ÖÐÐÄ´úÂë
	TThostFtdcDRIdentityIDType	DRIdentityID;
	///´ÎÖÐÐÄ·¢Æð×ªÕËÆÚ»õ¹«Ë¾Á÷Ë®ºÅ
	TThostFtdcFutureSerialType	SecFutureSerial;
};

///´ÎÖÐÐÄ·¢ÆðµÄ×ªÕÊ½»Ò×»Ø±¨
struct CThostFtdcRspTransferBySecField
{
	///ÒµÎñ¹¦ÄÜÂë
	TThostFtdcTradeCodeType	TradeCode;
	///ÒøÐÐ´úÂë
	TThostFtdcBankIDType	BankID;
	///ÒøÐÐ·ÖÖ§»ú¹¹´úÂë
	TThostFtdcBankBrchIDType	BankBranchID;
	///ÆÚÉÌ´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///ÆÚÉÌ·ÖÖ§»ú¹¹´úÂë
	TThostFtdcFutureBranchIDType	BrokerBranchID;
	///½»Ò×ÈÕÆÚ
	TThostFtdcTradeDateType	TradeDate;
	///½»Ò×Ê±¼ä
	TThostFtdcTradeTimeType	TradeTime;
	///ÒøÐÐÁ÷Ë®ºÅ
	TThostFtdcBankSerialType	BankSerial;
	///½»Ò×ÏµÍ³ÈÕÆÚ 
	TThostFtdcTradeDateType	TradingDay;
	///ÒøÆÚÆ½Ì¨ÏûÏ¢Á÷Ë®ºÅ
	TThostFtdcSerialType	PlateSerial;
	///×îºó·ÖÆ¬±êÖ¾
	TThostFtdcLastFragmentType	LastFragment;
	///»á»°ºÅ
	TThostFtdcSessionIDType	SessionID;
	///¿Í»§ÐÕÃû
	TThostFtdcIndividualNameType	CustomerName;
	///Ö¤¼þÀàÐÍ
	TThostFtdcIdCardTypeType	IdCardType;
	///Ö¤¼þºÅÂë
	TThostFtdcIdentifiedCardNoType	IdentifiedCardNo;
	///¿Í»§ÀàÐÍ
	TThostFtdcCustTypeType	CustType;
	///ÒøÐÐÕÊºÅ
	TThostFtdcBankAccountType	BankAccount;
	///ÒøÐÐÃÜÂë
	TThostFtdcPasswordType	BankPassWord;
	///Í¶×ÊÕßÕÊºÅ
	TThostFtdcAccountIDType	AccountID;
	///ÆÚ»õÃÜÂë
	TThostFtdcPasswordType	Password;
	///°²×°±àºÅ
	TThostFtdcInstallIDType	InstallID;
	///ÆÚ»õ¹«Ë¾Á÷Ë®ºÅ
	TThostFtdcFutureSerialType	FutureSerial;
	///ÓÃ»§±êÊ¶
	TThostFtdcUserIDType	UserID;
	///ÑéÖ¤¿Í»§Ö¤¼þºÅÂë±êÖ¾
	TThostFtdcYesNoIndicatorType	VerifyCertNoFlag;
	///±ÒÖÖ´úÂë
	TThostFtdcCurrencyIDType	CurrencyID;
	///×ªÕÊ½ð¶î
	TThostFtdcTradeAmountType	TradeAmount;
	///ÆÚ»õ¿ÉÈ¡½ð¶î
	TThostFtdcTradeAmountType	FutureFetchAmount;
	///·ÑÓÃÖ§¸¶±êÖ¾
	TThostFtdcFeePayFlagType	FeePayFlag;
	///Ó¦ÊÕ¿Í»§·ÑÓÃ
	TThostFtdcCustFeeType	CustFee;
	///Ó¦ÊÕÆÚ»õ¹«Ë¾·ÑÓÃ
	TThostFtdcFutureFeeType	BrokerFee;
	///·¢ËÍ·½¸ø½ÓÊÕ·½µÄÏûÏ¢
	TThostFtdcAddInfoType	Message;
	///ÕªÒª
	TThostFtdcDigestType	Digest;
	///ÒøÐÐÕÊºÅÀàÐÍ
	TThostFtdcBankAccTypeType	BankAccType;
	///ÇþµÀ±êÖ¾
	TThostFtdcDeviceIDType	DeviceID;
	///ÆÚ»õµ¥Î»ÕÊºÅÀàÐÍ
	TThostFtdcBankAccTypeType	BankSecuAccType;
	///ÆÚ»õ¹«Ë¾ÒøÐÐ±àÂë
	TThostFtdcBankCodingForFutureType	BrokerIDByBank;
	///ÆÚ»õµ¥Î»ÕÊºÅ
	TThostFtdcBankAccountType	BankSecuAcc;
	///ÒøÐÐÃÜÂë±êÖ¾
	TThostFtdcPwdFlagType	BankPwdFlag;
	///ÆÚ»õ×Ê½ðÃÜÂëºË¶Ô±êÖ¾
	TThostFtdcPwdFlagType	SecuPwdFlag;
	///½»Ò×¹ñÔ±
	TThostFtdcOperNoType	OperNo;
	///ÇëÇó±àºÅ
	TThostFtdcRequestIDType	RequestID;
	///½»Ò×ID
	TThostFtdcTIDType	TID;
	///×ªÕË½»Ò××´Ì¬
	TThostFtdcTransferStatusType	TransferStatus;
	///´íÎó´úÂë
	TThostFtdcErrorIDType	ErrorID;
	///´íÎóÐÅÏ¢
	TThostFtdcErrorMsgType	ErrorMsg;
	///³¤¿Í»§ÐÕÃû
	TThostFtdcLongIndividualNameType	LongCustomerName;
	///½»Ò×ÖÐÐÄ´úÂë
	TThostFtdcDRIdentityIDType	DRIdentityID;
	///´ÎÖÐÐÄ·¢Æð×ªÕËÆÚ»õ¹«Ë¾Á÷Ë®ºÅ
	TThostFtdcFutureSerialType	SecFutureSerial;
};

///²éÑ¯ÒøÐÐ×Ê½ðÕÊ»§ÐÅÏ¢Í¨Öª Òª·¢Íù´ÎÏ¯
struct CThostFtdcNotifyQueryFutureAccountBySecField
{
	///ÒµÎñ¹¦ÄÜÂë
	TThostFtdcTradeCodeType	TradeCode;
	///ÒøÐÐ´úÂë
	TThostFtdcBankIDType	BankID;
	///ÒøÐÐ·ÖÖ§»ú¹¹´úÂë
	TThostFtdcBankBrchIDType	BankBranchID;
	///ÆÚÉÌ´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///ÆÚÉÌ·ÖÖ§»ú¹¹´úÂë
	TThostFtdcFutureBranchIDType	BrokerBranchID;
	///½»Ò×ÈÕÆÚ
	TThostFtdcTradeDateType	TradeDate;
	///½»Ò×Ê±¼ä
	TThostFtdcTradeTimeType	TradeTime;
	///ÒøÐÐÁ÷Ë®ºÅ
	TThostFtdcBankSerialType	BankSerial;
	///½»Ò×ÏµÍ³ÈÕÆÚ 
	TThostFtdcTradeDateType	TradingDay;
	///ÒøÆÚÆ½Ì¨ÏûÏ¢Á÷Ë®ºÅ
	TThostFtdcSerialType	PlateSerial;
	///×îºó·ÖÆ¬±êÖ¾
	TThostFtdcLastFragmentType	LastFragment;
	///»á»°ºÅ
	TThostFtdcSessionIDType	SessionID;
	///¿Í»§ÐÕÃû
	TThostFtdcIndividualNameType	CustomerName;
	///Ö¤¼þÀàÐÍ
	TThostFtdcIdCardTypeType	IdCardType;
	///Ö¤¼þºÅÂë
	TThostFtdcIdentifiedCardNoType	IdentifiedCardNo;
	///¿Í»§ÀàÐÍ
	TThostFtdcCustTypeType	CustType;
	///ÒøÐÐÕÊºÅ
	TThostFtdcBankAccountType	BankAccount;
	///ÒøÐÐÃÜÂë
	TThostFtdcPasswordType	BankPassWord;
	///Í¶×ÊÕßÕÊºÅ
	TThostFtdcAccountIDType	AccountID;
	///ÆÚ»õÃÜÂë
	TThostFtdcPasswordType	Password;
	///ÆÚ»õ¹«Ë¾Á÷Ë®ºÅ
	TThostFtdcFutureSerialType	FutureSerial;
	///°²×°±àºÅ
	TThostFtdcInstallIDType	InstallID;
	///ÓÃ»§±êÊ¶
	TThostFtdcUserIDType	UserID;
	///ÑéÖ¤¿Í»§Ö¤¼þºÅÂë±êÖ¾
	TThostFtdcYesNoIndicatorType	VerifyCertNoFlag;
	///±ÒÖÖ´úÂë
	TThostFtdcCurrencyIDType	CurrencyID;
	///ÕªÒª
	TThostFtdcDigestType	Digest;
	///ÒøÐÐÕÊºÅÀàÐÍ
	TThostFtdcBankAccTypeType	BankAccType;
	///ÇþµÀ±êÖ¾
	TThostFtdcDeviceIDType	DeviceID;
	///ÆÚ»õµ¥Î»ÕÊºÅÀàÐÍ
	TThostFtdcBankAccTypeType	BankSecuAccType;
	///ÆÚ»õ¹«Ë¾ÒøÐÐ±àÂë
	TThostFtdcBankCodingForFutureType	BrokerIDByBank;
	///ÆÚ»õµ¥Î»ÕÊºÅ
	TThostFtdcBankAccountType	BankSecuAcc;
	///ÒøÐÐÃÜÂë±êÖ¾
	TThostFtdcPwdFlagType	BankPwdFlag;
	///ÆÚ»õ×Ê½ðÃÜÂëºË¶Ô±êÖ¾
	TThostFtdcPwdFlagType	SecuPwdFlag;
	///½»Ò×¹ñÔ±
	TThostFtdcOperNoType	OperNo;
	///ÇëÇó±àºÅ
	TThostFtdcRequestIDType	RequestID;
	///½»Ò×ID
	TThostFtdcTIDType	TID;
	///ÒøÐÐ¿ÉÓÃ½ð¶î
	TThostFtdcTradeAmountType	BankUseAmount;
	///ÒøÐÐ¿ÉÈ¡½ð¶î
	TThostFtdcTradeAmountType	BankFetchAmount;
	///´íÎó´úÂë
	TThostFtdcErrorIDType	ErrorID;
	///´íÎóÐÅÏ¢
	TThostFtdcErrorMsgType	ErrorMsg;
	///³¤¿Í»§ÐÕÃû
	TThostFtdcLongIndividualNameType	LongCustomerName;
	///½»Ò×ÖÐÐÄ´úÂë
	TThostFtdcDRIdentityIDType	DRIdentityID;
	///´ÎÖÐÐÄ·¢Æð×ªÕËÆÚ»õ¹«Ë¾Á÷Ë®ºÅ
	TThostFtdcFutureSerialType	SecFutureSerial;
};

///ÍË³ö½ô¼±×´Ì¬²ÎÊý
struct CThostFtdcExitEmergencyField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
};

///ÐÂ×é±£±£Ö¤½ðÏµÊýÍ¶×ÊÕßÄ£°å¶ÔÓ¦¹ØÏµ
struct CThostFtdcInvestorPortfMarginModelField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///Í¶×ÊÕß´úÂë
	TThostFtdcInvestorIDType	InvestorID;
	///±£Ö¤½ðÏµÊýÄ£°å
	TThostFtdcInvestorIDType	MarginModelID;
};

///Í¶×ÊÕßÐÂ×é±£ÉèÖÃ
struct CThostFtdcInvestorPortfSettingField
{
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///Í¶×ÊÕß±àºÅ
	TThostFtdcInvestorIDType	InvestorID;
	///Í¶»úÌ×±£±êÖ¾
	TThostFtdcHedgeFlagType	HedgeFlag;
	///ÊÇ·ñ¿ªÆôÐÂ×é±£
	TThostFtdcBoolType	UsePortf;
};

///Í¶×ÊÕßÐÂ×é±£ÉèÖÃ²éÑ¯
struct CThostFtdcQryInvestorPortfSettingField
{
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///Í¶×ÊÕß±àºÅ
	TThostFtdcInvestorIDType	InvestorID;
};

///À´×Ô´ÎÏ¯µÄÓÃ»§¿ÚÁî±ä¸ü
struct CThostFtdcUserPasswordUpdateFromSecField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///ÓÃ»§´úÂë
	TThostFtdcUserIDType	UserID;
	///Ô­À´µÄ¿ÚÁî
	TThostFtdcPasswordType	OldPassword;
	///ÐÂµÄ¿ÚÁî
	TThostFtdcPasswordType	NewPassword;
	///´ÎÏ¯µÄ½»Ò×ÖÐÐÄ´úÂë
	TThostFtdcDRIdentityIDType	FromSec;
};

///À´×Ô´ÎÏ¯µÄ½áËã½á¹ûÈ·ÈÏ
struct CThostFtdcSettlementInfoConfirmFromSecField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///Í¶×ÊÕß´úÂë
	TThostFtdcInvestorIDType	InvestorID;
	///È·ÈÏÈÕÆÚ
	TThostFtdcDateType	ConfirmDate;
	///È·ÈÏÊ±¼ä
	TThostFtdcTimeType	ConfirmTime;
	///´ÎÏ¯µÄ½»Ò×ÖÐÐÄ´úÂë
	TThostFtdcDRIdentityIDType	FromSec;
};

///À´×Ô´ÎÏ¯µÄ×Ê½ðÕË»§¿ÚÁî±ä¸ü
struct CThostFtdcTradingAccountPasswordUpdateFromSecField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///Í¶×ÊÕßÕÊºÅ
	TThostFtdcAccountIDType	AccountID;
	///Ô­À´µÄ¿ÚÁî
	TThostFtdcPasswordType	OldPassword;
	///ÐÂµÄ¿ÚÁî
	TThostFtdcPasswordType	NewPassword;
	///±ÒÖÖ´úÂë
	TThostFtdcCurrencyIDType	CurrencyID;
	///´ÎÏ¯µÄ½»Ò×ÖÐÐÄ´úÂë
	TThostFtdcDRIdentityIDType	FromSec;
};

///·ç¿Ø½ûÖ¹µÄºÏÔ¼½»Ò×È¨ÏÞ
struct CThostFtdcRiskForbiddenRightField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///Í¶×ÊÕß±àºÅ
	TThostFtdcInvestorIDType	InvestorID;
	///ºÏÔ¼/²úÆ·´úÂë
	TThostFtdcInstrumentIDType	InstrumentID;
	///ÓÃ»§´úÂë
	TThostFtdcUserIDType	UserID;
};

///Í¶×ÊÕßÉê±¨·Ñ½×ÌÝÊÕÈ¡¼ÇÂ¼
struct CThostFtdcInvestorInfoCommRecField
{
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///Í¶×ÊÕß´úÂë
	TThostFtdcInvestorIDType	InvestorID;
	///ÉÌÆ·´úÂë
	TThostFtdcInstrumentIDType	InstrumentID;
	///±¨µ¥×Ü±ÊÊý
	TThostFtdcVolumeType	OrderCount;
	///³·µ¥×Ü±ÊÊý
	TThostFtdcVolumeType	OrderActionCount;
	///Ñ¯¼Û×Ü´ÎÊý
	TThostFtdcVolumeType	ForQuoteCnt;
	///Éê±¨·Ñ
	TThostFtdcMoneyType	InfoComm;
	///ÊÇ·ñÆÚÈ¨ÏµÁÐ
	TThostFtdcBoolType	IsOptSeries;
	///Æ·ÖÖ´úÂë
	TThostFtdcProductIDType	ProductID;
	///ÐÅÏ¢Á¿×ÜÁ¿
	TThostFtdcVolumeType	InfoCnt;
};

///Í¶×ÊÕßÉê±¨·Ñ½×ÌÝÊÕÈ¡¼ÇÂ¼²éÑ¯
struct CThostFtdcQryInvestorInfoCommRecField
{
	///Í¶×ÊÕß´úÂë
	TThostFtdcInvestorIDType	InvestorID;
	///ÉÌÆ·´úÂë
	TThostFtdcInstrumentIDType	InstrumentID;
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
};

///×éºÏÍÈÐÅÏ¢
struct CThostFtdcCombLegField
{
	///×éºÏºÏÔ¼´úÂë
	TThostFtdcInstrumentIDType	CombInstrumentID;
	///µ¥ÍÈ±àºÅ
	TThostFtdcLegIDType	LegID;
	///µ¥ÍÈºÏÔ¼´úÂë
	TThostFtdcInstrumentIDType	LegInstrumentID;
	///ÂòÂô·½Ïò
	TThostFtdcDirectionType	Direction;
	///µ¥ÍÈ³ËÊý
	TThostFtdcLegMultipleType	LegMultiple;
	///ÅÉÉú²ãÊý
	TThostFtdcImplyLevelType	ImplyLevel;
};

///×éºÏÍÈÐÅÏ¢²éÑ¯
struct CThostFtdcQryCombLegField
{
	///µ¥ÍÈºÏÔ¼´úÂë
	TThostFtdcInstrumentIDType	LegInstrumentID;
};

///ÊäÈëµÄ¶Ô³åÉèÖÃ
struct CThostFtdcInputOffsetSettingField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///Í¶×ÊÕß´úÂë
	TThostFtdcInvestorIDType	InvestorID;
	///ºÏÔ¼´úÂë
	TThostFtdcInstrumentIDType	InstrumentID;
	///±êµÄÆÚ»õºÏÔ¼´úÂë
	TThostFtdcInstrumentIDType	UnderlyingInstrID;
	///²úÆ·´úÂë
	TThostFtdcProductIDType	ProductID;
	///¶Ô³åÀàÐÍ
	TThostFtdcOffsetTypeType	OffsetType;
	///ÉêÇë¶Ô³åµÄºÏÔ¼ÊýÁ¿
	TThostFtdcVolumeType	Volume;
	///ÊÇ·ñ¶Ô³å
	TThostFtdcBoolType	IsOffset;
	///ÇëÇó±àºÅ
	TThostFtdcRequestIDType	RequestID;
	///ÓÃ»§´úÂë
	TThostFtdcUserIDType	UserID;
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///IPµØÖ·
	TThostFtdcIPAddressType	IPAddress;
	///MacµØÖ·
	TThostFtdcMacAddressType	MacAddress;
};

///¶Ô³åÉèÖÃ
struct CThostFtdcOffsetSettingField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///Í¶×ÊÕß´úÂë
	TThostFtdcInvestorIDType	InvestorID;
	///ºÏÔ¼´úÂë
	TThostFtdcInstrumentIDType	InstrumentID;
	///±êµÄÆÚ»õºÏÔ¼´úÂë
	TThostFtdcInstrumentIDType	UnderlyingInstrID;
	///²úÆ·´úÂë
	TThostFtdcProductIDType	ProductID;
	///¶Ô³åÀàÐÍ
	TThostFtdcOffsetTypeType	OffsetType;
	///ÉêÇë¶Ô³åµÄºÏÔ¼ÊýÁ¿
	TThostFtdcVolumeType	Volume;
	///ÊÇ·ñ¶Ô³å
	TThostFtdcBoolType	IsOffset;
	///ÇëÇó±àºÅ
	TThostFtdcRequestIDType	RequestID;
	///ÓÃ»§´úÂë
	TThostFtdcUserIDType	UserID;
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///IPµØÖ·
	TThostFtdcIPAddressType	IPAddress;
	///MacµØÖ·
	TThostFtdcMacAddressType	MacAddress;
	///½»Ò×ËùºÏÔ¼´úÂë
	TThostFtdcExchangeInstIDType	ExchangeInstID;
	///½»Ò×ËùÆÚÈ¨ÏµÁÐºÅ
	TThostFtdcExchangeInstIDType	ExchangeSerialNo;
	///½»Ò×Ëù²úÆ·´úÂë
	TThostFtdcProductIDType	ExchangeProductID;
	///»áÔ±´úÂë
	TThostFtdcParticipantIDType	ParticipantID;
	///¿Í»§´úÂë
	TThostFtdcClientIDType	ClientID;
	///½»Ò×Ëù½»Ò×Ô±´úÂë
	TThostFtdcTraderIDType	TraderID;
	///°²×°±àºÅ
	TThostFtdcInstallIDType	InstallID;
	///¶Ô³åÌá½»×´Ì¬
	TThostFtdcOrderSubmitStatusType	OrderSubmitStatus;
	///½»Ò×ÈÕ
	TThostFtdcDateType	TradingDay;
	///½áËã±àºÅ
	TThostFtdcSettlementIDType	SettlementID;
	///±¨µ¥ÈÕÆÚ
	TThostFtdcDateType	InsertDate;
	///²åÈëÊ±¼ä
	TThostFtdcTimeType	InsertTime;
	///³·ÏúÊ±¼ä
	TThostFtdcTimeType	CancelTime;
	///¶Ô³åÉèÖÃ½á¹û
	TThostFtdcExecResultType	ExecResult;
	///ÐòºÅ
	TThostFtdcSequenceNoType	SequenceNo;
	///Ç°ÖÃ±àºÅ
	TThostFtdcFrontIDType	FrontID;
	///»á»°±àºÅ
	TThostFtdcSessionIDType	SessionID;
	///×´Ì¬ÐÅÏ¢
	TThostFtdcErrorMsgType	StatusMsg;
	///²Ù×÷ÓÃ»§´úÂë
	TThostFtdcUserIDType	ActiveUserID;
	///¾­¼Í¹«Ë¾±¨µ¥±àºÅ
	TThostFtdcSequenceNoType	BrokerOffsetSettingSeq;
};

///³·Ïú¶Ô³åÉèÖÃ
struct CThostFtdcCancelOffsetSettingField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///Í¶×ÊÕß´úÂë
	TThostFtdcInvestorIDType	InvestorID;
	///ºÏÔ¼´úÂë
	TThostFtdcInstrumentIDType	InstrumentID;
	///±êµÄÆÚ»õºÏÔ¼´úÂë
	TThostFtdcInstrumentIDType	UnderlyingInstrID;
	///²úÆ·´úÂë
	TThostFtdcProductIDType	ProductID;
	///¶Ô³åÀàÐÍ
	TThostFtdcOffsetTypeType	OffsetType;
	///ÉêÇë¶Ô³åµÄºÏÔ¼ÊýÁ¿
	TThostFtdcVolumeType	Volume;
	///ÊÇ·ñ¶Ô³å
	TThostFtdcBoolType	IsOffset;
	///ÇëÇó±àºÅ
	TThostFtdcRequestIDType	RequestID;
	///ÓÃ»§´úÂë
	TThostFtdcUserIDType	UserID;
	///½»Ò×Ëù´úÂë
	TThostFtdcExchangeIDType	ExchangeID;
	///IPµØÖ·
	TThostFtdcIPAddressType	IPAddress;
	///MacµØÖ·
	TThostFtdcMacAddressType	MacAddress;
	///½»Ò×ËùºÏÔ¼´úÂë
	TThostFtdcExchangeInstIDType	ExchangeInstID;
	///½»Ò×ËùÆÚÈ¨ÏµÁÐºÅ
	TThostFtdcExchangeInstIDType	ExchangeSerialNo;
	///½»Ò×Ëù²úÆ·´úÂë
	TThostFtdcProductIDType	ExchangeProductID;
	///½»Ò×Ëù½»Ò×Ô±´úÂë
	TThostFtdcTraderIDType	TraderID;
	///°²×°±àºÅ
	TThostFtdcInstallIDType	InstallID;
	///»áÔ±´úÂë
	TThostFtdcParticipantIDType	ParticipantID;
	///¿Í»§´úÂë
	TThostFtdcClientIDType	ClientID;
	///±¨µ¥²Ù×÷×´Ì¬
	TThostFtdcOrderActionStatusType	OrderActionStatus;
	///×´Ì¬ÐÅÏ¢
	TThostFtdcErrorMsgType	StatusMsg;
	///²Ù×÷±¾µØ±àºÅ
	TThostFtdcOrderLocalIDType	ActionLocalID;
	///²Ù×÷ÈÕÆÚ
	TThostFtdcDateType	ActionDate;
	///²Ù×÷Ê±¼ä
	TThostFtdcTimeType	ActionTime;
};

///²éÑ¯¶Ô³åÉèÖÃ
struct CThostFtdcQryOffsetSettingField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///Í¶×ÊÕß´úÂë
	TThostFtdcInvestorIDType	InvestorID;
	///²úÆ·´úÂë
	TThostFtdcProductIDType	ProductID;
	///¶Ô³åÀàÐÍ
	TThostFtdcOffsetTypeType	OffsetType;
};

///·þÎñµØÖ·ºÍAppIDµÄ¹ØÏµ
struct CThostFtdcAddrAppIDRelationField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///·þÎñµØÖ·
	TThostFtdcIpAddrType	Address;
	///½»Ò×ÖÐÐÄ´úÂë
	TThostFtdcDRIdentityIDType	DRIdentityID;
	///App´úÂë
	TThostFtdcAppIDType	AppID;
};

///·þÎñµØÖ·ºÍAppIDµÄ¹ØÏµ²éÑ¯
struct CThostFtdcQryAddrAppIDRelationField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
};

///Î¢ÐÅÐ¡³ÌÐòµÈÓÃ»§ÏµÍ³ÐÅÏ¢
struct CThostFtdcWechatUserSystemInfoField
{
	///¾­¼Í¹«Ë¾´úÂë
	TThostFtdcBrokerIDType	BrokerID;
	///ÓÃ»§´úÂë
	TThostFtdcUserIDType	UserID;
	///Î¢ÐÅÐ¡³ÌÐòµÈÓÃ»§¶ËÏµÍ³ÄÚ²¿ÐÅÏ¢³¤¶È
	TThostFtdcSystemInfoLenType	WechatCltSysInfoLen;
	///Î¢ÐÅÐ¡³ÌÐòµÈÓÃ»§¶ËÏµÍ³ÄÚ²¿ÐÅÏ¢
	TThostFtdcClientSystemInfoType	WechatCltSysInfo;
	///ÖÕ¶ËIP¶Ë¿Ú
	TThostFtdcIPPortType	ClientIPPort;
	///µÇÂ¼³É¹¦Ê±¼ä
	TThostFtdcTimeType	ClientLoginTime;
	///App´úÂë
	TThostFtdcAppIDType	ClientAppID;
	///ÓÃ»§¹«ÍøIP
	TThostFtdcIPAddressType	ClientPublicIP;
	///¿Í»§µÇÂ¼±¸×¢2
	TThostFtdcClientLoginRemarkType	ClientLoginRemark;
};


///Ç°ÖÃÐÅÏ¢
struct CThostFtdcFrontInfoField
{
	///Ç°ÖÃµØÖ·
	TThostFtdcAddressType  FrontAddr;
	///²éÑ¯Á÷¿Ø
	TThostFtdcQueryFreqType QryFreq;
	///FTDÁ÷¿Ø
	TThostFtdcQueryFreqType FTDPkgFreq;
};

#endif
