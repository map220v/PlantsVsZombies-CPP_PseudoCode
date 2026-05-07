// Class: ZombiePVPSkill_ZombieFood


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePVPSkill_ZombieFood::StaticClassInit() */

void ZombiePVPSkill_ZombieFood::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombiePVPSkill_ZombieFood");
    (*pcVar2)(plVar1,asStack_10,FUN_04a98980,0x818,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombiePVPSkill_ZombieFood::StaticGetClass() */

long * ZombiePVPSkill_ZombieFood::StaticGetClass(void)

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
  uVar2 = ZombiePVPSkill::StaticGetClass();
  (*pcVar3)(plVar1,"ZombiePVPSkill_ZombieFood",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombiePVPSkill_ZombieFood::GetClass() const */

long * ZombiePVPSkill_ZombieFood::GetClass(void)

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
  uVar2 = ZombiePVPSkill::StaticGetClass();
  (*pcVar3)(plVar1,"ZombiePVPSkill_ZombieFood",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombiePVPSkill_ZombieFood::~ZombiePVPSkill_ZombieFood() */

void __thiscall
ZombiePVPSkill_ZombieFood::~ZombiePVPSkill_ZombieFood(ZombiePVPSkill_ZombieFood *this)

{
  *(undefined ***)this = &PTR_GetClass_06945ad0;
  *(undefined ***)(this + 0x10) = &PTR__ZombiePVPSkill_ZombieFood_06946500;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x810));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x808));
  ZombiePVPSkill::~ZombiePVPSkill((ZombiePVPSkill *)this);
  return;
}


/* non-virtual thunk to ZombiePVPSkill_ZombieFood::~ZombiePVPSkill_ZombieFood() */

void __thiscall
ZombiePVPSkill_ZombieFood::~ZombiePVPSkill_ZombieFood(ZombiePVPSkill_ZombieFood *this)

{
  ~ZombiePVPSkill_ZombieFood(this + -0x10);
  return;
}


/* ZombiePVPSkill_ZombieFood::~ZombiePVPSkill_ZombieFood() */

void __thiscall
ZombiePVPSkill_ZombieFood::~ZombiePVPSkill_ZombieFood(ZombiePVPSkill_ZombieFood *this)

{
  ~ZombiePVPSkill_ZombieFood(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombiePVPSkill_ZombieFood::~ZombiePVPSkill_ZombieFood() */

void __thiscall
ZombiePVPSkill_ZombieFood::~ZombiePVPSkill_ZombieFood(ZombiePVPSkill_ZombieFood *this)

{
  ~ZombiePVPSkill_ZombieFood(this + -0x10);
  return;
}


/* ZombiePVPSkill_ZombieFood::onAnimationDone(std::string const&) */

void __thiscall
ZombiePVPSkill_ZombieFood::onAnimationDone(ZombiePVPSkill_ZombieFood *this,string *param_1)

{
  bool bVar1;
  
  bVar1 = std::operator==(param_1,"idle1");
  if (bVar1) {
    (**(code **)(*(long *)this + 0x48))(this);
  }
  return;
}


/* ZombiePVPSkill_ZombieFood::ZombiePVPSkill_ZombieFood() */

void __thiscall
ZombiePVPSkill_ZombieFood::ZombiePVPSkill_ZombieFood(ZombiePVPSkill_ZombieFood *this)

{
  ZombiePVPSkill::ZombiePVPSkill((ZombiePVPSkill *)this);
  *(undefined ***)this = &PTR_GetClass_06945ad0;
  *(undefined ***)(this + 0x10) = &PTR__ZombiePVPSkill_ZombieFood_06946500;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x808));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x810));
  this[0x800] = (ZombiePVPSkill_ZombieFood)0x0;
  return;
}


/* ZombiePVPSkill_ZombieFood::StaticNew() */

ZombiePVPSkill_ZombieFood * ZombiePVPSkill_ZombieFood::StaticNew(void)

