// Class: Sexy::ChinaMobileMMChannelPurchaseAdapter


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ChinaMobileMMChannelPurchaseAdapter::GetPurchasePlatform() */

void __thiscall
Sexy::ChinaMobileMMChannelPurchaseAdapter::GetPurchasePlatform
          (ChinaMobileMMChannelPurchaseAdapter *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"ChinaMobileMM");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* Sexy::ChinaMobileMMChannelPurchaseAdapter::BindJavaMethods(_JNIEnv*, JavaClass const&) */

void __thiscall
Sexy::ChinaMobileMMChannelPurchaseAdapter::BindJavaMethods
          (ChinaMobileMMChannelPurchaseAdapter *this,_JNIEnv *param_1,JavaClass *param_2)

{
  JavaMethodBase::init
            ((JavaMethodBase *)JavaInitializeSDK,param_1,param_2,"InitializeSDK",
             "(Ljava/lang/String;Ljava/lang/String;)V");
  JavaMethodBase::init
            ((JavaMethodBase *)JavaRequestPay,param_1,param_2,"RequestPay","(Ljava/lang/String;)V");
  return;
}


/* non-virtual thunk to Sexy::ChinaMobileMMChannelPurchaseAdapter::BindJavaMethods(_JNIEnv*,
   JavaClass const&) */

void __thiscall
Sexy::ChinaMobileMMChannelPurchaseAdapter::BindJavaMethods
          (ChinaMobileMMChannelPurchaseAdapter *this,_JNIEnv *param_1,JavaClass *param_2)

{
  BindJavaMethods(this + -0x18,param_1,param_2);
  return;
}


/* Sexy::ChinaMobileMMChannelPurchaseAdapter::~ChinaMobileMMChannelPurchaseAdapter() */

void __thiscall
Sexy::ChinaMobileMMChannelPurchaseAdapter::~ChinaMobileMMChannelPurchaseAdapter
          (ChinaMobileMMChannelPurchaseAdapter *this)

{
  *(undefined ***)this = &PTR__ChinaMobileMMChannelPurchaseAdapter_0690ba30;
  *(undefined ***)(this + 0x18) = &PTR__ChinaMobileMMChannelPurchaseAdapter_0690bb80;
  JavaBound<Sexy::ChinaMobileMMChannelPurchaseAdapter>::~JavaBound
            ((JavaBound<Sexy::ChinaMobileMMChannelPurchaseAdapter> *)(this + 0x18));
  IPurchaseAdapter::~IPurchaseAdapter((IPurchaseAdapter *)this);
  return;
}


/* non-virtual thunk to
   Sexy::ChinaMobileMMChannelPurchaseAdapter::~ChinaMobileMMChannelPurchaseAdapter() */

void __thiscall
Sexy::ChinaMobileMMChannelPurchaseAdapter::~ChinaMobileMMChannelPurchaseAdapter
          (ChinaMobileMMChannelPurchaseAdapter *this)

{
  ~ChinaMobileMMChannelPurchaseAdapter(this + -0x18);
  return;
}


/* Sexy::ChinaMobileMMChannelPurchaseAdapter::~ChinaMobileMMChannelPurchaseAdapter() */

void __thiscall
Sexy::ChinaMobileMMChannelPurchaseAdapter::~ChinaMobileMMChannelPurchaseAdapter
          (ChinaMobileMMChannelPurchaseAdapter *this)

