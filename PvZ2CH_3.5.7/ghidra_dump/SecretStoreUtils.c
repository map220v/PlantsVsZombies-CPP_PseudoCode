// Class: SecretStoreUtils


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SecretStoreUtils::GetAwardInfoByActId(int, int) */

void __thiscall
SecretStoreUtils::GetAwardInfoByActId(SecretStoreUtils *this,int param_1,int param_2)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  char cVar10;
  int iVar11;
  NameMapperBase *pNVar12;
  int iVar13;
  string *__n;
  SecretAwardInfo *in_x8;
  ulong uVar14;
  undefined4 uVar15;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  uVar14 = (ulong)this & 0xffffffff;
  local_8 = ___stack_chk_guard;
  SecretAwardInfo::SecretAwardInfo(in_x8);
  __n = asStack_10;
  std::string::string(asStack_18,"");
  nop();
  pNVar12 = (NameMapperBase *)PlantNameMapperServerID::GetInstance();
  iVar13 = (int)this;
  cVar1 = NameMapperBase::ContainsId(pNVar12,iVar13);
  pNVar12 = (NameMapperBase *)PlantChipNameMapperServerID::GetInstance();
  cVar2 = NameMapperBase::ContainsId(pNVar12,iVar13);
  pNVar12 = (NameMapperBase *)AvatarNameMapperServerID::GetInstance();
  cVar3 = NameMapperBase::ContainsId(pNVar12,iVar13);
  pNVar12 = (NameMapperBase *)AvatarChipNameMapperServerID::GetInstance();
  cVar4 = NameMapperBase::ContainsId(pNVar12,iVar13);
  pNVar12 = (NameMapperBase *)PlantAccessoryInfoMapper::GetInstance();
  cVar5 = NameMapperBase::ContainsId(pNVar12,iVar13);
  pNVar12 = (NameMapperBase *)PlantAccessoryPieceMapper::GetInstance();
  cVar6 = NameMapperBase::ContainsId(pNVar12,iVar13);
  OtherServerNameMapper::GetInstance();
  cVar7 = FUN_03da09dc(uVar14);
  OtherServerNameMapper::GetInstance();
  cVar8 = FUN_03da09cc(uVar14);
  OtherServerNameMapper::GetInstance();
  cVar9 = FUN_03da09ec(uVar14);
  pNVar12 = (NameMapperBase *)MaterialItemMapper::GetInstance();
  cVar10 = NameMapperBase::ContainsId(pNVar12,iVar13);
  if (cVar7 == '\0') {
    if (cVar8 == '\0') {
      if (cVar1 == '\0') {
        if (cVar2 == '\0') {
          if (cVar3 == '\0') {
            if (cVar4 == '\0') {
              if (cVar5 == '\0') {
                if (cVar6 == '\0') {
                  uVar15 = 5;
                  if ((cVar9 == '\0') && (uVar15 = 0xffffffff, cVar10 != '\0')) {
                    iVar11 = MaterialItemMapper::GetInstance();
                    uVar15 = 9;
                    NameMapperBase::GetNameForId(iVar11);
                    FUN_05474278(asStack_18,asStack_10);
                    std::string::~string(asStack_10);
                  }
                }
                else {
                  iVar11 = PlantAccessoryPieceMapper::GetInstance();
                  uVar15 = 8;
                  NameMapperBase::GetNameForId(iVar11);
                  FUN_05474278(asStack_18,asStack_10);
                  std::string::~string(asStack_10);
                }
              }
              else {
                iVar11 = PlantAccessoryInfoMapper::GetInstance();
                uVar15 = 7;
                NameMapperBase::GetNameForId(iVar11);
                FUN_05474278(asStack_18,asStack_10);
                std::string::~string(asStack_10);
              }
            }
            else {
              iVar11 = AvatarChipNameMapperServerID::GetInstance();
              uVar15 = 4;
              NameMapperBase::GetNameForId(iVar11);
              FUN_05474278(asStack_18,asStack_10);
              std::string::~string(asStack_10);
            }
          }
          else {
            iVar11 = AvatarNameMapperServerID::GetInstance();
            uVar15 = 6;
            NameMapperBase::GetNameForId(iVar11);
            FUN_05474278(asStack_18,asStack_10);
            std::string::~string(asStack_10);
          }
        }
        else {
          iVar11 = PlantChipNameMapperServerID::GetInstance();
          uVar15 = 3;
          NameMapperBase::GetNameForId(iVar11);
          FUN_05474278(asStack_18,asStack_10);
          std::string::~string(asStack_10);
        }
      }
      else {
        iVar11 = PlantNameMapperServerID::GetInstance();
        uVar15 = 2;
        NameMapperBase::GetNameForId(iVar11);
        FUN_05474278(asStack_18,asStack_10);
        std::string::~string(asStack_10);
      }
    }
    else {
      std::string::append(asStack_18,"coin",(size_t)__n);
      uVar15 = 0;
    }
  }
  else {
    uVar15 = 1;
    std::string::append(asStack_18,"gem",(size_t)__n);
  }
  *(int *)(in_x8 + 4) = iVar13;
  *(undefined4 *)in_x8 = uVar15;
  thunk_FUN_05475e00(in_x8 + 8,asStack_18);
  *(int *)(in_x8 + 0x10) = param_1;
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SecretStoreUtils::GetAwardDisplayInfoByActId(int) */