{
  ZombiePVPSkill_ZombieFood *this;
  
  this = ::operator_new(0x818);
  ZombiePVPSkill_ZombieFood(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePVPSkill_ZombieFood::onZombiePostLoad() */

void __thiscall ZombiePVPSkill_ZombieFood::onZombiePostLoad(ZombiePVPSkill_ZombieFood *this)

{
  char cVar1;
  UIWidget *this_00;
  TimeChallengeEndLevelUI *this_01;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate4<std::string_const&,float,std::string_const&,std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x808));
  if (cVar1 != '\0') {
    this_00 = (UIWidget *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x808));
    this_01 = (TimeChallengeEndLevelUI *)UIWidget::GetAtlasImage(this_00);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,(_func_void *)0x880);
    Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>::
    Delegate4<ZombiePVPSkill_ZombieFood,void(ZombiePVPSkill_ZombieFood::*)(std::string_const&,float,std::string_const&,std::string_const&)>
              (aDStack_38,aCStack_50);
    TimeChallengeEndLevelUI::SetContinueCallBack(this_01,aDStack_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePVPSkill_ZombieFood::CreateRangeEffect() */

void ZombiePVPSkill_ZombieFood::CreateRangeEffect(void)

{
  int iVar1;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *in_x0;
  SexyVector3 *this;
  Effect_PopAnim *this_00;
  ResourceInfo *pRVar2;
  TimeChallengeEndLevelUI *this_01;
  RtWeakPtr<Sexy::SoundResource> *in_x8;
  undefined4 uVar3;
  undefined4 uVar4;
  string asStack_78 [8];
  Vec3 aVStack_70 [16];
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  RtWeakPtr aRStack_50 [24];
  Delegate4<std::string_const&,float,std::string_const&,std::string_const&> aDStack_38 [48];
  long local_8;
  
  uVar3 = 0xc2200000;
  uVar4 = 0;
  local_8 = ___stack_chk_guard;
  EATextSquish::Vec3::Vec3(aVStack_70,0.0,-40.0,0.0);
  this = (SexyVector3 *)
         std::
         _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
         ::_M_leftmost(in_x0);
  local_60 = Sexy::SexyVector3::operator+(this,(SexyVector3 *)aVStack_70);
  local_5c = uVar3;
  local_58 = uVar4;
  this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string(asStack_78,"POPANIM_EFFECTS_ZOMBIE_PVPSKILL_ZOMBIEFOOD");
  GetPAMByName(asStack_78);
  pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_50);
  Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar2,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50);
  std::string::~string(asStack_78);
  nop();
  Effect_PopAnim::SetCentered(this_00,true);
  iVar1 = (**(code **)(*(long *)in_x0 + 200))();
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_00,(SexyVector3 *)&local_60,iVar1);
  this_01 = (TimeChallengeEndLevelUI *)UIWidget::GetAtlasImage((UIWidget *)this_00);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)in_x0,(_func_void *)0x880);
  Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>::
  Delegate4<ZombiePVPSkill_ZombieFood,void(ZombiePVPSkill_ZombieFood::*)(std::string_const&,float,std::string_const&,std::string_const&)>
            (aDStack_38,aRStack_50);
  TimeChallengeEndLevelUI::SetContinueCallBack(this_01,aDStack_38);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,(RtWeakPtrBase *)aRStack_50);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePVPSkill_ZombieFood::onEnterState_Playing(ZombieState) */

void ZombiePVPSkill_ZombieFood::onEnterState_Playing(ReceivedDataCallback *param_1)

