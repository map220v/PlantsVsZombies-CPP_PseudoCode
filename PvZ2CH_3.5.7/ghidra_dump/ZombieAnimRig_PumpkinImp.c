// Class: ZombieAnimRig_PumpkinImp


/* ZombieAnimRig_PumpkinImp::StaticGetClass() */

long * ZombieAnimRig_PumpkinImp::StaticGetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = ZombieAnimRig_Imp::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieAnimRig_PumpkinImp",uVar2,StaticNew);
  return sClass;
}


/* ZombieAnimRig_PumpkinImp::GetClass() const */

long * ZombieAnimRig_PumpkinImp::GetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = ZombieAnimRig_Imp::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieAnimRig_PumpkinImp",uVar2,StaticNew);
  return sClass;
}


/* ZombieAnimRig_PumpkinImp::~ZombieAnimRig_PumpkinImp() */

void __thiscall ZombieAnimRig_PumpkinImp::~ZombieAnimRig_PumpkinImp(ZombieAnimRig_PumpkinImp *this)

{
  *(undefined ***)this = &PTR_GetClass_0687c8a0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_PumpkinImp_0687cb48;
  ZombieAnimRig_Imp::~ZombieAnimRig_Imp((ZombieAnimRig_Imp *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_PumpkinImp::~ZombieAnimRig_PumpkinImp() */

void __thiscall ZombieAnimRig_PumpkinImp::~ZombieAnimRig_PumpkinImp(ZombieAnimRig_PumpkinImp *this)

{
  ~ZombieAnimRig_PumpkinImp(this + -0x10);
  return;
}


/* ZombieAnimRig_PumpkinImp::~ZombieAnimRig_PumpkinImp() */

void __thiscall ZombieAnimRig_PumpkinImp::~ZombieAnimRig_PumpkinImp(ZombieAnimRig_PumpkinImp *this)

{
  ~ZombieAnimRig_PumpkinImp(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_PumpkinImp::~ZombieAnimRig_PumpkinImp() */

void __thiscall ZombieAnimRig_PumpkinImp::~ZombieAnimRig_PumpkinImp(ZombieAnimRig_PumpkinImp *this)

{
  ~ZombieAnimRig_PumpkinImp(this + -0x10);
  return;
}


/* ZombieAnimRig_PumpkinImp::ZombieAnimRig_PumpkinImp() */

void __thiscall ZombieAnimRig_PumpkinImp::ZombieAnimRig_PumpkinImp(ZombieAnimRig_PumpkinImp *this)

{
  ZombieAnimRig_Imp::ZombieAnimRig_Imp((ZombieAnimRig_Imp *)this);
  *(undefined ***)this = &PTR_GetClass_0687c8a0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_PumpkinImp_0687cb48;
  return;
}


/* ZombieAnimRig_PumpkinImp::StaticNew() */

ZombieAnimRig_PumpkinImp * ZombieAnimRig_PumpkinImp::StaticNew(void)

{
  ZombieAnimRig_PumpkinImp *this;
  
  this = ::operator_new(0x240);
  ZombieAnimRig_PumpkinImp(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_PumpkinImp::updateHeadLayer(int, std::string const&) */

void __thiscall
ZombieAnimRig_PumpkinImp::updateHeadLayer
          (ZombieAnimRig_PumpkinImp *this,int param_1,string *param_2)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  string *psVar4;
  ulong uVar5;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar5 = DAT_06b1b450 & 1;
  if (((DAT_06b1b450 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1b450), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b1b640,"head01");
    nop();
    std::string::string((string *)&DAT_06b1b648,"head02");
    nop();
    std::string::string((string *)&DAT_06b1b650,"head03");
    nop();
    __cxa_guard_release(&DAT_06b1b450);
    __cxa_atexit(FUN_04625490,uVar5,&DAT_06a88000);
  }
  if (((DAT_06b1b538 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1b538), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b1b570,(string *)&DAT_06b1b640,(allocator *)&DAT_06b1b658);
    __cxa_guard_release(&DAT_06b1b538);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b1b570,
                 &DAT_06a88000);
  }
  for (uVar5 = 0; uVar3 = FUN_046254c4(DAT_06b1b570,DAT_06b1b578), uVar5 < uVar3; uVar5 = uVar5 + 1)
  {
    Sexy::StrFormat("head0%d",(string *)&local_10,uVar5 & 0xffffffff);
    PopAnimRig::SetLayerVisibility((PopAnimRig *)this,(string *)&local_10,(int)uVar5 == param_1);
    std::string::~string((string *)&local_10);
  }
  if (param_1 < 3) {
    uVar5 = DAT_06b1b678 & 1;
    if (((DAT_06b1b678 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1b678), iVar2 != 0)) {
      std::string::string((string *)&DAT_06b1b5c0,"fx_eye_blue");
      nop();
      std::string::string((string *)&DAT_06b1b5c8,"fx_eye_green");
      nop();
      std::string::string((string *)&DAT_06b1b5d0,"fx_eye_yellow");
      nop();
      __cxa_guard_release(&DAT_06b1b678);
      __cxa_atexit(FUN_0462545c,uVar5,&DAT_06a88000);
    }
    if (((DAT_06b1b600 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1b600), iVar2 != 0)) {
      std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
                ((string *)&DAT_06b1b520,(string *)&DAT_06b1b5c0,(allocator *)&DAT_06b1b5d8);
      __cxa_guard_release(&DAT_06b1b600);
      __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b1b520,
                   &DAT_06a88000);
    }
    uVar5 = DAT_06b1b3f8 & 1;
    if (((DAT_06b1b3f8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1b3f8), iVar2 != 0)) {
      std::string::string((string *)&DAT_06b1b608,"fx_eye_blue03");
      nop();
      std::string::string((string *)&DAT_06b1b610,"fx_eye_green03");
      nop();
      std::string::string((string *)&DAT_06b1b618,"fx_eye_yellow03");
      nop();
      __cxa_guard_release(&DAT_06b1b3f8);
      __cxa_atexit(FUN_04625428,uVar5,&DAT_06a88000);
    }
    if (((DAT_06b1b658 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1b658), iVar2 != 0)) {
      std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
                ((string *)&DAT_06b1b490,(string *)&DAT_06b1b608,(allocator *)&DAT_06b1b620);
      __cxa_guard_release(&DAT_06b1b658);
      __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b1b490,
                   &DAT_06a88000);
    }
    local_20 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)&DAT_06b1b520);
    local_18 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)&DAT_06b1b520);
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_20,(__normal_iterator *)&local_18), bVar1)
    {
      psVar4 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
      FUN_031f5e7c((string *)&local_10,"fx_eye_",param_2);
      bVar1 = (bool)std::operator==(psVar4,(string *)&local_10);
      PopAnimRig::SetLayerVisibility((PopAnimRig *)this,psVar4,bVar1);
      std::string::~string((string *)&local_10);
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_20);
    }
    local_18 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)&DAT_06b1b490);
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)&DAT_06b1b490);
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1)
    {
      psVar4 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
      PopAnimRig::SetLayerVisibility((PopAnimRig *)this,psVar4,false);
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
    }
  }
  else {
    uVar5 = DAT_06b1b470 & 1;
    if (((DAT_06b1b470 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1b470), iVar2 != 0)) {
      std::string::string((string *)&DAT_06b1b4e0,"fx_eye_blue");
      nop();
      std::string::string((string *)&DAT_06b1b4e8,"fx_eye_green");
      nop();
      std::string::string((string *)&DAT_06b1b4f0,"fx_eye_yellow");
      nop();
      __cxa_guard_release(&DAT_06b1b470);
      __cxa_atexit(FUN_046253f4,uVar5,&DAT_06a88000);
    }
    if (((DAT_06b1b668 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1b668), iVar2 != 0)) {
      std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
                ((string *)&DAT_06b1b458,(string *)&DAT_06b1b4e0,(allocator *)&DAT_06b1b4f8);
      __cxa_guard_release(&DAT_06b1b668);
      __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b1b458,
                   &DAT_06a88000);
    }
    uVar5 = DAT_06b1b4f8 & 1;
    if (((DAT_06b1b4f8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1b4f8), iVar2 != 0)) {
      std::string::string((string *)&DAT_06b1b700,"fx_eye_blue03");
      nop();
      std::string::string((string *)&DAT_06b1b708,"fx_eye_green03");
      nop();
      std::string::string((string *)&DAT_06b1b710,"fx_eye_yellow03");
      nop();
      __cxa_guard_release(&DAT_06b1b4f8);
      __cxa_atexit(FUN_046253c0,uVar5,&DAT_06a88000);
    }
    if (((DAT_06b1b5b8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b1b5b8), iVar2 != 0)) {
      std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
                ((string *)&DAT_06b1b6e8,(string *)&DAT_06b1b700,(allocator *)&DAT_06b1b718);
      __cxa_guard_release(&DAT_06b1b5b8);
      __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b1b6e8,
                   &DAT_06a88000);
    }
    local_28 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)&DAT_06b1b6e8);
    local_20 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)&DAT_06b1b6e8);
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_28,(__normal_iterator *)&local_20), bVar1)
    {
      psVar4 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_28);
      FUN_031f5e7c((string *)&local_10,"fx_eye_",param_2);
      std::operator+((string *)&local_10,"03");
      std::string::~string((string *)&local_10);
      bVar1 = (bool)std::operator==(psVar4,(string *)&local_18);
      PopAnimRig::SetLayerVisibility((PopAnimRig *)this,psVar4,bVar1);
      std::string::~string((string *)&local_18);
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_28);
    }
    local_18 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)&DAT_06b1b458);
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)&DAT_06b1b458);
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1)
    {
      psVar4 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
      PopAnimRig::SetLayerVisibility((PopAnimRig *)this,psVar4,false);
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