void SecretStoreUtils::GetAwardDisplayInfoByActId(int param_1)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  char cVar10;
  NameMapperBase *pNVar11;
  undefined4 local_10;
  int iStack_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::FlagsMod::FlagsMod((FlagsMod *)&local_10);
  pNVar11 = (NameMapperBase *)PlantNameMapperServerID::GetInstance();
  cVar1 = NameMapperBase::ContainsId(pNVar11,param_1);
  pNVar11 = (NameMapperBase *)PlantChipNameMapperServerID::GetInstance();
  cVar2 = NameMapperBase::ContainsId(pNVar11,param_1);
  pNVar11 = (NameMapperBase *)AvatarNameMapperServerID::GetInstance();
  cVar3 = NameMapperBase::ContainsId(pNVar11,param_1);
  pNVar11 = (NameMapperBase *)AvatarChipNameMapperServerID::GetInstance();
  cVar4 = NameMapperBase::ContainsId(pNVar11,param_1);
  pNVar11 = (NameMapperBase *)PlantAccessoryInfoMapper::GetInstance();
  cVar5 = NameMapperBase::ContainsId(pNVar11,param_1);
  pNVar11 = (NameMapperBase *)PlantAccessoryPieceMapper::GetInstance();
  cVar6 = NameMapperBase::ContainsId(pNVar11,param_1);
  OtherServerNameMapper::GetInstance();
  cVar7 = FUN_03da09dc(param_1);
  OtherServerNameMapper::GetInstance();
  cVar8 = FUN_03da09cc(param_1);
  OtherServerNameMapper::GetInstance();
  cVar9 = FUN_03da09ec(param_1);
  pNVar11 = (NameMapperBase *)MaterialItemMapper::GetInstance();
  cVar10 = NameMapperBase::ContainsId(pNVar11,param_1);
  local_10 = 0x22;
  if ((((((cVar7 == '\0') && (local_10 = 0x23, cVar8 == '\0')) && (local_10 = 0x1c, cVar1 == '\0'))
       && ((local_10 = 0x1d, cVar2 == '\0' && (local_10 = 0x1e, cVar3 == '\0')))) &&
      ((local_10 = 0x1f, cVar4 == '\0' &&
       ((local_10 = 0x20, cVar5 == '\0' && (local_10 = 0x21, cVar6 == '\0')))))) &&
     ((local_10 = 0x24, cVar9 == '\0' && (local_10 = 0, cVar10 != '\0')))) {
    local_10 = 0x25;
  }
  if (local_8 != ___stack_chk_guard) {
    iStack_c = param_1;
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(CONCAT44(param_1,local_10));
  }
  return;
}


/* SecretStoreUtils::AddText(Sexy::Widget*, std::wstring const&, int, int, int, int) */

SecretStoreText *
SecretStoreUtils::AddText
          (Widget *param_1,wstring *param_2,int param_3,int param_4,int param_5,int param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  SecretStoreText *this;
  
  this = ::operator_new(0x100);
  SecretStoreText::SecretStoreText(this,param_2);
  (**(code **)(*(long *)this + 0x90))(this,1);
  uVar1 = FUN_03da11e8(param_3);
  uVar2 = FUN_03da11e8(param_4);
  uVar3 = FUN_03da11e8(param_5);
  uVar4 = FUN_03da11e8(param_6);
  (**(code **)(*(long *)this + 0x198))(this,uVar1,uVar2,uVar3,uVar4);
  (**(code **)(*(long *)param_1 + 0x60))(param_1,this);
  return this;
}