{
  RtWeakPtr<PowerPropertySheet> *this;
  undefined4 uVar1;
  UIWidget *this_00;
  PopAnimRig *pPVar2;
  long lVar3;
  Effect_PopAnim *pEVar4;
  string asStack_58 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (RtWeakPtr<PowerPropertySheet> *)(param_1 + 0x810);
  (**(code **)(*(long *)param_1 + 0x80))(param_1,1);
  CreateRangeEffect();
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(param_1 + 0x808),(RtWeakPtr *)aRStack_50);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
  CreateRangeEffect();
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=(this,(RtWeakPtr *)aRStack_50);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
  this_00 = (UIWidget *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x808));
  pPVar2 = (PopAnimRig *)UIWidget::GetAtlasImage(this_00);
  std::string::string(asStack_58,"idle1");
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            (param_1,onAnimationDone);
  Sexy::Delegate1<std::string_const&>::
  Delegate1<ZombiePVPSkill_ZombieFood,void(ZombiePVPSkill_ZombieFood::*)(std::string_const&)>
            (aDStack_38,aRStack_50);
  PopAnimRig::PlayAndStop(pPVar2,asStack_58,0,aDStack_38);
  std::string::~string(asStack_58);
  nop();
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
  uVar1 = ZombiePVPSkill_Rage::GetRenderOrderBelow((ZombiePVPSkill_Rage *)param_1);
  FUN_04a9809c(lVar3 + 0x1c,uVar1);
  pEVar4 = (Effect_PopAnim *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
  std::string::string((string *)aRStack_50,"idle2");
  Effect_PopAnim::PlaySingleAnimation(pEVar4,aRStack_50,0);
  std::string::~string((string *)aRStack_50);
  nop();
  std::string::string((string *)aRStack_50,"Play_PVP_Skill_ZombieFood");
  RealObject::PlayPositionalSound((RealObject *)param_1,(string *)aRStack_50,0.0);
  std::string::~string((string *)aRStack_50);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePVPSkill_ZombieFood::updateState_Playing() */

void __thiscall ZombiePVPSkill_ZombieFood::updateState_Playing(ZombiePVPSkill_ZombieFood *this)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  ZombiePVPSkillProps *pZVar4;
  float *pfVar5;
  undefined8 *puVar6;
  Zombie *this_00;
  float fVar7;
  FastCurve aFStack_38 [8];
  undefined8 local_30;
  undefined8 local_28;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (((this[0x800] != (ZombiePVPSkill_ZombieFood)0x0) &&
      (cVar1 = FUN_04a980a4(this[0x174]), cVar1 == '\0')) &&
     (pZVar4 = Zombie::GetProps<ZombiePVPSkillProps>((Zombie *)this),
     pZVar4 != (ZombiePVPSkillProps *)0x0)) {
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
    pfVar5 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                     *)this);
    Sexy::FastCurve::SetOutRange(aFStack_38,*pfVar5,pfVar5[1]);
    fVar7 = *(float *)(pZVar4 + 0x214);
    iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
    EntityFinder::GetEntitiesTouchingCircle2D
              ((float)iVar3 * fVar7,avStack_20,2,aFStack_38,0xffffffff,0xffffffff);
    local_30 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_20);
    local_28 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28), bVar2)
    {
      puVar6 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30)
      ;
      this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar6);
      if (((((this_00 != (Zombie *)0x0) &&
            (cVar1 = (**(code **)(*(long *)this_00 + 0x4c0))(), cVar1 == '\0')) &&
           ((bVar2 = Sexy::RtObject::IsA<ZombiePVPSkill>((RtObject *)this_00), !bVar2 &&
            ((cVar1 = RealObject::IsOnOpposingTeam(this_00,1), cVar1 != '\0' &&
             (cVar1 = (**(code **)(*(long *)this_00 + 0x328))(this_00), cVar1 == '\0')))))) &&
          (cVar1 = (**(code **)(*(long *)this_00 + 0x330))(this_00), cVar1 == '\0')) &&
         (cVar1 = Zombie::IsControlled(this_00), cVar1 == '\0')) {
        (**(code **)(*(long *)this_00 + 0x4b0))(this_00);
        MessageRouter::Post<Zombie*,int,Zombie*,PlaybackAddParamsType>
                  ((MessageRouter *)gMessageRouter,Message::ZombiePlaybackAddParams,this_00,1);
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
    }
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombiePVPSkill_ZombieFood::onPopAnimCommand(std::string const&, float, std::string const&,
   std::string const&) */

void ZombiePVPSkill_ZombieFood::onPopAnimCommand
               (string *param_1,float param_2,string *param_3,string *param_4)

{
  bool bVar1;
  
  bVar1 = std::operator==(param_4,"broken");
  if (bVar1) {
    param_1[0x800] = (string)0x1;
    return;
  }
  ZombieFairyTaleImp::onPopAnimCommand(param_1,param_2,param_3,param_4);
  return;
}

