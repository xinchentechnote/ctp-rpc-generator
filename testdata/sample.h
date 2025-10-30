#if defined(ISLIB) && defined(WIN32)
#ifdef LIB_TRADER_API_EXPORT
#define TRADER_API_EXPORT __declspec(dllexport)
#else
#define TRADER_API_EXPORT __declspec(dllimport)
#endif
#else
#define TRADER_API_EXPORT
#endif

class CThostFtdcTraderApi {
public:
  static CThostFtdcTraderApi *CreateFtdcTraderApi(const char *pszFlowPath = "");
  virtual void Release(int data);

  virtual void Init() = 0;
  virtual const char *GetTradingDay() = 0;

protected:
  ~CThostFtdcTraderApi(){};
};

class TRADER_API_EXPORT CThostFtdcTraderApi {
public:
  static CThostFtdcTraderApi *CreateFtdcTraderApi(const char *pszFlowPath = "");
  virtual int UnSubscribeMarketData(char *ppInstrumentID[ ], int nCount) = 0;
};