/* SecretStoreUtils::AddTextUnScaled(Sexy::Widget*, std::wstring const&, int, int, int, int) */

SecretStoreText *
SecretStoreUtils::AddTextUnScaled
          (Widget *param_1,wstring *param_2,int param_3,int param_4,int param_5,int param_6)

{
  SecretStoreText *this;
  
  this = ::operator_new(0x100);
  SecretStoreText::SecretStoreText(this,param_2);
  (**(code **)(*(long *)this + 0x90))(this,1);
  (**(code **)(*(long *)this + 0x198))(this,param_3,param_4,param_5,param_6);
  (**(code **)(*(long *)param_1 + 0x60))(param_1,this);
  return this;
}


/* SecretStoreUtils::AddButtonUnScaled(Sexy::Widget*, int, std::string const&, std::string const&,
   int, int, int, int, Sexy::ButtonListener*) */

SecretStoreButton *
SecretStoreUtils::AddButtonUnScaled
          (Widget *param_1,int param_2,string *param_3,string *param_4,int param_5,int param_6,
          int param_7,int param_8,ButtonListener *param_9)

{
  SecretStoreButton *this;
  
  this = ::operator_new(0x300);
  SecretStoreButton::SecretStoreButton(this,param_2,param_3,param_4,param_9);
  (**(code **)(*(long *)this + 0x198))(this,param_5,param_6,param_7,param_8);
  (**(code **)(*(long *)param_1 + 0x60))(param_1,this);
  return this;
}


/* SecretStoreUtils::AddImage(Sexy::Widget*, std::string const&, int, int, int, int) */

SecretStoreImage *
SecretStoreUtils::AddImage
          (Widget *param_1,string *param_2,int param_3,int param_4,int param_5,int param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  SecretStoreImage *this;
  
  this = ::operator_new(0x128);
  SecretStoreImage::SecretStoreImage(this,param_2);
  (**(code **)(*(long *)this + 0x90))(this,1);
  uVar1 = FUN_03da11e8(param_3);
  uVar2 = FUN_03da11e8(param_4);
  uVar3 = FUN_03da11e8(param_5);
  uVar4 = FUN_03da11e8(param_6);
  (**(code **)(*(long *)this + 0x198))(this,uVar1,uVar2,uVar3,uVar4);
  (**(code **)(*(long *)param_1 + 0x60))(param_1,this);
  return this;
}


/* SecretStoreUtils::AddImage(Sexy::Widget*, std::string const&, int, int) */

SecretStoreImage *
SecretStoreUtils::AddImage(Widget *param_1,string *param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  SecretStoreImage *this;
  
  this = ::operator_new(0x128);
  SecretStoreImage::SecretStoreImage(this,param_2);
  (**(code **)(*(long *)this + 0x90))(this,1);
  uVar1 = FUN_03da11e8(param_3);
  uVar2 = FUN_03da11e8(param_4);
  (**(code **)(*(long *)this + 0x198))
            (this,uVar1,uVar2,*(undefined4 *)(this + 0x50),*(undefined4 *)(this + 0x54));
  (**(code **)(*(long *)param_1 + 0x60))(param_1,this);
  return this;
}


/* SecretStoreUtils::AddImageUnScaled(Sexy::Widget*, std::string const&, int, int, int, int, bool)
    */

SecretStoreImage *
SecretStoreUtils::AddImageUnScaled
          (Widget *param_1,string *param_2,int param_3,int param_4,int param_5,int param_6,
          bool param_7)

{
  SecretStoreImage *this;
  
  this = ::operator_new(0x128);
  SecretStoreImage::SecretStoreImage(this,param_2,param_7);
  (**(code **)(*(long *)this + 0x90))(this,1);
  (**(code **)(*(long *)this + 0x198))(this,param_3,param_4,param_5,param_6);
  (**(code **)(*(long *)param_1 + 0x60))(param_1,this);
  return this;
}


/* SecretStoreUtils::AddImageUnScaledCenterWidth(Sexy::Widget*, std::string const&, int, int, int,
   int, int, bool) */

