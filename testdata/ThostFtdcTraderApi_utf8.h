/////////////////////////////////////////////////////////////////////////
///@system ÐÂÒ»´ú½»Ò×ËùÏµÍ³
///@company ÉÏº£ÆÚ»õÐÅÏ¢¼¼ÊõÓÐÏÞ¹«Ë¾
///@file ThostFtdcTraderApi.h
///@brief ¶¨ÒåÁË¿Í»§¶Ë½Ó¿Ú
///@history 
///20060106	ÕÔºèê»		´´½¨¸ÃÎÄ¼þ
/////////////////////////////////////////////////////////////////////////

#if !defined(THOST_FTDCTRADERAPI_H)
#define THOST_FTDCTRADERAPI_H

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "ThostFtdcUserApiStruct.h"

#if defined(ISLIB) && defined(WIN32)
#ifdef LIB_TRADER_API_EXPORT
#define TRADER_API_EXPORT __declspec(dllexport)
#else
#define TRADER_API_EXPORT __declspec(dllimport)
#endif
#else
#define TRADER_API_EXPORT 
#endif

class CThostFtdcTraderSpi
{
public:
	///µ±¿Í»§¶ËÓë½»Ò×ºóÌ¨½¨Á¢ÆðÍ¨ÐÅÁ¬½ÓÊ±£¨»¹Î´µÇÂ¼Ç°£©£¬¸Ã·½·¨±»µ÷ÓÃ¡£
	virtual void OnFrontConnected(){};
	
	///µ±¿Í»§¶ËÓë½»Ò×ºóÌ¨Í¨ÐÅÁ¬½Ó¶Ï¿ªÊ±£¬¸Ã·½·¨±»µ÷ÓÃ¡£µ±·¢ÉúÕâ¸öÇé¿öºó£¬API»á×Ô¶¯ÖØÐÂÁ¬½Ó£¬¿Í»§¶Ë¿É²»×ö´¦Àí¡£
	///@param nReason ´íÎóÔ­Òò
	///        0x1001 ÍøÂç¶ÁÊ§°Ü
	///        0x1002 ÍøÂçÐ´Ê§°Ü
	///        0x2001 ½ÓÊÕÐÄÌø³¬Ê±
	///        0x2002 ·¢ËÍÐÄÌøÊ§°Ü
	///        0x2003 ÊÕµ½´íÎó±¨ÎÄ
	virtual void OnFrontDisconnected(int nReason){};
		
	///ÐÄÌø³¬Ê±¾¯¸æ¡£µ±³¤Ê±¼äÎ´ÊÕµ½±¨ÎÄÊ±£¬¸Ã·½·¨±»µ÷ÓÃ¡£
	///@param nTimeLapse ¾àÀëÉÏ´Î½ÓÊÕ±¨ÎÄµÄÊ±¼ä
	virtual void OnHeartBeatWarning(int nTimeLapse){};
	
	///¿Í»§¶ËÈÏÖ¤ÏìÓ¦
	virtual void OnRspAuthenticate(CThostFtdcRspAuthenticateField *pRspAuthenticateField, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};
	