{
  ~ChinaMobileMMChannelPurchaseAdapter(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to
   Sexy::ChinaMobileMMChannelPurchaseAdapter::~ChinaMobileMMChannelPurchaseAdapter() */

void __thiscall
Sexy::ChinaMobileMMChannelPurchaseAdapter::~ChinaMobileMMChannelPurchaseAdapter
          (ChinaMobileMMChannelPurchaseAdapter *this)

{
  ~ChinaMobileMMChannelPurchaseAdapter(this + -0x18);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ChinaMobileMMChannelPurchaseAdapter::BindNativeMethods(_JNIEnv*, JavaClass const&) */

void __thiscall
Sexy::ChinaMobileMMChannelPurchaseAdapter::BindNativeMethods
          (ChinaMobileMMChannelPurchaseAdapter *this,_JNIEnv *param_1,JavaClass *param_2)

{
  char *local_20;
  char *local_18;
  code *local_10;
  long local_8;
  
  local_20 = "FirePaymentComplete";
  local_10 = PaymentHook;
  local_8 = ___stack_chk_guard;
  local_18 = "(JI)V";
  JavaClass::registerNatives((JNINativeMethod *)param_2,(int)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to Sexy::ChinaMobileMMChannelPurchaseAdapter::BindNativeMethods(_JNIEnv*,
   JavaClass const&) */

void __thiscall
Sexy::ChinaMobileMMChannelPurchaseAdapter::BindNativeMethods
          (ChinaMobileMMChannelPurchaseAdapter *this,_JNIEnv *param_1,JavaClass *param_2)

{
  BindNativeMethods(this + -0x18,param_1,param_2);
  return;
}


/* Sexy::ChinaMobileMMChannelPurchaseAdapter::ChinaMobileMMChannelPurchaseAdapter() */

void __thiscall
Sexy::ChinaMobileMMChannelPurchaseAdapter::ChinaMobileMMChannelPurchaseAdapter
          (ChinaMobileMMChannelPurchaseAdapter *this)

{
  char *pcVar1;
  
  IPurchaseAdapter::IPurchaseAdapter((IPurchaseAdapter *)this);
  JavaBound<Sexy::ChinaMobileMMChannelPurchaseAdapter>::JavaBound
            ((JavaBound<Sexy::ChinaMobileMMChannelPurchaseAdapter> *)(this + 0x18));
  *(undefined ***)this = &PTR__ChinaMobileMMChannelPurchaseAdapter_0690ba30;
  *(undefined ***)(this + 0x18) = &PTR__ChinaMobileMMChannelPurchaseAdapter_0690bb80;
  __android_log_print(4,"ChinaMobileMMChannelPurchaseAdapter","Let\'s get retarded!");
  pcVar1 = (char *)Android::Util::GetJNIEnv();
  JavaBound<Sexy::ChinaMobileMMChannelPurchaseAdapter>::ConstructJava
            ((_JNIEnv *)(this + 0x18),pcVar1,
             "com/popcap/purchase/ChinaMobileMMChannel/ChinaMobileMMChannelPurchase",&DAT_055a4820,
             this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ChinaMobileMMChannelPurchaseAdapter::PaymentHook(_JNIEnv*, _jobject*, long long, int) */

void Sexy::ChinaMobileMMChannelPurchaseAdapter::PaymentHook
               (_JNIEnv *param_1,_jobject *param_2,longlong param_3,int param_4)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"");
  nop();
  switch(param_4) {
  case 0:
    AndroidAppDriver::StaticEnqueueCallback<Sexy::IPurchaseAdapter,std::string>
              ((IPurchaseAdapter *)param_3,(_func_void_string_ptr *)0x98,(string *)0x1);
    break;
  case 1:
    AndroidAppDriver::
    StaticEnqueueCallback<Sexy::IPurchaseAdapter,Sexy::IPurchaseDriver::CauseForIncompletion>
              ((IPurchaseAdapter *)param_3,(_func_void_CauseForIncompletion_ptr *)0xa0,
               (CauseForIncompletion *)0x1);
    break;
  case 2:
    AndroidAppDriver::
    StaticEnqueueCallback<Sexy::IPurchaseAdapter,Sexy::IPurchaseDriver::CauseForIncompletion>
              ((IPurchaseAdapter *)param_3,(_func_void_CauseForIncompletion_ptr *)0xa0,
               (CauseForIncompletion *)0x1);
    break;
  case 3:
    AndroidAppDriver::
    StaticEnqueueCallback<Sexy::IPurchaseAdapter,Sexy::IPurchaseDriver::CauseForIncompletion>
              ((IPurchaseAdapter *)param_3,(_func_void_CauseForIncompletion_ptr *)0xa0,
               (CauseForIncompletion *)0x1);
  }
  std::string::~string(asStack_10);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ChinaMobileMMChannelPurchaseAdapter::Initialize() */

void __thiscall
Sexy::ChinaMobileMMChannelPurchaseAdapter::Initialize(ChinaMobileMMChannelPurchaseAdapter *this)

{
  int iVar1;
  _jobject *p_Var2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 *__n;
  undefined1 auStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  __n = auStack_20;
  nop();
  __android_log_print(2,"ChinaMobileMMPurchase","Initialize");
  p_Var2 = (_jobject *)Android::Util::GetJNIEnv();
  std::string::string(asStack_18,"");
  nop();
  std::string::string(asStack_10,"");
  nop();
  iVar1 = LawnApp::GetPlatform(gLawnApp);
  if ((iVar1 - 4U < 2) || (iVar1 - 0xfU < 0x2b)) {
    std::string::append(asStack_18,"300002883533",(size_t)__n);
    std::string::append(asStack_10,"8ECE02267C0529F6",(size_t)__n);
  }
  else if ((iVar1 - 0x43U < 0x70) || (iVar1 == 0xb)) {
    std::string::append(asStack_18,"300003374011",(size_t)__n);
    std::string::append(asStack_10,"A8AAE6BE363D69A3",(size_t)__n);
  }
  FUN_0547429c(asStack_18);
  uVar3 = _JNIEnv::NewStringUTF((char *)p_Var2);
  FUN_0547429c(asStack_10);
  uVar4 = _JNIEnv::NewStringUTF((char *)p_Var2);
  JavaMethod<void>::operator()
            ((_JNIEnv *)JavaInitializeSDK,p_Var2,*(undefined8 *)(this + 0x20),uVar3,uVar4);
  _JNIEnv::DeleteLocalRef(p_Var2);
  _JNIEnv::DeleteLocalRef(p_Var2);
  std::string::~string(asStack_10);
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::ChinaMobileMMChannelPurchaseAdapter::GetProductInfo(std::string const&) */

void Sexy::ChinaMobileMMChannelPurchaseAdapter::GetProductInfo(string *param_1)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  string *in_x1;
  char *__n;
  long in_x8;
  
  uVar3 = FUN_0547429c();
  __n = "GetProductInfo( %s )";
  __android_log_print(2,"ChinaMobileMMChannelPurchaseAdapter","GetProductInfo( %s )",uVar3);
  IPurchaseAdapter::GetProductInfo(param_1);
  iVar2 = LawnApp::GetPlatform(gLawnApp);
  if (((iVar2 - 0xfU < 0x2b) || (iVar2 - 4U < 2)) || (iVar2 == 2)) {
    bVar1 = std::operator==(in_x1,"com.popcap.ios.chs.PVZ2.diamonds3");
    if ((bVar1) ||
       (bVar1 = std::operator==(in_x1,"com.popcap.ios.chs.PVZ2.diamonds.newer.present"), bVar1)) {
      std::string::append((string *)(in_x8 + 8),"30000288353301",(size_t)__n);
    }
    else {
      bVar1 = std::operator==(in_x1,"com.popcap.ios.chs.PVZ2.diamonds4");
      if (bVar1) {
        std::string::append((string *)(in_x8 + 8),"30000288353302",(size_t)__n);
        return;
      }
      bVar1 = std::operator==(in_x1,"com.popcap.ios.chs.PVZ2.diamonds5");
      if (bVar1) {
        std::string::append((string *)(in_x8 + 8),"30000288353303",(size_t)__n);
      }
      else {
        bVar1 = std::operator==(in_x1,"com.popcap.ios.chs.PVZ2.diamonds6");
        if (bVar1) {
          std::string::append((string *)(in_x8 + 8),"30000288353304",(size_t)__n);
        }
        else {
          bVar1 = std::operator==(in_x1,"com.popcap.pvz2.chinamobilemm.coin100");
          if ((((((bVar1) ||
                 (bVar1 = std::operator==(in_x1,"com.popcap.pvz2.chinamobilemm.coin500"), bVar1)) ||
                ((bVar1 = std::operator==(in_x1,"com.popcap.pvz2.chinamobilemm.coin1000"), bVar1 ||
                 ((((bVar1 = std::operator==(in_x1,"com.popcap.pvz2.chinamobilemm.coin5000"), bVar1
                    || (bVar1 = std::operator==(in_x1,"com.popcap.pvz2.chinamobilemm.egyptkey"),
                       bVar1)) ||
                   (bVar1 = std::operator==(in_x1,"com.popcap.pvz2.chinamobilemm.gem5"), bVar1)) ||
                  ((bVar1 = std::operator==(in_x1,"com.popcap.pvz2.chinamobilemm.gem10"), bVar1 ||
                   (bVar1 = std::operator==(in_x1,"com.popcap.pvz2.chinamobilemm.gem50"), bVar1)))))
                 ))) || (bVar1 = std::operator==(in_x1,"com.popcap.pvz2.chinamobilemm.snowpea"),
                        bVar1)) ||
              (((bVar1 = std::operator==(in_x1,"com.popcap.pvz2.chinamobilemm.torchwood"), bVar1 ||
                (bVar1 = std::operator==(in_x1,"com.popcap.pvz2.chinamobilemm.peapod"), bVar1)) ||
               ((bVar1 = std::operator==(in_x1,"com.popcap.pvz2.chinamobilemm.kernelpult"), bVar1 ||
                (((bVar1 = std::operator==(in_x1,"com.popcap.pvz2.chinamobilemm.lightningreed"),
                  bVar1 || (bVar1 = std::operator==(in_x1,
                                                  "com.popcap.pvz2.chinamobilemm.coconutcannon"),
                           bVar1)) ||
                 (bVar1 = std::operator==(in_x1,"com.popcap.pvz2.chinamobilemm.piratekey"), bVar1)))
                ))))) ||
             (((((bVar1 = std::operator==(in_x1,"com.popcap.pvz2.chinamobilemm.melonpult"), bVar1 ||
                 (bVar1 = std::operator==(in_x1,"com.popcap.pvz2.chinamobilemm.imitater"), bVar1))
                || (bVar1 = std::operator==(in_x1,"com.popcap.pvz2.chinamobilemm.cowboykey"), bVar1)
                ) || ((bVar1 = std::operator==(in_x1,"com.popcap.pvz2.chinamobilemm.firegourd"),
                      bVar1 || (bVar1 = std::operator==(in_x1,"com.popcap.pvz2.chinamobilemm.peach")
                               , bVar1)))) ||
              (bVar1 = std::operator==(in_x1,"com.popcap.pvz2.chinamobilemm.kongfukey"), bVar1)))) {
            std::string::append((string *)(in_x8 + 8),"30000288353305",(size_t)__n);
          }
          else {
            bVar1 = std::operator==(in_x1,
                                    "com.popcap.ios.chs.PVZ2.diamonds.newer.present.chinamobilemm");
            if (bVar1) {
              std::string::append((string *)(in_x8 + 8),"30000288353306",(size_t)__n);
            }
            else {
              bVar1 = std::operator==(in_x1,"com.popcap.ios.chs.PVZ2.diamonds.gemreturn");
              if (bVar1) {
                std::string::append((string *)(in_x8 + 8),"30000288353307",(size_t)__n);
              }
              else {
                bVar1 = std::operator==(in_x1,"com.popcap.ios.chs.PVZ2.money.planttrial_1");
                if (bVar1) {
                  std::string::append((string *)(in_x8 + 8),"30000288353308",(size_t)__n);
                }
                else {
                  bVar1 = std::operator==(in_x1,"com.popcap.ios.chs.PVZ2.money.planttrial_2");
                  if (bVar1) {
                    std::string::append((string *)(in_x8 + 8),"30000288353309",(size_t)__n);
                  }
                  else {
                    bVar1 = std::operator==(in_x1,"com.popcap.ios.chs.PVZ2.money.planttrial_3");
                    if ((((bVar1) ||
                         (bVar1 = std::operator==(in_x1,"com.popcap.ios.chs.PVZ2.money.planttrial_4"
                                                 ), bVar1)) ||
                        (bVar1 = std::operator==(in_x1,"com.popcap.ios.chs.PVZ2.money.planttrial_5")
                        , bVar1)) ||
                       (bVar1 = std::operator==(in_x1,"com.popcap.ios.chs.PVZ2.money.planttrial_6"),
                       bVar1)) {
                      std::string::append((string *)(in_x8 + 8),"30000288353324",(size_t)__n);
                    }
                    else {
                      bVar1 = std::operator==(in_x1,"com.popcap.ios.chs.PVZ2.money.planttrial_7");
                      if ((bVar1) ||
                         (bVar1 = std::operator==(in_x1,"com.popcap.ios.chs.PVZ2.money.planttrial_8"
                                                 ), bVar1)) {
                        std::string::append((string *)(in_x8 + 8),"30000288353325",(size_t)__n);
                      }
                      else {
                        bVar1 = std::operator==(in_x1,"com.popcap.ios.chs.PVZ2.money.planttrial_9");
                        if ((((bVar1) ||
                             ((bVar1 = std::operator==(in_x1,
                                                  "com.popcap.ios.chs.PVZ2.money.planttrial_10"),
                              bVar1 || (bVar1 = std::operator==(in_x1,
                                                  "com.popcap.ios.chs.PVZ2.money.planttrial_11"),
                                       bVar1)))) ||
                            (bVar1 = std::operator==(in_x1,
                                                  "com.popcap.ios.chs.PVZ2.money.planttrial_12"),
                            bVar1)) ||
                           (((((bVar1 = std::operator==(in_x1,
                                                  "com.popcap.ios.chs.PVZ2.money.planttrial_13"),
                               bVar1 || (bVar1 = std::operator==(in_x1,
                                                  "com.popcap.ios.chs.PVZ2.money.planttrial_14"),
                                        bVar1)) ||
                              (bVar1 = std::operator==(in_x1,
                                                  "com.popcap.ios.chs.PVZ2.money.planttrial_15"),
                              bVar1)) ||
                             ((bVar1 = std::operator==(in_x1,
                                                  "com.popcap.ios.chs.PVZ2.money.planttrial_16"),
                              bVar1 || (bVar1 = std::operator==(in_x1,
                                                  "com.popcap.ios.chs.PVZ2.money.planttrial_17"),
                                       bVar1)))) ||
                            (bVar1 = std::operator==(in_x1,
                                                  "com.popcap.ios.chs.PVZ2.money.planttrial_18"),
                            bVar1)))) {
                          std::string::append((string *)(in_x8 + 8),"30000288353326",(size_t)__n);
                        }
                        else {
                          bVar1 = std::operator==(in_x1,"com.popcap.chs.PVZ2.buy.mower");
                          if (bVar1) {
                            std::string::append((string *)(in_x8 + 8),"30000288353321",(size_t)__n);
                          }
                          else {
                            bVar1 = std::operator==(in_x1,"com.popcap.chs.PVZ2.buy.present");
                            if (bVar1) {
                              std::string::append((string *)(in_x8 + 8),"30000288353322",(size_t)__n
                                                 );
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  else if (((iVar2 == 0xb) || (iVar2 - 0x43U < 0x70)) || (iVar2 == 8)) {
    bVar1 = std::operator==(in_x1,"com.popcap.ios.chs.PVZ2.diamonds3");
    if ((bVar1) ||
       (bVar1 = std::operator==(in_x1,"com.popcap.ios.chs.PVZ2.diamonds.newer.present"), bVar1)) {
      std::string::append((string *)(in_x8 + 8),"30000337401101",(size_t)__n);
      return;
    }
    bVar1 = std::operator==(in_x1,"com.popcap.ios.chs.PVZ2.diamonds4");
    if (bVar1) {
      std::string::append((string *)(in_x8 + 8),"30000337401102",(size_t)__n);
    }
    else {
      bVar1 = std::operator==(in_x1,"com.popcap.ios.chs.PVZ2.diamonds5");
      if (bVar1) {
        std::string::append((string *)(in_x8 + 8),"30000337401103",(size_t)__n);
      }
      else {
        bVar1 = std::operator==(in_x1,"com.popcap.ios.chs.PVZ2.diamonds6");
        if (bVar1) {
          std::string::append((string *)(in_x8 + 8),"30000337401104",(size_t)__n);
        }
        else {
          bVar1 = std::operator==(in_x1,"com.popcap.pvz2.chinamobilemm.coin100");
          if (((((((bVar1) ||
                  (bVar1 = std::operator==(in_x1,"com.popcap.pvz2.chinamobilemm.coin500"), bVar1))
                 || (bVar1 = std::operator==(in_x1,"com.popcap.pvz2.chinamobilemm.coin1000"), bVar1)
                 ) || ((bVar1 = std::operator==(in_x1,"com.popcap.pvz2.chinamobilemm.coin5000"),
                       bVar1 || (bVar1 = std::operator==(in_x1,
                                                  "com.popcap.pvz2.chinamobilemm.egyptkey"), bVar1))
                      )) ||
               ((bVar1 = std::operator==(in_x1,"com.popcap.pvz2.chinamobilemm.gem5"), bVar1 ||
                ((bVar1 = std::operator==(in_x1,"com.popcap.pvz2.chinamobilemm.gem10"), bVar1 ||
                 (bVar1 = std::operator==(in_x1,"com.popcap.pvz2.chinamobilemm.gem50"), bVar1))))))
              || (((bVar1 = std::operator==(in_x1,"com.popcap.pvz2.chinamobilemm.snowpea"), bVar1 ||
                   (((bVar1 = std::operator==(in_x1,"com.popcap.pvz2.chinamobilemm.torchwood"),
                     bVar1 || (bVar1 = std::operator==(in_x1,"com.popcap.pvz2.chinamobilemm.peapod")
                              , bVar1)) ||
                    (bVar1 = std::operator==(in_x1,"com.popcap.pvz2.chinamobilemm.kernelpult"),
                    bVar1)))) ||
                  ((((bVar1 = std::operator==(in_x1,"com.popcap.pvz2.chinamobilemm.lightningreed"),
                     bVar1 || (bVar1 = std::operator==(in_x1,
                                                  "com.popcap.pvz2.chinamobilemm.coconutcannon"),
                              bVar1)) ||
                    ((bVar1 = std::operator==(in_x1,"com.popcap.pvz2.chinamobilemm.piratekey"),
                     bVar1 || ((bVar1 = std::operator==(in_x1,
                                                  "com.popcap.pvz2.chinamobilemm.melonpult"), bVar1
                               || (bVar1 = std::operator==(in_x1,
                                                  "com.popcap.pvz2.chinamobilemm.imitater"), bVar1))
                              )))) ||
                   (bVar1 = std::operator==(in_x1,"com.popcap.pvz2.chinamobilemm.cowboykey"), bVar1)
                   ))))) ||
             (((bVar1 = std::operator==(in_x1,"com.popcap.pvz2.chinamobilemm.firegourd"), bVar1 ||
               (bVar1 = std::operator==(in_x1,"com.popcap.pvz2.chinamobilemm.peach"), bVar1)) ||
              (bVar1 = std::operator==(in_x1,"com.popcap.pvz2.chinamobilemm.kongfukey"), bVar1)))) {
            std::string::append((string *)(in_x8 + 8),"30000337401106",(size_t)__n);
          }
          else {
            bVar1 = std::operator==(in_x1,
                                    "com.popcap.ios.chs.PVZ2.diamonds.newer.present.chinamobilemm");
            if (bVar1) {
              std::string::append((string *)(in_x8 + 8),"30000337401105",(size_t)__n);
            }
            else {
              bVar1 = std::operator==(in_x1,"com.popcap.ios.chs.PVZ2.diamonds.gemreturn");
              if (bVar1) {
                std::string::append((string *)(in_x8 + 8),"30000337401107",(size_t)__n);
              }
              else {
                bVar1 = std::operator==(in_x1,"com.popcap.ios.chs.PVZ2.money.planttrial_1");
                if (bVar1) {
                  std::string::append((string *)(in_x8 + 8),"30000337401108",(size_t)__n);
                }
                else {
                  bVar1 = std::operator==(in_x1,"com.popcap.ios.chs.PVZ2.money.planttrial_2");
                  if (bVar1) {
                    std::string::append((string *)(in_x8 + 8),"30000337401109",(size_t)__n);
                  }
                  else {
                    bVar1 = std::operator==(in_x1,"com.popcap.ios.chs.PVZ2.money.planttrial_3");
                    if (((bVar1) ||
                        (bVar1 = std::operator==(in_x1,"com.popcap.ios.chs.PVZ2.money.planttrial_4")
                        , bVar1)) ||
                       ((bVar1 = std::operator==(in_x1,"com.popcap.ios.chs.PVZ2.money.planttrial_5")
                        , bVar1 ||
                        (bVar1 = std::operator==(in_x1,"com.popcap.ios.chs.PVZ2.money.planttrial_6")
                        , bVar1)))) {
                      std::string::append((string *)(in_x8 + 8),"30000337401123",(size_t)__n);
                    }
                    else {
                      bVar1 = std::operator==(in_x1,"com.popcap.ios.chs.PVZ2.money.planttrial_7");
                      if ((bVar1) ||
                         (bVar1 = std::operator==(in_x1,"com.popcap.ios.chs.PVZ2.money.planttrial_8"
                                                 ), bVar1)) {
                        std::string::append((string *)(in_x8 + 8),"30000337401124",(size_t)__n);
                      }
                      else {
                        bVar1 = std::operator==(in_x1,"com.popcap.ios.chs.PVZ2.money.planttrial_9");
                        if (((bVar1) ||
                            (((((bVar1 = std::operator==(in_x1,
                                                  "com.popcap.ios.chs.PVZ2.money.planttrial_10"),
                                bVar1 || (bVar1 = std::operator==(in_x1,
                                                  "com.popcap.ios.chs.PVZ2.money.planttrial_11"),
                                         bVar1)) ||
                               (bVar1 = std::operator==(in_x1,
                                                  "com.popcap.ios.chs.PVZ2.money.planttrial_12"),
                               bVar1)) ||
                              ((bVar1 = std::operator==(in_x1,
                                                  "com.popcap.ios.chs.PVZ2.money.planttrial_13"),
                               bVar1 || (bVar1 = std::operator==(in_x1,
                                                  "com.popcap.ios.chs.PVZ2.money.planttrial_14"),
                                        bVar1)))) ||
                             (bVar1 = std::operator==(in_x1,
                                                  "com.popcap.ios.chs.PVZ2.money.planttrial_15"),
                             bVar1)))) ||
                           (((bVar1 = std::operator==(in_x1,
                                                  "com.popcap.ios.chs.PVZ2.money.planttrial_16"),
                             bVar1 || (bVar1 = std::operator==(in_x1,
                                                  "com.popcap.ios.chs.PVZ2.money.planttrial_17"),
                                      bVar1)) ||
                            (bVar1 = std::operator==(in_x1,
                                                  "com.popcap.ios.chs.PVZ2.money.planttrial_18"),
                            bVar1)))) {
                          std::string::append((string *)(in_x8 + 8),"30000337401125",(size_t)__n);
                        }
                        else {
                          bVar1 = std::operator==(in_x1,"com.popcap.chs.PVZ2.buy.mower");
                          if (bVar1) {
                            std::string::append((string *)(in_x8 + 8),"30000337401121",(size_t)__n);
                          }
                          else {
                            bVar1 = std::operator==(in_x1,"com.popcap.chs.PVZ2.buy.present");
                            if (bVar1) {
                              std::string::append((string *)(in_x8 + 8),"30000337401122",(size_t)__n
                                                 );
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::ChinaMobileMMChannelPurchaseAdapter::RequestPay(std::string const&, std::string const&) */

void Sexy::ChinaMobileMMChannelPurchaseAdapter::RequestPay(string *param_1,string *param_2)

{
  undefined8 uVar1;
  _jobject *p_Var2;
  DownloadInfo aDStack_28 [8];
  undefined1 auStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  IPurchaseAdapter::RequestPay(param_1,param_2);
  uVar1 = FUN_0547429c(param_2);
  __android_log_print(2,"ChinaMobileMMChannelPurchaseAdapter","RequestPay( %s )",uVar1);
  (**(code **)(*(long *)param_1 + 0x68))(aDStack_28,param_1,param_2);
  p_Var2 = (_jobject *)Android::Util::GetJNIEnv();
  FUN_0547429c(auStack_20);
  uVar1 = _JNIEnv::NewStringUTF((char *)p_Var2);
  JavaMethod<void>::operator()
            ((_JNIEnv *)JavaRequestPay,p_Var2,*(undefined8 *)(param_1 + 0x20),uVar1);
  _JNIEnv::DeleteLocalRef(p_Var2);
  Lua::DownloadInfo::~DownloadInfo(aDStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