SecretStoreCenterWidthImage *
SecretStoreUtils::AddImageUnScaledCenterWidth
          (Widget *param_1,string *param_2,int param_3,int param_4,int param_5,int param_6,
          int param_7,bool param_8)

{
  SecretStoreCenterWidthImage *this;
  
  this = ::operator_new(0x130);
  SecretStoreCenterWidthImage::SecretStoreCenterWidthImage(this,param_2,param_8,param_7);
  (**(code **)(*(long *)this + 0x90))(this,1);
  (**(code **)(*(long *)this + 0x198))(this,param_3,param_4,param_5,param_6);
  (**(code **)(*(long *)param_1 + 0x60))(param_1,this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SecretStoreUtils::AddImageUnScaledCenterWidth(Sexy::Widget*, Sexy::RtWeakPtr<Sexy::Image>, int,
   int, int, int, int, bool) */

void SecretStoreUtils::AddImageUnScaledCenterWidth
               (long *param_1,RtWeakPtrBase *param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined1 param_8)

{
  SecretStoreCenterWidthImage *pSVar1;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  pSVar1 = ::operator_new(0x130);
  SecretStoreCenterWidthImage::SecretStoreCenterWidthImage(pSVar1,aRStack_10,param_8,param_7);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  (**(code **)(*(long *)pSVar1 + 0x90))(pSVar1,1);
  (**(code **)(*(long *)pSVar1 + 0x198))(pSVar1,param_3,param_4,param_5,param_6);
  (**(code **)(*param_1 + 0x60))(param_1,pSVar1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pSVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SecretStoreUtils::AddImageUnScaledCenterWidthScale(Sexy::Widget*, Sexy::RtWeakPtr<Sexy::Image>,
   int, int, int, int, int, float, bool) */

void SecretStoreUtils::AddImageUnScaledCenterWidthScale
               (SecretStoreCenterWidthScaleImage *param_1_00,long *param_1,RtWeakPtrBase *param_3,
               undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7,
               undefined4 param_8,undefined1 param_9)

{
  long *plVar1;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_3);
  plVar1 = ::operator_new(0x130);
  SecretStoreCenterWidthScaleImage::SecretStoreCenterWidthScaleImage
            (param_1_00,plVar1,aRStack_10,param_9,param_8);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  (**(code **)(*plVar1 + 0x90))(plVar1,1);
  (**(code **)(*plVar1 + 0x198))(plVar1,param_4,param_5,param_6,param_7);
  (**(code **)(*param_1 + 0x60))(param_1,plVar1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(plVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SecretStoreUtils::AddImageAdaptive(Sexy::Widget*, Sexy::RtWeakPtr<Sexy::Image>, int, int, int,
   int) */

void SecretStoreUtils::AddImageAdaptive
               (long *param_1,RtWeakPtrBase *param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6)

{
  SecretStoreCenterAdaptiveImage *pSVar1;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  pSVar1 = ::operator_new(0x128);
  SecretStoreCenterAdaptiveImage::SecretStoreCenterAdaptiveImage(pSVar1,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  (**(code **)(*(long *)pSVar1 + 0x90))(pSVar1,1);
  (**(code **)(*(long *)pSVar1 + 0x198))(pSVar1,param_3,param_4,param_5,param_6);
  (**(code **)(*param_1 + 0x60))(param_1,pSVar1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pSVar1);
}


/* SecretStoreUtils::AddPane(Sexy::Widget*, SecretBundleDetail const&, std::string const&,
   std::string const&, int, int, int, int) */

SecretStorePane *
SecretStoreUtils::AddPane
          (Widget *param_1,SecretBundleDetail *param_2,string *param_3,string *param_4,int param_5,
          int param_6,int param_7,int param_8)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  SecretStorePane *this;
  
  this = ::operator_new(0x148);
  SecretStorePane::SecretStorePane(this,param_2,param_3,param_4);
  uVar1 = FUN_03da11e8(param_5);
  uVar2 = FUN_03da11e8(param_6);
  uVar3 = FUN_03da11e8(param_7);
  uVar4 = FUN_03da11e8(param_8);
  (**(code **)(*(long *)this + 0x198))(this,uVar1,uVar2,uVar3,uVar4);
  SecretStorePane::Init(this);
  (**(code **)(*(long *)param_1 + 0x60))(param_1,this);
  return this;
}

