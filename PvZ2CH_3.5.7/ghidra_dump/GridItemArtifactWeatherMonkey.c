// Class: GridItemArtifactWeatherMonkey


/* GridItemArtifactWeatherMonkey::onFinished(std::string const&) */

void __thiscall
GridItemArtifactWeatherMonkey::onFinished(GridItemArtifactWeatherMonkey *this,string *param_1)

{
  long lVar1;
  
  lVar1 = FUN_05474374(param_1,&DAT_055a6dd0,0);
  if (lVar1 != -1) {
    (**(code **)(*(long *)this + 0x48))(this);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemArtifactWeatherMonkey::StaticClassInit() */

void GridItemArtifactWeatherMonkey::StaticClassInit(void)

{
  CRefSymbolDb *this;
  long *plVar1;
  code *pcVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((this != (CRefSymbolDb *)0x0) &&
     (plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this), plVar1 != (long *)0x0
     )) {
    pcVar2 = *(code **)(*plVar1 + 0x18);
    std::string::string(asStack_10,"GridItemArtifactWeatherMonkey");
    (*pcVar2)(plVar1,asStack_10,FUN_03763ee0,0x1c0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemArtifactWeatherMonkey::StaticGetClass() */

long * GridItemArtifactWeatherMonkey::StaticGetClass(void)

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
  uVar2 = GridItemAnimation::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemArtifactWeatherMonkey",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemArtifactWeatherMonkey::GetClass() const */

long * GridItemArtifactWeatherMonkey::GetClass(void)

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
  uVar2 = GridItemAnimation::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemArtifactWeatherMonkey",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemArtifactWeatherMonkey::GridItemArtifactWeatherMonkey() */

void __thiscall
GridItemArtifactWeatherMonkey::GridItemArtifactWeatherMonkey(GridItemArtifactWeatherMonkey *this)

{
  GridItemAnimation::GridItemAnimation((GridItemAnimation *)this);
  *(undefined4 *)(this + 0x1a8) = 0;
  *(undefined ***)this = &PTR_GetClass_066902e0;
  *(undefined ***)(this + 0x10) = &PTR__GridItemArtifactWeatherMonkey_06690598;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x1b0));
  *(undefined4 *)(this + 0x1bc) = 0;
  return;
}


/* GridItemArtifactWeatherMonkey::StaticNew() */

GridItemArtifactWeatherMonkey * GridItemArtifactWeatherMonkey::StaticNew(void)

{
  GridItemArtifactWeatherMonkey *this;
  
  this = ::operator_new(0x1c0);
  GridItemArtifactWeatherMonkey(this);
  return this;
}


/* GridItemArtifactWeatherMonkey::~GridItemArtifactWeatherMonkey() */

void __thiscall
GridItemArtifactWeatherMonkey::~GridItemArtifactWeatherMonkey(GridItemArtifactWeatherMonkey *this)

{
  *(undefined ***)this = &PTR_GetClass_066902e0;
  *(undefined ***)(this + 0x10) = &PTR__GridItemArtifactWeatherMonkey_06690598;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1b0));
  GridItemAnimation::~GridItemAnimation((GridItemAnimation *)this);
  return;
}


/* non-virtual thunk to GridItemArtifactWeatherMonkey::~GridItemArtifactWeatherMonkey() */

void __thiscall
GridItemArtifactWeatherMonkey::~GridItemArtifactWeatherMonkey(GridItemArtifactWeatherMonkey *this)

{
  ~GridItemArtifactWeatherMonkey(this + -0x10);
  return;
}


/* GridItemArtifactWeatherMonkey::~GridItemArtifactWeatherMonkey() */

void __thiscall
GridItemArtifactWeatherMonkey::~GridItemArtifactWeatherMonkey(GridItemArtifactWeatherMonkey *this)