	///µÇÂ¼ÇëÇóÏìÓ¦
	virtual void OnRspUserLogin(CThostFtdcRspUserLoginField *pRspUserLogin, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///µÇ³öÇëÇóÏìÓ¦
	virtual void OnRspUserLogout(CThostFtdcUserLogoutField *pUserLogout, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///ÓÃ»§¿ÚÁî¸üÐÂÇëÇóÏìÓ¦
	virtual void OnRspUserPasswordUpdate(CThostFtdcUserPasswordUpdateField *pUserPasswordUpdate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///×Ê½ðÕË»§¿ÚÁî¸üÐÂÇëÇóÏìÓ¦
	virtual void OnRspTradingAccountPasswordUpdate(CThostFtdcTradingAccountPasswordUpdateField *pTradingAccountPasswordUpdate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///²éÑ¯ÓÃ»§µ±Ç°Ö§³ÖµÄÈÏÖ¤Ä£Ê½µÄ»Ø¸´
	virtual void OnRspUserAuthMethod(CThostFtdcRspUserAuthMethodField *pRspUserAuthMethod, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///»ñÈ¡Í¼ÐÎÑéÖ¤ÂëÇëÇóµÄ»Ø¸´
	virtual void OnRspGenUserCaptcha(CThostFtdcRspGenUserCaptchaField *pRspGenUserCaptcha, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///»ñÈ¡¶ÌÐÅÑéÖ¤ÂëÇëÇóµÄ»Ø¸´
	virtual void OnRspGenUserText(CThostFtdcRspGenUserTextField *pRspGenUserText, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///±¨µ¥Â¼ÈëÇëÇóÏìÓ¦
	virtual void OnRspOrderInsert(CThostFtdcInputOrderField *pInputOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///Ô¤Âñµ¥Â¼ÈëÇëÇóÏìÓ¦
	virtual void OnRspParkedOrderInsert(CThostFtdcParkedOrderField *pParkedOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///Ô¤Âñ³·µ¥Â¼ÈëÇëÇóÏìÓ¦
	virtual void OnRspParkedOrderAction(CThostFtdcParkedOrderActionField *pParkedOrderAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///±¨µ¥²Ù×÷ÇëÇóÏìÓ¦
	virtual void OnRspOrderAction(CThostFtdcInputOrderActionField *pInputOrderAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///²éÑ¯×î´ó±¨µ¥ÊýÁ¿ÏìÓ¦
	virtual void OnRspQryMaxOrderVolume(CThostFtdcQryMaxOrderVolumeField *pQryMaxOrderVolume, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///Í¶×ÊÕß½áËã½á¹ûÈ·ÈÏÏìÓ¦
	virtual void OnRspSettlementInfoConfirm(CThostFtdcSettlementInfoConfirmField *pSettlementInfoConfirm, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///É¾³ýÔ¤Âñµ¥ÏìÓ¦
	virtual void OnRspRemoveParkedOrder(CThostFtdcRemoveParkedOrderField *pRemoveParkedOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///É¾³ýÔ¤Âñ³·µ¥ÏìÓ¦
	virtual void OnRspRemoveParkedOrderAction(CThostFtdcRemoveParkedOrderActionField *pRemoveParkedOrderAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///Ö´ÐÐÐû¸æÂ¼ÈëÇëÇóÏìÓ¦
	virtual void OnRspExecOrderInsert(CThostFtdcInputExecOrderField *pInputExecOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///Ö´ÐÐÐû¸æ²Ù×÷ÇëÇóÏìÓ¦
	virtual void OnRspExecOrderAction(CThostFtdcInputExecOrderActionField *pInputExecOrderAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///Ñ¯¼ÛÂ¼ÈëÇëÇóÏìÓ¦
	virtual void OnRspForQuoteInsert(CThostFtdcInputForQuoteField *pInputForQuote, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///±¨¼ÛÂ¼ÈëÇëÇóÏìÓ¦
	virtual void OnRspQuoteInsert(CThostFtdcInputQuoteField *pInputQuote, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///±¨¼Û²Ù×÷ÇëÇóÏìÓ¦
	virtual void OnRspQuoteAction(CThostFtdcInputQuoteActionField *pInputQuoteAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///ÅúÁ¿±¨µ¥²Ù×÷ÇëÇóÏìÓ¦
	virtual void OnRspBatchOrderAction(CThostFtdcInputBatchOrderActionField *pInputBatchOrderAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///ÆÚÈ¨×Ô¶Ô³åÂ¼ÈëÇëÇóÏìÓ¦
	virtual void OnRspOptionSelfCloseInsert(CThostFtdcInputOptionSelfCloseField *pInputOptionSelfClose, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///ÆÚÈ¨×Ô¶Ô³å²Ù×÷ÇëÇóÏìÓ¦
	virtual void OnRspOptionSelfCloseAction(CThostFtdcInputOptionSelfCloseActionField *pInputOptionSelfCloseAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///ÉêÇë×éºÏÂ¼ÈëÇëÇóÏìÓ¦
	virtual void OnRspCombActionInsert(CThostFtdcInputCombActionField *pInputCombAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///ÇëÇó²éÑ¯±¨µ¥ÏìÓ¦
	virtual void OnRspQryOrder(CThostFtdcOrderField *pOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///ÇëÇó²éÑ¯³É½»ÏìÓ¦
	virtual void OnRspQryTrade(CThostFtdcTradeField *pTrade, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///ÇëÇó²éÑ¯Í¶×ÊÕß³Ö²ÖÏìÓ¦
	virtual void OnRspQryInvestorPosition(CThostFtdcInvestorPositionField *pInvestorPosition, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///ÇëÇó²éÑ¯×Ê½ðÕË»§ÏìÓ¦
	virtual void OnRspQryTradingAccount(CThostFtdcTradingAccountField *pTradingAccount, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///ÇëÇó²éÑ¯Í¶×ÊÕßÏìÓ¦
	virtual void OnRspQryInvestor(CThostFtdcInvestorField *pInvestor, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///ÇëÇó²éÑ¯½»Ò×±àÂëÏìÓ¦
	virtual void OnRspQryTradingCode(CThostFtdcTradingCodeField *pTradingCode, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///ÇëÇó²éÑ¯ºÏÔ¼±£Ö¤½ðÂÊÏìÓ¦
	virtual void OnRspQryInstrumentMarginRate(CThostFtdcInstrumentMarginRateField *pInstrumentMarginRate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///ÇëÇó²éÑ¯ºÏÔ¼ÊÖÐø·ÑÂÊÏìÓ¦
	virtual void OnRspQryInstrumentCommissionRate(CThostFtdcInstrumentCommissionRateField *pInstrumentCommissionRate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///ÇëÇó²éÑ¯½»Ò×ËùÏìÓ¦
	virtual void OnRspQryExchange(CThostFtdcExchangeField *pExchange, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///ÇëÇó²éÑ¯²úÆ·ÏìÓ¦
	virtual void OnRspQryProduct(CThostFtdcProductField *pProduct, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///ÇëÇó²éÑ¯ºÏÔ¼ÏìÓ¦
	virtual void OnRspQryInstrument(CThostFtdcInstrumentField *pInstrument, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///ÇëÇó²éÑ¯ÐÐÇéÏìÓ¦
	virtual void OnRspQryDepthMarketData(CThostFtdcDepthMarketDataField *pDepthMarketData, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///ÇëÇó²éÑ¯½»Ò×Ô±±¨ÅÌ»úÏìÓ¦
	virtual void OnRspQryTraderOffer(CThostFtdcTraderOfferField *pTraderOffer, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///ÇëÇó²éÑ¯Í¶×ÊÕß½áËã½á¹ûÏìÓ¦
	virtual void OnRspQrySettlementInfo(CThostFtdcSettlementInfoField *pSettlementInfo, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///ÇëÇó²éÑ¯×ªÕÊÒøÐÐÏìÓ¦
	virtual void OnRspQryTransferBank(CThostFtdcTransferBankField *pTransferBank, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///ÇëÇó²éÑ¯Í¶×ÊÕß³Ö²ÖÃ÷Ï¸ÏìÓ¦
	virtual void OnRspQryInvestorPositionDetail(CThostFtdcInvestorPositionDetailField *pInvestorPositionDetail, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///ÇëÇó²éÑ¯¿Í»§Í¨ÖªÏìÓ¦
	virtual void OnRspQryNotice(CThostFtdcNoticeField *pNotice, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///ÇëÇó²éÑ¯½áËãÐÅÏ¢È·ÈÏÏìÓ¦
	virtual void OnRspQrySettlementInfoConfirm(CThostFtdcSettlementInfoConfirmField *pSettlementInfoConfirm, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///ÇëÇó²éÑ¯Í¶×ÊÕß³Ö²ÖÃ÷Ï¸ÏìÓ¦
	virtual void OnRspQryInvestorPositionCombineDetail(CThostFtdcInvestorPositionCombineDetailField *pInvestorPositionCombineDetail, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///²éÑ¯±£Ö¤½ð¼à¹ÜÏµÍ³¾­¼Í¹«Ë¾×Ê½ðÕË»§ÃÜÔ¿ÏìÓ¦
	virtual void OnRspQryCFMMCTradingAccountKey(CThostFtdcCFMMCTradingAccountKeyField *pCFMMCTradingAccountKey, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///ÇëÇó²éÑ¯²Öµ¥ÕÛµÖÐÅÏ¢ÏìÓ¦
	virtual void OnRspQryEWarrantOffset(CThostFtdcEWarrantOffsetField *pEWarrantOffset, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///ÇëÇó²éÑ¯Í¶×ÊÕßÆ·ÖÖ/¿çÆ·ÖÖ±£Ö¤½ðÏìÓ¦
	virtual void OnRspQryInvestorProductGroupMargin(CThostFtdcInvestorProductGroupMarginField *pInvestorProductGroupMargin, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///ÇëÇó²éÑ¯½»Ò×Ëù±£Ö¤½ðÂÊÏìÓ¦
	virtual void OnRspQryExchangeMarginRate(CThostFtdcExchangeMarginRateField *pExchangeMarginRate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///ÇëÇó²éÑ¯½»Ò×Ëùµ÷Õû±£Ö¤½ðÂÊÏìÓ¦
	virtual void OnRspQryExchangeMarginRateAdjust(CThostFtdcExchangeMarginRateAdjustField *pExchangeMarginRateAdjust, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///ÇëÇó²éÑ¯»ãÂÊÏìÓ¦
	virtual void OnRspQryExchangeRate(CThostFtdcExchangeRateField *pExchangeRate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///ÇëÇó²éÑ¯¶þ¼¶´úÀí²Ù×÷Ô±ÒøÆÚÈ¨ÏÞÏìÓ¦
	virtual void OnRspQrySecAgentACIDMap(CThostFtdcSecAgentACIDMapField *pSecAgentACIDMap, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///ÇëÇó²éÑ¯²úÆ·±¨¼Û»ãÂÊ
	virtual void OnRspQryProductExchRate(CThostFtdcProductExchRateField *pProductExchRate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///ÇëÇó²éÑ¯²úÆ·×é
	virtual void OnRspQryProductGroup(CThostFtdcProductGroupField *pProductGroup, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///ÇëÇó²éÑ¯×öÊÐÉÌºÏÔ¼ÊÖÐø·ÑÂÊÏìÓ¦
	virtual void OnRspQryMMInstrumentCommissionRate(CThostFtdcMMInstrumentCommissionRateField *pMMInstrumentCommissionRate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///ÇëÇó²éÑ¯×öÊÐÉÌÆÚÈ¨ºÏÔ¼ÊÖÐø·ÑÏìÓ¦
	virtual void OnRspQryMMOptionInstrCommRate(CThostFtdcMMOptionInstrCommRateField *pMMOptionInstrCommRate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///ÇëÇó²éÑ¯±¨µ¥ÊÖÐø·ÑÏìÓ¦
	virtual void OnRspQryInstrumentOrderCommRate(CThostFtdcInstrumentOrderCommRateField *pInstrumentOrderCommRate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///ÇëÇó²éÑ¯×Ê½ðÕË»§ÏìÓ¦
	virtual void OnRspQrySecAgentTradingAccount(CThostFtdcTradingAccountField *pTradingAccount, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///ÇëÇó²éÑ¯¶þ¼¶´úÀíÉÌ×Ê½ðÐ£ÑéÄ£Ê½ÏìÓ¦
	virtual void OnRspQrySecAgentCheckMode(CThostFtdcSecAgentCheckModeField *pSecAgentCheckMode, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///ÇëÇó²éÑ¯¶þ¼¶´úÀíÉÌÐÅÏ¢ÏìÓ¦
	virtual void OnRspQrySecAgentTradeInfo(CThostFtdcSecAgentTradeInfoField *pSecAgentTradeInfo, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///ÇëÇó²éÑ¯ÆÚÈ¨½»Ò×³É±¾ÏìÓ¦
	virtual void OnRspQryOptionInstrTradeCost(CThostFtdcOptionInstrTradeCostField *pOptionInstrTradeCost, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///ÇëÇó²éÑ¯ÆÚÈ¨ºÏÔ¼ÊÖÐø·ÑÏìÓ¦
	virtual void OnRspQryOptionInstrCommRate(CThostFtdcOptionInstrCommRateField *pOptionInstrCommRate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///ÇëÇó²éÑ¯Ö´ÐÐÐû¸æÏìÓ¦
	virtual void OnRspQryExecOrder(CThostFtdcExecOrderField *pExecOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///ÇëÇó²éÑ¯Ñ¯¼ÛÏìÓ¦
	virtual void OnRspQryForQuote(CThostFtdcForQuoteField *pForQuote, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///ÇëÇó²éÑ¯±¨¼ÛÏìÓ¦
	virtual void OnRspQryQuote(CThostFtdcQuoteField *pQuote, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///ÇëÇó²éÑ¯ÆÚÈ¨×Ô¶Ô³åÏìÓ¦
	virtual void OnRspQryOptionSelfClose(CThostFtdcOptionSelfCloseField *pOptionSelfClose, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///ÇëÇó²éÑ¯Í¶×Êµ¥ÔªÏìÓ¦
	virtual void OnRspQryInvestUnit(CThostFtdcInvestUnitField *pInvestUnit, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///ÇëÇó²éÑ¯×éºÏºÏÔ¼°²È«ÏµÊýÏìÓ¦
	virtual void OnRspQryCombInstrumentGuard(CThostFtdcCombInstrumentGuardField *pCombInstrumentGuard, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///ÇëÇó²éÑ¯ÉêÇë×éºÏÏìÓ¦
	virtual void OnRspQryCombAction(CThostFtdcCombActionField *pCombAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///ÇëÇó²éÑ¯×ªÕÊÁ÷Ë®ÏìÓ¦
	virtual void OnRspQryTransferSerial(CThostFtdcTransferSerialField *pTransferSerial, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///ÇëÇó²éÑ¯ÒøÆÚÇ©Ô¼¹ØÏµÏìÓ¦
	virtual void OnRspQryAccountregister(CThostFtdcAccountregisterField *pAccountregister, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///´íÎóÓ¦´ð
	virtual void OnRspError(CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///±¨µ¥Í¨Öª
	virtual void OnRtnOrder(CThostFtdcOrderField *pOrder) {};

	///³É½»Í¨Öª
	virtual void OnRtnTrade(CThostFtdcTradeField *pTrade) {};

	///±¨µ¥Â¼Èë´íÎó»Ø±¨
	virtual void OnErrRtnOrderInsert(CThostFtdcInputOrderField *pInputOrder, CThostFtdcRspInfoField *pRspInfo) {};

	///±¨µ¥²Ù×÷´íÎó»Ø±¨
	virtual void OnErrRtnOrderAction(CThostFtdcOrderActionField *pOrderAction, CThostFtdcRspInfoField *pRspInfo) {};

	///ºÏÔ¼½»Ò××´Ì¬Í¨Öª
	virtual void OnRtnInstrumentStatus(CThostFtdcInstrumentStatusField *pInstrumentStatus) {};

	///½»Ò×Ëù¹«¸æÍ¨Öª
	virtual void OnRtnBulletin(CThostFtdcBulletinField *pBulletin) {};

	///½»Ò×Í¨Öª
	virtual void OnRtnTradingNotice(CThostFtdcTradingNoticeInfoField *pTradingNoticeInfo) {};

	///ÌáÊ¾Ìõ¼þµ¥Ð£Ñé´íÎó
	virtual void OnRtnErrorConditionalOrder(CThostFtdcErrorConditionalOrderField *pErrorConditionalOrder) {};

	///Ö´ÐÐÐû¸æÍ¨Öª
	virtual void OnRtnExecOrder(CThostFtdcExecOrderField *pExecOrder) {};

	///Ö´ÐÐÐû¸æÂ¼Èë´íÎó»Ø±¨
	virtual void OnErrRtnExecOrderInsert(CThostFtdcInputExecOrderField *pInputExecOrder, CThostFtdcRspInfoField *pRspInfo) {};

	///Ö´ÐÐÐû¸æ²Ù×÷´íÎó»Ø±¨
	virtual void OnErrRtnExecOrderAction(CThostFtdcExecOrderActionField *pExecOrderAction, CThostFtdcRspInfoField *pRspInfo) {};

	///Ñ¯¼ÛÂ¼Èë´íÎó»Ø±¨
	virtual void OnErrRtnForQuoteInsert(CThostFtdcInputForQuoteField *pInputForQuote, CThostFtdcRspInfoField *pRspInfo) {};

	///±¨¼ÛÍ¨Öª
	virtual void OnRtnQuote(CThostFtdcQuoteField *pQuote) {};

	///±¨¼ÛÂ¼Èë´íÎó»Ø±¨
	virtual void OnErrRtnQuoteInsert(CThostFtdcInputQuoteField *pInputQuote, CThostFtdcRspInfoField *pRspInfo) {};

	///±¨¼Û²Ù×÷´íÎó»Ø±¨
	virtual void OnErrRtnQuoteAction(CThostFtdcQuoteActionField *pQuoteAction, CThostFtdcRspInfoField *pRspInfo) {};

	///Ñ¯¼ÛÍ¨Öª
	virtual void OnRtnForQuoteRsp(CThostFtdcForQuoteRspField *pForQuoteRsp) {};

	///±£Ö¤½ð¼à¿ØÖÐÐÄÓÃ»§ÁîÅÆ
	virtual void OnRtnCFMMCTradingAccountToken(CThostFtdcCFMMCTradingAccountTokenField *pCFMMCTradingAccountToken) {};

	///ÅúÁ¿±¨µ¥²Ù×÷´íÎó»Ø±¨
	virtual void OnErrRtnBatchOrderAction(CThostFtdcBatchOrderActionField *pBatchOrderAction, CThostFtdcRspInfoField *pRspInfo) {};

	///ÆÚÈ¨×Ô¶Ô³åÍ¨Öª
	virtual void OnRtnOptionSelfClose(CThostFtdcOptionSelfCloseField *pOptionSelfClose) {};

	///ÆÚÈ¨×Ô¶Ô³åÂ¼Èë´íÎó»Ø±¨
	virtual void OnErrRtnOptionSelfCloseInsert(CThostFtdcInputOptionSelfCloseField *pInputOptionSelfClose, CThostFtdcRspInfoField *pRspInfo) {};

	///ÆÚÈ¨×Ô¶Ô³å²Ù×÷´íÎó»Ø±¨
	virtual void OnErrRtnOptionSelfCloseAction(CThostFtdcOptionSelfCloseActionField *pOptionSelfCloseAction, CThostFtdcRspInfoField *pRspInfo) {};

	///ÉêÇë×éºÏÍ¨Öª
	virtual void OnRtnCombAction(CThostFtdcCombActionField *pCombAction) {};

	///ÉêÇë×éºÏÂ¼Èë´íÎó»Ø±¨
	virtual void OnErrRtnCombActionInsert(CThostFtdcInputCombActionField *pInputCombAction, CThostFtdcRspInfoField *pRspInfo) {};

	///ÇëÇó²éÑ¯Ç©Ô¼ÒøÐÐÏìÓ¦
	virtual void OnRspQryContractBank(CThostFtdcContractBankField *pContractBank, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///ÇëÇó²éÑ¯Ô¤Âñµ¥ÏìÓ¦
	virtual void OnRspQryParkedOrder(CThostFtdcParkedOrderField *pParkedOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///ÇëÇó²éÑ¯Ô¤Âñ³·µ¥ÏìÓ¦
	virtual void OnRspQryParkedOrderAction(CThostFtdcParkedOrderActionField *pParkedOrderAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///ÇëÇó²éÑ¯½»Ò×Í¨ÖªÏìÓ¦
	virtual void OnRspQryTradingNotice(CThostFtdcTradingNoticeField *pTradingNotice, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///ÇëÇó²éÑ¯¾­¼Í¹«Ë¾½»Ò×²ÎÊýÏìÓ¦
	virtual void OnRspQryBrokerTradingParams(CThostFtdcBrokerTradingParamsField *pBrokerTradingParams, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///ÇëÇó²éÑ¯¾­¼Í¹«Ë¾½»Ò×Ëã·¨ÏìÓ¦
	virtual void OnRspQryBrokerTradingAlgos(CThostFtdcBrokerTradingAlgosField *pBrokerTradingAlgos, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///ÇëÇó²éÑ¯¼à¿ØÖÐÐÄÓÃ»§ÁîÅÆ
	virtual void OnRspQueryCFMMCTradingAccountToken(CThostFtdcQueryCFMMCTradingAccountTokenField *pQueryCFMMCTradingAccountToken, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///ÒøÐÐ·¢ÆðÒøÐÐ×Ê½ð×ªÆÚ»õÍ¨Öª
	virtual void OnRtnFromBankToFutureByBank(CThostFtdcRspTransferField *pRspTransfer) {};

	///ÒøÐÐ·¢ÆðÆÚ»õ×Ê½ð×ªÒøÐÐÍ¨Öª
	virtual void OnRtnFromFutureToBankByBank(CThostFtdcRspTransferField *pRspTransfer) {};

	///ÒøÐÐ·¢Æð³åÕýÒøÐÐ×ªÆÚ»õÍ¨Öª
	virtual void OnRtnRepealFromBankToFutureByBank(CThostFtdcRspRepealField *pRspRepeal) {};

	///ÒøÐÐ·¢Æð³åÕýÆÚ»õ×ªÒøÐÐÍ¨Öª
	virtual void OnRtnRepealFromFutureToBankByBank(CThostFtdcRspRepealField *pRspRepeal) {};

	///ÆÚ»õ·¢ÆðÒøÐÐ×Ê½ð×ªÆÚ»õÍ¨Öª
	virtual void OnRtnFromBankToFutureByFuture(CThostFtdcRspTransferField *pRspTransfer) {};

	///ÆÚ»õ·¢ÆðÆÚ»õ×Ê½ð×ªÒøÐÐÍ¨Öª
	virtual void OnRtnFromFutureToBankByFuture(CThostFtdcRspTransferField *pRspTransfer) {};

	///ÏµÍ³ÔËÐÐÊ±ÆÚ»õ¶ËÊÖ¹¤·¢Æð³åÕýÒøÐÐ×ªÆÚ»õÇëÇó£¬ÒøÐÐ´¦ÀíÍê±Ïºó±¨ÅÌ·¢»ØµÄÍ¨Öª
	virtual void OnRtnRepealFromBankToFutureByFutureManual(CThostFtdcRspRepealField *pRspRepeal) {};

	///ÏµÍ³ÔËÐÐÊ±ÆÚ»õ¶ËÊÖ¹¤·¢Æð³åÕýÆÚ»õ×ªÒøÐÐÇëÇó£¬ÒøÐÐ´¦ÀíÍê±Ïºó±¨ÅÌ·¢»ØµÄÍ¨Öª
	virtual void OnRtnRepealFromFutureToBankByFutureManual(CThostFtdcRspRepealField *pRspRepeal) {};

	///ÆÚ»õ·¢Æð²éÑ¯ÒøÐÐÓà¶îÍ¨Öª
	virtual void OnRtnQueryBankBalanceByFuture(CThostFtdcNotifyQueryAccountField *pNotifyQueryAccount) {};

	///ÆÚ»õ·¢ÆðÒøÐÐ×Ê½ð×ªÆÚ»õ´íÎó»Ø±¨
	virtual void OnErrRtnBankToFutureByFuture(CThostFtdcReqTransferField *pReqTransfer, CThostFtdcRspInfoField *pRspInfo) {};

	///ÆÚ»õ·¢ÆðÆÚ»õ×Ê½ð×ªÒøÐÐ´íÎó»Ø±¨
	virtual void OnErrRtnFutureToBankByFuture(CThostFtdcReqTransferField *pReqTransfer, CThostFtdcRspInfoField *pRspInfo) {};

	///ÏµÍ³ÔËÐÐÊ±ÆÚ»õ¶ËÊÖ¹¤·¢Æð³åÕýÒøÐÐ×ªÆÚ»õ´íÎó»Ø±¨
	virtual void OnErrRtnRepealBankToFutureByFutureManual(CThostFtdcReqRepealField *pReqRepeal, CThostFtdcRspInfoField *pRspInfo) {};

	///ÏµÍ³ÔËÐÐÊ±ÆÚ»õ¶ËÊÖ¹¤·¢Æð³åÕýÆÚ»õ×ªÒøÐÐ´íÎó»Ø±¨
	virtual void OnErrRtnRepealFutureToBankByFutureManual(CThostFtdcReqRepealField *pReqRepeal, CThostFtdcRspInfoField *pRspInfo) {};

	///ÆÚ»õ·¢Æð²éÑ¯ÒøÐÐÓà¶î´íÎó»Ø±¨
	virtual void OnErrRtnQueryBankBalanceByFuture(CThostFtdcReqQueryAccountField *pReqQueryAccount, CThostFtdcRspInfoField *pRspInfo) {};

	///ÆÚ»õ·¢Æð³åÕýÒøÐÐ×ªÆÚ»õÇëÇó£¬ÒøÐÐ´¦ÀíÍê±Ïºó±¨ÅÌ·¢»ØµÄÍ¨Öª
	virtual void OnRtnRepealFromBankToFutureByFuture(CThostFtdcRspRepealField *pRspRepeal) {};

	///ÆÚ»õ·¢Æð³åÕýÆÚ»õ×ªÒøÐÐÇëÇó£¬ÒøÐÐ´¦ÀíÍê±Ïºó±¨ÅÌ·¢»ØµÄÍ¨Öª
	virtual void OnRtnRepealFromFutureToBankByFuture(CThostFtdcRspRepealField *pRspRepeal) {};

	///ÆÚ»õ·¢ÆðÒøÐÐ×Ê½ð×ªÆÚ»õÓ¦´ð
	virtual void OnRspFromBankToFutureByFuture(CThostFtdcReqTransferField *pReqTransfer, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///ÆÚ»õ·¢ÆðÆÚ»õ×Ê½ð×ªÒøÐÐÓ¦´ð
	virtual void OnRspFromFutureToBankByFuture(CThostFtdcReqTransferField *pReqTransfer, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///ÆÚ»õ·¢Æð²éÑ¯ÒøÐÐÓà¶îÓ¦´ð
	virtual void OnRspQueryBankAccountMoneyByFuture(CThostFtdcReqQueryAccountField *pReqQueryAccount, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///ÒøÐÐ·¢ÆðÒøÆÚ¿ª»§Í¨Öª
	virtual void OnRtnOpenAccountByBank(CThostFtdcOpenAccountField *pOpenAccount) {};

	///ÒøÐÐ·¢ÆðÒøÆÚÏú»§Í¨Öª
	virtual void OnRtnCancelAccountByBank(CThostFtdcCancelAccountField *pCancelAccount) {};

	///ÒøÐÐ·¢Æð±ä¸üÒøÐÐÕËºÅÍ¨Öª
	virtual void OnRtnChangeAccountByBank(CThostFtdcChangeAccountField *pChangeAccount) {};

	///ÇëÇó²éÑ¯·ÖÀàºÏÔ¼ÏìÓ¦
	virtual void OnRspQryClassifiedInstrument(CThostFtdcInstrumentField *pInstrument, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///ÇëÇó×éºÏÓÅ»Ý±ÈÀýÏìÓ¦
	virtual void OnRspQryCombPromotionParam(CThostFtdcCombPromotionParamField *pCombPromotionParam, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///Í¶×ÊÕß·çÏÕ½áËã³Ö²Ö²éÑ¯ÏìÓ¦
	virtual void OnRspQryRiskSettleInvstPosition(CThostFtdcRiskSettleInvstPositionField *pRiskSettleInvstPosition, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///·çÏÕ½áËã²úÆ·²éÑ¯ÏìÓ¦
	virtual void OnRspQryRiskSettleProductStatus(CThostFtdcRiskSettleProductStatusField *pRiskSettleProductStatus, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///SPBMÆÚ»õºÏÔ¼²ÎÊý²éÑ¯ÏìÓ¦
	virtual void OnRspQrySPBMFutureParameter(CThostFtdcSPBMFutureParameterField *pSPBMFutureParameter, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///SPBMÆÚÈ¨ºÏÔ¼²ÎÊý²éÑ¯ÏìÓ¦
	virtual void OnRspQrySPBMOptionParameter(CThostFtdcSPBMOptionParameterField *pSPBMOptionParameter, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///SPBMÆ·ÖÖÄÚ¶ÔËø²ÖÕÛ¿Û²ÎÊý²éÑ¯ÏìÓ¦
	virtual void OnRspQrySPBMIntraParameter(CThostFtdcSPBMIntraParameterField *pSPBMIntraParameter, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///SPBM¿çÆ·ÖÖµÖ¿Û²ÎÊý²éÑ¯ÏìÓ¦
	virtual void OnRspQrySPBMInterParameter(CThostFtdcSPBMInterParameterField *pSPBMInterParameter, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///SPBM×éºÏ±£Ö¤½ðÌ×²Í²éÑ¯ÏìÓ¦
	virtual void OnRspQrySPBMPortfDefinition(CThostFtdcSPBMPortfDefinitionField *pSPBMPortfDefinition, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///Í¶×ÊÕßSPBMÌ×²ÍÑ¡Ôñ²éÑ¯ÏìÓ¦
	virtual void OnRspQrySPBMInvestorPortfDef(CThostFtdcSPBMInvestorPortfDefField *pSPBMInvestorPortfDef, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///Í¶×ÊÕßÐÂÐÍ×éºÏ±£Ö¤½ðÏµÊý²éÑ¯ÏìÓ¦
	virtual void OnRspQryInvestorPortfMarginRatio(CThostFtdcInvestorPortfMarginRatioField *pInvestorPortfMarginRatio, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///Í¶×ÊÕß²úÆ·SPBMÃ÷Ï¸²éÑ¯ÏìÓ¦
	virtual void OnRspQryInvestorProdSPBMDetail(CThostFtdcInvestorProdSPBMDetailField *pInvestorProdSPBMDetail, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///Í¶×ÊÕßÉÌÆ·×éSPMM¼ÇÂ¼²éÑ¯ÏìÓ¦
	virtual void OnRspQryInvestorCommoditySPMMMargin(CThostFtdcInvestorCommoditySPMMMarginField *pInvestorCommoditySPMMMargin, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///Í¶×ÊÕßÉÌÆ·ÈºSPMM¼ÇÂ¼²éÑ¯ÏìÓ¦
	virtual void OnRspQryInvestorCommodityGroupSPMMMargin(CThostFtdcInvestorCommodityGroupSPMMMarginField *pInvestorCommodityGroupSPMMMargin, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///SPMMºÏÔ¼²ÎÊý²éÑ¯ÏìÓ¦
	virtual void OnRspQrySPMMInstParam(CThostFtdcSPMMInstParamField *pSPMMInstParam, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///SPMM²úÆ·²ÎÊý²éÑ¯ÏìÓ¦
	virtual void OnRspQrySPMMProductParam(CThostFtdcSPMMProductParamField *pSPMMProductParam, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///SPBM¸½¼Ó¿çÆ·ÖÖµÖ¿Û²ÎÊý²éÑ¯ÏìÓ¦
	virtual void OnRspQrySPBMAddOnInterParameter(CThostFtdcSPBMAddOnInterParameterField *pSPBMAddOnInterParameter, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///RCAMS²úÆ·×éºÏÐÅÏ¢²éÑ¯ÏìÓ¦
	virtual void OnRspQryRCAMSCombProductInfo(CThostFtdcRCAMSCombProductInfoField *pRCAMSCombProductInfo, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///RCAMSÍ¬ºÏÔ¼·çÏÕ¶Ô³å²ÎÊý²éÑ¯ÏìÓ¦
	virtual void OnRspQryRCAMSInstrParameter(CThostFtdcRCAMSInstrParameterField *pRCAMSInstrParameter, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///RCAMSÆ·ÖÖÄÚ·çÏÕ¶Ô³å²ÎÊý²éÑ¯ÏìÓ¦
	virtual void OnRspQryRCAMSIntraParameter(CThostFtdcRCAMSIntraParameterField *pRCAMSIntraParameter, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///RCAMS¿çÆ·ÖÖ·çÏÕÕÛµÖ²ÎÊý²éÑ¯ÏìÓ¦
	virtual void OnRspQryRCAMSInterParameter(CThostFtdcRCAMSInterParameterField *pRCAMSInterParameter, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///RCAMS¿ÕÍ·ÆÚÈ¨·çÏÕµ÷Õû²ÎÊý²éÑ¯ÏìÓ¦
	virtual void OnRspQryRCAMSShortOptAdjustParam(CThostFtdcRCAMSShortOptAdjustParamField *pRCAMSShortOptAdjustParam, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///RCAMS²ßÂÔ×éºÏ³Ö²Ö²éÑ¯ÏìÓ¦
	virtual void OnRspQryRCAMSInvestorCombPosition(CThostFtdcRCAMSInvestorCombPositionField *pRCAMSInvestorCombPosition, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///Í¶×ÊÕßÆ·ÖÖRCAMS±£Ö¤½ð²éÑ¯ÏìÓ¦
	virtual void OnRspQryInvestorProdRCAMSMargin(CThostFtdcInvestorProdRCAMSMarginField *pInvestorProdRCAMSMargin, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///RULEºÏÔ¼±£Ö¤½ð²ÎÊý²éÑ¯ÏìÓ¦
	virtual void OnRspQryRULEInstrParameter(CThostFtdcRULEInstrParameterField *pRULEInstrParameter, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///RULEÆ·ÖÖÄÚ¶ÔËø²ÖÕÛ¿Û²ÎÊý²éÑ¯ÏìÓ¦
	virtual void OnRspQryRULEIntraParameter(CThostFtdcRULEIntraParameterField *pRULEIntraParameter, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///RULE¿çÆ·ÖÖµÖ¿Û²ÎÊý²éÑ¯ÏìÓ¦
	virtual void OnRspQryRULEInterParameter(CThostFtdcRULEInterParameterField *pRULEInterParameter, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///Í¶×ÊÕß²úÆ·RULE±£Ö¤½ð²éÑ¯ÏìÓ¦
	virtual void OnRspQryInvestorProdRULEMargin(CThostFtdcInvestorProdRULEMarginField *pInvestorProdRULEMargin, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///Í¶×ÊÕßÐÂÐÍ×éºÏ±£Ö¤½ð¿ª¹Ø²éÑ¯ÏìÓ¦
	virtual void OnRspQryInvestorPortfSetting(CThostFtdcInvestorPortfSettingField *pInvestorPortfSetting, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///Í¶×ÊÕßÉê±¨·Ñ½×ÌÝÊÕÈ¡¼ÇÂ¼²éÑ¯ÏìÓ¦
	virtual void OnRspQryInvestorInfoCommRec(CThostFtdcInvestorInfoCommRecField *pInvestorInfoCommRec, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///×éºÏÍÈÐÅÏ¢²éÑ¯ÏìÓ¦
	virtual void OnRspQryCombLeg(CThostFtdcCombLegField *pCombLeg, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///¶Ô³åÉèÖÃÇëÇóÏìÓ¦
	virtual void OnRspOffsetSetting(CThostFtdcInputOffsetSettingField *pInputOffsetSetting, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///¶Ô³åÉèÖÃ³·ÏúÇëÇóÏìÓ¦
	virtual void OnRspCancelOffsetSetting(CThostFtdcInputOffsetSettingField *pInputOffsetSetting, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///¶Ô³åÉèÖÃÍ¨Öª
	virtual void OnRtnOffsetSetting(CThostFtdcOffsetSettingField *pOffsetSetting) {};

	///¶Ô³åÉèÖÃ´íÎó»Ø±¨
	virtual void OnErrRtnOffsetSetting(CThostFtdcInputOffsetSettingField *pInputOffsetSetting, CThostFtdcRspInfoField *pRspInfo) {};

	///¶Ô³åÉèÖÃ³·Ïú´íÎó»Ø±¨
	virtual void OnErrRtnCancelOffsetSetting(CThostFtdcCancelOffsetSettingField *pCancelOffsetSetting, CThostFtdcRspInfoField *pRspInfo) {};

	///Í¶×ÊÕß¶Ô³åÉèÖÃ²éÑ¯ÏìÓ¦
	virtual void OnRspQryOffsetSetting(CThostFtdcOffsetSettingField *pOffsetSetting, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};
};

class TRADER_API_EXPORT CThostFtdcTraderApi
{
public:
	///´´½¨TraderApi
	///@param pszFlowPath ´æÖü¶©ÔÄÐÅÏ¢ÎÄ¼þµÄÄ¿Â¼£¬Ä¬ÈÏÎªµ±Ç°Ä¿Â¼
	///@return ´´½¨³öµÄUserApi
	static CThostFtdcTraderApi *CreateFtdcTraderApi(const char *pszFlowPath = "");
	
	///»ñÈ¡APIµÄ°æ±¾ÐÅÏ¢
	///@retrun »ñÈ¡µ½µÄ°æ±¾ºÅ
	static const char *GetApiVersion();
	
	///É¾³ý½Ó¿Ú¶ÔÏó±¾Éí
	///@remark ²»ÔÙÊ¹ÓÃ±¾½Ó¿Ú¶ÔÏóÊ±,µ÷ÓÃ¸Ãº¯ÊýÉ¾³ý½Ó¿Ú¶ÔÏó
	virtual void Release() = 0;
	
	///³õÊ¼»¯
	///@remark ³õÊ¼»¯ÔËÐÐ»·¾³,Ö»ÓÐµ÷ÓÃºó,½Ó¿Ú²Å¿ªÊ¼¹¤×÷
	virtual void Init() = 0;
	
	///µÈ´ý½Ó¿ÚÏß³Ì½áÊøÔËÐÐ
	///@return Ïß³ÌÍË³ö´úÂë
	virtual int Join() = 0;
	
	///»ñÈ¡µ±Ç°½»Ò×ÈÕ
	///@retrun »ñÈ¡µ½µÄ½»Ò×ÈÕ
	///@remark Ö»ÓÐµÇÂ¼³É¹¦ºó,²ÅÄÜµÃµ½ÕýÈ·µÄ½»Ò×ÈÕ
	virtual const char *GetTradingDay() = 0;
	
	///»ñÈ¡ÒÑÁ¬½ÓµÄÇ°ÖÃµÄÐÅÏ¢
	/// @param pFrontInfo£ºÊäÈëÊä³ö²ÎÊý£¬ÓÃÓÚ´æ´¢»ñÈ¡µ½µÄÇ°ÖÃÐÅÏ¢£¬²»ÄÜÎª¿Õ
	/// @remark Á¬½Ó³É¹¦ºó£¬¿É»ñÈ¡ÕýÈ·µÄÇ°ÖÃµØÖ·ÐÅÏ¢
	/// @remark µÇÂ¼³É¹¦ºó£¬¿É»ñÈ¡ÕýÈ·µÄÇ°ÖÃÁ÷¿ØÐÅÏ¢
	virtual void GetFrontInfo(CThostFtdcFrontInfoField* pFrontInfo) =0;
	
	///×¢²áÇ°ÖÃ»úÍøÂçµØÖ·
	///@param pszFrontAddress£ºÇ°ÖÃ»úÍøÂçµØÖ·¡£
	///@remark ÍøÂçµØÖ·µÄ¸ñÊ½Îª£º¡°protocol://ipaddress:port¡±£¬Èç£º¡±tcp://127.0.0.1:17001¡±¡£ 
	///@remark ¡°tcp¡±´ú±í´«ÊäÐ­Òé£¬¡°127.0.0.1¡±´ú±í·þÎñÆ÷µØÖ·¡£¡±17001¡±´ú±í·þÎñÆ÷¶Ë¿ÚºÅ¡£
	virtual void RegisterFront(char *pszFrontAddress) = 0;
	
	///×¢²áÃû×Ö·þÎñÆ÷ÍøÂçµØÖ·
	///@param pszNsAddress£ºÃû×Ö·þÎñÆ÷ÍøÂçµØÖ·¡£
	///@remark ÍøÂçµØÖ·µÄ¸ñÊ½Îª£º¡°protocol://ipaddress:port¡±£¬Èç£º¡±tcp://127.0.0.1:12001¡±¡£ 
	///@remark ¡°tcp¡±´ú±í´«ÊäÐ­Òé£¬¡°127.0.0.1¡±´ú±í·þÎñÆ÷µØÖ·¡£¡±12001¡±´ú±í·þÎñÆ÷¶Ë¿ÚºÅ¡£
	///@remark RegisterNameServerÓÅÏÈÓÚRegisterFront
	virtual void RegisterNameServer(char *pszNsAddress) = 0;
	
	///×¢²áÃû×Ö·þÎñÆ÷ÓÃ»§ÐÅÏ¢
	///@param pFensUserInfo£ºÓÃ»§ÐÅÏ¢¡£
	virtual void RegisterFensUserInfo(CThostFtdcFensUserInfoField * pFensUserInfo) = 0;
	
	///×¢²á»Øµ÷½Ó¿Ú
	///@param pSpi ÅÉÉú×Ô»Øµ÷½Ó¿ÚÀàµÄÊµÀý
	virtual void RegisterSpi(CThostFtdcTraderSpi *pSpi) = 0;
	
	///¶©ÔÄË½ÓÐÁ÷¡£
	///@param nResumeType Ë½ÓÐÁ÷ÖØ´«·½Ê½  
	///        THOST_TERT_RESTART:´Ó±¾½»Ò×ÈÕ¿ªÊ¼ÖØ´«
	///        THOST_TERT_RESUME:´ÓÉÏ´ÎÊÕµ½µÄÐø´«
	///        THOST_TERT_QUICK:Ö»´«ËÍµÇÂ¼ºóË½ÓÐÁ÷µÄÄÚÈÝ
	///@remark ¸Ã·½·¨ÒªÔÚInit·½·¨Ç°µ÷ÓÃ¡£Èô²»µ÷ÓÃÔò²»»áÊÕµ½Ë½ÓÐÁ÷µÄÊý¾Ý¡£
	virtual void SubscribePrivateTopic(THOST_TE_RESUME_TYPE nResumeType) = 0;
	
	///¶©ÔÄ¹«¹²Á÷¡£
	///@param nResumeType ¹«¹²Á÷ÖØ´«·½Ê½  
	///        THOST_TERT_RESTART:´Ó±¾½»Ò×ÈÕ¿ªÊ¼ÖØ´«
	///        THOST_TERT_RESUME:´ÓÉÏ´ÎÊÕµ½µÄÐø´«
	///        THOST_TERT_QUICK:Ö»´«ËÍµÇÂ¼ºó¹«¹²Á÷µÄÄÚÈÝ
	///        THOST_TERT_NONE:È¡Ïû¶©ÔÄ¹«¹²Á÷
	///@remark ¸Ã·½·¨ÒªÔÚInit·½·¨Ç°µ÷ÓÃ¡£Èô²»µ÷ÓÃÔò²»»áÊÕµ½¹«¹²Á÷µÄÊý¾Ý¡£
	virtual void SubscribePublicTopic(THOST_TE_RESUME_TYPE nResumeType) = 0;

	///¿Í»§¶ËÈÏÖ¤ÇëÇó
	virtual int ReqAuthenticate(CThostFtdcReqAuthenticateField *pReqAuthenticateField, int nRequestID) = 0;

	///×¢²áÓÃ»§ÖÕ¶ËÐÅÏ¢£¬ÓÃÓÚÖÐ¼Ì·þÎñÆ÷¶àÁ¬½ÓÄ£Ê½
	///ÐèÒªÔÚÖÕ¶ËÈÏÖ¤³É¹¦ºó£¬ÓÃ»§µÇÂ¼Ç°µ÷ÓÃ¸Ã½Ó¿Ú
	virtual int RegisterUserSystemInfo(CThostFtdcUserSystemInfoField *pUserSystemInfo) = 0;

	///ÉÏ±¨ÓÃ»§ÖÕ¶ËÐÅÏ¢£¬ÓÃÓÚÖÐ¼Ì·þÎñÆ÷²Ù×÷Ô±µÇÂ¼Ä£Ê½
	///²Ù×÷Ô±µÇÂ¼ºó£¬¿ÉÒÔ¶à´Îµ÷ÓÃ¸Ã½Ó¿ÚÉÏ±¨¿Í»§ÐÅÏ¢
	virtual int SubmitUserSystemInfo(CThostFtdcUserSystemInfoField *pUserSystemInfo) = 0;
	///×¢²áÓÃ»§ÖÕ¶ËÐÅÏ¢£¬ÓÃÓÚÖÐ¼Ì·þÎñÆ÷¶àÁ¬½ÓÄ£Ê½.ÓÃÓÚÎ¢ÐÅÐ¡³ÌÐòµÈÓ¦ÓÃÉÏ±¨ÐÅÏ¢.
	virtual int RegisterWechatUserSystemInfo(CThostFtdcWechatUserSystemInfoField *pUserSystemInfo) = 0;
	///ÉÏ±¨ÓÃ»§ÖÕ¶ËÐÅÏ¢£¬ÓÃÓÚÖÐ¼Ì·þÎñÆ÷²Ù×÷Ô±µÇÂ¼Ä£Ê½.ÓÃÓÚÎ¢ÐÅÐ¡³ÌÐòµÈÓ¦ÓÃÉÏ±¨ÐÅÏ¢.
	virtual int SubmitWechatUserSystemInfo(CThostFtdcWechatUserSystemInfoField *pUserSystemInfo) = 0;

	///ÓÃ»§µÇÂ¼ÇëÇó
	virtual int ReqUserLogin(CThostFtdcReqUserLoginField *pReqUserLoginField, int nRequestID) = 0;

	///µÇ³öÇëÇó
	virtual int ReqUserLogout(CThostFtdcUserLogoutField *pUserLogout, int nRequestID) = 0;

	///ÓÃ»§¿ÚÁî¸üÐÂÇëÇó
	virtual int ReqUserPasswordUpdate(CThostFtdcUserPasswordUpdateField *pUserPasswordUpdate, int nRequestID) = 0;

	///×Ê½ðÕË»§¿ÚÁî¸üÐÂÇëÇó
	virtual int ReqTradingAccountPasswordUpdate(CThostFtdcTradingAccountPasswordUpdateField *pTradingAccountPasswordUpdate, int nRequestID) = 0;

	///²éÑ¯ÓÃ»§µ±Ç°Ö§³ÖµÄÈÏÖ¤Ä£Ê½
	virtual int ReqUserAuthMethod(CThostFtdcReqUserAuthMethodField *pReqUserAuthMethod, int nRequestID) = 0;

	///ÓÃ»§·¢³ö»ñÈ¡Í¼ÐÎÑéÖ¤ÂëÇëÇó
	virtual int ReqGenUserCaptcha(CThostFtdcReqGenUserCaptchaField *pReqGenUserCaptcha, int nRequestID) = 0;

	///ÓÃ»§·¢³ö»ñÈ¡¶ÌÐÅÑéÖ¤ÂëÇëÇó
	virtual int ReqGenUserText(CThostFtdcReqGenUserTextField *pReqGenUserText, int nRequestID) = 0;

	///ÓÃ»§·¢³ö´øÓÐÍ¼Æ¬ÑéÖ¤ÂëµÄµÇÂ½ÇëÇó
	virtual int ReqUserLoginWithCaptcha(CThostFtdcReqUserLoginWithCaptchaField *pReqUserLoginWithCaptcha, int nRequestID) = 0;

	///ÓÃ»§·¢³ö´øÓÐ¶ÌÐÅÑéÖ¤ÂëµÄµÇÂ½ÇëÇó
	virtual int ReqUserLoginWithText(CThostFtdcReqUserLoginWithTextField *pReqUserLoginWithText, int nRequestID) = 0;

	///ÓÃ»§·¢³ö´øÓÐ¶¯Ì¬¿ÚÁîµÄµÇÂ½ÇëÇó
	virtual int ReqUserLoginWithOTP(CThostFtdcReqUserLoginWithOTPField *pReqUserLoginWithOTP, int nRequestID) = 0;

	///±¨µ¥Â¼ÈëÇëÇó
	virtual int ReqOrderInsert(CThostFtdcInputOrderField *pInputOrder, int nRequestID) = 0;

	///Ô¤Âñµ¥Â¼ÈëÇëÇó
	virtual int ReqParkedOrderInsert(CThostFtdcParkedOrderField *pParkedOrder, int nRequestID) = 0;

	///Ô¤Âñ³·µ¥Â¼ÈëÇëÇó
	virtual int ReqParkedOrderAction(CThostFtdcParkedOrderActionField *pParkedOrderAction, int nRequestID) = 0;

	///±¨µ¥²Ù×÷ÇëÇó
	virtual int ReqOrderAction(CThostFtdcInputOrderActionField *pInputOrderAction, int nRequestID) = 0;

	///²éÑ¯×î´ó±¨µ¥ÊýÁ¿ÇëÇó
	virtual int ReqQryMaxOrderVolume(CThostFtdcQryMaxOrderVolumeField *pQryMaxOrderVolume, int nRequestID) = 0;

	///Í¶×ÊÕß½áËã½á¹ûÈ·ÈÏ
	virtual int ReqSettlementInfoConfirm(CThostFtdcSettlementInfoConfirmField *pSettlementInfoConfirm, int nRequestID) = 0;

	///ÇëÇóÉ¾³ýÔ¤Âñµ¥
	virtual int ReqRemoveParkedOrder(CThostFtdcRemoveParkedOrderField *pRemoveParkedOrder, int nRequestID) = 0;

	///ÇëÇóÉ¾³ýÔ¤Âñ³·µ¥
	virtual int ReqRemoveParkedOrderAction(CThostFtdcRemoveParkedOrderActionField *pRemoveParkedOrderAction, int nRequestID) = 0;

	///Ö´ÐÐÐû¸æÂ¼ÈëÇëÇó
	virtual int ReqExecOrderInsert(CThostFtdcInputExecOrderField *pInputExecOrder, int nRequestID) = 0;

	///Ö´ÐÐÐû¸æ²Ù×÷ÇëÇó
	virtual int ReqExecOrderAction(CThostFtdcInputExecOrderActionField *pInputExecOrderAction, int nRequestID) = 0;

	///Ñ¯¼ÛÂ¼ÈëÇëÇó
	virtual int ReqForQuoteInsert(CThostFtdcInputForQuoteField *pInputForQuote, int nRequestID) = 0;

	///±¨¼ÛÂ¼ÈëÇëÇó
	virtual int ReqQuoteInsert(CThostFtdcInputQuoteField *pInputQuote, int nRequestID) = 0;

	///±¨¼Û²Ù×÷ÇëÇó
	virtual int ReqQuoteAction(CThostFtdcInputQuoteActionField *pInputQuoteAction, int nRequestID) = 0;

	///ÅúÁ¿±¨µ¥²Ù×÷ÇëÇó
	virtual int ReqBatchOrderAction(CThostFtdcInputBatchOrderActionField *pInputBatchOrderAction, int nRequestID) = 0;

	///ÆÚÈ¨×Ô¶Ô³åÂ¼ÈëÇëÇó
	virtual int ReqOptionSelfCloseInsert(CThostFtdcInputOptionSelfCloseField *pInputOptionSelfClose, int nRequestID) = 0;

	///ÆÚÈ¨×Ô¶Ô³å²Ù×÷ÇëÇó
	virtual int ReqOptionSelfCloseAction(CThostFtdcInputOptionSelfCloseActionField *pInputOptionSelfCloseAction, int nRequestID) = 0;

	///ÉêÇë×éºÏÂ¼ÈëÇëÇó
	virtual int ReqCombActionInsert(CThostFtdcInputCombActionField *pInputCombAction, int nRequestID) = 0;

	///ÇëÇó²éÑ¯±¨µ¥
	virtual int ReqQryOrder(CThostFtdcQryOrderField *pQryOrder, int nRequestID) = 0;

	///ÇëÇó²éÑ¯³É½»
	virtual int ReqQryTrade(CThostFtdcQryTradeField *pQryTrade, int nRequestID) = 0;

	///ÇëÇó²éÑ¯Í¶×ÊÕß³Ö²Ö
	virtual int ReqQryInvestorPosition(CThostFtdcQryInvestorPositionField *pQryInvestorPosition, int nRequestID) = 0;

	///ÇëÇó²éÑ¯×Ê½ðÕË»§
	virtual int ReqQryTradingAccount(CThostFtdcQryTradingAccountField *pQryTradingAccount, int nRequestID) = 0;

	///ÇëÇó²éÑ¯Í¶×ÊÕß
	virtual int ReqQryInvestor(CThostFtdcQryInvestorField *pQryInvestor, int nRequestID) = 0;

	///ÇëÇó²éÑ¯½»Ò×±àÂë
	virtual int ReqQryTradingCode(CThostFtdcQryTradingCodeField *pQryTradingCode, int nRequestID) = 0;

	///ÇëÇó²éÑ¯ºÏÔ¼±£Ö¤½ðÂÊ
	virtual int ReqQryInstrumentMarginRate(CThostFtdcQryInstrumentMarginRateField *pQryInstrumentMarginRate, int nRequestID) = 0;

	///ÇëÇó²éÑ¯ºÏÔ¼ÊÖÐø·ÑÂÊ
	virtual int ReqQryInstrumentCommissionRate(CThostFtdcQryInstrumentCommissionRateField *pQryInstrumentCommissionRate, int nRequestID) = 0;

	///ÇëÇó²éÑ¯½»Ò×Ëù
	virtual int ReqQryExchange(CThostFtdcQryExchangeField *pQryExchange, int nRequestID) = 0;

	///ÇëÇó²éÑ¯²úÆ·
	virtual int ReqQryProduct(CThostFtdcQryProductField *pQryProduct, int nRequestID) = 0;

	///ÇëÇó²éÑ¯ºÏÔ¼
	virtual int ReqQryInstrument(CThostFtdcQryInstrumentField *pQryInstrument, int nRequestID) = 0;

	///ÇëÇó²éÑ¯ÐÐÇé
	virtual int ReqQryDepthMarketData(CThostFtdcQryDepthMarketDataField *pQryDepthMarketData, int nRequestID) = 0;

	///ÇëÇó²éÑ¯½»Ò×Ô±±¨ÅÌ»ú
	virtual int ReqQryTraderOffer(CThostFtdcQryTraderOfferField *pQryTraderOffer, int nRequestID) = 0;

	///ÇëÇó²éÑ¯Í¶×ÊÕß½áËã½á¹û
	virtual int ReqQrySettlementInfo(CThostFtdcQrySettlementInfoField *pQrySettlementInfo, int nRequestID) = 0;

	///ÇëÇó²éÑ¯×ªÕÊÒøÐÐ
	virtual int ReqQryTransferBank(CThostFtdcQryTransferBankField *pQryTransferBank, int nRequestID) = 0;

	///ÇëÇó²éÑ¯Í¶×ÊÕß³Ö²ÖÃ÷Ï¸
	virtual int ReqQryInvestorPositionDetail(CThostFtdcQryInvestorPositionDetailField *pQryInvestorPositionDetail, int nRequestID) = 0;

	///ÇëÇó²éÑ¯¿Í»§Í¨Öª
	virtual int ReqQryNotice(CThostFtdcQryNoticeField *pQryNotice, int nRequestID) = 0;

	///ÇëÇó²éÑ¯½áËãÐÅÏ¢È·ÈÏ
	virtual int ReqQrySettlementInfoConfirm(CThostFtdcQrySettlementInfoConfirmField *pQrySettlementInfoConfirm, int nRequestID) = 0;

	///ÇëÇó²éÑ¯Í¶×ÊÕß³Ö²ÖÃ÷Ï¸
	virtual int ReqQryInvestorPositionCombineDetail(CThostFtdcQryInvestorPositionCombineDetailField *pQryInvestorPositionCombineDetail, int nRequestID) = 0;

	///ÇëÇó²éÑ¯±£Ö¤½ð¼à¹ÜÏµÍ³¾­¼Í¹«Ë¾×Ê½ðÕË»§ÃÜÔ¿
	virtual int ReqQryCFMMCTradingAccountKey(CThostFtdcQryCFMMCTradingAccountKeyField *pQryCFMMCTradingAccountKey, int nRequestID) = 0;

	///ÇëÇó²éÑ¯²Öµ¥ÕÛµÖÐÅÏ¢
	virtual int ReqQryEWarrantOffset(CThostFtdcQryEWarrantOffsetField *pQryEWarrantOffset, int nRequestID) = 0;

	///ÇëÇó²éÑ¯Í¶×ÊÕßÆ·ÖÖ/¿çÆ·ÖÖ±£Ö¤½ð
	virtual int ReqQryInvestorProductGroupMargin(CThostFtdcQryInvestorProductGroupMarginField *pQryInvestorProductGroupMargin, int nRequestID) = 0;

	///ÇëÇó²éÑ¯½»Ò×Ëù±£Ö¤½ðÂÊ
	virtual int ReqQryExchangeMarginRate(CThostFtdcQryExchangeMarginRateField *pQryExchangeMarginRate, int nRequestID) = 0;

	///ÇëÇó²éÑ¯½»Ò×Ëùµ÷Õû±£Ö¤½ðÂÊ
	virtual int ReqQryExchangeMarginRateAdjust(CThostFtdcQryExchangeMarginRateAdjustField *pQryExchangeMarginRateAdjust, int nRequestID) = 0;

	///ÇëÇó²éÑ¯»ãÂÊ
	virtual int ReqQryExchangeRate(CThostFtdcQryExchangeRateField *pQryExchangeRate, int nRequestID) = 0;

	///ÇëÇó²éÑ¯¶þ¼¶´úÀí²Ù×÷Ô±ÒøÆÚÈ¨ÏÞ
	virtual int ReqQrySecAgentACIDMap(CThostFtdcQrySecAgentACIDMapField *pQrySecAgentACIDMap, int nRequestID) = 0;

	///ÇëÇó²éÑ¯²úÆ·±¨¼Û»ãÂÊ
	virtual int ReqQryProductExchRate(CThostFtdcQryProductExchRateField *pQryProductExchRate, int nRequestID) = 0;

	///ÇëÇó²éÑ¯²úÆ·×é
	virtual int ReqQryProductGroup(CThostFtdcQryProductGroupField *pQryProductGroup, int nRequestID) = 0;

	///ÇëÇó²éÑ¯×öÊÐÉÌºÏÔ¼ÊÖÐø·ÑÂÊ
	virtual int ReqQryMMInstrumentCommissionRate(CThostFtdcQryMMInstrumentCommissionRateField *pQryMMInstrumentCommissionRate, int nRequestID) = 0;

	///ÇëÇó²éÑ¯×öÊÐÉÌÆÚÈ¨ºÏÔ¼ÊÖÐø·Ñ
	virtual int ReqQryMMOptionInstrCommRate(CThostFtdcQryMMOptionInstrCommRateField *pQryMMOptionInstrCommRate, int nRequestID) = 0;

	///ÇëÇó²éÑ¯±¨µ¥ÊÖÐø·Ñ
	virtual int ReqQryInstrumentOrderCommRate(CThostFtdcQryInstrumentOrderCommRateField *pQryInstrumentOrderCommRate, int nRequestID) = 0;

	///ÇëÇó²éÑ¯×Ê½ðÕË»§
	virtual int ReqQrySecAgentTradingAccount(CThostFtdcQryTradingAccountField *pQryTradingAccount, int nRequestID) = 0;

	///ÇëÇó²éÑ¯¶þ¼¶´úÀíÉÌ×Ê½ðÐ£ÑéÄ£Ê½
	virtual int ReqQrySecAgentCheckMode(CThostFtdcQrySecAgentCheckModeField *pQrySecAgentCheckMode, int nRequestID) = 0;

	///ÇëÇó²éÑ¯¶þ¼¶´úÀíÉÌÐÅÏ¢
	virtual int ReqQrySecAgentTradeInfo(CThostFtdcQrySecAgentTradeInfoField *pQrySecAgentTradeInfo, int nRequestID) = 0;

	///ÇëÇó²éÑ¯ÆÚÈ¨½»Ò×³É±¾
	virtual int ReqQryOptionInstrTradeCost(CThostFtdcQryOptionInstrTradeCostField *pQryOptionInstrTradeCost, int nRequestID) = 0;

	///ÇëÇó²éÑ¯ÆÚÈ¨ºÏÔ¼ÊÖÐø·Ñ
	virtual int ReqQryOptionInstrCommRate(CThostFtdcQryOptionInstrCommRateField *pQryOptionInstrCommRate, int nRequestID) = 0;

	///ÇëÇó²éÑ¯Ö´ÐÐÐû¸æ
	virtual int ReqQryExecOrder(CThostFtdcQryExecOrderField *pQryExecOrder, int nRequestID) = 0;

	///ÇëÇó²éÑ¯Ñ¯¼Û
	virtual int ReqQryForQuote(CThostFtdcQryForQuoteField *pQryForQuote, int nRequestID) = 0;

	///ÇëÇó²éÑ¯±¨¼Û
	virtual int ReqQryQuote(CThostFtdcQryQuoteField *pQryQuote, int nRequestID) = 0;

	///ÇëÇó²éÑ¯ÆÚÈ¨×Ô¶Ô³å
	virtual int ReqQryOptionSelfClose(CThostFtdcQryOptionSelfCloseField *pQryOptionSelfClose, int nRequestID) = 0;

	///ÇëÇó²éÑ¯Í¶×Êµ¥Ôª
	virtual int ReqQryInvestUnit(CThostFtdcQryInvestUnitField *pQryInvestUnit, int nRequestID) = 0;

	///ÇëÇó²éÑ¯×éºÏºÏÔ¼°²È«ÏµÊý
	virtual int ReqQryCombInstrumentGuard(CThostFtdcQryCombInstrumentGuardField *pQryCombInstrumentGuard, int nRequestID) = 0;

	///ÇëÇó²éÑ¯ÉêÇë×éºÏ
	virtual int ReqQryCombAction(CThostFtdcQryCombActionField *pQryCombAction, int nRequestID) = 0;

	///ÇëÇó²éÑ¯×ªÕÊÁ÷Ë®
	virtual int ReqQryTransferSerial(CThostFtdcQryTransferSerialField *pQryTransferSerial, int nRequestID) = 0;

	///ÇëÇó²éÑ¯ÒøÆÚÇ©Ô¼¹ØÏµ
	virtual int ReqQryAccountregister(CThostFtdcQryAccountregisterField *pQryAccountregister, int nRequestID) = 0;

	///ÇëÇó²éÑ¯Ç©Ô¼ÒøÐÐ
	virtual int ReqQryContractBank(CThostFtdcQryContractBankField *pQryContractBank, int nRequestID) = 0;

	///ÇëÇó²éÑ¯Ô¤Âñµ¥
	virtual int ReqQryParkedOrder(CThostFtdcQryParkedOrderField *pQryParkedOrder, int nRequestID) = 0;

	///ÇëÇó²éÑ¯Ô¤Âñ³·µ¥
	virtual int ReqQryParkedOrderAction(CThostFtdcQryParkedOrderActionField *pQryParkedOrderAction, int nRequestID) = 0;

	///ÇëÇó²éÑ¯½»Ò×Í¨Öª
	virtual int ReqQryTradingNotice(CThostFtdcQryTradingNoticeField *pQryTradingNotice, int nRequestID) = 0;

	///ÇëÇó²éÑ¯¾­¼Í¹«Ë¾½»Ò×²ÎÊý
	virtual int ReqQryBrokerTradingParams(CThostFtdcQryBrokerTradingParamsField *pQryBrokerTradingParams, int nRequestID) = 0;

	///ÇëÇó²éÑ¯¾­¼Í¹«Ë¾½»Ò×Ëã·¨
	virtual int ReqQryBrokerTradingAlgos(CThostFtdcQryBrokerTradingAlgosField *pQryBrokerTradingAlgos, int nRequestID) = 0;

	///ÇëÇó²éÑ¯¼à¿ØÖÐÐÄÓÃ»§ÁîÅÆ
	virtual int ReqQueryCFMMCTradingAccountToken(CThostFtdcQueryCFMMCTradingAccountTokenField *pQueryCFMMCTradingAccountToken, int nRequestID) = 0;

	///ÆÚ»õ·¢ÆðÒøÐÐ×Ê½ð×ªÆÚ»õÇëÇó
	virtual int ReqFromBankToFutureByFuture(CThostFtdcReqTransferField *pReqTransfer, int nRequestID) = 0;

	///ÆÚ»õ·¢ÆðÆÚ»õ×Ê½ð×ªÒøÐÐÇëÇó
	virtual int ReqFromFutureToBankByFuture(CThostFtdcReqTransferField *pReqTransfer, int nRequestID) = 0;

	///ÆÚ»õ·¢Æð²éÑ¯ÒøÐÐÓà¶îÇëÇó
	virtual int ReqQueryBankAccountMoneyByFuture(CThostFtdcReqQueryAccountField *pReqQueryAccount, int nRequestID) = 0;

	///ÇëÇó²éÑ¯·ÖÀàºÏÔ¼
	virtual int ReqQryClassifiedInstrument(CThostFtdcQryClassifiedInstrumentField *pQryClassifiedInstrument, int nRequestID) = 0;

	///ÇëÇó×éºÏÓÅ»Ý±ÈÀý
	virtual int ReqQryCombPromotionParam(CThostFtdcQryCombPromotionParamField *pQryCombPromotionParam, int nRequestID) = 0;

	///Í¶×ÊÕß·çÏÕ½áËã³Ö²Ö²éÑ¯
	virtual int ReqQryRiskSettleInvstPosition(CThostFtdcQryRiskSettleInvstPositionField *pQryRiskSettleInvstPosition, int nRequestID) = 0;

	///·çÏÕ½áËã²úÆ·²éÑ¯
	virtual int ReqQryRiskSettleProductStatus(CThostFtdcQryRiskSettleProductStatusField *pQryRiskSettleProductStatus, int nRequestID) = 0;

	///SPBMÆÚ»õºÏÔ¼²ÎÊý²éÑ¯
	virtual int ReqQrySPBMFutureParameter(CThostFtdcQrySPBMFutureParameterField *pQrySPBMFutureParameter, int nRequestID) = 0;

	///SPBMÆÚÈ¨ºÏÔ¼²ÎÊý²éÑ¯
	virtual int ReqQrySPBMOptionParameter(CThostFtdcQrySPBMOptionParameterField *pQrySPBMOptionParameter, int nRequestID) = 0;

	///SPBMÆ·ÖÖÄÚ¶ÔËø²ÖÕÛ¿Û²ÎÊý²éÑ¯
	virtual int ReqQrySPBMIntraParameter(CThostFtdcQrySPBMIntraParameterField *pQrySPBMIntraParameter, int nRequestID) = 0;

	///SPBM¿çÆ·ÖÖµÖ¿Û²ÎÊý²éÑ¯
	virtual int ReqQrySPBMInterParameter(CThostFtdcQrySPBMInterParameterField *pQrySPBMInterParameter, int nRequestID) = 0;

	///SPBM×éºÏ±£Ö¤½ðÌ×²Í²éÑ¯
	virtual int ReqQrySPBMPortfDefinition(CThostFtdcQrySPBMPortfDefinitionField *pQrySPBMPortfDefinition, int nRequestID) = 0;

	///Í¶×ÊÕßSPBMÌ×²ÍÑ¡Ôñ²éÑ¯
	virtual int ReqQrySPBMInvestorPortfDef(CThostFtdcQrySPBMInvestorPortfDefField *pQrySPBMInvestorPortfDef, int nRequestID) = 0;

	///Í¶×ÊÕßÐÂÐÍ×éºÏ±£Ö¤½ðÏµÊý²éÑ¯
	virtual int ReqQryInvestorPortfMarginRatio(CThostFtdcQryInvestorPortfMarginRatioField *pQryInvestorPortfMarginRatio, int nRequestID) = 0;

	///Í¶×ÊÕß²úÆ·SPBMÃ÷Ï¸²éÑ¯
	virtual int ReqQryInvestorProdSPBMDetail(CThostFtdcQryInvestorProdSPBMDetailField *pQryInvestorProdSPBMDetail, int nRequestID) = 0;

	///Í¶×ÊÕßÉÌÆ·×éSPMM¼ÇÂ¼²éÑ¯
	virtual int ReqQryInvestorCommoditySPMMMargin(CThostFtdcQryInvestorCommoditySPMMMarginField *pQryInvestorCommoditySPMMMargin, int nRequestID) = 0;

	///Í¶×ÊÕßÉÌÆ·ÈºSPMM¼ÇÂ¼²éÑ¯
	virtual int ReqQryInvestorCommodityGroupSPMMMargin(CThostFtdcQryInvestorCommodityGroupSPMMMarginField *pQryInvestorCommodityGroupSPMMMargin, int nRequestID) = 0;

	///SPMMºÏÔ¼²ÎÊý²éÑ¯
	virtual int ReqQrySPMMInstParam(CThostFtdcQrySPMMInstParamField *pQrySPMMInstParam, int nRequestID) = 0;

	///SPMM²úÆ·²ÎÊý²éÑ¯
	virtual int ReqQrySPMMProductParam(CThostFtdcQrySPMMProductParamField *pQrySPMMProductParam, int nRequestID) = 0;

	///SPBM¸½¼Ó¿çÆ·ÖÖµÖ¿Û²ÎÊý²éÑ¯
	virtual int ReqQrySPBMAddOnInterParameter(CThostFtdcQrySPBMAddOnInterParameterField *pQrySPBMAddOnInterParameter, int nRequestID) = 0;

	///RCAMS²úÆ·×éºÏÐÅÏ¢²éÑ¯
	virtual int ReqQryRCAMSCombProductInfo(CThostFtdcQryRCAMSCombProductInfoField *pQryRCAMSCombProductInfo, int nRequestID) = 0;

	///RCAMSÍ¬ºÏÔ¼·çÏÕ¶Ô³å²ÎÊý²éÑ¯
	virtual int ReqQryRCAMSInstrParameter(CThostFtdcQryRCAMSInstrParameterField *pQryRCAMSInstrParameter, int nRequestID) = 0;

	///RCAMSÆ·ÖÖÄÚ·çÏÕ¶Ô³å²ÎÊý²éÑ¯
	virtual int ReqQryRCAMSIntraParameter(CThostFtdcQryRCAMSIntraParameterField *pQryRCAMSIntraParameter, int nRequestID) = 0;

	///RCAMS¿çÆ·ÖÖ·çÏÕÕÛµÖ²ÎÊý²éÑ¯
	virtual int ReqQryRCAMSInterParameter(CThostFtdcQryRCAMSInterParameterField *pQryRCAMSInterParameter, int nRequestID) = 0;

	///RCAMS¿ÕÍ·ÆÚÈ¨·çÏÕµ÷Õû²ÎÊý²éÑ¯
	virtual int ReqQryRCAMSShortOptAdjustParam(CThostFtdcQryRCAMSShortOptAdjustParamField *pQryRCAMSShortOptAdjustParam, int nRequestID) = 0;

	///RCAMS²ßÂÔ×éºÏ³Ö²Ö²éÑ¯
	virtual int ReqQryRCAMSInvestorCombPosition(CThostFtdcQryRCAMSInvestorCombPositionField *pQryRCAMSInvestorCombPosition, int nRequestID) = 0;

	///Í¶×ÊÕßÆ·ÖÖRCAMS±£Ö¤½ð²éÑ¯
	virtual int ReqQryInvestorProdRCAMSMargin(CThostFtdcQryInvestorProdRCAMSMarginField *pQryInvestorProdRCAMSMargin, int nRequestID) = 0;

	///RULEºÏÔ¼±£Ö¤½ð²ÎÊý²éÑ¯
	virtual int ReqQryRULEInstrParameter(CThostFtdcQryRULEInstrParameterField *pQryRULEInstrParameter, int nRequestID) = 0;

	///RULEÆ·ÖÖÄÚ¶ÔËø²ÖÕÛ¿Û²ÎÊý²éÑ¯
	virtual int ReqQryRULEIntraParameter(CThostFtdcQryRULEIntraParameterField *pQryRULEIntraParameter, int nRequestID) = 0;

	///RULE¿çÆ·ÖÖµÖ¿Û²ÎÊý²éÑ¯
	virtual int ReqQryRULEInterParameter(CThostFtdcQryRULEInterParameterField *pQryRULEInterParameter, int nRequestID) = 0;

	///Í¶×ÊÕß²úÆ·RULE±£Ö¤½ð²éÑ¯
	virtual int ReqQryInvestorProdRULEMargin(CThostFtdcQryInvestorProdRULEMarginField *pQryInvestorProdRULEMargin, int nRequestID) = 0;

	///Í¶×ÊÕßÐÂÐÍ×éºÏ±£Ö¤½ð¿ª¹Ø²éÑ¯
	virtual int ReqQryInvestorPortfSetting(CThostFtdcQryInvestorPortfSettingField *pQryInvestorPortfSetting, int nRequestID) = 0;

	///Í¶×ÊÕßÉê±¨·Ñ½×ÌÝÊÕÈ¡¼ÇÂ¼²éÑ¯
	virtual int ReqQryInvestorInfoCommRec(CThostFtdcQryInvestorInfoCommRecField *pQryInvestorInfoCommRec, int nRequestID) = 0;

	///×éºÏÍÈÐÅÏ¢²éÑ¯
	virtual int ReqQryCombLeg(CThostFtdcQryCombLegField *pQryCombLeg, int nRequestID) = 0;

	///¶Ô³åÉèÖÃÇëÇó
	virtual int ReqOffsetSetting(CThostFtdcInputOffsetSettingField *pInputOffsetSetting, int nRequestID) = 0;

	///¶Ô³åÉèÖÃ³·ÏúÇëÇó
	virtual int ReqCancelOffsetSetting(CThostFtdcInputOffsetSettingField *pInputOffsetSetting, int nRequestID) = 0;

	///Í¶×ÊÕß¶Ô³åÉèÖÃ²éÑ¯
	virtual int ReqQryOffsetSetting(CThostFtdcQryOffsetSettingField *pQryOffsetSetting, int nRequestID) = 0;
protected:
	~CThostFtdcTraderApi(){};
};

#endif