{
  ~GridItemArtifactWeatherMonkey(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemArtifactWeatherMonkey::~GridItemArtifactWeatherMonkey() */

void __thiscall
GridItemArtifactWeatherMonkey::~GridItemArtifactWeatherMonkey(GridItemArtifactWeatherMonkey *this)

{
  ~GridItemArtifactWeatherMonkey(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemArtifactWeatherMonkey::fireBullet() */

void __thiscall GridItemArtifactWeatherMonkey::fireBullet(GridItemArtifactWeatherMonkey *this)

{
  undefined8 *puVar1;
  RtObject *this_00;
  ArtifactWeatherMonkeyProjectile *pAVar2;
  undefined8 uVar3;
  Board *pBVar6;
  float fVar4;
  undefined4 uVar5;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  puVar1 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)this);
  fVar4 = *(float *)((long)puVar1 + 4);
                    /* WARNING: Load size is inaccurate */
  pBVar6._0_4_ = *puVar1;
  uVar5 = *(undefined4 *)(puVar1 + 1);
  uVar3 = *(undefined8 *)(gLawnApp + 0x9f0);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)(this + 0x1b0));
  this_00 = (RtObject *)Board::AddProjectile(pBVar6._0_4_,fVar4 - 20.0,uVar5,uVar3,aRStack_10,0,0);
  pAVar2 = Sexy::RtObject::Cast<ArtifactWeatherMonkeyProjectile>(this_00);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  FUN_03723aac(pAVar2 + 0x24,1);
  FUN_03723c64(pAVar2 + 0x1a8,*(undefined4 *)(this + 0x1a8));
  FUN_03723b18(*(undefined4 *)(this + 0x1b8),pAVar2 + 0xd8);
  FUN_03723c6c(*(undefined4 *)(this + 0x1bc),pAVar2 + 0x1d0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemArtifactWeatherMonkey::onPopAnimCommand(std::string const&, float, std::string const&,
   std::string const&) */

void GridItemArtifactWeatherMonkey::onPopAnimCommand
               (string *param_1,float param_2,string *param_3,string *param_4)

{
  bool bVar1;
  
  bVar1 = std::operator==(param_4,"fire");
  if (!bVar1) {
    return;
  }
  fireBullet((GridItemArtifactWeatherMonkey *)param_1);
  return;
}


/* GridItemArtifactWeatherMonkey::SetHideMowers(bool) */

void __thiscall
GridItemArtifactWeatherMonkey::SetHideMowers(GridItemArtifactWeatherMonkey *this,bool param_1)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  ulong extraout_x1;
  int iVar4;
  
  uVar3 = (ulong)param_1;
  iVar4 = 0;
  do {
    iVar1 = iVar4 + 1;
    plVar2 = (long *)FUN_0375adf4(iVar4,uVar3);
    uVar3 = (ulong)param_1;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x80))();
      uVar3 = extraout_x1;
    }
    iVar4 = iVar1;
  } while (iVar1 != 5);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemArtifactWeatherMonkey::onGridItemInitialize() */

void __thiscall
GridItemArtifactWeatherMonkey::onGridItemInitialize(GridItemArtifactWeatherMonkey *this)

{
  int iVar1;
  long lVar2;
  PopAnimRig *pPVar3;
  code *pcVar4;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  Vec3 aVStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItemAnimation::setDefaultAnimRig((GridItemAnimation *)this);
  SetHideMowers(this,true);
  pcVar4 = *(code **)(*(long *)this + 0x78);
  iVar1 = BoardConstants::GRIDSQUARE_WIDTH();
  lVar2 = std::
          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         *)this);
  EATextSquish::Vec3::Vec3
            (aVStack_18,200.0 - (float)iVar1 * 0.5,*(float *)(lVar2 + 4),*(float *)(lVar2 + 8));
  (*pcVar4)(this,aVStack_18);
  GridItemAnimation::GetAnimRig();
  pPVar3 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
  std::string::string((string *)aVStack_18,"Artifact");
  PopAnimRig::SetLayerVisibility(pPVar3,(string *)aVStack_18,false);
  std::string::~string((string *)aVStack_18);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  GridItemAnimation::GetAnimRig();
  pPVar3 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
  std::string::string((string *)aVStack_18,"guang_05");
  PopAnimRig::SetLayerVisibility(pPVar3,(string *)aVStack_18,false);
  std::string::~string((string *)aVStack_18);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemArtifactWeatherMonkey::setValues(int, Sexy::RtWeakPtr<ProjectilePropertySheet>) */

void __thiscall
GridItemArtifactWeatherMonkey::setValues
          (GridItemArtifactWeatherMonkey *this,undefined4 param_1,RtWeakPtr *param_3)

{
  int iVar1;
  PopAnimRig *pPVar2;
  TimeChallengeEndLevelUI *this_00;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_88 [8];
  string asStack_80 [8];
  RtMixedPtr aRStack_78 [8];
  RtId aRStack_70 [8];
  string asStack_68 [24];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  *(undefined4 *)(this + 0x1a8) = param_1;
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x1b0),param_3);
  iVar1 = *(int *)(this + 0x1a8);
  GridItemAnimation::GetAnimRig();
  pPVar2 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_88);
  Sexy::StrFormat("idle%d",asStack_80,(ulong)(iVar1 + 1));
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_78);
  std::string::string(asStack_68,"onFinished");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_70,
             asStack_68);
  PopAnimRig::PlayAndStop(pPVar2,asStack_80,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_68);
  nop();
  Sexy::RtId::~RtId(aRStack_70);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_78);
  std::string::~string(asStack_80);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_88);
  GridItemAnimation::GetAnimRig();
  this_00 = (TimeChallengeEndLevelUI *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPopAnimCommand);
  Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>::
  Delegate4<GridItemArtifactWeatherMonkey,void(GridItemArtifactWeatherMonkey::*)(std::string_const&,float,std::string_const&,std::string_const&)>
            ((Delegate4<std::string_const&,float,std::string_const&,std::string_const&> *)aRStack_50
             ,asStack_68);
  TimeChallengeEndLevelUI::SetContinueCallBack(this_00,aRStack_50);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

